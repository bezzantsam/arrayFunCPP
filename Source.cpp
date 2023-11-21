/*
@file	ArrayFun.cpp
@author		Sam Bezzant
@version	1.0

Overview

This is a program (named arrayfun) that gets 10 integers from the user, stores them in an array, and then prints out:
the entire array

the lowest value in the array
the highest value in the array
the number of odd numbers in the array
the sum of all the values in the array.
all the values that appear in the array more than once


Details

You must write/use the following functions (you’ll need to determine the parameter list and return value for each):

getData() - fills in given array with data entered by the user

printData() - prints given array values to the screen (space delimited)
lowestValue() - returns the lowest value in the given array
highestValue() - returns the highest value in the given array
countOdds() - returns the number of odd numbers in the given array
sum() - returns the sum of all the values in the given array
getDuplicateValues ()
This will accept two arrays (one input and one output) and a size (of the arrays).
All the values that appear multiple times in the input array will be copied to the output array.
It will also need to return how many elements were placed in the output array
any other functions you feel are useful/necessary.

	Notes: 	Output to the screen should only be done in main() and printData() (and the prompt in getData).
		Finding and printing duplicate values may account for 20% of the grade.


Sample Output

Enter 10 integers (separated by a space): 42 -1 12 20 99 -3 42 88 99 100

You entered: 42 -1 12 20 99 -3 42 88 99 100

Lowest value:   -3
Highest value:  100
# odd numbers:  4
Sum of all:     498

The following numbers appear multiple times: 42 99

getData15 points
printData15 points
lowest15 points
highest15 points
odds15 points
sum15 points
getDuplicateValues10 points
*/

#include <iostream>
#include <limits>
using namespace std;

// fills in given array with data entered by the user
void getData(int arr[], int size);

//prints given array values to the screen (space delimited)
void printData(int arr[], int size);

//returns the lowest value in the given array
void lowestValue(int arr[], int size);

//returns the highest value in the given array
void highestValue(int arr[], int size);

//returns the number of odd numbers in the given array 
void countOdds(int arr[], int size);

//returns the sum of all the values in the given array
void sum(int arr[], int size);

//This will accept two arrays (one input and one output) and a size (of the arrays).
//All the values that appear multiple times in the input array will be copied to the output array.
//It will also need to return how many elements were placed in the output array
void getDuplicateValues(const int inputArr[], int outputArr[], int size);



int main() {
	const int SIZE = 10;
	int numbers[SIZE];

	//call getData function
	getData(numbers, SIZE);
	printData(numbers, SIZE);
	lowestValue(numbers, SIZE);
	highestValue(numbers, SIZE);
	countOdds(numbers, SIZE);
	return 0;
}

//implement getData function
void getData(int arr[], int size) {
	cout << "Enter " << size << " integers (separated by space): ";
	//for loop with while loop checking for valid integer input. Requires valid integer for each array spot to proceed
	for (int i = 0; i < size; i++) {
		while (!(cin >> arr[i])) {
			cout << "Try again. Please enter an integer." << endl;
			//clear error
			cin.clear();
			//flush buffer
			cin.ignore(100, '\n');
			//prompt again
			cout << "Enter remaining numbers: ";
		}
	}
}
void printData(int arr[], int size) {
	//display input data back to user
	cout << "You entered: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void lowestValue(int arr[], int size) {
	int lowestValue = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < lowestValue) {
			lowestValue = arr[i];
		}
	}
	cout << "Lowest value: " << lowestValue << endl;
}

void highestValue(int arr[], int size) {
	int highestValue = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > highestValue) {
			highestValue = arr[i];
		}
	}
	cout << "Highest value: " << highestValue << endl;
}

void countOdds(int arr[], int size) {
	int oddAmount = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			oddAmount += 1;
		}
	}
	cout << "# of odd numbers: " << oddAmount << endl;
}

void sum(int arr[], int size) {

}

void getDuplicateValues(const int inputArr[], int outputArr[], int size) {

}

