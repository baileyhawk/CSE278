#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string username = "21_CSE_c++_Fall";
	string password = "278A&B";
	bool success = false;

	while (success == false) {
		string enteredUser;
		string enteredPass;

		cout << "Enter your username: ";
		cin >> enteredUser;
		cout << "Enter your password: ";
		cin >> enteredPass;

		if (strcasecmp(enteredUser.c_str(), username.c_str()) == 0 && strcasecmp(enteredPass.c_str(), password.c_str()) == 0) {
			success = true;
			cout << "Login success" << endl;
		} else
			cout << "Login failed" << endl;
	}

	return 0;
}

