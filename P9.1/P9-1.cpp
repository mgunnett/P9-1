#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

void getEvenIndexElements(int arr1[], int size, int evenIndexArray[], int& evenIndexSize);


int main() {

	int arr1[10],
		evenIndexArray[10],
		evenIndexSize;

	int const size = 10;

	// Initialize random values for the array.
	srand(time(0));

	cout << "The random integers: ";

	for (int i = 0; i < size; i++) {
		arr1[i] = 1000 + rand() % 9000;
		cout << arr1[i] << " ";
	}

	// Get values for even index array and print them
	getEvenIndexElements(arr1, size, evenIndexArray, evenIndexSize);

	cout << "\nEven Indices: ";

	for (int i = 0; i < evenIndexSize; i++) {
		cout << evenIndexArray[i] << " ";
	}

}

void getEvenIndexElements(int arr1[], int size, int evenIndexArray[], int& evenIndexSize) {
	evenIndexSize = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			evenIndexArray[evenIndexSize++] = arr1[i];
		}
	}
}