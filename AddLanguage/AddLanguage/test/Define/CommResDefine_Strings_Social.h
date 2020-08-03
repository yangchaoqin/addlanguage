//社交与资讯专用文案映射表： 500000~599999 专用
//该文件主要目的：
//1. 避免和其他业务线一起改文案导致的冲突——划分大号段
//2. 避免业务线内部共同修改文案导致的冲突——PC社交与资讯内部划分小号段
//3. 避免像老PC那样，修改一个文案需要编译整个解决方案工程的问题——用不到的地方禁止引用该头文件，需要使用文案的地方自己在cpp文件中引用改文件
//该文件的文案存放在Social.ini中

//////////////////////////////////////////////////////////////////////////
//
// 下面是IM的: 500000-509999
//
//////////////////////////////////////////////////////////////////////////
#define IDS_IM_AddFriendWnd_UnknowFailRet                   501208      //IM-添加好友失败,未知错误原因

//////////////////////////////////////////////////////////////////////////
//
// 下面是直播的: 510000-519999
//
//////////////////////////////////////////////////////////////////////////
#define IDS_SNS_Live_RTMP_Link_Invalid_End_Preview          510001      // 结束预览
#define IDS_SNS_Live_RTMP_Link_Invalid_End_Live             510002      // 结束直播
#define IDS_SNS_Live_RTMP_Link_Invalid                      510003      // 直播链接无效，请重新发起直播并填写有效的直播链接
#define IDS_SNS_Live_RTMP_Network_Error                     510004      // 网络错误，请检查网络连接

#define IDS_SNS_Live_RTMP_Push_Address_Setting              510006      //直播间推流地址
#define IDS_SNS_Live_RTMP_How_Choose                        510007      //如何选择
#define IDS_SNS_Live_RTMP_Copy_RTMP_Mode                    510008      //RTMP链接复制
#define IDS_SNS_Live_RTMP_Push_Introduction                 510009      //每次重新开播，请在这里复制新的RTMP地址到你的直播软件中
#define IDS_SNS_Live_RTMP_Push_Address_Prefix               510010      //RTMP地址:
#define IDS_SNS_Live_RTMP_Copy_Link                         510011      //复制链接
#define IDS_SNS_Live_RTMP_Fill_RTMP_Mode                    510012      //RTMP链接填写
#define IDS_SNS_Live_RTMP_Style_RTMP                        510013      //请输入RTMP链接，格式rtmp://xxx
#define IDS_SNS_Live_RTMP_Style_HLS                         510014      //请输入HLS链接，格式http://xxx.m3u8
#define IDS_SNS_Live_RTMP_Invalid_Link                      510015      //链接获取失败，请检查网络
#define IDS_SNS_Live_RTMP_Network_Error_Confirm             510016      // 确定
#define IDS_SNS_Live_Question_Continue_Live                 510017      // 检测到上一次异常退出直播，是否要继续直播？
#define IDS_SNS_Live_Btn_Continue_Live                      510018      // 继续直播
#define IDS_SNS_Live_Btn_Start_New_Live                     510019      // 发起新直播
#define IDS_SNS_Live_Stc_Question_Function                  510020      // 提问功能
#define IDS_SNS_Live_Btn_Question_Open                      510021      // 开启
#define IDS_SNS_Live_Btn_Question_Close                     510022      // 关闭
#define IDS_SNS_Live_Text_Select_Wnd                        510023      // 选择窗口直播
#define IDS_SNS_Live_Text_Select_Wnd_Live                   510024      // 选择一个窗口直播
#define IDS_SNS_Live_Btn_Select_Wnd                         510025      // 选择窗口
#define IDS_SNS_Live_Btn_Confirm                            510026      // 确认
#define IDS_SNS_Live_Get_WndList_Faile                      510027      // 窗口拉取失败，请重试
#define IDS_SNS_Live_Text_Loading                           510028      // 加载中
#define IDS_SNS_Live_Text_Exception_Tips                    510029      // 窗口异常，请检查窗口状态
#define IDS_SNS_Live_Btn_Computer_Audio                     510030      // 电脑声音
#define IDS_SNS_Live_Text_Cannot_Watch_Live                 510039      // 你正在此直播室发起直播，不能观看直播

#define IDS_Live_Anchor_ToolBar_LiveTypeCamera				518028
#define IDS_SNS_Live_NoMic_Detect_Tips                      518056      //未检测到麦克风

#define IDS_SNS_Live_DefaultOfflinePostText					518180      //直播已结束


//////////////////////////////////////////////////////////////////////////
//
// 下面是资讯的: 520000-529999
//
//////////////////////////////////////////////////////////////////////////

#define IDS_News_Watchlists_All                             520001      // 全部
#define IDS_News_Watchlists_Position                        520002      // 持仓
#define IDS_News_Watchlists_Star                            520003      // 特别关注

#define IDS_News_Time_Just                                  520004      // 刚刚
#define IDS_News_Time_Min_Ago                               520005      // 分钟前
#define IDS_News_Time_Mins_Ago                              520006      // 分钟前

#define IDS_News_AnnouncementType_All                       520201      // 全部公告
#define IDS_News_AnnouncementType_EARNINGS                  520202      // 业绩公告
#define IDS_News_AnnouncementType_TRADE                     520203      // 交易相关
#define IDS_News_AnnouncementType_EQUITY                    520204      // 股权股本
#define IDS_News_AnnouncementType_MAJOR_ISSUE               520205      // 重大事项
#define IDS_News_AnnouncementType_OTHER                     520206      // 其他公告

#define IDS_News_Headlines                                  520301      // 要闻
#define IDS_News_Express                                    520302      // 快讯
#define IDS_News_Calendar                                   520303      // 日历
#define IDS_News_Watchlists                                 520304      // 自选
#define IDS_News_Topic                                      520305      // 专题
#define IDS_News_Notified                                   520306      // 推送
#define IDS_News_Columns                                    520307      // 专栏
#define IDS_News_IPO                                        520308      // 新股
#define IDS_News_Fund                                       520309      // 基金
#define IDS_News_US                                         520310      // 美股
#define IDS_News_HK                                         520311      // 港股
#define IDS_News_Irregularity                               520312      // 异动

#define ID_Text_Social_RoadShow_Audience                    520030
#define ID_Text_Social_RoadShow_All                         520031
#define ID_Text_Social_RoadShow_Stockholder                 520032
#define ID_Text_Social_RoadShow_Assets                      520033
#define ID_Text_Social_RoadShow_Account                     520034
#define ID_Text_Social_RoadShow_ChatRoom                    520035
#define ID_Text_Social_RoadShow_NoAudience                  520036
#define ID_Text_Social_RoadShow_ClickInput                  520037

#define ID_Text_Social_RoadShow_Brief_StockSholder          520090
#define ID_Text_Social_RoadShow_Brief_Assets                520091
#define ID_Text_Social_RoadShow_Brief_Account               520092

//////////////////////////////////////////////////////////////////////////
//
// 下面是牛牛圈的: 530000-539999
//
//////////////////////////////////////////////////////////////////////////

#define IDS_NNC_VERIFY_ENTERPRISE                           530320      // 企业认证
#define IDS_NNC_VERIFY_PERSON                               530321      // 个人认证
#define IDS_NNC_VERIFY_FUTU                                 530322      // 富途官方认证
#define IDS_NNC_VERIFY_MEDIA                                530323      // 媒体认证
#define IDS_NNC_VERIFY_HONOR                                530324      // 优势贡献者

//////////////////////////////////////////////////////////////////////////
//
// 下面是预留的空号段: 540000-549999
//
//////////////////////////////////////////////////////////////////////////