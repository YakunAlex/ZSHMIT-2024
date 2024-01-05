#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	// массив a длины n, заполненный тройками
	// vector<int> a(n, 3);
	// создаем двумерный массив n на m
	vector<vector<int> > table(n, vector<int>(m));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> table[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}