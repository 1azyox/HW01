#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int Num[5];
	int input;
	for (int a = 0; a < 5; a++) {
		cout << "숫자를 입력하시오 : ";
		cin >> Num[a];
	}
	cout << "1(오름차순) 혹은 2(내림차순)를 입력하시오 : ";
	cin >> input;
	if (input == 1) {
		for (int a = 0; a < 4; a++) {
			for (int b = 0; b < 4 - a; b++)
				if (Num[b] > Num[b + 1]) {
					swap(Num[b], Num[b + 1]);
				}
		}
		for (int a : Num) {
			cout << a << " ";
		}
	}
	else if (input == 2) {
		for (int a = 0; a < 4; a++) {
			for (int b = 0; b < 4 - a; b++)
				if (Num[b] < Num[b + 1]) {
					swap(Num[b], Num[b + 1]);
				}
		}
		for (int a : Num) {
			cout << a << " ";
		}
	}
	else {
		cout << "입력 오류";
	}
	return 0;
}