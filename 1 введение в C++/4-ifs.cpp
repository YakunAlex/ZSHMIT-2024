#include<iostream>
using namespace std;

int main() {
	// можно заводить переменные так
	int x=0, y=0;
	cin >> x >> y;

	if (x > y) {
		cout << x << endl;
	} 
	else {
		cout << y << endl;
	}

	cout << max(x, y);
}