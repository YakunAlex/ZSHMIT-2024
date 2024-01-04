#include<iostream>
using namespace std;

int main() {
	int n=0;
	cin >> n;

	// i++ это то же что и i = i + 1 или i += 1
	for (int i = 0; i < n; i++) {
		// int i = 0 делается в самом начале цикла
		// i < n - проверяем перед каждой итерацией
		// если не выполняется - выходим
		// i++ - делаем в конце каждой итерации
		cout << i << endl;
	}
}