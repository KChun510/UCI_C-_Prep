#include <iostream>
using namespace std;

double  convert(int knot){
	double milesPerMinute = 0;
	double milesPerHr = knot * 1.1508;
	milesPerMinute = milesPerHr / 60;
	
	return milesPerMinute;
}


int main(){
	int input;
	double outPut;
	cin >> input;
	outPut = convert(input);
	cout << outPut << "\n";
	return 0;
}
