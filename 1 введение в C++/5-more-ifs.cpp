#include<iostream>
using namespace std;

int main() {
	// можно заводить переменные так
	int x=0, y=0, z=0;
	cin >> x >> y >> z;

	// && это AND, || это OR, ! это NOT
	if (x > y && x > z) {
		cout << x << endl;
	} 
	else if (y > z) {
		cout << y << endl;
	}
	else {
		cout << z << endl;
	}
}