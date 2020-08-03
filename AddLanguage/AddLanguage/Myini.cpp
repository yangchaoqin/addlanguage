#include "stdafx.h"
#include "MyINI.h"
#include "MyDefine.h"
#include <WinNls.h>


MyIni::MyIni(){

}

MyIni::~MyIni(){

}



int MyIni::ReadIni(string path){
	wifstream infile(path.c_str(), ios::binary);
	if (!infile)	return 0;
	infile.imbue(std::locale(infile.getloc(), new std::codecvt_utf16<wchar_t, 0xffff, consume_header>));
	wstring str_line = L"";
	wstring first_str_line = L"";
	getline(infile, first_str_line);
	vector<IniNode> vec_ini;
	while (getline(infile, str_line)){
		string::size_type equal_div_pos = 0;
		wstring str_key = L"";
		wstring str_value = L"";
		if (str_line.npos != (equal_div_pos = str_line.find(L"="))){
			str_key = str_line.substr(0, equal_div_pos);
			str_value = str_line.substr(equal_div_pos + 1, str_line.size() - 1);
		}
		if ((!str_key.empty()) && (!str_value.empty())){
			wstring wstr_key = str_key;
			wstring wstr_value = str_value;
			IniNode ini_node(wstr_key, wstr_value);
			cout << UnicodeToUTF8(ini_node.key) << "=" << UnicodeToUTF8(ini_node.value) << endl;
			vec_ini.push_back(ini_node);

		}
	}
	infile.close();
	infile.clear();
	for (vector<IniNode>::iterator itr = vec_ini.begin(); itr != vec_ini.end(); ++itr){
		map_ini.insert(pair<wstring, wstring>(itr->key, itr->value));
	}
	return 1;
}

int MyIni::WriteIni(string path){
	vector<const wchar_t*>	rec;
	wofstream outfile(path.c_str(), ios::ate);
	outfile.imbue(std::locale(outfile.getloc(), new std::codecvt_utf16<wchar_t, 0x10ffff, (std::codecvt_mode)3 >));
	if (!outfile)	return 0;
	outfile << L"[string_table]";
	outfile.close();
	outfile.clear();
	for (map<wstring, wstring>::iterator itr = map_ini.begin(); itr != map_ini.end(); itr++){
		wstring value = itr->second;
		value = wDeleteRet(value);
		::WritePrivateProfileString(L"string_table", itr->first.c_str(), value.c_str(), UTF8ToUnicode(path).c_str());
	}
	return 1;
}

bool MyIni::SetValue( wstring key,wstring value){
	map<wstring, wstring>::iterator itr = map_ini.find(key);
	if (itr == map_ini.end()){
		map_ini.insert(pair<wstring, wstring>(key, value));
		return true;
	}
	else return false;
}

bool MyIni::RsetValue(wstring key, wstring value){
	map_ini[key] = value;
	return true;
}

bool MyIni::releseIni(){
	map_ini.clear();
	return true;
}

wstring wDeleteRet(wstring line){
	string str_line = UnicodeToUTF8(line);
	string::size_type position = str_line.find("\r");
	if (str_line.npos != position)
	{
		str_line = str_line.substr(0, position);
	}
	return UTF8ToUnicode(str_line);
}