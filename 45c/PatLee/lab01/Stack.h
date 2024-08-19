#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;


class Stack{
	public:
	char charArr[1000];
	int currIndex;
	Stack(){
		currIndex = 0;
	}
	void push(char c){
		charArr[currIndex] = c;
		currIndex += 1;
	}
	char pop(){
		char returnVal = charArr[currIndex];
		charArr[currIndex] = '\0';
		currIndex -= 1;
		return returnVal;
	}
	char top(){
		return charArr[currIndex];
	}
	bool isEmpty(){
		if(currIndex > 0){
			return false;
		}
		else{
			return true;
		}
	}
	bool isFull(){
		if(currIndex == 1000){
			return true;
		}
		else{
			return false;
		}	
	}
	~Stack(){
	}
	
};
#endif
