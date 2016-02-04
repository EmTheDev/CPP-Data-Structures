/**@file written by Juris Puchin and Emil Santos on 1July2015
* @brief This file contains the implementation of IntegerList class using vector class*/

#include "IntegerList.h"
#include <assert.h>
#include <iostream>

using namespace std;

IntegerList::IntegerList() {
	length = 0;
	list = new vector<int>();
}
void IntegerList::push(int value) {
	vector<int>::iterator first_element;
	first_element = list->begin();

	length = length + 1;
	list->insert(first_element, value);
}
int IntegerList::pop() {
	assert(!list->empty());
	assert(length > 0);
	
	vector<int>::iterator first_element;
	first_element = list->begin();
	int answer = list->front();

	length = length - 1;
	list-> erase(first_element);
//g++ IntegerList.cpp IntegerList.h IntegerListTest.cpp
	return answer;
}
void IntegerList::pushEnd(int value) {
	length = length + 1;
	list->push_back(value);
}
int IntegerList::popEnd() {

	assert(!list->empty());
	assert(length > 0);

	vector<int>::iterator last_element;
	last_element = (list-> end() -1);
	int answer = list->back();

	length = length - 1;
	list-> erase(last_element);

	return answer;
}
int IntegerList::getLength() {
	return length;
}
int IntegerList::getElement(int element) {
	assert(element >= 0);
	assert(element <= length);

	int answer = list->at(element);
	return answer;
}

void IntegerList::sort() {
	bool swapped_something = false;
	int unsorted = length - 1;
	if (length > 1) {
		do {
			swapped_something = false;
			for (int i = 0; i < unsorted; i++) {
				if (list->at(i) > list->at(i+1)) {
					//Swap the two elements
					int temp = list->at(i);
					list->at(i) = list->at(i+1);
					list->at(i+1) = temp;
					//Record that a change was made
					swapped_something = true;
				}
			}
			unsorted = unsorted - 1;
		} while (swapped_something);
	}
}