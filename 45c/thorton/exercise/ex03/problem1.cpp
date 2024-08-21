#include <iostream>

//Didn't realize until now.
//We don't need the exta arg, of arrLen.
//We can just save the mem location of first and last.
//And use those locations as our bounds.
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
// Approach2, feels like the proper way to do this.
// Also allows eval of dynamic arrays.
// Time Complex is O(n + n/2) -> O(n)
void reverseApproach2(int* first, int* last){
	int arrLen = 1;
	int* tempPointer = first;
	int temp;
	while(tempPointer != last){
		tempPointer += 1;
		arrLen += 1;
	}
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

//	reverse(arr, arr + (arrLen - 1), arrLen);
	reverseApproach2(arr, arr + (arrLen -1 ));

	std::cout << std::endl;
	for(int i: arr){
		std::cout << i << " ";
	}


	return 1;
}
