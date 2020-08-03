#pragma once

#include "CommResDefine.h"

//----------------------------------------------------
// 社交图片ID取值范围为500000-599999
//----------------------------------------------------

#define IDIMG_NNC_Futu_Certification                    5000000
#define IDIMG_NNC_Media_Certification                   5000001
#define IDIMG_NNC_Outstanding_Certification             5000002
#define IDIMG_NNC_Person_Certification                  5000003

#define IDIMG_NNC_Enter_Certification                   5000403 // 企业认证

#define IDIMG_IM_FIND_FRINED_SEARCH                     5001001

////////////////////////////////////////////////////////////////
// 资讯

#define IDIMG_News_Arrow_Last                           5100001
#define IDIMG_News_Arrow_Next                           5100002

#define IDIMG_News_BTN                                  5100003
#define IDIMG_News_Position                             5100004
#define IDIMG_News_Arrow_Last_Small     5100005
#define IDIMG_News_Arrow_Next_Small     5100006

#define IDIMG_IM_Bk_FaceDlgBottom       5400000
#define IDIMG_IM_Bk2_FaceDlgBottom      5400001
#define IDIMG_IM_Border_FaceDlg         5400002
#define IDIMG_IM_Btn_FaceDlgBottom      5400003
#define IDIMG_IM_Border_StockDlg        5400004

// 这些是资讯二级tab的图标定义，现在资讯二级tab都没有图标，所以全是0
#define IDIMG_TabIcon_News_Headlines        0
#define IDIMG_TabIcon_News_Express          0
#define IDIMG_TabIcon_News_Calendar         0
#define IDIMG_TabIcon_News_Watchlists       0
#define IDIMG_TabIcon_News_Topic            0
#define IDIMG_TabIcon_News_Notified         0
#define IDIMG_TabIcon_News_Columns          0
#define IDIMG_TabIcon_News_IPO              0
#define IDIMG_TabIcon_News_Fund             0
#define IDIMG_TabIcon_News_US               0
#define IDIMG_TabIcon_News_HK               0
#define IDIMG_TabIcon_News_Irregularity     0


////////////////////////////////////////////////////////////////
// 直播

//#define IDIMG_LIVE_BORDER_GRAY                          5500001
#define IDIMG_LIVE_ICON_SIGN_NORMAL						5500002
#define IDIMG_LIVE_ICON_SIGN_SELECTED					5500003
#define IDIMG_LIVE_ICON_UNFOLD						    5500004
#define IDIMG_LIVE_ICON_RETRACT                         5500005
#define IDIMG_LIVE_ICON_PACKUP                          5500006

#define IDIMG_LIVE_CARD_BLUE_SOCIAL                     5500007
#define IDIMG_LIVE_CARD_ORANGE_SOCIAL                   5500008

#define IDIMG_LIVE_BG_SHADE                             5500009

#define IDIMG_LIVE_MENU_ITEM_BKG                        5500010
#define IDIMG_LIVE_MENU_CHOOSE                          5500011
#define IDIMG_LIVE_MENU_BKG                             5500012

#define IDIMG_LIVE_ICON_SHARE                           5500013



//社交ID范围为500000-699999，新加ID请加在这行上面
//↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

