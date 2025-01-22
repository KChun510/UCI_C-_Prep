#include <iostream>

class str {
private:
	size_t str_size = 0;
	char* string = nullptr;
	
	int getInputLength(const char* input_str){
		size_t len = 0;
		for(int i = 0; input_str[i] != '\0'; i++){
			len++;
		}
		return len + 1;
	}

public:
	str(const char* input_str){
		str_size = getInputLength(input_str);
		string = new char[str_size];
		for(int i = 0; input_str[i]!='\0'; i++){
			string[i] = input_str[i];
		}
		int i = 0;
		while(input_str[i] != '\0'){
			string[i] = input_str[i];
			i++;
		}
		string[i] = '\0';
	}

	void append(char c){
		char* tempArr = new char[str_size + 2];
		int i = 0;
		while(string[i] != '\0'){
			tempArr[i] = string[i];
			i++;
		}
		tempArr[i] = c;
		tempArr[i+1] = '\0';
		delete[] string;
		string = tempArr;
	}

	void concat(const char* input_str){
		char* tempArr = new char[str_size + getInputLength(input_str) + 1];

		int i = 0, i2 = 0;
		
		while(string[i] != '\0'){
			tempArr[i] = string[i];
			i++;
		}

		while(input_str[i2] != '\0'){
			tempArr[i] = input_str[i2];
			i++;
			i2++;
		}
		tempArr[i] = '\0';

		delete[] string;
		string = tempArr;
		str_size = i;
	}

	void print(){
		for(int i = 0; string[i] != '\0'; i++){
			std::cout<<string[i];
		}
		std::cout << std::endl;
	}

	int length(){
		return str_size - 1;
	}

	~str(){
		delete[] string;
	}
};

int main(){
	str myStr = "Ello Ello";
	myStr.concat(" Test");
	myStr.print();
	myStr.append(' ');
	myStr.print();
	myStr.concat("Some say potato");
	myStr.print();
	myStr.append('\n');
	myStr.concat("Others say potatoo");
	myStr.print();
	return 0; 
}

