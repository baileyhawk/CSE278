#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int numLetters(char str[]);
int numDigits(char str[]);
int numNumbers(char str[]);
bool checkMiami(char str[]);
void changeCase(string &str, int upOrLow);
int * abc(char str[]);

int main() {
	char str1[] = "feng12@miamiOh.edu_^&*-----2055";
	char str2[] = "abcdefg123";
	string str3 = "feng12@miamiOh.edu_^&*-----2055";

	//Testing function a
	cout << "str1 has " << numLetters(str1) << " letters in it. " << endl;
	
	//Testing function b
	cout << "str1 has " << numDigits(str1) << " digits in it. " << endl;
	
	//Testing function c
	cout << "str1 has " << numNumbers(str1) << " numbers in it. " << endl;
	
	//Testing function d
	if(checkMiami(str2))
		cout << "str1 contains \"miami\"." << endl;
	else
		cout << "str1 does not contain \"miami\". " << endl;

	//Testing function e
	changeCase(str3, 0);
	cout << "Changed string to lowercase: " << str3 << endl;
	changeCase(str3, 1);
	cout << "Changed string to uppercase: " << str3 << endl;	

	//Testing function f
	int *p;
	p = abc(str1);
	cout << "str1 has " << *p << " letters, " << *(p + 1) << " digits, and " << *(p + 2) << " numbers. " << endl;

	return 0;
}

int numLetters(char str[]) {
	int numLetters = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			numLetters++;
	}
	return numLetters;
}

int numDigits(char str[]) {
	int numDigits = 0;
	for(int i = 0; str[i] != '\0'; i++) 
		if(str[i] >= '0' && str[i] <= '9')
			numDigits++;

	return numDigits;
}

int numNumbers(char str[]) {
	int numNumbers = 0;
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] >= '0' && str[i] <= '9'){
			numNumbers++;
			while(str[i + 1] >= '0' && str[i + 1] <= '9')
				i++;
		}
	}

	return numNumbers;
}

bool checkMiami(char str[]) {
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == 'm') {
			i++;
			if(str[i] == 'i') {
				i++;
				if(str[i] == 'a') {
					i++;
					if(str[i] == 'm') {
						i++;
						if(str[i] == 'i')
							return true;
					}
				}
			}
		}
	}
	return false;
}

//Changes the case of all the letters (lowercase when case = 0, uppercase when case = 1)
void changeCase(string &str, int upOrLow) {
	if(upOrLow == 0) {		//change all to lowercase
		for(int i = 0; i < str.length(); i++) {
		//	str[i] = ::tolower(str[i]);
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	} else if(upOrLow == 1) {	//change all to uppercase
		for(int i = 0; i < str.length(); i++) {
		//	str[i] = ::toupper(str[i]);
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
}

int * abc(char str[]) {
	static int values[3];

	values[0] = numLetters(str);
	values[1] = numDigits(str);
	values[2] = numNumbers(str);

	return values;
}
