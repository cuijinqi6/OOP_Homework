#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;


int& function(int v, int *p, int &r)
{
	v = (*p)++;

	*p = 100;

	p = new int;

	*p = 1000;

	r = 2 + (*p)++;

	cout << "*p = " << *p << endl;
	cin >> r;

	delete p;

	return v;
}


void swap(int x, int y)
{
	int temp;
	temp = x; x = y; y = temp;

}
void swap(int *x, int *y)
{
	int temp;
	temp = *x; *x = *y; *y = temp;
}


void swap(int &x, int &y)
{
  int temp;
  temp = x; x = y; y = temp;
}

/******************** 主函数 ********************/

int main()
{

	cout << "---------------------------" << endl;

	//1. 传值，传址和传引用分析
	int a = 1, b = 2, c = 3;
	cout << "---------------------------" << endl;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	function(a, &b, c);
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;


	//2. 引用规律分析
	int &r = a;
	r = a + b + c;
	a = r + a + b + c;
	cout << "r = " <<r<< endl;
	cout << "a = " << a << endl;

	cout << "&r = " << &r << endl;
	cout << "&a = " << &a << endl;



	cout << "---------------------------" << endl;

	//3. 局部变量存储分析
	int i = 10, j = 20, k = 30;

	cout << "变量a的地址：" << &a << endl;
	cout << "变量b的地址：" << &b << endl;
	cout << "变量c的地址：" << &c << endl;


	//4. 动态内存申请分析
	int *p1 = new int(10);
	int *p2 = new int[100]{10, 20, 30};

	cout << "变量p1地址：" << &p1 << endl;
	cout << "变量p2地址：" << &p2 << endl;

	cout << "变量p1指向的地址：" << p1 << endl;
	cout << "变量p2指向的地址：" << p2 << endl;



	system("pause");

	return 0;
}