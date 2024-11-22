#include <iostream>
#include <string>

using namespace std;


int main() {

	int n = 0;
	int sum = 0;


	cout << "Enter a number to create an array of the same size that will store numbers: ";
	cin >> n;
	cout << endl;

	int* numbers = new int[n];

	//This takes the elements as an input
	for (int i = 0; i < n; i++) {
		cout << "Enter a number: ";
		cin >> *(numbers + i);
	}
	cout << endl;

	int smallestNumber = *numbers;
	int largestNumber = *numbers;

	//This finds the sum of the elements in the array
	for (int i = 0; i < n; i++) {
		sum += *(numbers + i);
	}
	cout << "The sum of the numbers is: " << sum << endl;

	//This finds the smallest number in the array
	for (int i = 1; i < n; i++) {
		if (*(numbers + i) < smallestNumber) {
			smallestNumber = *(numbers + i);
		}
	}

	cout << "The smallest number is: " << smallestNumber << endl;

	//This finds the largest number in the array
	for (int i = 1; i < n; i++) {
		if (*(numbers + i) > largestNumber) {
			largestNumber = *(numbers + i);
		}
	}

	cout << "The largest number is: " << largestNumber << endl;


	//This sorts the number in an ascending way
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(numbers + i) > *(numbers + j)) {
				// Swap using a temporary variable.
				int tempNum = *(numbers + i);
				*(numbers + i) = *(numbers + j);
				*(numbers + j) = tempNum;
			}
		}
	}


	for (int i = 0; i < n; i++) {
		cout << *(numbers + i) << endl;
	}

	delete[] numbers;

}