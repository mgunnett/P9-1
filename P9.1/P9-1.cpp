#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int arr1[10];
	int const size = 10;

	// Initialize random values for the array.
	srand(time(0));

	cout << "The random integers: ";

	for (int i = 0; i < size; i++) {
		arr1[i] = 1000 + rand() % 9000;
		cout << " " << arr1[i];
	}


}
