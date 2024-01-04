#include<iostream>
using namespace std;

int main() {
	// создали переменную типа "int" (целое число)
	// в ней лежит непонятно что
	int x;
	cout << x << endl;

	// поэтому лучше делать так:
	int y = 0;
	int z = 0;
	// считывание переменной
	cin >> y >> z;
	cout << y + z << endl;
}