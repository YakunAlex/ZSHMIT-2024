#include<iostream>
#include<vector>
using namespace std;

int main() {
	// задача: дано n, потом дано n чисел, потом дано X
	// нужно вывести есть ли X среди этих чисел
	int n=0;
	cin >> n;

	// создаем массив
	// элементы изначально - нули
	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int x = 0;
	cin >> x;

	bool win = false;
	for (int i = 0; i < n; ++i) {
		if (x == a[i]) {
			win = true;
			break;
		}
	}

	// if (win == true) {
	if (win) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}