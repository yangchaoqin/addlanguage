
#pragma once

typedef const char* CLRCharCP;
inline bool IsColorNameNotValid(CLRCharCP pColorName)
{
    return (pColorName != 0 && pColorName[0] != '\0');
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
////新颜色系统 宏
// 宏定义规则 CLR_"key字符串 除去开头的style_之后的部分 以及将\\用__代替"

#define CLR_common__block_third					            "style_common\\block_third"  //三级背景
#define CLR_common__block_hover_gray					    "style_common\\block_hover_gray"  //悬浮态
#define CLR_common__text_warn								"style_common\\text_warn"  //告警颜色
#define CLR_common__text_white								"style_common\\text_white"	//纯白文字
#define CLR_common__block_tips_wnd							"style_common\\block_tips_wnd"  //窗口背景色
#define CLR_common__link_pressed							"style_common\\link_pressed"  //
#define CLR_common__block_warn							    "style_common\\block_warn"  //


#define CLR_pub_view_hsgt__title_text					    "style_pub_view_hsgt\\title_text"  //标题颜色
#define CLR_pub_view_hsgt__panel_bg					        "style_pub_view_hsgt\\panel_bg"  //窗口背景
#define CLR_pub_view_hsgt__region_bg					    "style_pub_view_hsgt\\region_bg"  //区域背景
#define CLR_pub_view_hsgt__updatetime_text					"style_pub_view_hsgt\\updatetime_text"  //更新时间字体
#define CLR_pub_view_hsgt__sub_title_text					"style_pub_view_hsgt\\sub_title_text"  //次标题颜色
#define CLR_pub_view_hsgt__chart_shanghai					"style_pub_view_hsgt\\chart_shanghai"  //上海紫
#define CLR_pub_view_hsgt__chart_shenzhen					"style_pub_view_hsgt\\chart_shenzhen"  //深圳黄
#define CLR_pub_view_hsgt__index_shanghai					"style_pub_view_hsgt\\index_shanghai"  //上证指数线
#define CLR_pub_view_hsgt__index_shenzhen					"style_pub_view_hsgt\\index_shenzhen"  //深证指数线
#define CLR_pub_view_hsgt__index_hongkong					"style_pub_view_hsgt\\index_hongkong"  //恒生指数线
#define CLR_pub_view_hsgt__chart_shanghai_disable			"style_pub_view_hsgt\\chart_shanghai_disable"  //禁用_上海紫
#define CLR_pub_view_hsgt__chart_shenzhen_disable			"style_pub_view_hsgt\\chart_shenzhen_disable"  //禁用_深圳黄
#define CLR_pub_view_hsgt__index_shanghai_disable			"style_pub_view_hsgt\\index_shanghai_disable"  //禁用_上证指数线
#define CLR_pub_view_hsgt__index_shenzhen_disable			"style_pub_view_hsgt\\index_shenzhen_disable"  //禁用_深证指数线
#define CLR_pub_view_hsgt__index_hongkong_disable		    "style_pub_view_hsgt\\index_hongkong_disable"  //禁用_恒生指数线
#define CLR_pub_view_hsgt__notebtn_nomarl					"style_pub_view_hsgt\\notebtn_nomarl"  //标注按钮默认态
#define CLR_pub_view_hsgt__notebtn_hover					"style_pub_view_hsgt\\notebtn_hover"  //标注按钮hover态
#define CLR_pub_view_hsgt__notebtn_click					"style_pub_view_hsgt\\notebtn_click"  //标注按钮click态
#define CLR_pub_view_hsgt__notebtn_nomarl_disable			"style_pub_view_hsgt\\notebtn_nomarl_disable"  //禁用_标注按钮默认态
#define CLR_pub_view_hsgt__notebtn_hover_disable			"style_pub_view_hsgt\\notebtn_hover_disable"  //禁用_标注按钮hover态
#define CLR_pub_view_hsgt__notebtn_click_disable			"style_pub_view_hsgt\\notebtn_click_disable"  //禁用_标注按钮click态

#define CLR_skin_view_dscjtj__line_index					"style_skin_view_dscjtj\\line_index"  //恒指收盘价曲线颜色
#define CLR_skin_view_dscjtj__dashboard_text				"style_skin_view_dscjtj\\dashboard_text"  //恒指收盘价曲线颜色
#define CLR_skin_view_dscjtj__per_call						"style_skin_view_dscjtj\\per_call"  //比例图-认购
#define CLR_skin_view_dscjtj__per_put						"style_skin_view_dscjtj\\per_put"  //比例图-认沽
#define CLR_skin_view_dscjtj__per_bull						"style_skin_view_dscjtj\\per_bull"  //比例图-牛
#define CLR_skin_view_dscjtj__per_bear						"style_skin_view_dscjtj\\per_bear"  //比例图-熊

#define CLR_skin_view_dscjtj__dashboard_start				"style_skin_view_dscjtj\\dashboard_start"  //仪表盘-渐变起点
#define CLR_skin_view_dscjtj__dashboard_end					"style_skin_view_dscjtj\\dashboard_end"  //仪表盘-渐变终点
#define CLR_skin_view_dscjtj__dashboard_pointer				"style_skin_view_dscjtj\\dashboard_pointer"  //仪表盘-指针

#define CLR_skin_view_dscjtj__longposition					"style_skin_view_dscjtj\\longposition"  //好仓
#define CLR_skin_view_dscjtj__text_longposition				"style_skin_view_dscjtj\\text_longposition"  //好仓
#define CLR_skin_view_dscjtj__longposition_title			"style_skin_view_dscjtj\\longposition_title"  //好仓-标题背景
#define CLR_skin_view_dscjtj__text_longposition_title		"style_skin_view_dscjtj\\text_longposition_title"  //好仓-标题文案
#define CLR_skin_view_dscjtj__longposition_content			"style_skin_view_dscjtj\\longposition_content"  //好仓-内容背景
#define CLR_skin_view_dscjtj__text_longposition_content_h1	"style_skin_view_dscjtj\\text_longposition_content_h1"  //好仓-内容文案
#define CLR_skin_view_dscjtj__text_longposition_content_h3	"style_skin_view_dscjtj\\text_longposition_content_h3"  //好仓-内容文案

#define CLR_skin_view_dscjtj__shortposition					"style_skin_view_dscjtj\\shortposition"  //淡仓
#define CLR_skin_view_dscjtj__text_shortposition			"style_skin_view_dscjtj\\text_shortposition"  //淡仓
#define CLR_skin_view_dscjtj__shortposition_title			"style_skin_view_dscjtj\\shortposition_title"  //淡仓-标题背景
#define CLR_skin_view_dscjtj__text_shortposition_title		"style_skin_view_dscjtj\\text_shortposition_title"  //淡仓-标题文案
#define CLR_skin_view_dscjtj__shortposition_content         "style_skin_view_dscjtj\\shortposition_content"  //淡仓-内容背景
#define CLR_skin_view_dscjtj__text_shortposition_content_h1 "style_skin_view_dscjtj\\text_shortposition_content_h1"  //淡仓-内容文案
#define CLR_skin_view_dscjtj__text_shortposition_content_h3 "style_skin_view_dscjtj\\text_shortposition_content_h3"  //淡仓-内容文案

#define CLR_skin_view_datacenter__block_iceblue        "style_skin_view_datacenter\\block_iceblue"  //冰蓝
#define CLR_skin_view_datacenter__block_peach          "style_skin_view_datacenter\\block_peach"  //桃红
#define CLR_skin_view_datacenter__block_crimson          "style_skin_view_datacenter\\block_crimson"  //深红
#define CLR_skin_view_datacenter__block_petrol          "style_skin_view_datacenter\\block_petrol"  //深绿
#define CLR_skin_view_datacenter__textNomarl        CLR_skin_label_Text__Normal_2  //


#define CLR_skin_gridcols_manager_dlg__gridcols_manager_line        "style_skin_gridcols_manager_dlg\\gridcols_manager_line"  //表头管理窗口边框线
#define CLR_skin_gridcols_manager_dlg__fixline                      "style_skin_gridcols_manager_dlg\\fixline"  //表头管理窗口 固定列分割线
#define CLR_skin_gridcols_manager_dlg__editbg                      "style_skin_gridcols_manager_dlg\\editbg"  //表头管理窗口 编辑框的背景色

#define CLR_skin_line_HomePage__blankPanel_virtualBorder			"style_skin_line_HomePage\\blankPanel_virtualBorder"	//面板空标签页-虚线框颜色
#define CLR_skin_line_HomePage__btn_underline						"style_skin_line_HomePage\\btn_underline"				//面板空标签页-按钮下划线颜色

#define CLR_skin_line_Card__HKBroker_Rank1							"style_skin_line_Card\\HKBroker_Rank1"			//右侧详情卡片-经纪商持股-Rank1
#define CLR_skin_line_Card__HKBroker_Rank1Disable					"style_skin_line_Card\\HKBroker_Rank1Disable"	//右侧详情卡片-经纪商持股-Rank1Disable
#define CLR_skin_line_Card__HKBroker_Rank2							"style_skin_line_Card\\HKBroker_Rank2"			//右侧详情卡片-经纪商持股-Rank2
#define CLR_skin_line_Card__HKBroker_Rank2Disable					"style_skin_line_Card\\HKBroker_Rank2Disable"	//右侧详情卡片-经纪商持股-Rank2Disable
#define CLR_skin_line_Card__HKBroker_Rank3							"style_skin_line_Card\\HKBroker_Rank3"			//右侧详情卡片-经纪商持股-Rank3
#define CLR_skin_line_Card__HKBroker_Rank3Disable					"style_skin_line_Card\\HKBroker_Rank3Disable"	//右侧详情卡片-经纪商持股-Rank3Disable
#define CLR_skin_line_Card__HKBroker_Rank4							"style_skin_line_Card\\HKBroker_Rank4"			//右侧详情卡片-经纪商持股-Rank4
#define CLR_skin_line_Card__HKBroker_Rank4Disable					"style_skin_line_Card\\HKBroker_Rank4Disable"	//右侧详情卡片-经纪商持股-Rank4Disable
#define CLR_skin_line_Card__HKBroker_Rank5							"style_skin_line_Card\\HKBroker_Rank5"			//右侧详情卡片-经纪商持股-Rank5
#define CLR_skin_line_Card__HKBroker_Rank5Disable					"style_skin_line_Card\\HKBroker_Rank5Disable"	//右侧详情卡片-经纪商持股-Rank5Disable

#define CLR_skin_line_ClosePrice__Card_ClosePrice					"style_skin_line_ClosePrice\\Card_ClosePrice"	//右侧详情卡片-收盘价颜色

#define CLR_skin_line_Position__cost								"style_skin_line_Position\\cost"				//持仓线 线条颜色
#define CLR_skin_line_Position__cost_rect_text						"style_skin_line_Position\\cost_rect_text"		//持仓线 边框文字
#define CLR_skin_line_Position__cost_rect_border					"style_skin_line_Position\\cost_rect_border"	//持仓线 边框颜色
#define CLR_skin_line_Position__cost_rect_bk						"style_skin_line_Position\\cost_rect_bk"		//持仓线 边框背景

#define CLR_skin_line_klgap__gap_bk							        "style_skin_line_klgap\\gap_bk"				    //持仓线 线条颜色
#define CLR_skin_line_klgap__markup_text						    "style_skin_line_klgap\\markup_text"		    //持仓线 边框文字

#define CLR_skin_line_Drawtrade_line_cost							"style_skin_line_Drawtrade\\line_cost"			//持仓线颜色
#define CLR_skin_line_Drawtrade_line_buy							"style_skin_line_Drawtrade\\line_buy"			//买入线条颜色
#define CLR_skin_line_Drawtrade_line_sell							"style_skin_line_Drawtrade\\line_sell"			//卖出线条颜色
#define CLR_skin_line_Drawtrade_line_all							"style_skin_line_Drawtrade\\line_all"			//平仓线条颜色
#define CLR_skin_line_Drawtrade_drag_cancel							"style_skin_line_Drawtrade\\drag_cancel"		//取消操作背景
#define CLR_skin_line_Drawtrade_drag_cancel_hover					"style_skin_line_Drawtrade\\drag_cancel_hover"	//取消操作背景hover
#define CLR_skin_line_Drawtrade_drag_cancel_txt						"style_skin_line_Drawtrade\\drag_cancel_txt"		//取消操作文字
#define CLR_skin_line_Drawtrade_drag_cancel_hover_txt				"style_skin_line_Drawtrade\\drag_cancel_hover_txt"	//取消操作文字hover
#define CLR_skin_line_Drawtrade_line_prce_bk						"style_skin_line_Drawtrade\\line_price_bk"			//线条价格框背景颜色

#define CLR_skin_view_hqpermission__right_btn_text				    "style_skin_view_hqpermission\\right_btn_text"  //卡片行情权限入口 右侧按钮文字颜色
#define CLR_skin_view_hqpermission__left_label_text				    "style_skin_view_hqpermission\\left_label_text"	//卡片行情权限入口 左侧按钮文字颜色

/////////////////////////////////////////////////////////////////////////   
//<!-- 边框线  -->
#define CLR_skin_line_border__press                                 "style_skin_line_border\\press"                 //边框线 图表setting取色按钮, 画线文字输入边框,资金流向边框,  IM消息框图片选中边框
#define CLR_skin_line_border__hot                                   "style_skin_line_border\\hot"                   //边框线 grid border (自选股组件， 新闻）+ 个股窗border
#define CLR_skin_line_border__Kline                                 "style_skin_line_border\\Kline"                 //边框线 title border 边线 + 分时k线图的border
#define CLR_skin_line_border__GridHeaderBorder                      "style_skin_line_border\\GridHeaderBorder"      //边框线 grid header border
#define CLR_skin_line_border__Menu                                  "style_skin_line_border\\Menu_Border"			//边框线 菜单边框
#define CLR_skin_line_border__Wnd_Border                            "style_skin_line_border\\Wnd_Border"			//边框线 弹窗

//<!-- - 价格  -->
#define CLR_skin_label_price__red                                   "style_skin_label_price\\red"                   //价格 价格红
#define CLR_skin_label_price__green                                 "style_skin_label_price\\green"                 //价格 价格绿
#define CLR_skin_label_price__gray                                  "style_skin_label_price\\gray"                  //价格 价格灰

//<!-- - 价格闪动填充  -->
#define CLR_skin_view_price__red_beat                               "style_skin_view_price\\red_beat"               //价格闪动填充 价格闪动的红色
#define CLR_skin_view_price__green_beat                             "style_skin_view_price\\green_beat"             //价格闪动填充 价格闪动的绿色
#define CLR_skin_view_price__blockRed                               "style_skin_view_price\\blockRed"               //价格闪动填充 价格闪框红
#define CLR_skin_view_price__blockGreen                             "style_skin_view_price\\blockGreen"             //价格闪动填充 价格闪框绿


//<!-- - 收盘价格  -->
#define CLR_skin_line_ClosingpricePrice__Strong                     "style_skin_line_ClosingpricePrice\\Strong"     //收盘价格


//<!-- - 概率卡片价格颜色 -->
#define CLR_skin_view_Cardcolor__blockRise                 "style_skin_view_Cardcolor\\blockRise"        //概率卡片价格 涨色块颜色
#define CLR_skin_view_Cardcolor__blockFall                 "style_skin_view_Cardcolor\\blockFall"        //概率卡片价格 跌色块颜色
#define CLR_skin_view_Cardcolor__blockStable               "style_skin_view_Cardcolor\\blockStable"      //概率卡片价格 平色块颜色



//<!-- - 通用格式化显示股票代码名称(没有使用) -->
//1001200 = 255, 253, 190, 65;                   "style_skin_view_StockName\\"                           //(没有使用) 通用格式化显示股票代码名称


//<!-- - 背景色   -->
#define CLR_skin_view_color__backColor1                    "style_skin_view_color\\backColor1"            //通用背景色（右侧摘要、指标管理、数据、策略左侧）
#define CLR_skin_view_color__backColor2                    "style_skin_view_color\\backColor2"            //通用背景色（可跟1001300合并为一个）
#define CLR_skin_view_color__secondBackColor               "style_skin_view_color\\secondBackColor"       //次要背景色


//<!-- - (没有使用) 反色文字 - Btn “分类”“港股通 -->
//1001310 = 255, 28, 32, 35;                     "style_skin_label_BtnColor\\"                               //(没有使用) 反色文字 - Btn “分类”“港股通"


//<!-- - 行情交易自选股右侧快捷交易按钮  -->
#define CLR_skin_button_color__state                       "style_skin_button_color\\state"               //已加入自选股 + 行情状态”实时" + 好友自选股"相似度"
#define CLR_skin_button_color__tradeButton                 "style_skin_button_color\\tradeButton"         //右侧快捷交易按钮 txt


//<!-- - 到价提示 -->
#define CLR_skin_view_point__drag                          "style_skin_view_point\\drag"                  //列表拖放插入位置提示
#define CLR_skin_view_point__popup                         "style_skin_view_point\\popup"                 //到价提醒消息窗口背景   
#define CLR_skin_view_point__tintbg                        "style_skin_view_point\\tintbg"                //到价提醒消息窗口 txt
#define CLR_skin_view_point__mouseover                     "style_skin_view_point\\mouseover"             //到价提醒消息窗口悬浮态 


//<!-- - 买档   -->
#define CLR_skin_label_color__drag                  "style_skin_label_color\\drag"                        //买卖档占比文字 
#define CLR_skin_label_color__buyOrder1             "style_skin_label_color\\buyOrder1"                   //买一档底色
#define CLR_skin_label_color__buyOrder2             "style_skin_label_color\\buyOrder2"                   //买档、经纪间隔色
#define CLR_skin_label_color__buyOrder3             "style_skin_label_color\\buyOrder3"                   //买档、经纪间隔色
#define CLR_skin_label_color__sellOrder1            "style_skin_label_color\\sellOrder1"                  //卖一档底色
#define CLR_skin_label_color__sellOrder2            "style_skin_label_color\\sellOrder2"                  //卖档、经纪间隔色
#define CLR_skin_label_color__sellOrder3            "style_skin_label_color\\sellOrder3"                  //卖档、经纪间隔色
#define CLR_skin_label_color__LineBuyOrder          "style_skin_label_color\\LineBuyOrder"                //买档、买盘经纪分割线颜色
#define CLR_skin_label_color__LineSellOrder         "style_skin_label_color\\LineSellOrder"               //卖档、卖盘经纪分割线颜色


//<!-- - 自选股  -->
#define CLR_skin_label_stock__texth1                "style_skin_label_stock\\texth1"                      //自选股列表 - 股票code txt
#define CLR_skin_label_stock__texth3                "style_skin_label_stock\\texth3"                      //自选股Grid - Folder上的时间 txt


//<!-- - 竖线颜色  -->
#define CLR_skin_line_color__linedrag               "style_skin_line_color\\linedrag"                     //拖拉head 的竖线颜色
#define CLR_skin_line_color__text_h1                "style_skin_line_color\\text_h1"                      //市场未添加到自选股的股票名称


//<!-- - 买盘经纪 -->
#define CLR_skin_label_id__buy_order                "style_skin_label_id\\buy_order"                      //买盘经纪id
#define CLR_skin_label_id__sell_order               "style_skin_label_id\\sell_order"                     //卖盘经纪id


//<!-- - 多股同列 -->
#define CLR_skin_label_muchList__text_h1                  "style_skin_label_muchList\\text_h1"                         //多股同列 - 组合popup - "x行 x 列" txt
#define CLR_skin_label_muchList__line_default             "style_skin_label_muchList\\line_default"                    //多股同列 单元格 border1
#define CLR_skin_label_muchList__block_default            "style_skin_label_muchList\\block_default"                   //多股同列 单元格 border2
#define CLR_skin_label_muchList__card_selected            "style_skin_label_muchList\\card_selected"                   //多股同列 单元格 选中 border1
#define CLR_skin_label_muchList__card_selected2           "style_skin_label_muchList\\card_selected2"                  //多股同列 单元格 选中 border2
#define CLR_skin_label_muchList__block_tab2               "style_skin_label_muchList\\block_tab2"                      //多股同列 单元格 标题栏



//<!-- - 分时  -->
#define CLR_skin_line_time__blocktab2               "style_skin_line_time\\blocktab2"                                 //经纪监察组件 - grid下的报价区bk
#define CLR_skin_line_time__line_timeline           "style_skin_line_time\\line_timeline"                             //分时 - 分时走势
#define CLR_skin_line_time__line_average            "style_skin_line_time\\line_average"                              //分时 - 均线
#define CLR_skin_line_time__block_tab2              "style_skin_line_time\\block_tab2"                                //分时 - 中间线 
#define CLR_skin_line_time__block_tab2_1            "style_skin_line_time\\block_tab2_1"                              //分时 - 成交量区 - 上方的分隔线
#define CLR_skin_line_time__block_tab2_2            "style_skin_line_time\\block_tab2_2"                              //分时 - 日分隔线


//<!-- - k线 - 时段区  -->
#define CLR_skin_line_KInterval__block_default      "style_skin_line_KInterval\\block_default"                         //k线 - 时段区 - bk       
#define CLR_skin_line_KInterval__block_tab1         "style_skin_line_KInterval\\block_tab1"                            //k线 - 时段区 - 年标识纵线
#define CLR_skin_line_KInterval__block_tab1_1       "style_skin_line_KInterval\\block_tab1_1"                          //k线 - 时段区 - 曲线
#define CLR_skin_line_KInterval__midgray            "style_skin_line_KInterval\\midgray"                               //k线 - 时段区 - 箭头
#define CLR_skin_line_KInterval__block_second       "style_skin_line_KInterval\\block_second"                          //k线 - 时段区 - 曲线围成的区域填充


//<!-- - k线 - 时段区 滑块 -->
#define CLR_skin_line_KSlideBlock__white_5           "style_skin_line_KSlideBlock\\white_5"                            //k线 - 时段区 - 滑块default
#define CLR_skin_line_KSlideBlock__white_8           "style_skin_line_KSlideBlock\\white_8"                            //k线 - 时段区 - 滑块mouseover


//<!-- - (没有使用，代码还存在)k线 - EMV指标中间线 -->
//1002220=255,120,120,120                             "style_skin_line_KMiddle\\" ;                                    //(没有使用，代码还存在)k线 - EMV指标中间线 


//<!-- - k线 - 指标栏头部  指标值 - focus外框 -->
#define CLR_kin_line_KValueFrame__block_tab2           "style_skin_line_KValueFrame\\block_tab2"                       //k线 - 指标栏头部
#define CLR_skin_line_KValueFrame__line_highlight1     "style_skin_line_KValueFrame\\line_highlight1"                  //k线 - 指标值 - focus外框


//<!-- - k线 - 区间统计-->
#define CLR_skin_line_KStatisBlock__highlight1          "style_skin_line_KStatisBlock\\highlight1"                     //k线 - 区间统计 - 拖拉框
#define CLR_skin_line_KStatisBlock__highlight2          "style_skin_line_KStatisBlock\\highlight2"                     //k线 - 区间统计 - 选择区虚线框线
#define CLR_skin_line_KStatisBlock__highlight2_2        "style_skin_line_KStatisBlock\\highlight2_2"                   //k线 - 区间统计 - 选择区虚线框点 
#define CLR_skin_line_KStatisBlock__white_8             "style_skin_line_KStatisBlock\\white_8"                        //k线 - 区间统计 - 选择区背景(半透明)
#define CLR_skin_line_KStatisBlock__light               "style_skin_line_KStatisBlock\\light"                          //k线 - 区间统计 - 统计窗 - 分割线

//<!-- - k线 - 主图指标蒙层-->
#define CLR_skin_line_Main_index_bk                               "style_skin_mask\\Chart"                                            //K线主图指标蒙层

//<!-- - k线 - 除权-->
#define CLR_skin_line_KStatisBlock_chuquan__highlight             "style_skin_line_KStatisBlock_chuquan\\highlight"                   //k线 - 除权 - "q" txt normal
#define CLR_skin_line_KStatisBlock_chuquan__highlight_mouseover   "style_skin_line_KStatisBlock_chuquan\\highlight_mouseover"         //k线 - 除权 - "q" txt focus
#define CLR_skin_line_KStatisBlock_chuquan__highlight_1           "style_skin_line_KStatisBlock_chuquan\\highlight_1"                 //k线 - 除权 - 气泡Tips - title txt - 如"权息资料变动"
#define CLR_skin_line_KStatisBlock_chuquan__text_h1               "style_skin_line_KStatisBlock_chuquan\\text_h1"                     //k线 - 除权 - 气泡Tips - 正文 txt 
#define CLR_skin_line_KStatisBlock_chuquan__white_1               "style_skin_line_KStatisBlock_chuquan\\white_1"                     //k线 - 除权 - Btn txt normal 
#define CLR_skin_line_KStatisBlock_chuquan__white_2               "style_skin_line_KStatisBlock_chuquan\\white_2"                     //k线 - 除权 - Btn txt over


//<!-- - k线 - 视图区域内 -->
#define CLR_skin_line_KView__second                               "style_skin_line_KView\\second"                                     //K线 - 视图区域内最高价高低价 - 斜线 
#define CLR_kin_line_KView__text_h2                               "style_skin_line_KView\\text_h2"                                    //K线 - 视图区域内最高价高低价 - 价格


//<!-- - k线 - 网格线 -->
#define CLR_skin_line_KGrid__graphic_1                            "style_skin_line_KGrid\\graphic_1"                                  //分时k线 - 网格线 - 横向       
#define CLR_skin_line_KGrid__graphic_2                            "style_skin_line_KGrid\\graphic_2"                                  //分时k线 - 网格线 - 纵向


//<!-- - 分时k线 - 十字线报价框 - bk -->
#define CLR_skin_line_ReticleFrame__quoteframe                    "style_skin_line_ReticleFrame\\quoteframe"                          //分时k线 - 十字线报价框 - bk


//<!-- - 分时k线 - 十字线 -->
#define CLR_skin_line_Reticle__cross                              "style_skin_line_Reticle\\cross"                                    //分时k线 - 十字线
#define CLR_SKIN_LINE_RETICLE__REFLINE							  "style_skin_line_Reticle\\Refline"								  //副图参考线

//<!-- - (没有使用)分时k线 - 画线 -->
//1002290 = 255, 255, 255, 64;                                    "style_skin_line_Draw\\"                                            //(没有使用) 分时k线 - 画线 - 线条color
//1002291 = 255, 186, 69, 151;                                    "style_skin_line_Draw\\"                                            //(没有使用) 分时k线 - 画线 - 文本对象bk


//<!-- - 分时k线 - 现价线 -->
#define CLR_skin_line_Now__price                                  "style_skin_line_Now\\price"                                        //分时k线 - 现价线 


//<!-- - 分时k线 - 叠加股票 -->
#define CLR_skin_line_StockSum__ocean                             "style_skin_line_StockSum\\ocean"                                   //分时k线 - 叠加股票1 
#define CLR_skin_line_StockSum__sutan                             "style_skin_line_StockSum\\sutan"                                   //分时k线 - 叠加股票2
#define CLR_skin_line_StockSum__mint                              "style_skin_line_StockSum\\mint"                                    //分时k线 - 叠加股票3
#define CLR_skin_line_StockSum__white                             "style_skin_line_StockSum\\white"                                   //分时k线 - 叠加选中色 

#define CLR_skin_line_USBA__dividing_line						"style_skin_line_USBA\\dividing_line"                                //盘前盘后分K-分割线颜色
#define CLR_skin_line_USBA__shade								"style_skin_line_USBA\\shade"										 //盘前盘后分K-遮罩颜色

//<!-- - 到价提醒线 -->
#define CLR_skin_line_price__remind_rise                        "style_skin_line_price\\remind_rise"                                //到价提醒线 - 上涨线常规颜色  1
#define CLR_skin_line_price__highlight2_1                       "style_skin_line_price\\highlight2_1"                               //到价提醒线 - 上涨线鼠标经过颜色  1
#define CLR_skin_line_price__text_h3_1                          "style_skin_line_price\\text_h3_1"                                  //到价提醒线 - 上涨线文字常规颜色  1
#define CLR_skin_line_price__text_hover_1                      "style_skin_line_price\\text_hover_1"                             //到价提醒线 - 上涨线文字经过颜色  1
#define CLR_skin_line_price__remind_fall                        "style_skin_line_price\\remind_fall"                                //到价提醒线 - 下跌线常规颜色  1
#define CLR_skin_line_price__highlight1_1                       "style_skin_line_price\\highlight1_1"                               //到价提醒线 - 下跌线鼠标经过颜色
#define CLR_skin_line_price__text_h3_2                          "style_skin_line_price\\text_h3_2"                                  //到价提醒线 - 下跌线文字常规颜色  1
#define CLR_skin_line_price__text_hover_2                      "style_skin_line_price\\text_hover_2"                              //到价提醒线 - 下跌线文字经过颜色  1
#define CLR_skin_line_price__highlight2_2                       "style_skin_line_price\\highlight2_2"                               //到价提醒线 - 上涨鼠标经过时左右坐标区价格背景色  1
#define CLR_skin_line_price__highlight1_2                       "style_skin_line_price\\highlight1_2"                               //到价提醒线 - 下跌鼠标经过时左右坐标区价格背景色  1


//<!-- - 窝轮grid  -->
#define CLR_skin_view_grid__default1                            "style_skin_view_grid\\default1"                               //窝轮grid - 代码 - 行交替色1 
#define CLR_skin_view_grid__default2                            "style_skin_view_grid\\default2"                               //窝轮grid - 代码 - 行交替色2
#define CLR_skin_view_grid__default3                            "style_skin_view_grid\\default3"                               //窝轮grid - 最新价 - 行交替色 
#define CLR_skin_view_grid__default4                            "style_skin_view_grid\\default4"                               //窝轮grid - 最新价 - 行交替色
#define CLR_skin_view_grid__default5                            "style_skin_view_grid\\default5"                               //窝轮grid - 涨跌% - 行交替色
#define CLR_skin_view_grid__default6                            "style_skin_view_grid\\default6"                               //窝轮grid - 涨跌% - 行交替色
#define CLR_skin_view_grid__default7                            "style_skin_view_grid\\default7"                               //窝轮grid - 买价 - 行交替色
#define CLR_skin_view_grid__default8                            "style_skin_view_grid\\default8"                               //窝轮grid - 买价 - 行交替色
#define CLR_skin_view_grid__default11                           "style_skin_view_grid\\default11"                              //窝轮grid - 卖价 - 行交替色
#define CLR_skin_view_grid__default12                           "style_skin_view_grid\\default12"                              //窝轮grid - 卖价 - 行交替色
#define CLR_skin_view_grid__default13                           "style_skin_view_grid\\default13"                              //窝轮grid - 成交量 - 行交替色 
#define CLR_skin_view_grid__default14                           "style_skin_view_grid\\default14"                              //窝轮grid - 成交量 - 行交替色
#define CLR_skin_view_grid__default15                           "style_skin_view_grid\\default15"                              //窝轮grid - 买量 - 行交替色
#define CLR_skin_view_grid__default16                           "style_skin_view_grid\\default16"                              //窝轮grid - 买量 - 行交替色
#define CLR_skin_view_grid__default17                           "style_skin_view_grid\\default17"                              //窝轮grid - 卖量 - 行交替色
#define CLR_skin_view_grid__default18                           "style_skin_view_grid\\default18"                              //窝轮grid - 卖量 - 行交替色
#define CLR_skin_view_grid__default21                           "style_skin_view_grid\\default21"                              //窝轮grid - 成交额 - 行交替色
#define CLR_skin_view_grid__default22                           "style_skin_view_grid\\default22"                              //窝轮grid - 成交额 - 行交替色
#define CLR_skin_view_grid__default23                           "style_skin_view_grid\\default23"                              //窝轮grid - 溢价 - 行交替色 
#define CLR_skin_view_grid__default24                           "style_skin_view_grid\\default24"                              //窝轮grid - 溢价 - 行交替色
#define CLR_skin_view_grid__default25                           "style_skin_view_grid\\default25"                              //窝轮grid - 有效杠杆 - 行交替色
#define CLR_skin_view_grid__default26                           "style_skin_view_grid\\default26"                              //窝轮grid - 有效杠杆 - 行交替色
#define CLR_skin_view_grid__default27                           "style_skin_view_grid\\default27"                              //窝轮grid - 对冲值 - 行交替色 
#define CLR_skin_view_grid__default28                           "style_skin_view_grid\\default28"                              //窝轮grid - 对冲值 - 行交替色
#define CLR_skin_view_grid__default31                           "style_skin_view_grid\\default31"                              //窝轮grid - 引伸波幅 - 行交替色
#define CLR_skin_view_grid__default32                           "style_skin_view_grid\\default32"                              //窝轮grid - 引伸波幅 - 行交替色


//<!-- - 窝轮2 grid2  -->
#define CLR_skin_view_grid2__steel                              "style_skin_view_grid2\\steel"           //窝轮grid - 买价 - 数值color
#define CLR_skin_view_grid2__blush                              "style_skin_view_grid2\\blush"           //窝轮grid - 卖价 - 数值color
#define CLR_skin_view_grid2__steel2                             "style_skin_view_grid2\\steel2"          //窝轮grid - 买量 - 数值color
#define CLR_skin_view_grid2__blush2                             "style_skin_view_grid2\\blush2"          //窝轮grid - 卖量 - 数值color 
#define CLR_skin_view_grid2__ochre                              "style_skin_view_grid2\\ochre"           //窝轮grid - 溢价 - 数值color 
#define CLR_skin_view_grid2__metal                              "style_skin_view_grid2\\metal"           //窝轮grid - 有效杠杆- 数值color 
#define CLR_skin_view_grid2__pea                                "style_skin_view_grid2\\pea"             //窝轮grid - 对冲值- 数值color
#define CLR_skin_view_grid2__lavender                           "style_skin_view_grid2\\lavender"        //窝轮grid - 引伸波幅- 数值color


//<!-- - 自选股上方开通实时行情Tips条  -->
#define CLR_skin_view_HQTips__block                             "style_skin_view_HQTips\\block"          //自选股上方开通实时行情Tips条 - bk
#define CLR_skin_view_HQTips__text                              "style_skin_view_HQTips\\text"           //自选股上方开通实时行情Tips条 - txt 


//<!-- - 到价提醒消息窗口  -->
#define CLR_skin_view_HQTipsWnd__tintbg_h3                     "style_skin_view_HQTipsWnd\\tintbg_h3"                     //到价提醒消息窗口 - 提醒时间
#define CLR_skin_view_HQTipsWnd__tintbg_h1                     "style_skin_view_HQTipsWnd\\tintbg_h1"                     //到价提醒消息窗口 - 股票提醒个数标题 
//#define "style_skin_view_HQTipsWnd\\"                                                                                   //(没有使用) 到价提醒消息窗口 - banner bk
#define CLR_skin_view_HQTipsWnd__text_h3                       "style_skin_view_HQTipsWnd\\text_h3"                       //到价提醒设置窗口 - 频率txt


//<!-- - 窝轮 - 风险披漏 - 统计圆图  -->
//#define "style_skin_view_Circle\\"                                                                                      //(没有使用，代码保留)窝轮 - 风险披漏 - 统计圆图 - "到期日期"txt 
#define CLR_skin_view_Circle__highlight                        "style_skin_view_Circle\\highlight"                        //窝轮 - 风险披漏 - 统计圆图 - 剩余交易日区间及txt 
//#define "style_skin_view_Circle\\"                                                                                      //(没有使用，代码保留)窝轮 - 风险披漏 - 统计圆图 - Arc 1 


//<!-- - 状态栏 - "已连接"  -->
#define CLR_skin_view_Bar__white1                              "style_skin_view_Bar\\white1"                              //状态栏 - "已连接" - txt over
#define CLR_skin_view_Bar__white2                              "style_skin_view_Bar\\white2"                              //状态栏 - "已连接" - txt press


//<!-- - 状态栏 - 时间  -->
#define CLR_skin_view_BarTime__white1                     "style_skin_view_BarTime\\white1"                               //状态栏 - 时间 - txt over
#define CLR_skin_view_BarTime__white2                     "style_skin_view_BarTime\\white2"                               //状态栏 - 时间 - txt press


//<!-- - 经纪样式设置窗  -->
#define CLR_skin_view_WindowsStyle__white                "style_skin_view_WindowsStyle\\white"                            //经纪样式设置窗 - 样式设置 - 颜色选择窗 - cell 边框1 
#define CLR_skin_view_WindowsStyle__black                "style_skin_view_WindowsStyle\\black"                            //经纪样式设置窗 - 样式设置 - 颜色选择窗 - cell 边框2
#define CLR_skin_view_WindowsStyle__default              "style_skin_view_WindowsStyle\\default"                          //经纪样式设置窗 - 样式设置 - "字色""底色""框色"线框


//<!-- - 股票详情 -->
#define CLR_skin_view_StockMessage__Quote_Text           "style_skin_view_StockMessage\\Quote_Text"                       //股票详情 - 美股显示市场状态/时间/行情状态 - 行情状态延时 txt
#define CLR_skin_view_StockMessage__Extra_Tip_Text       "style_skin_view_StockMessage\\Extra_Tip_Text"                   //股票详情 - 美股显示市场状态/时间/行情状态 - mkt&time txt
//#define "style_skin_view_StockMessage\\"               //(没找到) 股票详情 - 工具条背景


//<!-- - 个股报价 - 新闻资讯  -->
#define CLR_skin_view_NewsInformation__link              "style_skin_view_NewsInformation\\link"                          //个股报价 - 新闻资讯 - "更多新闻资讯" txt 


//<!-- - 个股报价 - 资金流向  -->
#define CLR_skin_view_News__rise_big                     "style_skin_view_News\\rise_big"                     //个股报价 - 资金流向 - 大单流入颜色
#define CLR_skin_view_News__rise_middle                  "style_skin_view_News\\rise_middle"                  //个股报价 - 资金流向 - 中单流入颜色 
#define CLR_skin_view_News__rise_small                   "style_skin_view_News\\rise_small"                   //个股报价 - 资金流向 - 小单流入颜色 
#define CLR_skin_view_News__fall_big                     "style_skin_view_News\\fall_big"                      //个股报价 - 资金流向 - 大单流出颜色
#define CLR_skin_view_News__fall_middle                  "style_skin_view_News\\fall_middle"                  //个股报价 - 资金流向 - 中单流出颜色
#define CLR_skin_view_News__fall_small                   "style_skin_view_News\\fall_small"                   //个股报价 - 资金流向 - 小单流出颜色
#define CLR_skin_view_News__white                        "style_skin_view_News\\white"                        //个股报价 - 资金流向 - 饼图文本色
#define CLR_skin_view_News__default1                     "style_skin_view_News\\default1"                     //个股报价 - 资金流向 - 饼图线色
#define CLR_skin_view_News__second                       "style_skin_view_News\\second"                       //个股报价 - 资金流向 - 无数据的时候外圆边框颜色
#define CLR_skin_view_News__default2                     "style_skin_view_News\\default2"                     //个股报价 - 资金流向 - 资金流向及趋势背景图


//<!-- - 个股报价 - 分享  -->
//#define "style_skin_view_News_share\\"                       1003030 = 255,10,94,204;	     	              //()个股报价 - 分享 - 水印图背景 ？？？？？？？？？？？？
//#define "style_skin_view_News_share\\"                       1003031 = 255, 37, 22, 2;                      //()个股报价 - 分享 - 图片上的文字 


//<!-- - SNS 聊天室  -->
#define CLR_skin_view_ChatRoom__Halt_Wnd_BK                    "style_skin_view_ChatRoom\\Halt_Wnd_BK"           //聊天室大厅的窗口背景色
#define CLR_skin_view_ChatRoom__Talk_Wnd_BK                    "style_skin_view_ChatRoom\\Talk_Wnd_BK"           //SNS 聊天室房间的窗口背景色
#define CLR_skin_view_ChatRoom__Border_Top                     "style_skin_view_ChatRoom\\Border_Top"            //SNS 聊到室title栏的下边border
#define CLR_skin_view_ChatRoom__Border_Bottom                  "style_skin_view_ChatRoom\\Border_Bottom"         //SNS 聊到室title栏的上边border 


//<!-- - SNS 查找好友  -->
#define CLR_skin_view_Friend__Child_Wnd_BK                     "style_skin_view_Friend\\Child_Wnd_BK"            //SNS 查找好友结果窗口背景色         
#define CLR_skin_view_Friend__Btn_Find_Friend                  "style_skin_view_Friend\\Btn_Find_Friend"         //SNS 找好友中的“+好友”文字颜色
#define CLR_skin_view_Friend__FindFriend_Title                 "style_skin_view_Friend\\FindFriend_Title"        //SNS查找好友title 颜色 


//<!-- - SNS 当前聊天对象独立小窗口  -->
#define CLR_skin_view_WindowsAlone__BK                          "style_skin_view_WindowsAlone\\BK"               //SNS 当前聊天对象独立小窗口 - 背景
#define CLR_skin_view_WindowsAlone__Text                        "style_skin_view_WindowsAlone\\Text"             //SNS 当前聊天对象独立小窗口 - 文本
#define CLR_skin_view_WindowsAlone__Sel_BK                      "style_skin_view_WindowsAlone\\Sel_BK"           //SNS 当前聊天对象独立小窗口 - 选中行的背景
#define CLR_skin_view_WindowsAlone__Sel_Text                    "style_skin_view_WindowsAlone\\Sel_Text"         //SNS 当前聊天对象独立小窗口 - 选中行的文本
#define CLR_skin_view_WindowsAlone__Hit_BK                      "style_skin_view_WindowsAlone\\Hit_BK"           //SNS 当前聊天对象独立小窗口 - mouseover行的背景 需确认效果
#define CLR_skin_view_WindowsAlone__Hit_Text                    "style_skin_view_WindowsAlone\\Hit_Text"         //当前聊天对象独立小窗口 - mouseover行的文本


//<!-- - SNS 窗口标题文字  -->
#define CLR_skin_view_Wnd_Title__Title                          "style_skin_view_Wnd_Title\\Title"               //SNS 窗口标题文字


//<!-- - SNS正在看股票  -->
//#define "style_skin_view_WatchStock\\"                        //SNS正在看股票窗口背景
//#define "style_skin_view_WatchStock\\"                        //SNS正在看股票头像及空白区背景
//#define "style_skin_view_WatchStock\\"                        //SNS正在看股票鼠标移到头像上时的背景


//<!-- - SNS 1  -->
#define CLR_skin_view_SNS_BK__Title_BK                          "style_skin_view_SNS_BK\\Title_BK"                     //SNS 聊天室title栏的背景
#define CLR_skin_view_SNS_BK__View_BK                           "style_skin_view_SNS_BK\\View_BK"                      //SNS 聊天消息窗的背景
#define CLR_skin_view_SNS_BK__Input_BK                          "style_skin_view_SNS_BK\\Input_BK"                     //SNS 输入EDIT背景色
#define CLR_skin_view_SNS_BK__UsrInfo_BK                        "style_skin_view_SNS_BK\\UsrInfo_BK"                   //SNS 用户资料框的背景色 需确认效果
#define CLR_skin_view_SNS_BK__PopWnd_BK                         "style_skin_view_SNS_BK\\PopWnd_BK"                    //SNS 个人资料弹出框的背景色


//<!-- - SNS 表情选择  -->
#define CLR_skin_view_ChangeFace__BK                            "style_skin_view_ChangeFace\\BK"                       //SNS 表情选择，格子背景
#define CLR_skin_view_ChangeFace__Lin                           "style_skin_view_ChangeFace\\Line"                     //SNS 表情选择，格子线
//#define "style_skin_view_ChangeFace\\"                        //SNS 表情选择，当前HIT表情提示 


//<!-- - SNS 2  -->
#define CLR_skin_view_SNS_2__TB_BK                               "style_skin_view_SNS_2\\TB_BK"                        //SNS 聊天窗口工具栏背景
#define CLR_skin_view_SNS_2__Text_Normal                         "style_skin_view_SNS_2\\Text_Normal"                  //SNS 正常文本的颜色 需确认效果


//<!-- - SNS消息  -->
#define CLR_skin_view_SNS_Message__InputWnd                      "style_skin_view_SNS_Message\\InputWnd"               //SNS消息窗与输入的分隔线需确认效果      
#define CLR_skin_view_SNS_Message__Tips_BK                       "style_skin_view_SNS_Message\\Tips_BK"                //SNS消息tips窗口背景
#define CLR_skin_view_SNS_Message__EmptyWnd_BK                   "style_skin_view_SNS_Message\\EmptyWnd_BK"            //SNS 内容为空的窗口背景


//<!-- - 个股进入聊到室的btn颜色需确认效果  --> 
#define CLR_skin_view_Go_Room__Color                             "style_skin_view_Go_Room\\Color"                       //个股进入聊到室的btn颜色需确认效果      


//<!-- - SNS消息窗  -->
#define CLR_skin_view_SNS_MessWnd__TitleBK                       "style_skin_view_SNS_MessWnd\\TitleBK"                 //SNS消息窗 - 股票详情title bk
#define CLR_skin_view_SNS_MessWnd__TitleText                     "style_skin_view_SNS_MessWnd\\TitleText"               //SNS消息窗 - 股票详情title txt
#define CLR_skin_view_SNS_MessWnd__DataBK                        "style_skin_view_SNS_MessWnd\\DataBK"                  //SNS消息窗 - 股票详情data  bk
#define CLR_skin_view_SNS_MessWnd__DataBorder                    "style_skin_view_SNS_MessWnd\\DataBorder"              //SNS消息窗 - 股票详情data  border


//<!-- - SNS下拉列表文字颜色  -->
#define CLR_skin_view_SNS_ListTextColor__Normal                  "style_skin_view_SNS_ListTextColor\\Normal"            //SNS下拉列表文字颜色 常规
#define CLR_skin_view_SNS_ListTextColor__MouseIn                 "style_skin_view_SNS_ListTextColor\\MouseIn"           //SNS下拉列表文字颜色 悬停
#define CLR_skin_view_SNS_ListTextColor__Press                   "style_skin_view_SNS_ListTextColor\\Press"             //SNS下拉列表文字颜色 按下
#define CLR_skin_view_SNS_ListTextColor__Disable                 "style_skin_view_SNS_ListTextColor\\Disable"           //SNS下拉列表文字颜色 禁用
#define CLR_skin_view_SNS_ListTextColor__Edit_Tip                "style_skin_view_SNS_ListTextColor\\Edit_Tip"          //SNS插入股票Edit提示文字颜色


//<!-- - btn 的文字  -->
#define CLR_skin_view_BTN_Text__Text1                            "style_skin_view_BTN_Text\\Text1"                       //SNS消息窗 - 发送, 关闭 btn 的文字
#define CLR_skin_view_BTN_Text__Text2                            "style_skin_view_BTN_Text\\Text2"                       //SNS个人资料 - “发消息” “加好友”btn文字 


//<!-- - BMP框  -->
#define CLR_skin_view_BMP_Bar__border                               "style_skin_view_BMP_Bar\\border"                       //BMP框颜色 
#define CLR_skin_view_BMP_Bar__DragZone                             "style_skin_view_BMP_Bar\\DragZone"                     //BMP框外
#define CLR_skin_view_BMP_Bar__border_hover                         "style_skin_view_BMP_Bar\\border_hover"                 //BMP框HOVER


//<!-- - 沪港通  -->
#define CLR_skin_view_HGT__Left_Percent_BK                        "style_skin_view_HGT\\Left_Percent_BK"                 //沪港通剩余额度百分比
#define CLR_skin_view_HGT__Used_Percent_BK                        "style_skin_view_HGT\\Used_Percent_BK"                 //沪港通使用额度百分比
#define CLR_skin_view_HGT__Pecent_Text                            "style_skin_view_HGT\\Pecent_Text"                     //沪港通百分比文字颜色
#define CLR_skin_view_HGT__Used_Percent_BK2                       "style_skin_view_HGT\\Used_Percent_BK2"                //沪港通使用额度百分比(超出）


//<!-- 资讯  -->
#define CLR_skin_view_Infrm__Round_BK                             "style_skin_view_Infrm\\Round_BK"                      //资讯直播的时间圆点色
#define CLR_skin_view_Infrm__Sel_BK                               "style_skin_view_Infrm\\Sel_BK"                        //资讯正文grid选中的背景色


//<!-- 卡片设置  -->
#define CLR_skin_view_CardSetting__Item_Text                      "style_skin_view_CardSetting\\Item_Text"                //卡片设置文本颜色
#define CLR_skin_view_CardSetting__Item_UnderLine                 "style_skin_view_CardSetting\\Item_UnderLine"           //卡片设置下划线
#define CLR_skin_view_CardSetting__Item_Disable                   "style_skin_view_CardSetting\\Item_Disable"             //卡片设置项禁用


//<!-- 浮动滚动  -->
#define CLR_skin_view_Card_Scroll__Thumb_Hover                    "style_skin_view_Card_Scroll\\Thumb_Hover"              //浮动滚动条hover 
#define CLR_skin_view_Card_Scroll__Thumb_Normal                   "style_skin_view_Card_Scroll\\Thumb_Normal"             //浮动滚动滑块hover
#define CLR_skin_view_Card_Scroll__Bar_Hover                      "style_skin_view_Card_Scroll\\Bar_Hover"                //浮动滚动条normal
#define CLR_skin_view_Card_Scroll__Bar_Normal                     "style_skin_view_Card_Scroll\\Bar_Normal"               //浮动滚动滑块normal      


//<!-- 板块字母颜色  -->
#define CLR_skin_view_FirstLetter__color                          "style_skin_view_FirstLetter\\color"                     //板块字母颜色 


//<!-- 指标编辑框  --> 
#define CLR_skin_view_Editor__Num_BK                              "style_skin_view_Editor\\Num_BK"                         //指标编辑框行号底色 需确认效果
#define CLR_skin_view_Editor__Num_Text                            "style_skin_view_Editor\\Num_Text"                       //指标编辑框行号文字颜色 需确认效果
#define CLR_skin_view_Editor__Main_BK                             "style_skin_view_Editor\\Main_BK"                        //指标编辑框编辑区域颜色 需确认效果 


//<!-- 指标  -->
#define CLR_skin_view_Index__Grid_BK                              "style_skin_view_Index\\Grid_BK"                          //常用指标列表背景色 需确认效果
#define CLR_skin_view_Index__Prop_BK                              "style_skin_view_Index\\Prop_BK"                          //指标编辑 - 属性标题栏背景
#define CLR_skin_view_Index__Group_BK                             "style_skin_view_Index\\Group_BK"                         //指标编辑 - 公式函数列表分组背景色 需确认效果
#define CLR_skin_view_Index__Hover_BK                             "style_skin_view_Index\\Hover_BK"                         //指标编辑 - 公式函数列表分组hover背景色 需确认效果
#define CLR_skin_view_Index__Text                                 "style_skin_view_Index\\Text"                             //指标编辑 - 公式函数列表分组文字色
#define CLR_skin_view_Index__Fix_BK                               "style_skin_view_Index\\Fix_BK"                           //指标编辑 - 公式函数列表固定分组背景色 需确认效果 
#define CLR_skin_view_Index__TB_BK                                "style_skin_view_Index\\TB_BK"                            //指标编辑 - 工具栏背景色
#define CLR_skin_view_Index__BB_BK                                "style_skin_view_Index\\BB_BK"                            //指标编辑 - 底部栏背景色
#define CLR_skin_view_Index__Compile_BK                           "style_skin_view_Index\\Compile_BK"                       //指标编辑 - 编译信息栏背景色 


//<!-- 市场热点  -->
#define CLR_skin_view_HotSpot__TitleBar_BK                        "style_skin_view_HotSpot\\TitleBar_BK"                    //市场热点标题栏
#define CLR_skin_view_HotSpot__RisePlate_Gray                     "style_skin_view_HotSpot\\RisePlate_Gray"                 //市场热点价格灰 需确认效果
#define CLR_skin_view_HotSpot__SubWnd_BK                          "style_skin_view_HotSpot\\SubWnd_BK"                      //市场热点子窗口背景色


//<!-- 直播窗口  -->
#define CLR_skin_view_Live__BubbleCtrl_Text_Normal                "style_skin_view_Live\\BubbleCtrl_Text_Normal"             //直播窗口气泡控件文字
#define CLR_skin_view_Live__BubbleCtrl_Text_Hover                 "style_skin_view_Live\\BubbleCtrl_Text_Hover"              //直播窗口气泡控件文字Hover
#define CLR_skin_view_Live__BubbleCtrl_Div                        "style_skin_view_Live\\BubbleCtrl_Div"                     //直播窗口气泡控件分割线
#define CLR_skin_view_Live__UserInfoWnd_Title                        "style_skin_view_Live\\UserInfoWnd_Title"                     //成员信息窗口标题背景色
#define CLR_skin_view_Live__UserInfoWnd_Screen                        "style_skin_view_Live\\UserInfoWnd_Screen"                     //成员信息窗口筛选栏背景色


//<!-- 直播视频背景  -->
#define CLR_skin_view_Live_Video__BK                              "style_skin_view_Live_Video\\BK"                           //直播视频背景


//<!-- 下线公告编辑框背景  -->
#define CLR_skin_view_Live_OfflineBulletin__BK                    "style_skin_view_Live_OfflineBulletin\\BK"                 //下线公告编辑框背景    


//<!-- 指标设置参考线颜色  -->
#define CLR_skin_view_VicIndex__RefLine                           "style_skin_view_VicIndex\\RefLine"                        //指标设置参考线颜色


//<!-- 期权选股  -->
#define CLR_skin_view_CellBK__CallGrid                            "style_skin_view_CellBK\\CallGrid"                         //期权选股CALL
#define CLR_skin_view_CellBK__PutGrid                             "style_skin_view_CellBK\\PutGrid"                          //期权选股PUT


//<!-- 取消登录  -->
//#define "style_skin_view_Login_Edt"
//#define "style_skin_view_Login_Edt"
#define CLR_skin_view_Login_Edt__UnderLine3                       "style_skin_view_Login_Edt\\UnderLine3"                     //取消登录橙色 - txt      


//<!-- 登录界面  -->
#define CLR_skin_view_LoginWnd__Text_Normal                       "style_skin_view_LoginWnd\\Text_Normal"                     //登录界面 - 正在登录中（应写至common文件中）


//<!-- 经纪商持股比例 折线的颜色  -->
#define CLR_skin_view_BrokerHold__Line1                           "style_skin_view_BrokerHold\\Line1"                         //经纪商持股比例 折线的颜色
#define CLR_skin_view_BrokerHold__Line2                           "style_skin_view_BrokerHold\\Line2"                         //经纪商持股比例 折线的颜色
#define CLR_skin_view_BrokerHold__Line3                           "style_skin_view_BrokerHold\\Line3"                         //经纪商持股比例 折线的颜色
#define CLR_skin_view_BrokerHold__Line4                           "style_skin_view_BrokerHold\\Line4"                         //经纪商持股比例 折线的颜色
#define CLR_skin_view_BrokerHold__Line5                           "style_skin_view_BrokerHold\\Line5"                         //经纪商持股比例 折线的颜色
#define CLR_skin_view_BrokerHold__Line6                           "style_skin_view_BrokerHold\\Line6"                         //经纪商持股比例 折线的颜色


//<!-- 新闻卡片边框颜色  -->
#define CLR_skin_view_NewsCard__Frame_color                       "style_skin_view_NewsCard\\Frame_color"                     // 新闻卡片边框颜色 - 非选中
//#define "style_skin_view_NewsCard"                              //(暂不使用) 新闻卡片边框颜色 - 选中


//<!-- 买入卖出颜色  -->
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 蓝色1 大单
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 蓝色2 中单 
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 蓝色3 小单
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 橙色1 大单
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 橙色2 中单
//#define "style_skin_view_BuyAndSell\\"                          //(暂不使用) 买入卖出颜色 - 橙色3 小单 


//<!-- 文字强调色  -->
#define CLR_skin_view_TextHover__Color                            "style_skin_view_TextHover\\Color"                           //文字强调色


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//<!-- 普通文字颜色  -->
#define CLR_skin_label_Text__Normal_1                             "style_skin_label_Text\\Normal_1"                            //普通文字颜色，亮
#define CLR_skin_label_Text__Normal_2                             "style_skin_label_Text\\Normal_2"                            //普通文字颜色，暗
#define CLR_skin_label_Text__Normal_3                             "style_skin_label_Text\\Normal_3"                            //普通文字颜色
#define CLR_skin_label_Text__MiniQuote                            "style_skin_label_Text\\MiniQuote"                           //文字颜色，迷你报价组件

//关注/互相关注 按钮颜色
#define CLR_skin_follow_Text__Normal                              "style_follow_text\\normal"
//查找好友按钮字体颜色
#define CLR_skin_search_text__Normal                              "style_search_text\\normal"


//<!-- 按钮等鼠标移上去文字颜色  -->
#define CLR_skin_button_TextColor1__MouseIn_1                     "style_skin_button_TextColor1\\MouseIn_1"                    //按钮等鼠标移上去文字颜色


//<!-- 选中Tab、按钮等文字颜色（除交易按钮外）  -->
#define CLR_skin_button_TextColor2__Select_1                      "style_skin_button_TextColor2\\Select_1"                     //选中Tab、按钮等文字颜色（除交易按钮外）


//<!-- 按钮禁用  -->
#define CLR_skin_button_Text__Disable_1                           "style_skin_button_Text\\Disable_1"                          //按钮禁用时文字颜色（除交易按钮外）
#define CLR_skin_button_Text__Disable_2                           "style_skin_button_Text\\Disable_2"                          //交易按钮禁用时文字颜色
#define CLR_skin_button_Text__Disable_colorfulbg                  "style_skin_button_Text\\Disable_colorfulbg"                 //交易按钮禁用时文字颜色(兼容彩色背景下禁用色)

//<!-- 蓝色链接文字  -->
#define CLR_skin_label_link__Normal_1                             "style_skin_label_link\\Normal_1"                            //蓝色链接文字
#define CLR_skin_label_link__MouseIn_1                            "style_skin_label_link\\MouseIn_1"                           //蓝色链接文字移上去
#define CLR_skin_label_link__Normal_2                             "style_skin_label_link\\Normal_2"                            //蓝色链接文字2，暂时功能提示窗口使用
#define CLR_skin_label_link__MouseIn_2                            "style_skin_label_link\\MouseIn_2"                           //蓝色链接文字2移上去，暂时功能提示窗口使用


//<!-- 灰色文字  -->
#define CLR_skin_label_Text_color__Gray_1                         "style_skin_label_Text_color\\Gray_1"                        //灰色文字，如搜索框提示文字，摘要文字
#define CLR_skin_label_Text_color__ChatTimeAndExplainWord         "style_skin_label_Text_color\\ChatTimeAndExplainWord"        //灰色文字，如sns聊天窗口时间和辅助说明文字


//<!-- 输入框错误tips文字（白底）、表格单元提示文字等-->
#define CLR_skin_view_Text__TipWndText                            "style_skin_view_Text\\TipWndText"                           //输入框错误tips文字（白底）、表格单元提示文字等


//<!-- 窗口  -->
#define CLR_skin_view_WndTitle__Normal                            "style_skin_view_WndTitle\\Normal"                           //普通窗口标题文字颜色
#define CLR_skin_view_WndTitle__Child                             "style_skin_view_WndTitle\\Child"                            //组件窗口文字颜色
#define CLR_skin_view_WndTitle__Red                               "style_skin_view_WndTitle\\Red"                              //红色标题栏窗口的标题文字颜色，如断线
#define CLR_skin_view_WndTitle__ColorWnd                          "style_skin_view_WndTitle\\ColorWnd"                         //组件窗口彩色标题下的文字颜色


//<!-- 买卖按钮文字颜色-->
#define CLR_skin_button_TextBuyAndSell__BuySellBtn					"style_skin_button_TextBuyAndSell\\BuySellBtn"									//买卖按钮文字颜色
#define CLR_skin_button_TextBuyAndSell__Close						"style_skin_button_TextBuyAndSell\\Close"										//平仓按钮文字颜色


//<!-- 每套皮肤都是黑色，如BaseDlg_Frm_Warning窗口上的文字-->
#define CLR_skin_view_Text_All__AlwaysBlack                      "style_skin_view_Text_All\\AlwaysBlack"                                      //每套皮肤都是黑色，如BaseDlg_Frm_Warning窗口上的文字


//<!-- 黄色文字-->
#define CLR_skin_label_Text_color2__Yellow_1                          "style_skin_label_Text_color2\\Yellow_1"                                    //黄色文字，如订单tab上的成交checkbox数字
#define CLR_skin_label_Text_color2__Yellow_2                          "style_skin_label_Text_color2\\Yellow_2"                                    //黄色文字，如持仓的账户类别字段文字


//<!-- 最大可买卖文字颜色-->
#define CLR_skin_label_BtnMax__BuyNormal                       "style_skin_label_BtnMax\\BuyNormal"                              //最大可买普通文字颜色
#define CLR_skin_label_BtnMax__BuyMouseIn                          "style_skin_label_BtnMax\\BuyMouseIn"                             //最大可买移上去文字颜色
#define CLR_skin_label_BtnMax__SellNormal                           "style_skin_label_BtnMax\\SellNormal"                         //最大可卖普通文字颜色
#define CLR_skin_label_BtnMax__SellMouseIn                         "style_skin_label_BtnMax\\SellMouseIn"                            //最大可卖移上去文字颜色


//<!-- 主面板左侧Tab-->
#define CLR_skin_view_MainTab__Normal                           "style_skin_view_MainTab\\Normal"                                     //主面板左侧Tab普通文字颜色
#define CLR_skin_view_MainTab__MouseIn                         "style_skin_view_MainTab\\MouseIn"                                       //主面板左侧Tab鼠标移上去文字颜色
#define CLR_skin_view_MainTab__Select                                "style_skin_view_MainTab\\Select"                              //主面板左侧Tab选中Tab文字颜色

//<!-- Tab-->
#define CLR_skin_view_Tab__Normal                           "style_skin_view_Tab\\Normal"											//Tab普通文字颜色
#define CLR_skin_view_Tab__MouseIn                         "style_skin_view_Tab\\MouseIn"											//Tab鼠标移上去文字颜色
#define CLR_skin_view_Tab__Select                                "style_skin_view_Tab\\Select"										//Tab选中Tab文字颜色

//<!-- Edit & RichEditCtrl -->
#define CLR_skin_view_Edit__RE_BKNormal                     "style_skin_view_Edit\\RE_BKNormal"										//RichEditCtrl普通背景色


#define CLR_SKIN_LABEL_TEXT_INDEXBAR__NORMAL                "style_skin_label_Text_IndexBar\\Normal"    //底部指标栏正常颜色
#define CLR_SKIN_LABEL_TEXT_INDEXBAR__HOVER                 "style_skin_label_Text_IndexBar\\Hover"     //底部指标栏hover态颜色
#define CLR_SKIN_LABEL_TEXT_INDEXBAR__SELECT                "style_skin_label_Text_IndexBar\\Select"    //底部指标栏选中态颜色

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//<!-- 背景色-->
#define CLR_skin_view_BK__Color_1                              "style_skin_view_BK\\Color_1"                                     //面板容器背景色
#define CLR_skin_view_BK__Color_2                              "style_skin_view_BK\\Color_2"                                     //普通窗口的背景色
#define CLR_skin_view_BK__Color_3                              "style_skin_view_BK\\Color_3"                                     //表格空白区背景色
#define CLR_skin_view_BK__Color_4                              "style_skin_view_BK\\Color_4"                                     //稍微灰一点的地方的背景色
#define CLR_skin_view_BK__Color_5                              "style_skin_view_BK\\Color_5"                                     //账户信息、今日交易统计等字段头单元背景色
#define CLR_SKIN_VIEW_BK__BLANK_PAGE_TOP_BACKGROUND             "style_skin_view_BK\\blank_page_top_background"                   //面板 - 空白页 - 上部背景色
#define CLR_SKIN_VIEW_BK__BLANK_PAGE_BOTTOM_BACKGROUND         "style_skin_view_BK\\blank_page_bottom_background"                //面板 - 空白页 - 下部背景色


//<!-- 线的颜色-->
#define CLR_skin_line_BK__Color_1                              "style_skin_line_BK\\Color_1"                              //大多数1像素分割线的颜色
#define CLR_skin_line_BK__Color_2                              "style_skin_line_BK\\Color_2"                             //表格网格线颜色
#define CLR_skin_line_BK__Color_3                              "style_skin_line_BK\\Color_3"                             //面板网格线颜色


//<!--自选股列表分割线的颜色-->
#define CLR_skin_line_SelfStock__Color                              "style_skin_line_SelfStock\\Color"                             //自选股列表分割线的颜色


//<!-- “指标管理”里的列表分割线的颜色-->
#define CLR_skin_line_Index__Color                                     "style_skin_line_Index\\Color"                               //“修改指标”里的列表分割线的颜色


//<!-- 订单状态-->
#define CLR_skin_view_OrderState__redbg                             "style_skin_view_OrderState\\redbg"							//订单状态-红色 
#define CLR_skin_view_OrderState__yellowbg                          "style_skin_view_OrderState\\yellowbg"						//订单状态-黄色
#define CLR_skin_view_OrderState__greenbg                           "style_skin_view_OrderState\\greenbg"						//订单状态-绿色，持仓为0的行的背景色
#define CLR_skin_view_OrderState__lilacbg                           "style_skin_view_OrderState\\lilacbg"						//订单状态-浅紫色
#define CLR_skin_view_OrderState__modenabg                          "style_skin_view_OrderState\\modenabg"						//订单状态-深紫色


//<!-- 表格-->
#define CLR_skin_view_GridWnd__CrossRowOdd                         "style_skin_view_GridWnd\\CrossRowOdd"                               //表格奇数行背景色
#define CLR_skin_view_GridWnd__CrossRowEven                       "style_skin_view_GridWnd\\CrossRowEven"                               //表格偶数行背景色
#define CLR_skin_view_GridWnd__RowFocus                             "style_skin_view_GridWnd\\RowFocus"                                  //表格鼠标移进行背景色
#define CLR_skin_view_GridWnd__RowSelect                           "style_skin_view_GridWnd\\RowSelect"                                  //表格选中行背景色


//<!-- 条件单设置区域背景色-->
#define CLR_skin_view_TradeDlg__CdnBack                           "style_skin_view_TradeDlg\\CdnBack"                                     //条件单设置区域背景色


//<!-- 设置交易密码窗口-->
//#define "style_skin_view_SetTradePass\\"                          //设置交易密码窗口，描述区背景色
//#define "style_skin_view_SetTradePass\\"                           //设置交易密码窗口，描述区外框颜色


//<!-- 我的资产-->
#define CLR_skin_view_Asset__Zqsz                                   "style_skin_view_Asset\\Zqsz"                      //我的资产 证券市值颜色
#define CLR_skin_view_Asset__Xjjy                                 "style_skin_view_Asset\\Xjjy"                       //我的资产 现金结余颜色
#define CLR_skin_view_Asset__Zcjz                                    "style_skin_view_Asset\\Zcjz"                          //我的资产 资产净值余颜色
#define CLR_skin_view_Asset__Card_Blank_Border                    "style_skin_view_Asset\\Card_Blank_Border"                                //我的资产空白卡变虚线框颜色


//<!-- 系统设置-->
#define CLR_skin_view_Setting__StockListField_CrBtnBK                 "style_skin_view_Setting\\StockListField_CrBtnBK"                 //系统设置-外观设置-列表字段-默认颜色按钮 背景色 


//<!-- 窗口控件 公用 -->
#define CLR_skin_view_WndCtrl__SplitLine							"style_skin_view_WndCtrl\\SplitLine"                 //分割线 

//<!-- 策略精选列表项颜色 -->
#define CLR_skin_PickingInfo_Bubble__Select                        "style_skin_pickingStock_bubble\\Select"                 //策略精选列表项选中态

//<!-- 账户风险状态 -->
#define CLR_pub_label_MarginRiskStatus__SafeHigh					"style_pub_label_MarginRiskStatus\\SafeHigh"			//非常安全
#define CLR_pub_label_MarginRiskStatus__Safe						"style_pub_label_MarginRiskStatus\\Safe"				//安全
#define CLR_pub_label_MarginRiskStatus__SafeLow						"style_pub_label_MarginRiskStatus\\SafeLow"				//较安全
#define CLR_pub_label_MarginRiskStatus__RiskLow						"style_pub_label_MarginRiskStatus\\RiskLow"				//较低风险
#define CLR_pub_label_MarginRiskStatus__Risk						"style_pub_label_MarginRiskStatus\\Risk"				//中等风险
#define CLR_pub_label_MarginRiskStatus__RiskHigh					"style_pub_label_MarginRiskStatus\\RiskHigh"			//偏高风险
#define CLR_pub_label_MarginRiskStatus__Warn						"style_pub_label_MarginRiskStatus\\Warn"				//预警
#define CLR_pub_label_MarginRiskStatus__Dangerous					"style_pub_label_MarginRiskStatus\\Dangerous"			//危险（8）
#define CLR_pub_label_MarginRiskStatus__DangerousHigh				"style_pub_label_MarginRiskStatus\\DangerousHigh"		//危险（9）



///////////////////////////////////////////////////////////////////////////////////////////////////////


//<!-- 控件-->
#define CLR_pub_button_Login__Text_Normal_1                          "style_pub_button_Login\\Text_Normal_1"                     //控件普通文本颜色
#define CLR_pub_button_Login__Text_MouseIn_1                         "style_pub_button_Login\\Text_MouseIn_1"                    //控件悬停文本颜色
#define CLR_pub_button_Login__Text_Press_1                           "style_pub_button_Login\\Text_Press_1"                      //控件按下文本颜色
#define CLR_pub_button_Login__Text_Disable_1                         "style_pub_button_Login\\Text_Disable_1"                    //控件禁用文本颜色


//<!-- 超链接-->
#define CLR_pub_label_Login__Text_Link_Normal                        "style_pub_label_Login\\Text_Link_Normal"                   //超链接文本颜色
#define CLR_pub_label_Login__Text_Link_Focus                         "style_pub_label_Login\\Text_Link_Focus"                    //超链接悬停文本颜色
#define CLR_pub_label_Login__Text_Link_RegAccNormal                  "style_pub_label_Login\\Text_Link_RegAccNormal"             //注册帐号超链接文本颜色
#define CLR_pub_label_Login__Text_Link_RegAccFocus                   "style_pub_label_Login\\Text_Link_RegAccFocus"              //注册帐号超链接悬停文本颜色


//<!-- 输入框文字颜色-->
#define CLR_pub_view_Login__Text_EdtNormal                           "style_pub_view_Login\\Text_EdtNormal"                      //输入框文字颜色
#define CLR_pub_view_Login__Text_EdtDisable                          "style_pub_view_Login\\Text_EdtDisable"                     //输入框禁用文字颜色
#define CLR_pub_view_Login__Text_EdtTips                             "style_pub_view_Login\\Text_EdtTips"                        //输入框内的提示文字颜色
#define CLR_pub_view_Login__Text_EdtInputErrWnd                      "style_pub_view_Login\\Text_EdtInputErrWnd"                 //输入框输入内容错误弹出提示窗口文字颜色


//<!-- 登录按钮文本颜色-->
#define CLR_pub_button_TextLogin__color_LoginBtn                     "style_pub_button_TextLogin\\color_LoginBtn"                //登录按钮文本颜色

//<!-- 下拉框-->
#define CLR_pub_view_Login_down__ListBoxBKColor                      "style_pub_view_Login_down\\ListBoxBKColor"                 //下拉框的背景、边框线颜色
#define CLR_pub_view_Login_down__ListBoxTextColor                    "style_pub_view_Login_down\\ListBoxTextColor"               //下拉框的文字颜色



//<!-- 第三方登录文本-->
#define CLR_pub_view_ThirdPartLogin__Register                        "style_pub_view_ThirdPartLogin\\Register"                   //第三方登录文本


//<!-- 持仓风险-->
#define CLR_pub_view_Pos__Rist_Text_Normal                           "style_pub_view_Pos\\Rist_Text_Normal"                      //持仓风险，黑色文字
#define CLR_pub_view_Pos__Risk_Text_Gray                             "style_pub_view_Pos\\Risk_Text_Gray"                        //持仓风险，灰色文字
#define CLR_pub_view_Pos__Risk_Text_Blue                             "style_pub_view_Pos\\Risk_Text_Blue"                        //持仓风险，蓝色文字


//<!-- SNS截图文字选在下拉框边框颜色-->
#define CLR_pub_view_SNS_ScreenShot__ListBox_FontSizeSel             "style_pub_view_SNS_ScreenShot\\ListBox_FontSizeSel"        //SNS截图文字选在下拉框边框颜色

//<!--SNS发起直播相关控件色值-->
//<!-- 发起直播按钮的文字色值 -->
#define CLR_pub_view_SNS_StartLiveBtn_TextColor                       "style_pub_view_SNS_StartLive\\pub_text_gray_dark1"   


//<!-- 关于窗口文字颜色-->
#define CLR_pub_view_Comm_Wnd__Text_About                            "style_pub_view_Comm_Wnd\\Text_About"                       //关于窗口文字颜色
#define CLR_pub_view_Comm_Wnd__Text_About_2                          "style_pub_view_Comm_Wnd\\Text_About_2"                     //关于窗口文字颜色-新      


//<!-- 聊天室系统通知颜色-->
#define CLR_pub_view_CommChat__Text_ChatRoomSysPost                  "style_pub_view_CommChat\\Text_ChatRoomSysPost"             //聊天室系统通知颜色


//<!-- 直播选择屏幕-->
#define CLR_pub_view_CommPlay__Frame_SelMonitor                      "style_pub_view_CommPlay\\Frame_SelMonitor"                 //直播选择屏幕


//<!-- 直播播放页面-->
#define CLR_pub_view_Comm__Live_Display_Tips                         "style_pub_view_Comm\\Live_Display_Tips"                    //直播播放页面提示文字
#define CLR_pub_view_Comm__Live_Display_LivePrice                    "style_pub_view_Comm\\Live_Display_LivePrice"               //直播播放页面价格文字
#define CLR_pub_view_Comm__Live_TryWatchTipsBK                       "style_pub_view_Comm\\Live_TryWatchTipsBK"                  //直播播放页面试看提示条背景色
#define CLR_pub_view_Comm__Live_OverStatus_BackGround                "style_pub_view_Comm\\Live_OverStatus_BackGround"           //直播播放页面正常结束时的背景色

//<!-- 行情价格颜色-->
#define CLR_pub_view_quote_price_block_red                           "style_pub_view_quote_price\\block_red"                     //红色块
#define CLR_pub_view_quote_price_block_green                         "style_pub_view_quote_price\\block_green"                   //绿色块
#define CLR_pub_view_quote_price_block_gray                          "style_pub_view_quote_price\\block_gray"                    //平色块


#define CLR_skin_view_preaftertitle_left							"style_skin_view_preaftertitle\\item_left"						//前复权后复权分时界面的title左侧文字颜色
#define CLR_skin_view_preaftertitle_right							"style_skin_view_preaftertitle\\item_right"						//前复权后复权分时界面的title右侧文字颜色

//<!-- 财报图表化 按钮颜色-->
#define CLR_EarningsFigure__Line1                                      "style_earning_figure\\Line1"
#define CLR_EarningsFigure__Line1Disable                               "style_earning_figure\\Line1Disable"
#define CLR_EarningsFigure__Line2                                      "style_earning_figure\\Line2"
#define CLR_EarningsFigure__Line2Disable                               "style_earning_figure\\Line2Disable"
#define CLR_EarningsFigure__Line3                                       "style_earning_figure\\Line3"
#define CLR_EarningsFigure__Line3Disable                               "style_earning_figure\\Line3Disable"

//<!-- ETF占比统计 背景颜色-->
#define CLR_ETF_Propertion__Background1                                 "style_etf_proportion\\background1"
#define CLR_ETF_Propertion__Background2                                 "style_etf_proportion\\background2"
#define CLR_ETF_Propertion__Background3                                 "style_etf_proportion\\background3"
#define CLR_ETF_Propertion__Background4                                 "style_etf_proportion\\background4"
#define CLR_ETF_Propertion__Background5                                 "style_etf_proportion\\background5"
#define CLR_ETF_Propertion__Background6                                 "style_etf_proportion\\background6"
#define CLR_ETF_Propertion__Background7                                 "style_etf_proportion\\background7"
#define CLR_ETF_Propertion__Background8                                 "style_etf_proportion\\background8"
#define CLR_ETF_Propertion__Background9                                 "style_etf_proportion\\background9"
#define CLR_ETF_Propertion__Background10                                "style_etf_proportion\\background10"

//<!-- 牛牛IM表情 -->
#define CLR_IM_EXPRESSION_HOVER_TIPS                                    "style_pub_im_expression\\hover_tips"

//<!-- 筹码分布 -->
#define CLR_SKIN_LABLE_CHIPDIST__SUPPORT								"style_skin_chipDistribution\\Support"    
#define CLR_SKIN_LABLE_CHIPDIST__AVG									"style_skin_chipDistribution\\Avg"
#define CLR_SKIN_LABLE_CHIPDIST__PRESSURE								"style_skin_chipDistribution\\Pressure"
#define CLR_SKIN_BLOCK_CHIPDIST__SLIDER									"style_skin_chipDistribution\\Slider"
#define CLR_SKIN_BLOCK_CHIPDIST__RISE									"style_skin_chipDistribution\\rise"
#define CLR_SKIN_BLOCK_CHIPDIST__FALL									"style_skin_chipDistribution\\fall"
#define CLR_SKIN_BLOCK_CHIPDIST__EQUAL									"style_skin_chipDistribution\\equal"

//<!--行情-自选股-导出股票信息窗口 -->
#define CLR_SKIN_VIEW_EXPORTSTORKINFO__TipTextColor						"style_skin_view_exportStockInfo\\TipTextColor"
#define CLR_SKIN_VIEW_EXPORTSTORKINFO__ProgressBkColor					"style_skin_view_exportStockInfo\\ProgressBkColor"
#define CLR_SKIN_VIEW_EXPORTSTORKINFO__ProgressFrontColor				"style_skin_view_exportStockInfo\\ProgressFrontColor"
#define CLR_SKIN_VIEW_EXPORTSTORKINFO__ProgressTextColor				"style_skin_view_exportStockInfo\\ProgressTextColor"

//<!-- - 美股LV2   -->
#define CLR_skin_gear_lv2_buy1                  "style_skin_gear_lv2\\buy1"                        //买卖档买档颜色1
#define CLR_skin_gear_lv2_buy2                  "style_skin_gear_lv2\\buy2"                        //买卖档买档颜色2
#define CLR_skin_gear_lv2_buy3                  "style_skin_gear_lv2\\buy3"                        //买卖档买档颜色3
#define CLR_skin_gear_lv2_buy4                  "style_skin_gear_lv2\\buy4"                        //买卖档买档颜色4
#define CLR_skin_gear_lv2_buy5                  "style_skin_gear_lv2\\buy5"                        //买卖档买档颜色5
#define CLR_skin_gear_lv2_buy6                  "style_skin_gear_lv2\\buy6"                        //买卖档买档颜色6
#define CLR_skin_gear_lv2_buy7                  "style_skin_gear_lv2\\buy7"                        //买卖档买档颜色7
#define CLR_skin_gear_lv2_buy8                  "style_skin_gear_lv2\\buy8"                        //买卖档买档颜色8
#define CLR_skin_gear_lv2_buy9                  "style_skin_gear_lv2\\buy9"                        //买卖档买档颜色9

#define CLR_skin_gear_lv2_sell1					"style_skin_gear_lv2\\sell1"                        //买卖档卖档颜色1
#define CLR_skin_gear_lv2_sell2					"style_skin_gear_lv2\\sell2"                        //买卖档卖档颜色2
#define CLR_skin_gear_lv2_sell3					"style_skin_gear_lv2\\sell3"                        //买卖档卖档颜色3
#define CLR_skin_gear_lv2_sell4					"style_skin_gear_lv2\\sell4"                        //买卖档卖档颜色4
#define CLR_skin_gear_lv2_sell5					"style_skin_gear_lv2\\sell5"                        //买卖档卖档颜色5
#define CLR_skin_gear_lv2_sell6					"style_skin_gear_lv2\\sell6"                        //买卖档卖档颜色6
#define CLR_skin_gear_lv2_sell7					"style_skin_gear_lv2\\sell7"                        //买卖档卖档颜色7
#define CLR_skin_gear_lv2_sell8					"style_skin_gear_lv2\\sell8"                        //买卖档卖档颜色8
#define CLR_skin_gear_lv2_sell9					"style_skin_gear_lv2\\sell9"                        //买卖档卖档颜色9

#define CLR_skin_gear_lv2_distribute_buy		"style_skin_gear_lv2\\distribute_buy"               //买卖档买档委托数量
#define CLR_skin_gear_lv2_distribute_sell		"style_skin_gear_lv2\\distribute_sell"              //买卖档卖档委托数量
#define CLR_skin_gear_lv2_hover					"style_skin_gear_lv2\\hover"						//买卖档Hover颜色

#define CLK_skin_sns_live_start_end             "style_sns_live_start_end\\text_normal"             //直播---开始直播/结束直播按钮颜色

#define CLR_skin_customizablepanel_menu			"style_skin_customizablepanel\\menu"				//面板高阶功能-设置菜单背景色
#define CLR_skin_customizablepanel_menu_dark	"style_skin_customizablepanel\\menu_dark"			//面板高阶功能-设置界面背景色
#define CLR_skin_customizablepanel_line			"style_skin_customizablepanel\\line_color"			//面板高阶功能-下划线颜色
#define CLR_skin_customizablepanel_text_color_light	"style_skin_customizablepanel\\text_color_light"//面板高阶功能-文案颜色-亮

#define CLR_skin_seccaptrack_buy		"style_skin_seccaptrack\\buy"				//十大净买入\净卖出经济商-买色
#define CLR_skin_seccaptrack_buy_dark1	"style_skin_seccaptrack\\buy_dark1"			//十大净买入\净卖出经济商-买色-暗1
#define CLR_skin_seccaptrack_buy_dark2	"style_skin_seccaptrack\\buy_dark2"			//十大净买入\净卖出经济商-买色-暗2
#define CLR_skin_seccaptrack_sell		"style_skin_seccaptrack\\sell"				//十大净买入\净卖出经济商-卖色
#define CLR_skin_seccaptrack_sell_dark1	"style_skin_seccaptrack\\sell_dark1"		//十大净买入\净卖出经济商-卖色-暗1
#define CLR_skin_seccaptrack_sell_dark2	"style_skin_seccaptrack\\sell_dark2"		//十大净买入\净卖出经济商-卖色-暗2

#define CLR_skin_newstock_buytime      "newstockcalendar\\newstock_buytime"       //港股新股日历/认购日填充颜色
#define CLR_skin_newstock_result       "newstockcalendar\\newstock_result"       //港股新股日历/公布结果日及暗盘日填充颜色
#define CLR_skin_newstock_listingtime  "newstockcalendar\\newstock_listingtime"  //港股新股日历//上市日填充颜色

#define CLR_skin_valuation_sd_background  "style_skin_valuation\\sd_background"  //估值分析//标准差背景色
#define CLR_skin_valuation_averageline  "style_skin_valuation\\averageline"  //估值分析//averageline
#define CLR_skin_valuation_blue_note_30  "style_skin_valuation\\blue_note_30"  //估值分析//标准差背景色
#define CLR_skin_valuation_yellow_note  "style_skin_valuation\\yellow_note"  //估值分析//黄色标注

#define CLR_skin_index_editor_highlight__symbol			"style_skin_index_editor_highlight\\symbol"  
#define CLR_skin_index_editor_highlight__note			"style_skin_index_editor_highlight\\note"
#define CLR_skin_index_editor_highlight__string			"style_skin_index_editor_highlight\\string"  
#define CLR_skin_index_editor_highlight__num			"style_skin_index_editor_highlight\\num"  
#define CLR_skin_index_editor_highlight__func			"style_skin_index_editor_highlight\\func"  
#define CLR_skin_index_editor_highlight__const			"style_skin_index_editor_highlight\\const"  
#define CLR_skin_index_editor_highlight__identifier		"style_skin_index_editor_highlight\\identifier"  
#define CLR_skin_index_editor_highlight__resultindex	"style_skin_index_editor_highlight\\resultindex"  
#define CLR_skin_index_editor_highlight__tempindex		"style_skin_index_editor_highlight\\tempindex"  

#define CLR_skin_news_default_bkg		"style_news_bkg\\img_default_bkg"

//<!-- 点价交易列表 -->
#define CLR_style_skin_clicktradelist__buy_default			"style_skin_clicktradelist\\buy_default"
#define CLR_style_skin_clicktradelist__buy_mouseover		"style_skin_clicktradelist\\buy_mouseover"
#define CLR_style_skin_clicktradelist__buy_mousedown		"style_skin_clicktradelist\\buy_mousedown"
#define CLR_style_skin_clicktradelist__sell_default			"style_skin_clicktradelist\\sell_default"
#define CLR_style_skin_clicktradelist__sell_mouseover		"style_skin_clicktradelist\\sell_mouseover"
#define CLR_style_skin_clicktradelist__sell_mousedown		"style_skin_clicktradelist\\sell_mousedown"
#define CLR_style_skin_clicktradelist__buyOrder_default		"style_skin_clicktradelist\\buyOrder_default"
#define CLR_style_skin_clicktradelist__buyOrder_mouseover	"style_skin_clicktradelist\\buyOrder_mouseover"
#define CLR_style_skin_clicktradelist__buyOrder_mousedown	"style_skin_clicktradelist\\buyOrder_mousedown"
#define CLR_style_skin_clicktradelist__sellOrder_default	"style_skin_clicktradelist\\sellOrder_default"
#define CLR_style_skin_clicktradelist__sellOrder_mouseover	"style_skin_clicktradelist\\sellOrder_mouseover"
#define CLR_style_skin_clicktradelist__sellOrder_mousedown	"style_skin_clicktradelist\\sellOrder_mousedown"
#define CLR_style_skin_clicktradelist__PstnBK				"style_skin_clicktradelist\\PstnBK"
#define CLR_style_skin_clicktradelist__orderText			"style_skin_clicktradelist\\orderText"
#define CLR_style_skin_clicktradelist__labelTitleText		"style_skin_clicktradelist\\labelTitleText"
#define CLR_style_skin_clicktradelist__labelText			"style_skin_clicktradelist\\labelText"
#define CLR_style_skin_clicktradelist__border				"style_skin_clicktradelist\\border"

//<!-- 基金标签 -->
#define CLR_style_skin_fund__bk_lv1				"style_skin_fund_label\\bk_lv1"
#define CLR_style_skin_fund__bk_lv2				"style_skin_fund_label\\bk_lv2"
#define CLR_style_skin_fund__bk_lv3				"style_skin_fund_label\\bk_lv3"
#define CLR_style_skin_fund__bk_lv4				"style_skin_fund_label\\bk_lv4"
#define CLR_style_skin_fund__text_lv1			"style_skin_fund_label\\text_lv1"
#define CLR_style_skin_fund__text_lv2			"style_skin_fund_label\\text_lv2"
#define CLR_style_skin_fund__text_lv3			"style_skin_fund_label\\text_lv3"
#define CLR_style_skin_fund__text_lv4			"style_skin_fund_label\\text_lv4"