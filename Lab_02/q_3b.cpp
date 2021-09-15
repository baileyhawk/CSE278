#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <cstring>
using namespace std;
#define ARRAY_MAX 19
#define MAX_VALUE 65535

int main () {
	int array[ARRAY_MAX];
	int array_length = 0;
	char enteredVal[100];
	char done[] = "done";

	for (int i = 0; i < 19; i++) {
		cout << "Enter an integer value, or \"done\" when done : ";
		cin >> enteredVal;
		if(strcmp(enteredVal, done) != 0) {
			int intVal = stoi(enteredVal);
			if (intVal < MAX_VALUE) {
				array[array_length] = intVal;
				array_length++;
			}
		} else
			i = 19;
	}

	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < array_length; i++) {
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
	}

	double median;
	sort(array, array + array_length);
	if(array_length % 2 != 0)
		median = (double)array[array_length / 2];
	else
		median = (double)(array[(array_length - 1) / 2] + array[array_length / 2]) / 2.0;

	cout << "The length of the array is " << array_length << ", the maximum value is " << max << ", the minimum value is " << min << ", and the median value is " <<median << endl;

	return 0;
}
