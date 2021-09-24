#include <iostream>
using namespace std;

void swapRef(int& a, int& b);
void swapPnt(int* a, int* b);

int main() {
	int a = 2;
	int b = 3;

	cout << "a = " << a << ", b = " << b << endl;
	swapRef(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	
	int *aPnt;
	aPnt = &a;
	int *bPnt;
	bPnt = &b;
	swapPnt(aPnt, bPnt);

	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

void swapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapPnt(int* a, int* b) {
	int temp = *a;
	*a = *b;
	b = &temp;
}
