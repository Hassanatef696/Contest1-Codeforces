// B. Memo and Momo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enGameResults{ Memo = 1, Momo = 2, Both = 3, NoOne = 4 };
struct stMemoAndMomoRound {
    long long MemoChoice;
    long long MomoChoice;
    long long k;
};
long long ReadPositiveNumber() {
    long long Number;
    do {
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void FillRoundInfo(stMemoAndMomoRound&MemoAndMomoRound) {
    MemoAndMomoRound.MemoChoice = ReadPositiveNumber();
    MemoAndMomoRound.MomoChoice = ReadPositiveNumber();
    MemoAndMomoRound.k = ReadPositiveNumber();
}
enGameResults CheckGameRound(stMemoAndMomoRound MemoAndMomoRound) {
    if (MemoAndMomoRound.MemoChoice % MemoAndMomoRound.k == 0 && MemoAndMomoRound.MomoChoice % MemoAndMomoRound.k == 0)
        return enGameResults::Both;
    else if (MemoAndMomoRound.MemoChoice % MemoAndMomoRound.k == 0 && MemoAndMomoRound.MomoChoice % MemoAndMomoRound.k != 0)
        return enGameResults::Memo;
    else if (MemoAndMomoRound.MemoChoice % MemoAndMomoRound.k != 0 && MemoAndMomoRound.MomoChoice % MemoAndMomoRound.k == 0)
        return enGameResults::Momo;
    else
        return enGameResults::NoOne;
}
void PrintGameResult(stMemoAndMomoRound MemoAndMomoRound) {
    if (CheckGameRound(MemoAndMomoRound) == enGameResults::Both)
        cout << "Both";
    else if (CheckGameRound(MemoAndMomoRound) == enGameResults::Memo)
        cout << "Memo";
    else if (CheckGameRound(MemoAndMomoRound) == enGameResults::Momo)
        cout << "Momo";
    else
        cout << "No One";
}
int main()
{
    stMemoAndMomoRound MemoAndMomoRound;
    FillRoundInfo(MemoAndMomoRound);
    PrintGameResult(MemoAndMomoRound);
}

