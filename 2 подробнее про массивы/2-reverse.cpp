#include<iostream>
#include<vector>
using namespace std;

int main() {
	// задача: дано n чисел, нужно вывести их же в обратном порядке
	int n=0;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	// способ 1'
	for (int i = 0; i < n; ++i) {
		// неправильно: a[n] не существует
		// тут происходит выход за пределы массива, это очень плохо
		cout << a[n - i] << " ";
	}
	cout << endl;

	// способ 1
	for (int i = 0; i < n; ++i) {
		cout << a[n - i - 1] << " ";
	}
	cout << endl;

	// способ 2
	for (int i = n-1; i >= 0; --i) {
		cout << a[i] << " ";
	}
	cout << endl;

	
}
