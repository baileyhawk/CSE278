#include <iostream>
using namespace std;

int main(){
	int width;
	int height;
	cout << "Please enter an integer value for the width of the rectangle: " << endl;
	cin >> width;
	cout << "Please enter an integer value for the height of the rectangle: " << endl;
	cin >> height;

	int perimeter = 2 * width + 2 * height;
	int area = width * height;
	cout << "The perimeter of the rectangle is " << perimeter << " and the area is " << area << endl;
	
	return 0;
}
