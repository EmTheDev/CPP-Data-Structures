/**
 * \mainpage
 *   <h1>In Class Exercise 2 with Vectors</h1>
 *   <h2>July 1, 2015
 *   CSC 340 Summer 2015
 *   Team Members: Juris Puchin and Emil Santos.
 *   </h2>
 *   This program implements an integer list container class. Data is stored in a vector and
 *   can be accessd from both head or tail (as in Deque). The size of the array is automatically
 *   adjusted as new elements are added or removed. The table of available mehtods is attached below.
 *
 *  <center>
 *  |   IntegerList    |
 *  |------------------|
 *  | -int *list       |
 *  | -int length      |
 *  | +push(value:int):void|
 *  | +pop():int      |
 *  | +pushEnd(value:int): void|
 *  | +popEnd():int|
 *  | +getLength():int|
 *  | +getElement(element:int):int|
 *  </center>
 */

/** @file IntegerList.h JP and ES on 2July2015
* @brief This is the header file for the IntegerList class. */
#ifndef __INTEGERLIST__H__
#define __INTEGERLIST__H__
#include <vector>

class Node{
    private:
        int data;
        Node* nextNode;
    public:
        Node(int data, Node* nextNode);
        Node* getNextNode();
        void setNextNode(Node* newNextNode);
        void setData(int i);
        int getData();
};

class IntegerList{
private:
	Node* listHead;
    Node* listTail;
	int length;
public:
    /**
     *  Standard constructor which initializes private variables '*list' and 'length' to null.
     *
     */
	IntegerList();
    
    /**
     *  Inserts the specified integer value into the front of the list.
     *  The length of the list is automatically adjusted to accommodate the new data element.
     *
     *  \param value This integer element will be added to the front of the list.
     */
	void push(int value);
    
    /**
     *  Removes and returns the integer value at the front of the list.
     *  The list's length is automatically reduced by one.
     *
     *  \returns Integer value removed from the front of the list.
     */

	int pop();
    
    /**
     *  Inserts an integer value to the back of the list.
     *  The length of the list is automatically increased by one.
     *
     *  \param value This integer value will be inserted into the back of the list.
     */

	void pushEnd(int value);
    
    /**
     *  Removes and returns the element at the end of the list.
     *  The list's length is reduced by one.
     *  
     *  \returns The integer value removed from the tail of the list.
     */
	int popEnd();
    
    /**
     *  Returns the current length of the list.
     *
     *  \returns Current list length.
     */
	int getLength();
    
    /**
     *  Returns the integer value at the specified location of the list.
     *  
     *  \param element The location of the desired element in the list.
     *  \returns The integer value at a specified location of the list.
     */
	int getElement(int element);
    /**
    *  Sorts the list in ascending order using bubble sort.
    */
    void sort();
};

#endif
