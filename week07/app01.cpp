#include <iostream>
using namespace std;
// 2d array : only heap memory
int main() {
	int rows =0, columns = 0;
	int** arr = nullptr; 
	cin >> rows;
	cin >> columns;

	arr = new int* [rows];  // 힙메모리에 포인터 배열을 동적할당
	for (int i = 0; i < rows; i++)
		arr[i] = new int[columns];  // 힙메모리에 정수 타입을 담는 배열 동적 할당

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = i * j;
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}