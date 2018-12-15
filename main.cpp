#include <iostream>
#include <string>
#include <fstream>
#include <windows.h> 
#include "List.h"
#include "Map.h"

map fillFile();
//void testMenu();
int main() {
	int key;
	map myMap = fillFile();
	std::cout << "key:";
	std::cin >> key;
	std::cout << myMap.get(key);
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	//testMenu();

	return 0;
}

//void testMenu() {
//	char flag;
//	map field;
//	while (1) {
//		std::cout << "1 - добавить в map; 2 - найти в map; 3 - выход" << std::endl << "введите пункт меню:";
//		int key;
//		std::string str;
//		std::cin >> flag;
//		switch (flag){
//		case '1':
//			std::cout << "key:";
//			std::cin >> key;
//			std::cout << "value:";
//			std::cin.ignore(1);
//			std::getline(std::cin, str);
//			field.put(key, str);
//			break;
//		case '2':
//			std::cout << "key:";
//			std::cin >> key;
//			std::cout << field.get(key) << std::endl;
//			break;
//		case '3':
//			return;
//			break;
//		default:
//			std::cout << "введён некорректный пункт меню" << std::endl;
//			break;
//		}
//	}
//}

map fillFile() {
	map myMap;
	std::string str;
	int key;
	std::fstream in("map.txt", std::ios::in);
	if (!in) {
		std:: cout << "error" << std::endl;
	}
	else {
		while (!in.eof()) {
			in >> key;
			in.ignore(1);                   //aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa
			getline(in, str);
			myMap.put(key, str);
		}
	}
	return myMap;
}
