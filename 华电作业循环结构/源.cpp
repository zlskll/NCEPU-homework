#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int FibonacciNumber(int n) {
	if (n == 1 || n == 2) {
		return n;
	}
	else
		return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}
int main() {
	int a = 1;
	int b = 1;
	int n = 0;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		sum += FibonacciNumber(i);
	}
	cout << sum;
	return 0;
}