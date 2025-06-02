#include <iostream>

using namespace std;

void sumarray(int array[], int size) {
	int sum = 0;
	for (int s = 0; s < size; s++) {
		sum += array[s];
	}
	cout << "합계 : " << sum << endl;
}

void avgarray(int array[], int size) {
	int avg = 0;
	int sum = 0;
	for (int s = 0; s < size; s++) {
		sum += array[s];
	}
	avg = sum / 5;
	cout << "평균 : " << avg << endl;
}

int main()
{
	int arr[5];
	for (int i = 0; i < 5; ++i) {
		cout << "입력 : ";
		cin >> arr[i];
	}
	sumarray(arr, 5);
	avgarray(arr, 5);
	return 0;
}
