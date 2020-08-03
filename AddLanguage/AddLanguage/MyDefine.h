#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctype.h>

using namespace std;

class MyDefine{
private:
	list<string> list_def;
	string business;
	string key;
	bool isBlank;
public:
	MyDefine();
	~MyDefine();
	int ReadDefine(string path);
	int WriteDefine(string path);
	bool SetDefine(string def, string def_name,  string SpChinese);
	bool RsetDefine(string def, string def_name,  string SpChinese);
	list<string>::iterator FindInsertLocation();
	wstring GetKey();
	bool SetKey(wstring k);
	void SetBusiness(string bsn);
};

std::wstring UTF8ToUnicode(const std::string & str);
std::string UnicodeToUTF8(const std::wstring & str);