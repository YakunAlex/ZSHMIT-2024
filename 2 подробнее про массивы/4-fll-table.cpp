#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int> > table(n, vector<int>(n));
	int x = 1;


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			table[i][j] = x;
			x++;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}