#include "String.h"
#include <iostream>

String::String(const char * s){
	strcpy(buf, s); 
};

String::String(const String & s){
	strcpy(buf, s.buf);
}

void String::print(ostream & out){
	out << buf;
}

/*
String::~String(){
	std::cout<< "destructor" << endl;
}
*/
