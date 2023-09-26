/*************************************************
** 功能 : 编写一个"大象装进冰箱"的程序
** 版本 : 2023-9-26 / 20:00
/**************************************************/

#include <bits/stdc++.h>
#include "elephant.h"
#include "fridge.h"
using namespace std;

/*----------------------------------*
		  Global Varables
*-----------------------------------*/

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main() {
	Elephant elephant;
	Fridge fridge;

	cout << "尝试将大象装进冰箱..." << endl;

	if (fridge.isFridgeEmpty()) {
		fridge.openFridge();
		elephant.enterFridge();
		fridge.closeFridge();
		cout << "成功将大象装进冰箱！" << endl;
	}
	else {
		cout << "冰箱已经不空了，无法将大象装进去。" << endl;
	}
	system("pause");
	return 0;
}