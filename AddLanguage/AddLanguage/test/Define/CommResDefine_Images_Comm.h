#pragma once

#include "CommResDefine.h"

#define IDIMG_BaseDlg_Frm_Normal							1001 //独立的经纪监察窗口、图表上点齿轮弹出的设置窗口等
#define IDIMG_BaseDlg_Frm_Normal_Bar						1002 //关于窗口等
#define IDIMG_BaseDlg_Frm_Model								1003 //模态对话框，需要标题栏颜色明显，如弹出的MessageBox、下单确认
#define IDIMG_BaseDlg_Frm_Child								1010 //组件窗口外框，以下全是，颜色不一样而已
#define IDIMG_BaseDlg_Frm_Child01							1011
#define IDIMG_BaseDlg_Frm_Child02							1012
#define IDIMG_BaseDlg_Frm_Child03							1013
#define IDIMG_BaseDlg_Frm_Child04							1014
#define IDIMG_BaseDlg_Frm_Child05							1015
#define IDIMG_BaseDlg_Frm_Child06							1016
#define IDIMG_BaseDlg_Frm_Child07							1017
#define IDIMG_BaseDlg_Frm_Child08							1018
#define IDIMG_BaseDlg_Frm_Child09							1019
#define IDIMG_BaseDlg_Frm_Child10							1020 //资产组件

#define IDIMG_BaseDlg_Frm_PopTip							1021
#define IDIMG_BaseDlg_Frm_PopTip_Arrow_L					1022
#define IDIMG_BaseDlg_Frm_PopTip_Arrow_R					1023
#define IDIMG_BaseDlg_Frm_PopTip_Arrow_T					1024
#define IDIMG_BaseDlg_Frm_PopTip_Arrow_B					1025

#define IDIMG_BaseDlg_Frm_NNMain							1031 //迷你窗口外框
#define IDIMG_BaseDlg_Frm_InfoWnd							1034 //移动到头像弹出的窗口等
#define IDIMG_BaseDlg_Frm_EditTip							1035 //输入框错误提示，如登录时不填密码，点登录会出现
#define IDIMG_BaseDlg_Frm_Tips2								1036 //组件窗口设置弹出的窗口、历史订单日期控件窗口等
#define IDIMG_BaseDlg_Frm_Notice							1042 //新的消息、行情被踢等窗口，窗口背景一直白色
#define IDIMG_BaseDlg_Frm_Warning							1043 //断线窗口、持仓风险提醒窗口等警告窗口
#define IDIMG_BaseDlg_Frm_Box								1044 //组件工具箱窗口
#define IDIMG_BaseDlg_Frm_Setting							1132 //设置窗口
#define IDIMG_BaseDlg_Frm_AppLayout							1133 //布局管理窗口
#define IDIMG_BaseDlg_Frm_LiveSetting						1134 //直播更多设置
#define IDIMG_BaseDlg_Frm_BlankCardAConn					1135 //A股通空开户卡片

#define IDIMG_AppLayout_Screen								1138 //布局管理代表屏幕的图

#define IDIMG_BaseDlg_BorderShadow							1141 //普通窗口阴影（主窗口和面板的是IDIMG_NewMain_BorderShadow）
#define IDIMG_BaseDlg_BorderShadow_2						1142 //报价详情弹出窗口、板块选中弹出窗口等的阴影，对应ImgID_BaseDlg_Frm_Tips2边框

#define IDIMG_BaseDlg_MinSysBtn_Menu						1160 //组件窗口菜单
#define IDIMG_BaseDlg_MinSysBtn_Menu_RD						1161 //组件窗口菜单红点
#define IDIMG_BaseDlg_MinSysBtn_Close						1181 //组件窗口关闭
#define IDIMG_BaseDlg_MinSysBtn_BoxClose					1185 //组件工具箱窗口关闭
#define IDIMG_BaseDlg_MinSysBtn_PopTip						1186 //浮动Tip窗口关闭按钮
#define IDIMG_BaseDlg_Frm_DrawTdClose                       1187 //画线下单窗口关闭按钮
#define IDIMG_BaseDlg_Frm_DrawTrade                         1188 //画线下单窗口背景
#define IDIMG_BaseDlg_Frm_DrawTdHelp                        1189 //画线交易帮助图标

#define IDIMG_MaxSysBtn_Close								1191
#define IDIMG_MaxSysBtn_Max									1192
#define IDIMG_MaxSysBtn_Restore								1193
#define IDIMG_MaxSysBtn_Min									1194
#define IDIMG_MaxSysBtn_Menu								1195
#define IDIMG_MaxSysBtn_Close_Abuout						1196

#define IDIMG_MaxSysBtn_Separator							1201 //分割线
#define IDIMG_MaxSysBtn_Skin								1202 //皮肤
#define IDIMG_MaxSysBtn_Lock								1203 //锁定交易
#define IDIMG_MaxSysBtn_Unlock								1204 //解锁交易
#define IDIMG_MaxSysBtn_MiniMode							1205 //迷你模式
#define IDIMG_MaxSysBtn_OnLine								1206 //在线客服
#define IDIMG_MaxSysBtn_LockOrUnlock						1026    //解锁加锁交易

