/*  @file IntegerList.cpp 6/25/15 by MHS
 *  @brief This file implements the main method for testing IntegerList class.
 */

#include "IntegerList.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

/**
 * This main method tests the IntegerList method.  An IntegerList
 * is populated and the values printed out to the console.
 */
int main(){

	IntegerList list;

	cout << "length: " << list.getLength() << endl;
	for(int i = 0 ; i < 5 ; i++) {
		list.pushEnd(i);
	}
	
	for(int i = 0 ; i < list.getLength() ; i++){
		cout << "list[" << i << "]: " << list.getElement(i) << endl;
	}

}