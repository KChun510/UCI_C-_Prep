#include <iostream>
// Passing by 
void testFn(int* first, int* last){
	std::cout << *first << std::endl;
	std::cout << *last << std::endl;
	last += 1;
	first -= 3;
	std::cout << *last << std::endl;
	std::cout << *first << std::endl;

}



void testFn2(int& first, int& last){
	std::cout << first << std::endl;
	std::cout << last << std::endl;

	first = 100;
}

int main(){
	int arr[5] = {0,1,2,3,4};
	int first = 0;
	int two = 1;
	/*
	std::cout << *arr + 1 << std::endl; 
	std::cout << arr << std::endl;
	std::cout << arr + 1 << std::endl;
	*/

	testFn(arr, arr + 4);
//	testFn2(first, two);
}
