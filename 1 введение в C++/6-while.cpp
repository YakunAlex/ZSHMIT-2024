#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x = 1;
	// цикл while:
	// меньше или равно: <=
	// не равно: !=
	// равно (внутри условия): ==
	while (x*x <= n) {
		cout << x*x;
		// то же что x += 1
		// или x = x + 1
		x++;
		if (x == 100) {
			// break - выйти из цикла
			break;
			// continue - завершить текущую итерацию
		}
	}

}