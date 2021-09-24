#include <iostream>
#include <cstring>
#include <vector>
#include <climits>
using namespace std;

vector<int> localMaxMin(int arr[], int arrayLength);
#define MAX_ARRAY 20

int main() {
	int array[20];
	int arrayLength = 0;
	char enteredVal[100];
	char done[] = "done";
	
	for (int i = 0; i < MAX_ARRAY; i++) {
		cout << "Enter integer values to be added to the array, or type \"done\" when finished: ";
		cin >> enteredVal;
		if(strcmp(enteredVal, done) != 0) {
			int intVal = stoi(enteredVal);
			array[arrayLength] = intVal;
			arrayLength++;
		} else
			i = MAX_ARRAY;
	}
	vector<int> maxMins = localMaxMin(array, arrayLength);
	for(int i = 0; i < maxMins.size(); i++) {
		cout << maxMins[i] << " ";
	}
	return 0;
}

vector<int> localMaxMin(int arr[], int arrayLength) {
	int current;
	vector<int> locals;				//vector holding indices of local max and mins

	for(int i = 0; i < arrayLength - 2; i++) {
		current = arr[i];
		
		if((arr[i + 1] < current) && (arr[i + 1] != arr[i + 2])) {
			int localMin = INT_MAX;
			while((arr[i + 1] < localMin) && (i < arrayLength - 2)) {
				i++;
				localMin = arr[i];
				cout << "Local min: " << localMin << endl;
			}
			if(i < arrayLength - 2)	
				locals.push_back(i + 1);

			i--;
		} else if((arr[i + 1] > current) && (arr[i + 1] != arr[i + 2])) {
			int localMax = INT_MIN;
			while((arr[i + 1] > localMax) && (i < arrayLength - 2)) {
				i++;
				localMax = arr[i];
				cout << "local max: " << localMax << endl;
			}
			if(i < arrayLength - 2) 
				locals.push_back(i + 1);

			i--;
		} 
	}
	return locals;
}


