// D. Ali Baba and Puzzles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enValidResult{Yes = 1 ,No = 2};
struct stPuzzleInfo {
    long long a;
    long long b;
    long long c;
    long long d;
};
long long ReadNumber() {
    long long n;
    cin >> n;
    return n;
}
void ReadPuzzleInfo(stPuzzleInfo &PuzzleInfo) {
    PuzzleInfo.a = ReadNumber();
    PuzzleInfo.b = ReadNumber();
    PuzzleInfo.c = ReadNumber();
    PuzzleInfo.d = ReadNumber();
}
enValidResult CheckValidExpression(stPuzzleInfo PuzzleInfo) {
    if (PuzzleInfo.a + PuzzleInfo.b - PuzzleInfo.c == PuzzleInfo.d || PuzzleInfo.a + PuzzleInfo.b * PuzzleInfo.c == PuzzleInfo.d )
        return enValidResult::Yes;
    else if (PuzzleInfo.a - PuzzleInfo.b + PuzzleInfo.c == PuzzleInfo.d || PuzzleInfo.a - PuzzleInfo.b * PuzzleInfo.c == PuzzleInfo.d)
        return enValidResult::Yes;
    else if (PuzzleInfo.a * PuzzleInfo.b + PuzzleInfo.c == PuzzleInfo.d || PuzzleInfo.a * PuzzleInfo.b - PuzzleInfo.c == PuzzleInfo.d)
        return enValidResult::Yes;
    else
        return enValidResult::No;
}
void PrintResult(stPuzzleInfo PuzzleInfo) {
    if (CheckValidExpression(PuzzleInfo) == enValidResult::Yes)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    stPuzzleInfo PuzzleInfo;
    ReadPuzzleInfo(PuzzleInfo);
    PrintResult(PuzzleInfo);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
