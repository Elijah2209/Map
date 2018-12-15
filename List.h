#pragma once
#include <string>
struct List {
	int key;
	int capacity = 4;
	std::string str;
	List* next;
	List* pre;
	List(){
		key = 0;
		str = "";
		next = nullptr;
		pre = nullptr;
	}
	~List() {
	};
};
