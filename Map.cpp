#include <string>
#include "List.h"
#include "Map.h"


map::~map() {
};

int map::hash(int key) {
	return key % capacity; 
}

void map::put(int key, std::string str) {
	int newKey = hash(key);
	List* it = &arr[newKey];
	if (arr[newKey].str == "") {
		arr[newKey].key = key;
		arr[newKey].str = str;
		}
		else {
			while (it->next != nullptr) {
				if (it->key == key) {
					it->str = str;
					return;
				}
				it = it->next;
				}
			if (it->key == key) {
				it->str = str;
				return;
			}
			List* tmp = new List;
			tmp->key = key;
			tmp->str = str;
			tmp->pre = it;
			it->next = tmp;
		}
		return;
}

std::string map::get(int key) {
	int newKey = hash(key);
	List* it = &arr[newKey];
	while (it!=nullptr) {
		if (it->key == key) {
			return it->str;
		}
		it = it->next;
	}
	return "void";

}