#include <iostream>
using namespace std;

int main() {
	int rowsColumns[3][5];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			rowsColumns[i][j] = i * j;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << rowsColumns[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';

	return 0;
}