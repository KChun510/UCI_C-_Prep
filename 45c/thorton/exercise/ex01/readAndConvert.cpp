#include "readAndConvert.h"
#include <ostream>
#include <string>
#include <iostream>



void intake(int & numbOfTrades, std::string & shortName, std::string & fullName){
	std::string *arr = new std::string[numbOfTrades + 1];
	arr[0] = shortName + " (" + fullName + ") ";
	for(int i = 0; i < numbOfTrades; i++){	
		std::string userInput = "";
		std::cout << "Enter in trade: ";
		std::getline(std::cin, userInput);
		int inputLen = userInput.length();
		std::cout << std::endl << "The input len is. "<< std::to_string(inputLen) << std::endl;
		std::string temp = "";
		std::string final = "";
		int tempSum = 0;
		int splitCount = 0;
		for(int j = 0; j < inputLen; j++ ){
			temp += userInput[j];
			if(userInput[j] == ' ' && splitCount == 0){
				final = "[ " + temp + "] ";	
				temp = "";
				splitCount += 1;
			}else if(userInput[j] == ' ' && splitCount == 1){
				tempSum = std::stof(temp);	
				temp = "";
				splitCount += 1;
			}
		}
		tempSum *= std::stoi(temp);	
		final += std::to_string(tempSum);
		arr[i+1] = final;
	}
	for(int i = 0; i < numbOfTrades + 1; i++ ){
		std::cout<< arr[i] << std::endl;
	}
}

void readAndConvert(){
	std::string numberOfTrades;
	std::string shortName = "";
	std::string fullName = "";
	std::cout<<"Enter trade number: ";
	std::getline(std::cin, numberOfTrades);
	std::cout << "Enter the stock shortHand: ";
	std::getline(std::cin, shortName);
	std::cout << "Enter the stock fullName: ";
	std::getline(std::cin, fullName);
	int numb = stoi(numberOfTrades);
	std::string sName = shortName;
	std::string fName = fullName;
	intake(numb, sName, fName);
}