#define IDIMG_MaxSysBtn_Layout								1211 //布局
#define IDIMG_MaxSysBtn_Search								1212 //搜索
#define IDIMG_MAXSYSBTN_REMIND								1213 //搜索


#define IDIMG_MenuIcon_Save									1301
#define IDIMG_MenuIcon_Add									1302
#define IDIMG_MenuIcon_Topmost								1303
#define IDIMG_MenuIcon_UnTopmost							1304

#define IDIMG_MenuIcon_RadioSelect							1311
#define IDIMG_MenuIcon_Choose								1312
#define IDIMG_MenuIcon_Copy									1313
#define IDIMG_MenuIcon_Delete								1314
#define IDIMG_MenuIcon_Rename								1315
#define IDIMG_MenuIcon_Export								1316
#define IDIMG_MenuIcon_MulitStock							1317

#define IDIMG_MenuIcon_LockApp								1321
#define IDIMG_MenuIcon_UnLockApp							1322
#define IDIMG_MenuIcon_TradeLocked							1325
#define IDIMG_MenuIcon_TradeUnlocked						1326

#define IDIMG_MenuIcon_Loan_Xian							1331
#define IDIMG_MenuIcon_Loan_Dai								1332
#define IDIMG_MenuIcon_Loan_Kong							1333
#define IDIMG_MenuIcon_Loan_Xian_HK							1334
#define IDIMG_MenuIcon_Loan_Dai_HK							1335
#define IDIMG_MenuIcon_Loan_Kong_HK							1336

#define IDIMG_Menu_WndBK_Normal								1341
#define IDIMG_Menu_ItemBK_Normal							1342
#define IDIMG_Menu_Separator								1343
#define IDIMG_MENU_ITEMBK_NEW								1344

#define IDIMG_Btn_Normal									1401
#define IDIMG_BtnFocus_Normal								1402
#define IDIMG_Btn_DropDown									1405
#define IDIMG_BtnFocus								        1406

#define IDIMG_Btn_AccID_Frame								1407
#define IDIMG_Btn_AccID_Frame2								1408
#define IDIMG_Btn_AccID_Arrow								1409
#define IDIMG_Btn_AccID_UpdateAcc							1410
#define IDIMG_Btn_DateCtrl_Normal							1411
#define IDIMG_Btn_DateCtrl_Gray								1412
#define IDIMG_Btn_DateCtrl_LArrow							1413
#define IDIMG_Btn_DateCtrl_RArrow							1414
#define IDIMG_Btn_DateCtrl_UArrow							1415
#define IDIMG_Btn_DateCtrl_DArrow							1416
#define IDIMG_Btn_DateCtrl_Time								1417
#define IDIMG_BTN_ACCID_ARROW_STRESS						1418

#define IDIMG_CekBtn_Normal									1421
#define IDIMG_CekBtn_Normal_Light							1422
#define IDIMG_CekBtn_Normal2								1423
#define IDIMG_CekBtn_Selected								1424
#define IDIMG_RdoBtn_Normal									1431
#define IDIMG_RdoBtn_Normal_Light							1432
#define IDIMG_Edt_Normal									1441
#define IDIMG_EdtArrBtn_Normal								1442
#define IDIMG_EdtArrBtn_Normal_12px							1443
#define IDIMG_EdtArrBtn_Clear								1445
#define IDIMG_EdtArrStc_Search								1446
#define IDIMG_Edt_PanelGroup								1447
#define IDIMG_EDT_NORMAL_BLOCK                              1448
#define IDIMG_ListBox_Frm_Normal							1451
#define IDIMG_ListBox_Btn_Delete							1452
#define IDIMG_ListBox_Head_Normal							1453
#define IDIMG_ListBox_Btn_AddStock							1455
#define IDIMG_ListBox_Btn_RevStock							1456
#define IDIMG_TabFrm_Normal									1461
#define IDIMG_TabBack_Normal								1462
#define IDIMG_TabFrm_ChildDlg								1463
#define IDIMG_TabFrm_Mini									1464
#define IDIMG_TabBack_Mini									1465
#define IDIMG_TabFrm_Mini2									1466
#define IDIMG_TabBack_Mini2									1467
#define IDIMG_CheckListBox_Btn_HasCheck						1468
#define IDIMG_EdtArrBtn_DataCenter							1469
#define IDIMG_DataCenter_SearchBtn							1470
#define IDIMG_EdtBtn_Calender								1471

#define IDIMG_TabFrm_Second									1472

#define IDIMG_ScrollBar_Normal								1501
#define IDIMG_ScrollBar_Normal_SOUI							1502
#define IDIMG_ScrollBar_light_Normal                        1503
#define IDIMG_ScrollBar_Normal_LIVE						    1504

#define IDIMG_GridBorder_All								1511
#define IDIMG_GridBorder_TB									1512
#define IDIMG_GridBorder_T									1513
#define IDIMG_GridBorder_R									1514
#define IDIMG_GridHead_Normal								1521
#define IDIMG_GridHead_Selected								1522
#define IDIMG_GridHead_SortUp								1523
#define IDIMG_GridHead_SortDown								1524
#define IDIMG_GridBtnFrm_Normal								1541
#define IDIMG_GridTip_Normal								1551
#define IDIMG_GridTip_Warning								1552

