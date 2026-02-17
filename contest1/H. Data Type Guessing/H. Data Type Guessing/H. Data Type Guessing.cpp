// H. Data Type Guessing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
enum enDataTypeGuees{Int = 1 ,LongLong = 2, Double = 3 };
struct stEquationInfo {
   double n;
   double k;
   double a;
    
};
int ReadPositiveIntegerNumber() {
    int n;
    do {
        cin >> n;
    } while (n < 0);
    return n;
}
long long ReadPositiveLongLongNumber() {
    long long n;
    do {
        cin >> n;
    } while (n < 0);
    return n;
}
double ReadPositiveDoubleNumber() {
    double n;
    do {
        cin >> n;
    } while (n < 0);
    return n;
}
void ReadEquationInfo(stEquationInfo &EquationInfo) {
    EquationInfo.n = ReadPositiveDoubleNumber();
    EquationInfo.k = ReadPositiveDoubleNumber();
    EquationInfo.a = ReadPositiveDoubleNumber();
}
enDataTypeGuees CheckDataType(stEquationInfo EquationInfo) {
    double DoubleResult = EquationInfo.n * (EquationInfo.k / EquationInfo.a);
    long long LongLongResult = EquationInfo.n * (EquationInfo.k / EquationInfo.a);
    double Test = DoubleResult - LongLongResult;
    if (Test > 0)
        return enDataTypeGuees::Double;
    else if (LongLongResult > 2147483647)
        return enDataTypeGuees::LongLong;
    else
        return enDataTypeGuees::Int;
}
void PrintResult(stEquationInfo EquationInfo) {
    if (CheckDataType(EquationInfo) == enDataTypeGuees::Double)
        cout << "double";
    else if (CheckDataType(EquationInfo) == enDataTypeGuees::LongLong)
        cout << "long long";
    else
        cout << "int";
}
int main()
{
    stEquationInfo EquationInfo;
    ReadEquationInfo(EquationInfo);
    PrintResult(EquationInfo);
} 