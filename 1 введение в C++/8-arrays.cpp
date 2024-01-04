#include<iostream>
// нужно подключить библиотеку vector
#include<vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	// теперь a - массив длины n
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum << endl;
}