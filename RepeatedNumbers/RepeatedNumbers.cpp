//Вариант 3
#include <iostream>
int dif(int k) {
	int count = 0; //1234425
	int i = 0;
	int f = k;
	int size = 0;
	while (f > 0) {
		f /= 10;
		size++;
	}
	int* a = new int[size];
	for (; k % 10 != 0; i++) {
		a[i] = k % 10;
		k /= 10;
	}
	int m = 0, n = 0;
	for (int m = 0; m < 10; m++) {
		for (int j = 0; j < a[size]; j++) {
			if (a[j] == m) {
				n++;
			}
		}
		if (n == 1) {
			count++;
		}
	}
	return count;
}
int prime(int y) {
	int d = 0;
	for (int i = 1; i <= y; i++) {
		if (y % 1 == 0) {
			d++;
		}
	}
	return d;
}
int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	int x = 0;
	if (dif(a) >= dif(b) && dif(a) >= dif(c)) {
		x = a;
		std::cout << a;
	}
	else if (dif(b) >= dif(a) && dif(b) >= dif(c)) {
		x = b;
		std::cout << b;
	}
	else {
		x = c;
		std::cout << c;
	}
	std::cout << '\n';
	double ans = 1 / (double)x;
	std::cout << ans << '\n';
	if (prime(x) > 2) {
		std::cout << " The number is not prime ";
	}
	else {
		std::cout << " The number is prime ";
	}
	return 0;
}
