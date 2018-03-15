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
	test test;
	test.addList("刘慧良");
	test.addList("汪雪");
	test.addList("汪爽");
	test.addList("刘浩明");
	test.addList("刘毅");
	test.addMap("刘慧良","男");
	test.addMap("汪雪", "女");
	test.addMap("汪爽", "女");
	test.addMap("刘浩明", "男");
	test.addMap("刘毅", "男");
	
	//cout << sizeof(test);
	//test.printList();
	//test.printMap();
	StringUtil util;
	cout << util.double2string(12345)<<endl;
	cout << util.string2int("123.55") << endl;
	//cout << TimeUtil::getTimeMs();
	TimeUtil timeUtil("2018/08/02 12:12:30");
	cout << "年" << "\t" << "月" << "\t" << "日" << "\t" << "时" << "\t" << "分" << "\t" << "秒" << "\t" << "毫秒"<<endl;
	cout << timeUtil.getYear()<< "\t" << timeUtil.getMonth() << "\t" << timeUtil .getDay()<< "\t" << timeUtil.getHour() << "\t" << timeUtil.getMin() << "\t" << timeUtil.getSeconds() << "\t" << timeUtil.getMs();
	TimeUtil timeUtil1;
	cout << endl;
	//return false;
	//return true;
	cout << (timeUtil1.compare(timeUtil) ? "true" : "false")<<endl;
	cout << (timeUtil1.leap_year() ? "true" : "false")<<endl;

	cout << (TimeUtil::dateExchangeString("2018/03/15 12:12:30"))<<endl;
	cout << (TimeUtil::dateExchangeString("2018/03/14 12:12:30"))<<endl;
	cout << (TimeUtil::dateExchangeString("2018/03/13 12:12:30"))<<endl;
	cout << (TimeUtil::dateExchangeString("2018/03/16 12:12:30"))<<endl;
	cout << (TimeUtil::dateExchangeString("2018/03/17 12:12:30"))<<endl;
	//string ci;
	//cout << "输入信息" << endl;
	//cin >> ci;
	//cout << ci;
	return 0;
}

