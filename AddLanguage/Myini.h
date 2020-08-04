#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <cstdlib>
#include <locale>
#include <codecvt>

using namespace std;
class AddAll;
class MyIni{
private:
	map<wstring, wstring> map_ini;
public:
	MyIni();
	~MyIni();
	int ReadIni(string path);
	int WriteIni(string path);
	bool SetValue(wstring key, wstring value);
	bool RsetValue(wstring key, wstring value);
	bool releseIni();
};

class IniNode{
public:
	IniNode(wstring key, wstring value){
		this->key = key;
		this->value = value;
	}
	wstring key;
	wstring value;
};

wstring wDeleteRet(wstring line);