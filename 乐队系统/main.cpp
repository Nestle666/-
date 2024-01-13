

#include<mysql.h>

#include<iostream>
#include"_mysql.h"


using namespace std;
connection conn;
sqlstatement stmt;

int main() {
	MYSQL mydata;
	char connstr[] = "127.0.0.1,root,123456,test,3306";
	char charset[] = "gbk";

	if (conn.connecttodb(connstr, charset) == 0) //启用自动提交
		std::cout << "connect  success!" << endl;
	else {
		cout << "连接失败" << endl;
		cout << conn.m_cda.rc << endl;
		cout << conn.m_cda.message << endl;
	}
	stmt.connect(&conn);

	//if (NULL!= mysql_real_connect(&mydata, "localhost", "root", "123456", "test",3306, NULL, 0))//这里的地址，用户名，密码，端口可以根据自己本地的情况更改
	//{
	//	cout << "mysql_real_connect() succeed" << endl;
	//}
	//else {
	//	cout << "mysql_real_connect() failed" << endl;
	//	return -1;
	//}


	return 0;
}