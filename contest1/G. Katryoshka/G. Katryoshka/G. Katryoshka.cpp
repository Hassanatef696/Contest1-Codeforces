// G. Katryoshka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
struct stKingComponents {
    long long Eyes;
    long long Mouths;
    long long Bodies;
 };
long long ReadPositiveNumber() {
    long long n;
    do {
        cin >> n;
    } while (n < 0);
    return n;
}

void ReadKingComponents(stKingComponents& KingComponents) {
    KingComponents.Eyes = ReadPositiveNumber();
    KingComponents.Mouths = ReadPositiveNumber();
    KingComponents.Bodies = ReadPositiveNumber();
}
long long Calc_NumberOfKingsCanBeMade(stKingComponents KingComponents) {
    long long NumberOfKings = 0;
    if (KingComponents.Eyes == 0 || KingComponents.Bodies == 0)
        return 0;

    else if (std::min({ KingComponents.Eyes, KingComponents.Mouths, KingComponents.Bodies }) == KingComponents.Mouths)
    {
        NumberOfKings += KingComponents.Mouths;
        KingComponents.Eyes -= KingComponents.Mouths;
        KingComponents.Bodies -= KingComponents.Mouths;
        NumberOfKings += min(KingComponents.Eyes / 2, KingComponents.Bodies);
    }
    else
        NumberOfKings = min(KingComponents.Eyes, KingComponents.Bodies);
    return NumberOfKings;
}
int main()
{
    stKingComponents KingComponents;
    ReadKingComponents(KingComponents);
    cout << Calc_NumberOfKingsCanBeMade(KingComponents) << endl;
 }
