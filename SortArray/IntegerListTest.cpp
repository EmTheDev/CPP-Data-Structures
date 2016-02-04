/*  @file IntegerList.cpp 6/25/15 by MHS
 *  @brief This file implements the main method for testing IntegerList class.
 */

#include "IntegerList.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

/**
 * This main method tests the IntegerList method. An IntegerList
 * is populated and the values printed out to the console.
 */
int main(){

	IntegerList list;

	cout << "length: " << list.getLength() << endl;
	for(int i = 0 ; i < 10000 ; i++) {
		list.push(rand()%10000);
	}
	list.sort();

	for(int i = 0 ; i < list.getLength() ; i++){
		cout << "list[" << i << "]: " << list.getElement(i) << endl;
	}

/*

	IntegerList list;
	int i;

	list.pushEnd(15);
	list.pushEnd(5);
	list.pushEnd(1);
	list.pushEnd(-6);
	list.pushEnd(38);

	i = 0;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 1;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 2;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 3;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 4;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	list.sort();

	cout << "sort" << endl;

	i = 0;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 1;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 2;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 3;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 4;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;



	cout << list.popEnd() << endl;
	cout << list.popEnd() << endl;
	cout << list.popEnd() << endl;
	cout << list.popEnd() << endl;

	list.pushEnd(10);
	list.pushEnd(20);
	list.pushEnd(30);

	i = 0;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 1;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

	i = 2;
	cout << "list[" << i << "]: " << list.getElement(i) << endl;

*/
}


