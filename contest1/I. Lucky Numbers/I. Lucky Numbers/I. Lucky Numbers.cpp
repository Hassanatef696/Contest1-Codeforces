// I. Lucky Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enLuckyResult{Yes = 1 ,No = 2};
int ReadPositiveNumber() {
    int n;
    do {
        cin >> n;
    } while (n <= 0);
    return n;
}
enLuckyResult CheckLuckyNumber(int Number) {
    int LastDigit = Number % 10;
    int FirstDigit = Number / 10;
    if (LastDigit == 0)
        return enLuckyResult::Yes;
    else if (FirstDigit % LastDigit == 0 || LastDigit % FirstDigit == 0)
        return enLuckyResult::Yes;
    else
        return enLuckyResult::No;
   
}
void PrintResult(int Number) {
    if (CheckLuckyNumber(Number) == enLuckyResult::Yes)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int Number = ReadPositiveNumber();
    PrintResult(Number);
}
