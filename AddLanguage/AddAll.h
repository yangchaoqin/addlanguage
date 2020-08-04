#pragma once
#include "MyDefine.h"
#include "Myini.h"
#include "MainDlg.h"
#include <windows.h>
class MyIni;
class AddAll{
private:
	vector<wstring> key;
	vector<wstring> vDef;
	vector<wstring> spchinese;
	vector<wstring> tdchinese;
	vector<wstring> english;
	vector<wstring> spchinesemm;
	vector<wstring> tdchinesemm;
	vector<wstring> englishmm;

	string Business;
	string Towhere;

	bool isInsert ;
	string insertKey;

	MyDefine *mydef;
	MyIni	*myini;


public:
	AddAll();
	~AddAll();
	bool Init(list<wstring> listDef, list<wstring> listlang, list<wstring> listlangmoomoo, string business, string towhere);
	bool WriteAll(string path_Def, string path_Lang, HWND m_hWnd);
	bool SetKey(wstring key, bool isInst);
	bool ReleaseAll();
};

void DeleteRet(string &line);