static ImageListTable sg_imageListTable_Social[] =
{
    { IDIMG_NNC_Futu_Certification, L"Personal\\Btn_Futu_Certifica.png", 1, 1 },
    { IDIMG_NNC_Media_Certification, L"Personal\\Btn_Media_Certifica.png", 1, 1 },
    { IDIMG_NNC_Outstanding_Certification, L"Personal\\Btn_Good_Contributor.png", 1, 1 },
    { IDIMG_NNC_Person_Certification, L"Personal\\Btn_Person_Certifica.png", 1, 1 },
    { IDIMG_NNC_Enter_Certification, L"Personal\\Btn_Enter_Certifica.png", 1, 1 },

    { IDIMG_IM_FIND_FRINED_SEARCH, L"Base\\Main_InputSearch.png", 1, 4 },

    ////////////////////////////////////////////////////////////////
    // 资讯

    { IDIMG_News_Arrow_Last,    L"News\\News_Arrow_Last.png",   1, 3 },
    { IDIMG_News_Arrow_Next,    L"News\\News_Arrow_Next.png",   1, 3 },

    { IDIMG_News_Arrow_Last_Small, L"News\\News_Arrow_Last_Small.png", 1, 4 },
    { IDIMG_News_Arrow_Next_Small, L"News\\News_Arrow_Next_Small.png", 1, 4 },

    { IDIMG_IM_Bk_FaceDlgBottom, L"IM\\SNS_Action_Bg.png", 1, 1 },
    { IDIMG_IM_Bk2_FaceDlgBottom, L"IM\\SNS_Action_Bg_Selected2.png", 1, 1 },
    { IDIMG_IM_Border_FaceDlg, L"IM\\SNS_Action_Border.png", 1, 1 },
    { IDIMG_IM_Btn_FaceDlgBottom, L"IM\\SNS_Action_Bg_Selected.png", 1, 3 },
    { IDIMG_IM_Border_StockDlg, L"IM\\SNS_Stock_Border.png", 1, 1 },
    //{ IDIMG_NNC_Futu_Certification, L"Personal\\Btn_Futu_Certification.png", 1, 1 },
    //{ IDIMG_NNC_Media_Certification, L"Personal\\Btn_Media_Certification.png", 1, 1 },
    //{ IDIMG_NNC_Outstanding_Certification, L"Personal\\Btn_Outstanding_Contributor.png", 1, 1 },
    //{ IDIMG_NNC_Person_Certification, L"Personal\\Btn_Person_Certification.png", 1, 1 },
    { IDIMG_News_BTN,           L"News\\News_Btn_Bg.png",       1, 3 },
    { IDIMG_News_Position,      L"News\\News_Btn_Position.png", 1, 1 },

    ////////////////////////////////////////////////////////////////
    // 直播
    //{ IDIMG_LIVE_BORDER_GRAY,           L"Live\\Live_Border_Gray.png",          1, 1 },    
    { IDIMG_LIVE_ICON_SIGN_NORMAL,      L"Live\\Live_Icon_Sign_Normal.png",     1, 1 },
    { IDIMG_LIVE_ICON_SIGN_SELECTED,    L"Live\\Live_Icon_Sign_Selected.png",   1, 1 },

    { IDIMG_LIVE_ICON_UNFOLD,           L"Live\\Live_Icon_Unfold.png",          1, 4 },
    { IDIMG_LIVE_ICON_RETRACT,          L"Live\\Live_Icon_Retract.png",         1, 4 },
    { IDIMG_LIVE_ICON_PACKUP,           L"Live\\Live_Icon_Packup.png",          1, 1 },

    { IDIMG_LIVE_CARD_BLUE_SOCIAL,      L"Live\\Live_Card_Blue.png",            1, 3 },
    { IDIMG_LIVE_CARD_ORANGE_SOCIAL,    L"Live\\Live_Card_Orange.png",          1, 3 }, 

    { IDIMG_LIVE_BG_SHADE,              L"Live\\Live_Bg_Shade.png",             1, 1 },

    { IDIMG_LIVE_MENU_ITEM_BKG,         L"Live\\Live_Menu_ItemBK.png",          1, 2 },
    { IDIMG_LIVE_MENU_CHOOSE,           L"Live\\Live_Icon_MenuIcon_Choose.png", 1, 1 },
    { IDIMG_LIVE_MENU_BKG,              L"Live\\Live_Menu_WndBK_Normal.png",    1, 1 },

    { IDIMG_LIVE_ICON_SHARE,            L"Live\\Live_Icon_Share.png",    1, 4 },
};