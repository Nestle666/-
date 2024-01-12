

#include<mysql.h>

#include<iostream>
#include"_mysql.h"

connection conn;
sqlstatement stmt;

int main() {
	char connstr[] = "10.201.108.1,root,123456,test,3306";
	char charset[] = "gbk";

	conn.connecttodb(connstr, charset); //启用自动提交
	stmt.connect(&conn);


	return 0;
}