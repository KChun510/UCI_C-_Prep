/*
*What are the design benefits of passing a parameter by value? What can you do when you pass by value that you can't do when you pass by reference
What are the design benefits of passing a parameter by reference? What can you do when you pass by reference that you can't do when you pass by value?
Suppose you were going to write a function with one parameter, and that the result would be the same whether you passed the parameter by value or by reference — it's not always the case that the outcome will be different. In what circumstances would you expect the pass-by-value version to run faster? In what circumstances would you expect the pass-by-value version to use less memory?
Same situation as the previous question. In what circumstances would you expect the pass-by-reference version to run faster? In what circumstances would you expect the pass-by-reference version to use less memory?
*
*
*
*/
// 1. When passing by value, it's good if you don't want to edit
// the underlying var it self. (Passing a copy)
//
// 2. When passing by referance, your going to manipulating the value located in the mem address.
//
//
//
//
//
//
#include <iostream>
void passByRef(int& var){
	std::cout << var<< std::endl;
	var += 2; 
}
void passByValue(int var){
	std::cout << var << std::endl;
}

void passByPointer(int* var){
	std::cout << var << std::endl;
	var += 5; 
}

int main(){
	int testVar = 5;
	passByRef(testVar);
	passByValue(testVar);
	passByPointer(&testVar);
	std::cout << testVar << std::endl; 
	return 1;
}
