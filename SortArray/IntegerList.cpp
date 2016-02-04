/**@file written by Juris Puchin and Emil Santos on 25June2015
* @brief This file contains the implementation of IntegerList class*/

#include "IntegerList.h"
#include <iostream>

using namespace std;

IntegerList::IntegerList() {
	length = 0;
	list = 0;
}
void IntegerList::push(int value) {
	length = length + 1;
	int *temp_array = new int[length];
	if (length > 0) {
		for (int i = 1; i < length; i++) {
			temp_array[i] = list[i-1];
		}
	}
	delete[] list;
	list = temp_array;
	list[0] = value;
}
int IntegerList::pop() {
	int answer = 0;

	if (length > 0) {
		answer = list[0];
		length = length - 1;
	} else {
		cout << "Error: tried to get an elemnt from an empty list!" << endl;
		return 0;
	}

	int *temp_array = new int[length];
	if (length != 0) {
		for (int i = 0; i < length; i++) {
			temp_array[i] = list[i + 1];
		}
	}
	delete[] list;
	list = temp_array;
	return answer;
}
void IntegerList::pushEnd(int value) {
	length = length + 1;
	int *temp_array = new int[length];
	if (length > 0) {
		for (int i = 0; i < length - 1; i++) {
			temp_array[i] = list[i];
		}
	}
	delete[] list;
	list = temp_array;
	list[length-1] = value;
}
int IntegerList::popEnd() {
	int answer = 0;

	if (length > 0) {
		length = length - 1;
		answer = list[length];
	} else {
		cout << "Error: tried to get an elemnt from an empty list!" << endl;
		return 0;
	}

	int *temp_array = new int[length];
	if (length != 0) {
		for (int i = 0; i < length; i++) {
			temp_array[i] = list[i];
		}
	}
	delete[] list;
	list = temp_array;
	return answer;
}
int IntegerList::getLength() {
	return length;
}
int IntegerList::getElement(int element) {
	return list[element];
}

void IntegerList::sort() {
	bool swapped_something = false;
	int unsorted = length - 1;
	if (length > 1) {
		do {
			swapped_something = false;
			for (int i = 0; i < unsorted; i++) {
				if (list[i] > list[i+1]) {
					//Swap the two elements
					int temp = list[i];
					list[i] = list[i+1];
					list[i+1] = temp;
					//Record that a change was made
					swapped_something = true;
				}
			}
			unsorted = unsorted - 1;
		} while (swapped_something);
	}
}