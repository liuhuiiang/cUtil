// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "test.h"
#include "iostream"
#include "StringUtil.h"
#include "TimeUtil.h"
using namespace std;

int main()
{
	StringUtil util;
	string ci;
	//cin >> ci;
	//cout << ci;
	while (true)
	{
		cout << "输入你要查询的年份，输入ext代表退出,time代表查询当前时间,isLeapYear代表查询是否为闰年,dateExchange代表查选日期和现在日期的关系,zodia代表查询当前时间的所属什么生效" << endl;
		cin >> ci;
		if (ci=="ext")
			break;
		else if (ci == "time") {
			TimeUtil timeUtil;
			cout << "当前时间为：" << timeUtil.getYear() << "年" << timeUtil.getMonth() << "月" << timeUtil.getDay() << "日" << timeUtil.getHour() << "时" << timeUtil.getMin() << "分" << timeUtil.getSeconds() << "秒"<<endl;
		}
		else if (ci == "isLeapYear") {
			cout << "请输入您要查询的年份" << endl;
			cin >> ci;
		    int year = util.string2int(ci);
		if (year <= 0)
			cout << "您输入的年份有误" << endl;
		else
			cout << (TimeUtil::isLeapYear(year) ? "是闰年" : "不是闰年") << endl;
		}
		else if (ci == "dateExchange") {
			cout << "请输入您要查选的年份" << endl;
			cin >> ci;
			TimeUtil timeUtil;
			cout << timeUtil.dateExchangeString(ci) << endl;
		}
		else if (ci == "zodia") {
			TimeUtil timeUtil;
			cout << TimeUtil::time2Zodiac(util.string2int(timeUtil.getHour()))<<endl;
		}
	}
	return 0;
}