#define IDIMG_Icon_FTNN										1701
#define IDIMG_Icon_FTNN_Title_Logo							1702

#define IDIMG_Icon_Fall_Green								1801
#define IDIMG_Icon_Fall_Red									1802
#define IDIMG_Icon_Rise_Green								1803
#define IDIMG_Icon_Rise_Red									1804
#define IDIMG_Icon_Stable									1805

#define IDIMG_Icon_Connected								1851
#define IDIMG_Icon_Disconnection							1852

#define IDIMG_Icon_OK										1871
#define IDIMG_IconMax_OK									1872
#define IDIMG_Icon_Warning									1873
#define IDIMG_IconMax_Warning								1874
#define IDIMG_Icon_Question									1875
#define IDIMG_IconMax_Question								1876
#define IDIMG_IconMax_Risk									1877

#define IDIMG_AboutDlg_Bk									2030
#define IDIMG_AboutDlg_logo									2031
	
#define	IDIMG_Frm_MedalBtn									2040

#define IDIMG_Assets_Btn_Menu								2200
#define IDIMG_Assets_Btn_Lock								2201
#define IDIMG_Assets_Btn_Refresh							2202
#define IDIMG_Assets_Btn_LockCn								2203
#define IDIMG_Assets_Btn_PreCard							2204
#define IDIMG_Assets_Btn_NextCard							2205
#define IDIMG_Assets_Wizard_CN								2206
#define IDIMG_Assets_Wizard_Open1_HK						2207
#define IDIMG_Assets_Wizard_Open1_US						2208
#define IDIMG_Assets_Wizard_Open2							2209
#define IDIMG_Assets_Wizard_Open3_HK						2210
#define IDIMG_Assets_Wizard_Open3_US						2211
#define IDIMG_Assets_Wizard_Open3_HKHK						2212
#define IDIMG_Assets_Wizard_Opening							2213
#define IDIMG_Assets_Wizard_Opening2						2214
#define IDIMG_Assets_Wizard_Opening3						2215
#define IDIMG_My_Assert_BlankCard_CN						2216

#define IDIMG_MenuIcon_CurrencyExchange						2220
#define IDIMG_MenuIcon_DepositFound							2221
#define IDIMG_MenuIcon_TakeOutFound							2222
#define IDIMG_MenuIcon_AssetsHistroy						2223
#define IDIMG_MenuIcon_CnBannkTran							2224
#define IDIMG_MenuIcon_CnUnBindAcc							2225
#define IDIMG_MenuIcon_ApplyLoanLimit						2226
#define IDIMG_MenuIcon_FundsTransfer						2227

#define IDIMG_EDT_Normal_Highlight						    2230	
#define IDIMG_EdtArrBtn_Clear_24						    2231	
#define IDIMG_EdtArrBtn_Normal_22						    2232	

#define IDIMG_SEL_STOCK_TIP                                 2233

#define IDIMG_CARD_INDICATORS_DASHBOARD_POINTER             2234

#define IDIMG_ICON_UDWARNING								2235
#define IDIMG_MAXSYSBTN_QUESTION						    2236

#define IDIMG_SMART_DASHBOARD_BG                            2237

// PC一键分享
#define IDIMG_KLINE_SHARE_LOGO								2240

#define IDIMG_ARROW_RISE_RED                                2241
#define IDIMG_ARROW_RISE_GREEN                              2242
#define IDIMG_ARROW_FALL_RED                                2243
#define IDIMG_ARROW_FALL_GREEN                              2244

#define IDIMG_SEPARATORLINE_NORMAL                          2245
#define IDIMG_MENUICON_SET                                  2246

//SOUI需要的八态图
#define IDIMG_RADIO_EIGHT                                   2300
#define IDIMG_CHECK_EIGHT                                   2301
#define IDIMG_CHECK_LIGHT_EIGHT                             2302

#define IDIMG_BTN_DATECTRL_DRARROW                          2305

#define IDMIG_BTN_LIST_DOWN                                 2306

#define IDIMG_BaseDlg_Icon_Popup_Arrow                      2308


#define IDIMG_GUIDEWND_ARROW_LEFT                           2310
#define IDIMG_GUIDEWND_ARROW_RIGHT                          2311
#define IDIMG_GUIDEWND_ARROW_TOP                            2312
#define IDIMG_GUIDEWND_ARROW_BOTTOM                         2313
#define IDIMG_GUIDEWND_BG                                   2314
#define IDIMG_GUIDEWND_BTN                                  2315

#define IDIMG_Common_Icon_Blank_Empty                       2319
#define IDIMG_COMMON_BG_TAG_DATA                            2320
#define IDIMG_COMMON_ICON_HK_ROUND                          2321
#define IDIMG_COMMON_ICON_US_ROUND                          2322
#define IDIMG_COMMON_ICON_SH_ROUND                          2323
#define IDIMG_COMMON_ICON_SZ_ROUND                          2324
#define IDIMG_COMMON_ICON_FX_ROUND                          2325

