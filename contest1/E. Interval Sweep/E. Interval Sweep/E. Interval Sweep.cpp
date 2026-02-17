// E. Interval Sweep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enValidInterval{Yes = 1, No = 2};
int ReadPositiveNumber() {
    int n;
    do {
        cin >> n;
    } while (n < 0);
    return n;
}
void ReadNumbers(int& a, int& b) {
    a = ReadPositiveNumber();
    b = ReadPositiveNumber();
}
enValidInterval CheckValidInterval(int a, int b) {
    if (a - b == 1 || b - a == 1 || (a == b && a != 0 && b != 0))
        return enValidInterval::Yes;
    else
        return enValidInterval::No;
    
}
void PrintResult(int a, int b) {
    if (CheckValidInterval(a, b) == enValidInterval::Yes)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    int a, b;
    ReadNumbers(a, b);
    PrintResult(a, b);
}
