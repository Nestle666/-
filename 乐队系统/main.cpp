

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

	if (conn.connecttodb(connstr, charset) == 0) //�����Զ��ύ
		std::cout << "connect  success!" << endl;
	else {
		cout << "����ʧ��" << endl;
		cout << conn.m_cda.rc << endl;
		cout << conn.m_cda.message << endl;
	}
	stmt.connect(&conn);

	//if (NULL!= mysql_real_connect(&mydata, "localhost", "root", "123456", "test",3306, NULL, 0))//����ĵ�ַ���û��������룬�˿ڿ��Ը����Լ����ص��������
	//{
	//	cout << "mysql_real_connect() succeed" << endl;
	//}
	//else {
	//	cout << "mysql_real_connect() failed" << endl;
	//	return -1;
	//}


	return 0;
}