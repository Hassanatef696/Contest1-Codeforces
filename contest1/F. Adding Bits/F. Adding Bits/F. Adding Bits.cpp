// F. Adding Bits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long long ReadPositiveNumber() {
	long long n;
	do {
		cin >> n;
	} while (n < 0);
	return n;
}
void ReadNumbers(long long& a, long long& b) {
	a = ReadPositiveNumber();
	b = ReadPositiveNumber();
}
long long XORGate(long long a, long long b) {
	return a ^ b;
}
int main() {
	long long a, b;
	ReadNumbers(a, b);
	cout << XORGate(a, b);
}