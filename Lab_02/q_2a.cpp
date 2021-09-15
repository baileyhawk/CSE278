#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char username [] = "21_CSE_c++_Fall";
	char password [] = "278A&B";
	bool success = false;
	
	while(success == false) {
		char enteredUser[100];
		char enteredPass[100];

		cout << "Enter your username: ";	
		cin >> enteredUser;
		cout << "Enter your password: ";
		cin >> enteredPass;

		if(strcmp(enteredUser, username) == 0 && strcmp(enteredPass, password) == 0) {
			success = true;
			cout << "Login success" << endl;
		} else 
			cout << "Login failed" << endl;
	}

	return 0;
}
