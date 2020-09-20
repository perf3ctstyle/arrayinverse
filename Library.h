#include <iostream>
#include <ctime>
#include <random>

using namespace std;

class Array {
private:
	int* arr;
	int arrLength;
	int minElemIndex;
	int maxElemIndex;

	int findMinElem() {
		int requiredElem = this->arr[0], 
			requiredElemIndex = 0;
		for (int i = 0; i < this->arrLength; i++) {
			if (requiredElem > this->arr[i]) {
				requiredElem = this->arr[i];
				requiredElemIndex = i;
			}
		}
		return requiredElemIndex;
	}
	int findMaxElem() {
		int requiredElem = this->arr[0], 
			requiredElemIndex = 0;
		for (int i = 0; i < this->arrLength; i++) {
			if (requiredElem < this->arr[i]) {
				requiredElem = this->arr[i];
				requiredElemIndex = i;
			}
		}
		return requiredElemIndex;
	}

public:
	Array() {
		arrLength = 0;
		minElemIndex = 0;
		maxElemIndex = 0;
	}
	void createArray(int n, int *inputArr) {
		this->arrLength = n;
		this->arr = new int[n];
		for (int i = 0; i < n; i++) {
			this->arr[i] = inputArr[i];
		}
		this->minElemIndex = findMinElem();
		this->maxElemIndex = findMaxElem();
	}
	void printArray() {
		for (int i = 0; i < this->arrLength; i++) {
			cout << this->arr[i] << ' ';
		}
	}
	void invertArray() {
		int i{}, n{}, buffer{ 0 };
		if (this->minElemIndex > this->maxElemIndex) {
			i = this->maxElemIndex + 1;
			n = this->minElemIndex - 1;
		}
		else {
			i = this->minElemIndex + 1;
			n = this->maxElemIndex - 1;
		}
		while (n > i) {
			buffer = this->arr[i];
			this->arr[i] = this->arr[n];
			this->arr[n] = buffer;
			i++; 
			n--;
		}
	}
};