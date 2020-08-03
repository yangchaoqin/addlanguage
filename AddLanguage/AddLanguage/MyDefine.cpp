#include "stdafx.h"
#include "MyDefine.h"

MyDefine::MyDefine(){
	isBlank = false;
}

MyDefine::~MyDefine(){

}


//读取头文件，将每一行存进list容器中
int MyDefine::ReadDefine(string path){
	ifstream infile(path.c_str());
	if (!infile)	return 0;
	string str_line = "";
	while (getline(infile, str_line)){
		list_def.push_back(str_line);
	}
	infile.close();
	infile.clear();
	return 1;
}

//将list容器的内容按顺序写入文件
int MyDefine::WriteDefine(string path){
	ofstream outfile(path.c_str());
	if (!outfile)	return 0;
	for (list<string>::iterator itr = list_def.begin(); itr != list_def.end(); ++itr){
		outfile << *itr << endl;
	}
	outfile.close();
	outfile.clear();
	return 1;
}

//在合适的位置插入新增的一行内容（#define +宏名+ID号+简体中文备注）
//在执行该函数前，需要先执行GetKey（）找到当前能使用的ID号
bool MyDefine::SetDefine(string def,string def_name,string SpChinese){
	
/*	for (list<string>::iterator itr = list_def.begin(); itr != list_def.end(); ++itr){
		if (string::npos != itr->find(def_name) || string::npos != itr->find(key))
			return false;
	}*/
	
	list<string>::iterator insert_itr = FindInsertLocation();
	if (isBlank){
		string blank_line = "";
		list_def.insert(insert_itr, blank_line);
		this->isBlank = false;

	}
	string prefix = "#define " + def + def_name;
	string blank = " ";
	for (int i = prefix.size(); i < 59; i++){
		blank += ' ';
	}
	string insert_line = prefix + blank + key + " //" + SpChinese;
	list_def.insert(insert_itr, insert_line);
	return true;
}

//暂时没用到的接口，用于修改的操作
bool MyDefine::RsetDefine(string def, string def_name,  string SpChinese){
	string insert_line = "#define " + def + def_name + "        " + key + " //" + SpChinese;
	for (list<string>::iterator itr = list_def.begin(); itr != list_def.end(); ++itr){
		if (string::npos != itr->find(def_name) || string::npos != itr->find(key))
			{
				*itr = insert_line;
				return true;
		}
	}
	return false;
}

//用于查找当前合适的插入位置，返回合适位置的迭代器
list<string>::iterator MyDefine::FindInsertLocation(){
	int k = std::stoi(key);
	int nextK = k;
	while (k > 0){
		k--;
		string last_key = to_string(k);
		for (list<string>::iterator itr = list_def.begin(); itr != list_def.end(); ++itr){
			if (string::npos != itr->find(last_key)){
				if (nextK > k + 1)	this->isBlank = true;
				itr++;
				return itr;
			}
		}
	}
	
	return list_def.end();
}

//用于获取当前最新的ID号
wstring MyDefine::GetKey(){
	string insert_flag = "";
	if (this->business == "Quote")	insert_flag = "This is a symbol to find the key in quote header";
	else if (this->business == "Trade")	insert_flag = "This is a symbol to find the key in trade header";
	for (list<string>::iterator itr = list_def.begin(); itr != list_def.end(); ++itr){
		if (string::npos != itr->find(insert_flag)){
			while (itr!=list_def.begin()){
				itr--;
				if (string::npos != itr->find("#")){
					string s = *itr;
					string::size_type position = s.find("//");
					if (string::npos != position){
						position--;
						while (isblank(s[position] )&&position>=0)	position--;
						string::size_type pend = position;
						while (!isblank(s[position]) && position >= 0)	position--;
						string::size_type pstart = position;
						key = s.substr(pstart + 1, pend - pstart);
					}
					else{
						position = s.size() - 1;
						while (isblank(s[position]) && position >= 0)	position--;
						string::size_type pend = position;
						while (!isblank(s[position]) && position >= 0)	position--;
						string::size_type pstart = position;
						key = s.substr(pstart + 1, pend - pstart);
					}
					int k = std::stoi(key);
					k++;
					key = to_string(k);
					return UTF8ToUnicode(key);
				}
			}

		}
	}
	return L"";
}

//设置当前的业务线
void MyDefine::SetBusiness(string bsn){
	this->business = bsn;
	return;
}

bool MyDefine::SetKey(wstring k){
	this->key = UnicodeToUTF8(k);
	return true;
}

//将string转成wstring
std::wstring UTF8ToUnicode(const std::string & str)
{
	int nWideCodeSize = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, NULL);
	WCHAR *wStr = new WCHAR[nWideCodeSize];
	ZeroMemory(wStr, nWideCodeSize *sizeof(wchar_t));
	MultiByteToWideChar(CP_UTF8, 0, str.c_str(), (int)str.length(), wStr, nWideCodeSize);
	wStr[nWideCodeSize - 1] = L'\0';
	std::wstring result = wStr;
	delete[] wStr;
	return result;
}

//将wstring转成string
std::string UnicodeToUTF8(const std::wstring & str)
{
	int nCharCodeSize = WideCharToMultiByte(CP_UTF8, 0, str.c_str(), -1, NULL, NULL, NULL, NULL);
	char *utf8Str = new char[nCharCodeSize];
	ZeroMemory(utf8Str, nCharCodeSize);
	WideCharToMultiByte(CP_UTF8, 0, str.c_str(), (int)str.length(), utf8Str, nCharCodeSize, NULL, NULL);
	std::string result = utf8Str;
	delete[] utf8Str;
	return result;
}
