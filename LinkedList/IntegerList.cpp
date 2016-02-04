/**@file written by Juris Puchin and Emil Santos on 1July2015
* @brief This file contains the implementation of IntegerList class using vector class*/

#include "IntegerList.h"
#include <assert.h>
#include <iostream>
#include <cstdlib>

using namespace std;

IntegerList::IntegerList() {
	length = 0;
	listHead = NULL;
	listTail = NULL;
}
void IntegerList::push(int value) {
	assert(length >= 0);

	if (length == 0) {
		listHead = new Node(value, NULL);
		listTail = listHead;
	} else {
		listHead = new Node(value, listHead);
	}

	length = length + 1;
}
int IntegerList::pop() {
	assert(listHead != NULL);
	assert(length > 0);
	
	int answer = listHead->getData();

	Node* tmpPointer = listHead;
	listHead = listHead->getNextNode();
	delete tmpPointer;

	length = length - 1;

	if (length == 0) {
		listTail = NULL;
	}

	return answer;
}
void IntegerList::pushEnd(int value) {
	assert(length >= 0);

	if (length == 0) {
		listHead = new Node(value, NULL);
		listTail = listHead;
	} else {
		listTail->setNextNode(new Node(value, NULL));
		listTail = listTail->getNextNode();
	}

	length = length + 1;
}
int IntegerList::popEnd() {
	assert(listTail != NULL);
	assert(length > 0);
	
	int answer = listTail->getData();
	Node* tmpPointer = listTail;
	Node* currentNode = listHead;
	for (int i = 0; i < length - 2; i++) {
		currentNode = currentNode->getNextNode();
	}
	listTail = currentNode;
	delete tmpPointer;
	length = length - 1;

	if (length == 0) {
		listHead = NULL;
	}

	return answer;
}
int IntegerList::getLength() {
	return length;
}
int IntegerList::getElement(int element) {
	assert(element >= 0);
	assert(element <= length);

	Node* currentNode = listHead;
	for (int i = 0; i < element; i++) {
		currentNode = currentNode->getNextNode();
	}
	int answer = currentNode->getData();
	return answer;
}

void IntegerList::sort() {
	bool swapped_something = false;
	int unsorted = length - 1;
	if (length > 1) {
		do {
			swapped_something = false;
			Node* currentNode = listHead;
			Node* previousNode = NULL;
			for (int i = 0; i < unsorted; i++) {
				//cout << "Comparing " << currentNode->getData() << " and " << currentNode->getNextNode()->getData() << endl;
				if (currentNode->getData() > currentNode->getNextNode()->getData()) {
					//Swap the two elements
					Node* tempNode = currentNode->getNextNode();
					currentNode->setNextNode(currentNode->getNextNode()->getNextNode());
					tempNode->setNextNode(currentNode);
					if (i == 0) {
						listHead = tempNode;
					} else {
						previousNode->setNextNode(tempNode);
					}
					//Record that a change was made
					currentNode = tempNode;
					swapped_something = true;
				}
				previousNode = currentNode;
				currentNode = currentNode->getNextNode();
			}
			unsorted = unsorted - 1;
		} while (swapped_something);
	}
}

Node::Node(int data, Node* nextNode) {
	this->data = data;
	this->nextNode = nextNode;
}
Node* Node::getNextNode() {
	return nextNode;
}
void Node::setNextNode(Node* newNextNode) {
	nextNode = newNextNode;
}
void Node::setData(int i) {
	data = i;
}
int Node::getData() {
	return data;
}