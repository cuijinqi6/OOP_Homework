#include <iostream>
#include "fridge.h"

bool Fridge::isFridgeEmpty() {
	// 假设冰箱是空的
	return true;
}

void Fridge::openFridge() {
	std::cout << "打开冰箱..." << std::endl;
}

void Fridge::closeFridge() {
	std::cout << "关闭冰箱..." << std::endl;
}