#define IDIMG_COMMON_ICON_SOUI_SLIDER_THUMB                 2400
#define IDIMG_COMMON_ICON_SOUI_SLIDER_BK                    2401


static ImageListTable sg_imageListTable_Comm[] = 
{
	{IDIMG_BaseDlg_Frm_Normal, L"BaseDlg_Frm_Normal.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Normal_Bar, L"BaseDlg_Frm_Normal_Bar.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Model, L"BaseDlg_Frm_Model.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child, L"BaseDlg_Frm_Child.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child01, L"BaseDlg_Frm_Child01.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child02, L"BaseDlg_Frm_Child02.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child03, L"BaseDlg_Frm_Child03.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child04, L"BaseDlg_Frm_Child04.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child05, L"BaseDlg_Frm_Child05.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child06, L"BaseDlg_Frm_Child06.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child07, L"BaseDlg_Frm_Child07.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child08, L"BaseDlg_Frm_Child08.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child09, L"BaseDlg_Frm_Child09.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Child10, L"BaseDlg_Frm_Child10.png", 1, 2},

	{IDIMG_BaseDlg_Frm_PopTip, L"BaseDlg_Frm_PopTip.png", 1, 2},
	{IDIMG_BaseDlg_Frm_PopTip_Arrow_L, L"BaseDlg_Frm_PopTip_Arrow_L.png", 1, 1},
	{IDIMG_BaseDlg_Frm_PopTip_Arrow_R, L"BaseDlg_Frm_PopTip_Arrow_R.png", 1, 1},
	{IDIMG_BaseDlg_Frm_PopTip_Arrow_T, L"BaseDlg_Frm_PopTip_Arrow_T.png", 1, 1},
	{IDIMG_BaseDlg_Frm_PopTip_Arrow_B, L"BaseDlg_Frm_PopTip_Arrow_B.png", 1, 1},

	{IDIMG_BaseDlg_Frm_NNMain, L"BaseDlg_Frm_NNMain.png", 1, 2},
	{IDIMG_BaseDlg_Frm_InfoWnd, L"BaseDlg_Frm_InfoWnd.png", 1, 2},
	{IDIMG_BaseDlg_Frm_EditTip, L"BaseDlg_Frm_EditTip.png", 1, 1},
	{IDIMG_BaseDlg_Frm_Tips2, L"BaseDlg_Frm_Tips2.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Notice, L"BaseDlg_Frm_Notice.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Warning, L"BaseDlg_Frm_Warning.png", 1, 2},
	{IDIMG_BaseDlg_Frm_Box, L"BaseDlg_Frm_Box.png", 1, 2},

	{IDIMG_BaseDlg_Frm_Setting, L"BaseDlg_Frm_Setting.png", 1, 1},
	{IDIMG_BaseDlg_Frm_AppLayout, L"BaseDlg_Frm_AppLayout.png", 1, 1},
	{IDIMG_BaseDlg_Frm_LiveSetting, L"BaseDlg_Frm_LiveSetting.png", 1, 1},
	{IDIMG_BaseDlg_Frm_BlankCardAConn, L"BaseDlg_Frm_BlankCardAConn.png", 1, 2},	

	{IDIMG_AppLayout_Screen, L"AppLayout_Screen.png", 1, 1},

	{IDIMG_BaseDlg_BorderShadow, L"BaseDlg_BorderShadow.png", 1, 2},
	{IDIMG_BaseDlg_BorderShadow_2, L"BaseDlg_BorderShadow_2.png", 1, 2},

	{IDIMG_BaseDlg_MinSysBtn_Menu, L"BaseDlg_MinSysBtn_Menu.png", 1, 3},
	{IDIMG_BaseDlg_MinSysBtn_Menu_RD, L"BaseDlg_MinSysBtn_Menu_RD.png", 1, 3},
	{IDIMG_BaseDlg_MinSysBtn_Close, L"BaseDlg_MinSysBtn_Close.png", 1, 3},
	{IDIMG_BaseDlg_MinSysBtn_BoxClose, L"BaseDlg_MinSysBtn_BoxClose.png", 1, 3},
    {IDIMG_BaseDlg_MinSysBtn_PopTip, L"BaseDlg_MinSysBtn_PopTip.png", 1, 3 },
    {IDIMG_BaseDlg_Frm_DrawTdClose, L"BaseDlg_Frm_DrawTdClose.png", 1, 3 },
    {IDIMG_BaseDlg_Frm_DrawTrade, L"BaseDlg_Frm_DrawTrade.png", 1,  2},
    {IDIMG_BaseDlg_Frm_DrawTdHelp, L"BaseDlg_Frm_DrawTdHelp.png", 1, 3 },

	{IDIMG_MaxSysBtn_Close, L"MaxSysBtn_Close.png", 1, 3},
	{IDIMG_MaxSysBtn_Max, L"MaxSysBtn_Max.png", 1, 3},
	{IDIMG_MaxSysBtn_Restore, L"MaxSysBtn_Restore.png", 1, 3},
	{IDIMG_MaxSysBtn_Min, L"MaxSysBtn_Min.png", 1, 3},
	{IDIMG_MaxSysBtn_Menu, L"MaxSysBtn_Menu.png", 1, 3},
	{IDIMG_MaxSysBtn_Close_Abuout, L"MaxSysBtn_Close_About.png", 1, 3},

	{IDIMG_MaxSysBtn_Separator, L"MaxSysBtn_Separator.png", 1, 1},
	{IDIMG_MaxSysBtn_Skin, L"MaxSysBtn_Skin.png", 1, 3},
	{IDIMG_MaxSysBtn_Lock, L"MaxSysBtn_Lock.png", 1, 3},
	{IDIMG_MaxSysBtn_Unlock, L"MaxSysBtn_Unlock.png", 1, 3},
	{IDIMG_MaxSysBtn_LockOrUnlock, L"MaxSysBtn_LockOrUnlock.png", 1, 3},

	{IDIMG_MaxSysBtn_MiniMode, L"MaxSysBtn_MiniMode.png", 1, 3},
	{IDIMG_MaxSysBtn_OnLine, L"MaxSysBtn_OnLine.png", 1, 3},

    { IDIMG_MaxSysBtn_Layout, L"MaxSysBtn_Layout.png", 1, 3 },
    { IDIMG_MaxSysBtn_Search, L"MaxSysBtn_Search.png", 1, 3 },
    { IDIMG_MAXSYSBTN_REMIND, L"MaxSysBtn_Remind.png", 1, 3 },

	{IDIMG_MenuIcon_Save, L"MenuIcon_Save.png", 1, 1},

	{IDIMG_MenuIcon_Add, L"MenuIcon_Add.png", 1, 1},
	{IDIMG_MenuIcon_Topmost, L"MenuIcon_Topmost.png", 1, 1},
	{IDIMG_MenuIcon_UnTopmost, L"MenuIcon_UnTopmost.png", 1, 1},

	{IDIMG_MenuIcon_RadioSelect, L"MenuIcon_RadioSelect.png", 1, 1},
	{IDIMG_MenuIcon_Choose, L"MenuIcon_Choose.png", 1, 1},
	{IDIMG_MenuIcon_Copy, L"MenuIcon_Copy.png", 1, 1},
	{IDIMG_MenuIcon_Delete, L"MenuIcon_Delete.png", 1, 1},
	{IDIMG_MenuIcon_Rename, L"MenuIcon_Rename.png", 1, 1},
	{IDIMG_MenuIcon_Export, L"MenuIcon_Export.png", 1, 1},
	{IDIMG_MenuIcon_MulitStock, L"MenuIcon_MulitStock.png", 1, 1},

	{IDIMG_MenuIcon_LockApp, L"MenuIcon_LockApp.png", 1, 1},
	{IDIMG_MenuIcon_UnLockApp, L"MenuIcon_UnLockApp.png", 1, 1},
    {IDIMG_MenuIcon_TradeLocked, L"MenuIcon_TradeLocked.png", 1 ,1},
    {IDIMG_MenuIcon_TradeUnlocked, L"MenuIcon_TradeUnlocked.png", 1, 1},

	{IDIMG_MenuIcon_Loan_Xian, L"MenuIcon_Loan_Xian.png", 1, 1},
	{IDIMG_MenuIcon_Loan_Dai, L"MenuIcon_Loan_Dai.png", 1, 1},
	{IDIMG_MenuIcon_Loan_Kong, L"MenuIcon_Loan_Kong.png", 1, 1},
	{IDIMG_MenuIcon_Loan_Xian_HK, L"MenuIcon_Loan_Xian_HK.png", 1, 1},
	{IDIMG_MenuIcon_Loan_Dai_HK, L"MenuIcon_Loan_Dai_HK.png", 1, 1},
	{IDIMG_MenuIcon_Loan_Kong_HK, L"MenuIcon_Loan_Kong_HK.png", 1, 1},

	{IDIMG_Menu_WndBK_Normal, L"Menu_WndBK_Normal.png", 1, 1},
    { IDIMG_Menu_ItemBK_Normal, L"Menu_ItemBK_Normal.png", 1, 1 },
    { IDIMG_Menu_Separator, L"Menu_Separator.png", 1, 1 },
    { IDIMG_MENU_ITEMBK_NEW, L"Menu_ItemBK.png", 1, 2}, 

	{IDIMG_Btn_Normal, L"Btn_Normal.png", 1, 4},
	{IDIMG_BtnFocus_Normal, L"BtnFocus_Normal.png", 1, 1},
    { IDIMG_Btn_DropDown, L"BTN_DropDown.png", 1, 4 },
    { IDIMG_BtnFocus, L"BtnFocus.png", 1, 4 },

	{IDIMG_Btn_AccID_Frame, L"Btn_AccID_Frame.png", 1, 4},
	{IDIMG_Btn_AccID_Frame2, L"Btn_AccID_Frame2.png",  1, 4},
	{IDIMG_Btn_AccID_Arrow, L"Btn_AccID_Arrow.png",  1, 4},
	{IDIMG_Btn_AccID_UpdateAcc, L"Btn_AccID_UpdateAcc.png", 1,3},
	{IDIMG_BTN_ACCID_ARROW_STRESS, L"Btn_AccID_Arrow_Stress.png", 1, 4},

	{IDIMG_Btn_DateCtrl_Normal, L"Btn_DateCtrl_Normal.png", 1, 4},
	{IDIMG_Btn_DateCtrl_Gray, L"Btn_DateCtrl_Gray.png", 1, 4},
	{IDIMG_Btn_DateCtrl_LArrow, L"Btn_DateCtrl_LArrow.png", 1, 4},
	{IDIMG_Btn_DateCtrl_RArrow, L"Btn_DateCtrl_RArrow.png", 1, 4},
	{IDIMG_Btn_DateCtrl_UArrow, L"Btn_DateCtrl_UArrow.png", 1, 4 },
	{IDIMG_Btn_DateCtrl_DArrow, L"Btn_DateCtrl_DArrow.png", 1, 4 },
	{IDIMG_Btn_DateCtrl_Time, L"Btn_DateCtrl_Time.png", 1, 1 },

	{IDIMG_CekBtn_Normal, L"CekBtn_Normal.png", 2, 4},
    {IDIMG_CekBtn_Normal_Light, L"CekBtn_Normal_light.png", 2, 4 },
	{IDIMG_CekBtn_Normal2, L"CekBtn_Normal_01.png", 1, 4 },
	{IDIMG_CekBtn_Selected, L"CekBtn_Selected.png", 1, 4 },
	{ IDIMG_RdoBtn_Normal, L"RdoBtn_Normal.png", 2, 4 },
	{IDIMG_RdoBtn_Normal_Light, L"RdoBtn_Normal_light.png", 2, 4},
	{IDIMG_Edt_Normal, L"Edt_Normal.png", 1, 4},
	{IDIMG_EdtArrBtn_Normal, L"EdtArrBtn_Normal.png", 1, 4},
	{IDIMG_EdtArrBtn_Normal_12px, L"EdtArrBtn_Normal_12px.png", 1, 4},
	{IDIMG_EdtArrBtn_Clear, L"EdtArrBtn_Clear.png", 1, 4},
	{IDIMG_EdtBtn_Calender, L"EdtBtn_Calendar.png", 1, 4},
	{IDIMG_EdtArrStc_Search, L"EdtArrStc_Search.png", 1, 1},
	{IDIMG_Edt_PanelGroup, L"EDT_PanelGroup.png", 1, 4},
    {IDIMG_EDT_NORMAL_BLOCK,L"EDT_Normal_Block.png", 1 , 4},
	{IDIMG_ListBox_Frm_Normal, L"ListBox_Frm_Normal.png", 1, 4},
	{IDIMG_ListBox_Btn_Delete, L"ListBox_Btn_Delete.png", 1, 3},
	{IDIMG_ListBox_Head_Normal, L"ListBox_Head_Normal.png", 1, 3 },	
	{IDIMG_ListBox_Btn_AddStock, L"ListBox_Btn_AddStock.png", 1, 3},
	{IDIMG_ListBox_Btn_RevStock, L"ListBox_Btn_RevStock.png", 1, 3},
	{IDIMG_TabFrm_Normal, L"TabFrm_Normal.png", 1, 3},
	{IDIMG_TabBack_Normal, L"TabBack_Normal.png", 1, 1},
	{IDIMG_TabFrm_ChildDlg, L"TabFrm_ChildDlg.png", 1, 3},
        
	{IDIMG_TabFrm_Mini, L"TabFrm_Mini.png", 1, 3},
	{IDIMG_TabBack_Mini, L"TabBack_Mini.png", 1, 1},
	{IDIMG_TabFrm_Mini2, L"TabFrm_Mini2.png", 1, 3},
	{IDIMG_TabBack_Mini2, L"TabBack_Mini2.png", 1, 1},
    {IDIMG_TabFrm_Second, L"BgFrm_second.png", 1, 3 },

	{IDIMG_CheckListBox_Btn_HasCheck, L"CheckListBox_Btn_HasCheck.png", 1, 4},

    { IDIMG_ScrollBar_Normal, L"ScrollBar_Normal.png", 3, 18 },
    { IDIMG_ScrollBar_Normal_SOUI, L"ScrollBar_Normal_soui.png", 3, 9},
    { IDIMG_ScrollBar_Normal_LIVE, L"ScrollBar_Normal_Live.png", 3, 9 },

	{IDIMG_GridBorder_All, L"GridBorder_All.png", 1, 1},
	{IDIMG_GridBorder_TB, L"GridBorder_TB.png", 1, 1},
	{IDIMG_GridBorder_T, L"GridBorder_T.png", 1, 1},
	{IDIMG_GridBorder_R, L"GridBorder_R.png", 1, 1},
	{IDIMG_GridHead_Normal, L"GridHead_Normal.png", 1, 3},
	{IDIMG_GridHead_Selected, L"GridHead_Selected.png", 1, 1},
	{IDIMG_GridHead_SortUp, L"GridHead_SortUp.png", 1, 3},
	{IDIMG_GridHead_SortDown, L"GridHead_SortDown.png", 1, 3},
	{IDIMG_GridBtnFrm_Normal, L"GridBtnFrm_Normal.png", 1, 4},
	{IDIMG_GridTip_Normal, L"GridTip_Normal.png", 1, 1},
	{IDIMG_GridTip_Warning, L"GridTip_Warning.png", 1, 1},
	 
	{IDIMG_Icon_FTNN, L"Icon_FTNN.png", 1, 1},
	{IDIMG_Icon_FTNN_Title_Logo, L"Icon_FTNN_Title_Logo.png", 1, 1},
	{IDIMG_Icon_Fall_Green, L"Icon_Fall_Green.png", 1, 1},
	{IDIMG_Icon_Fall_Red, L"Icon_Fall_Red.png", 1, 1},
	{IDIMG_Icon_Rise_Green, L"Icon_Rise_Green.png", 1, 1},
	{IDIMG_Icon_Rise_Red, L"Icon_Rise_Red.png", 1, 1},
    {IDIMG_Icon_Stable, L"Icon_Stable.png", 1, 1},

	{IDIMG_Icon_Connected, L"Icon_Connected.png", 1, 1},
	{IDIMG_Icon_Disconnection, L"Icon_Disconnection.png", 1, 1},


	{IDIMG_Icon_OK, L"Icon_OK.png", 1, 1},
	{IDIMG_IconMax_OK, L"IconMax_OK.png", 1, 1},
	{IDIMG_Icon_Warning, L"Icon_Warning.png", 1, 1},
	{IDIMG_IconMax_Warning, L"IconMax_Warning.png", 1, 1},
	{IDIMG_Icon_Question, L"Icon_Question.png", 1, 1},
	{IDIMG_IconMax_Question, L"IconMax_Question.png", 1, 1},
	{IDIMG_IconMax_Risk, L"IconMax_Risk.png", 1, 1},

	{IDIMG_AboutDlg_Bk, L"AboutDlg_Bk.png", 1, 1},
	{IDIMG_AboutDlg_logo, L"AboutDlg_logo.png", 1, 1},

	{IDIMG_Frm_MedalBtn, L"Frm_MedalBtn.png", 1, 3},

	{IDIMG_Assets_Btn_Menu, L"Assets_Btn_Menu.png", 1, 3},
	{IDIMG_Assets_Btn_Lock, L"Assets_Btn_Lock.png", 1, 3},
	{IDIMG_Assets_Btn_Refresh, L"Assets_Btn_Refresh.png", 1, 3},
	{IDIMG_Assets_Btn_LockCn, L"Assets_Btn_LockCn.png", 1, 3},
	{IDIMG_Assets_Btn_PreCard, L"Assets_Btn_PreCard.png", 1, 4},
	{IDIMG_Assets_Btn_NextCard, L"Assets_Btn_NextCard.png", 1, 4},
	{IDIMG_Assets_Wizard_CN, L"My_Assets_Wizard_CN.png", 1, 1},
	{IDIMG_Assets_Wizard_Open1_HK, L"My_Assets_Wizard_Open1_HK.png", 1, 1},
	{IDIMG_Assets_Wizard_Open1_US, L"My_Assets_Wizard_Open1_US.png", 1, 1},
	{IDIMG_Assets_Wizard_Open2, L"My_Assets_Wizard_Open2.png", 1, 1},
	{IDIMG_Assets_Wizard_Open3_HK, L"My_Assets_Wizard_Open3_HK.png", 1, 1},
	{IDIMG_Assets_Wizard_Open3_US, L"My_Assets_Wizard_Open3_US.png", 1, 1},
	{IDIMG_Assets_Wizard_Open3_HKHK, L"My_Assets_Wizard_Open3_HKHK.png", 1, 1},
	{IDIMG_Assets_Wizard_Opening, L"My_Assets_Wizard_Opening.png", 1, 1},
	{IDIMG_Assets_Wizard_Opening2, L"My_Assets_Wizard_Opening2.png", 1, 1},
	{IDIMG_Assets_Wizard_Opening3, L"My_Assets_Wizard_Opening3.png", 1, 1},
	{IDIMG_My_Assert_BlankCard_CN, L"My_Assert_BlankCard_CN.png", 1, 3},

	{IDIMG_MenuIcon_CurrencyExchange,	L"MenuIcon_CurrencyExchange.png", 1, 1},
	{IDIMG_MenuIcon_DepositFound,		L"MenuIcon_DepositFound.png", 1, 1},
	{IDIMG_MenuIcon_TakeOutFound,		L"MenuIcon_TakeOutFound.png", 1, 1},
	{IDIMG_MenuIcon_AssetsHistroy,		L"MenuIcon_AssetsHistroy.png", 1, 1},
	{IDIMG_MenuIcon_CnBannkTran,		L"MenuIcon_CnBannkTran.png", 1, 1},
	{IDIMG_MenuIcon_CnUnBindAcc,		L"MenuIcon_CnUnBindAcc.png", 1, 1},
	{IDIMG_MenuIcon_ApplyLoanLimit,		L"MenuIcon_ApplyLoanLimit.png", 1, 1},
	{IDIMG_MenuIcon_FundsTransfer,		L"MenuIcon_FundTransfer.png", 1, 1},

	{ IDIMG_EdtArrBtn_DataCenter, L"EdtArrBtn_DataCenter.png", 1, 4 },
    { IDIMG_DataCenter_SearchBtn, L"BTN_DataCenter_Search.png", 1, 4 },
    { IDIMG_EDT_Normal_Highlight, L"EDT_Normal_Highlight.png", 1, 4 },
    { IDIMG_EdtArrBtn_Clear_24, L"EdtArrBtn_Clear_24.png", 1, 4 },
    { IDIMG_EdtArrBtn_Normal_22, L"EdtArrBtn_Normal_22.png", 1, 4 },
    { IDIMG_SEL_STOCK_TIP, L"BaseDlg_Frm_EditTip2.png", 1, 1 },  

    { IDIMG_CARD_INDICATORS_DASHBOARD_POINTER, L"DashBoard_Pointer.png", 1, 1 },
    { IDIMG_SMART_DASHBOARD_BG, L"Smart_DashBoard_BG.png", 1, 1 },

    { IDIMG_ICON_UDWARNING, L"Icon_caveat.png", 1, 1 },
    { IDIMG_MAXSYSBTN_QUESTION, L"MaxSysBtn_Question.png", 1, 3 },

#ifndef MOO_MOO
	{ IDIMG_KLINE_SHARE_LOGO, L"brand_logo.png", 1, 1 },
#else 
	{ IDIMG_KLINE_SHARE_LOGO, L"brand_logo_moomoo.png", 1, 1 },
#endif

    { IDIMG_ARROW_RISE_RED, L"Icon_Arrow_Rise_Red.png", 1, 1 },
    { IDIMG_ARROW_RISE_GREEN, L"Icon_Arrow_Rise_Green.png", 1, 1 },
    { IDIMG_ARROW_FALL_RED, L"Icon_Arrow_Fall_Red.png", 1, 1 },
    { IDIMG_ARROW_FALL_GREEN, L"Icon_Arrow_Fall_Green.png", 1, 1 },
    { IDIMG_SEPARATORLINE_NORMAL, L"separatorline_normal.png", 1, 1 },
    { IDIMG_MENUICON_SET, L"MenuIcon_Set.png", 1, 1 },
    { IDIMG_RADIO_EIGHT, L"RdoBtn_Horizontal_Normal.png", 1, 8 }, 
    { IDIMG_CHECK_EIGHT, L"CekBtn_Horizontal_Normal.png", 1, 8 },
    { IDIMG_CHECK_LIGHT_EIGHT, L"CekBtn_Horizontal_light.png", 1, 8 },

    { IDIMG_BTN_DATECTRL_DRARROW, L"Btn_DateCtrl_DRArrow.png", 1, 8 },
    { IDIMG_ScrollBar_light_Normal, L"ScrollBar_light_Normal.png", 3, 18 },

    { IDMIG_BTN_LIST_DOWN, L"Btn_check_icon_Down.png", 1, 4 },
    { IDIMG_BaseDlg_Icon_Popup_Arrow, L"BaseDlg_Icon_PopUp_Arrow.png", 1, 3 },

    { IDIMG_GUIDEWND_ARROW_LEFT, L"BaseDlg_Frm_PopTip_Pic_LAr.png", 1, 1 },
    { IDIMG_GUIDEWND_ARROW_RIGHT, L"BaseDlg_Frm_PopTip_Pic_RAr.png", 1, 1 },
    { IDIMG_GUIDEWND_ARROW_TOP, L"BaseDlg_Frm_PopTip_Pic_UAr.png", 1, 1 },
    { IDIMG_GUIDEWND_ARROW_BOTTOM, L"BaseDlg_Frm_PopTip_Pic_DAr.png", 1, 1 },
    { IDIMG_GUIDEWND_BG, L"BaseDlg_Frm_PopTip_Pic.png", 1, 1 },
    { IDIMG_GUIDEWND_BTN, L"BaseDlg_Btn_PopTip_Pic.png", 1, 4 },
    
	{ IDIMG_Common_Icon_Blank_Empty, L"common_icon_blank_empty.png", 1, 1 },

    { IDIMG_COMMON_BG_TAG_DATA, L"Common_Bg_Tag_Data.png", 1, 1 },
    { IDIMG_COMMON_ICON_HK_ROUND, L"Common_Icon_HK_Round.png", 1, 1 },
    { IDIMG_COMMON_ICON_US_ROUND, L"Common_Icon_US_Round.png", 1, 1 },
    { IDIMG_COMMON_ICON_SH_ROUND, L"Common_Icon_SH_Round.png", 1, 1 },
    { IDIMG_COMMON_ICON_SZ_ROUND, L"Common_Icon_SZ_Round.png", 1, 1 }, 
    { IDIMG_COMMON_ICON_SOUI_SLIDER_THUMB, L"Control_Slider_Opa_Slide.png", 1, 4 }, 
    { IDIMG_COMMON_ICON_SOUI_SLIDER_BK, L"Control_Slider_Opa_Bar.png", 1, 1 },
    { IDIMG_COMMON_ICON_FX_ROUND, L"Common_Icon_FX_Round.png", 1, 1 },
};

