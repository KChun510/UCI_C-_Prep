#include <iostream>
void reverse(int* first, int* last, int arrLen){
	// Be carful when asn pointers to pointers.
	// Will re-asn mem address
	int temp;
	for(int i = 0; i < arrLen/2; i++){
		temp = *first;
		*first = *last;
		*last = temp;		
		first += 1;
		last -= 1;
	}

}

int main(){
	const int arrLen = 10;
	int arr[arrLen] = {0,1,2,3,4,5,6,7,8,9};
	for(int i: arr){
		std::cout << i << " ";
	}
	std::cout << std::endl;

	reverse(arr, (arr + (arrLen - 1)), arrLen);

	for(int i: arr){
		std::cout << i << " ";
	}


	return 1;
}
