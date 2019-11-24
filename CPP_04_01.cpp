#include <iostream>

using namespace std;

template <typename T>
T maxIndex(T arr[], size_t size) {

	T tempMax = arr[0];
	T indexMax = 0;

	for (int i = 1; i < size; i++) {
		if (tempMax < arr[i]) {
			indexMax = i;
			tempMax = arr[i];
		}
	}

	return indexMax;

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 8, 2 };
	size_t sizeT = 6;
	int index = maxIndex(arr, sizeT);

	cout << "Index: " << index << " Value: " << arr[index] << endl;
}
