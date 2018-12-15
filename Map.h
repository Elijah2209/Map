#pragma once
#include <string>
class map {
public:
	int capacity = 16;
	List* arr = new List[capacity];
	void put(int, std::string);
	std::string get(int);
	~map();
private:
	int hash(int);
};