#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Please enter a double value for the radius of the circle: ";
	double radius;
	cin >> radius;
	double perimeter = 2.0 *M_PI * radius;
	double area = M_PI * radius * radius;
	cout << fixed;
	cout << "The perimeter of the circle is " << setprecision(2) << perimeter << " and the area is " << area << endl;
	
	return 0;
}
