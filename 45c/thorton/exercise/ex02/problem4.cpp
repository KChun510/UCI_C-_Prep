//Testing legality of vars
#include <string>
#include <iostream>
int main(){
		
	int i = 3;
	double d = 3.5;
	std::string s = "Boo is perfect";
	int& refI = i; 
	int* j = &i;
	int k = *j;
	int test = i + *j;
//	int* k = new int{5};

		
	std::cout << k;
	std::cout << std::endl << i + j; 
	std::cout << std::endl << test;

}
