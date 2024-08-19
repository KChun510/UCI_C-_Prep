#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main(){
	Stack stack;
	string inputStr;	
	cout << "Enter a random line of chars \n";
	while(getline(cin, inputStr)){

		for(char i : inputStr){
			cout << i;
			stack.push(i);
		};

		while(!stack.isEmpty()){
			stack.pop();
		};
	}
		
	return 0;
}
