// A. Winter Sale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
struct stSaleInfo {
	float MainPrice;
	float Discount;
	float PriceAfterDiscount;
};

float ReadPositiveNumber() {
	float n;
	do {
		cin >> n;
	} while (n <= 0);
	return n;
}
void FillSaleInfo(stSaleInfo &SaleInfo) {
	SaleInfo.Discount = ReadPositiveNumber();
	SaleInfo.PriceAfterDiscount = ReadPositiveNumber();
}

float Calc_MainPrice(stSaleInfo SaleInfo) {
	return (SaleInfo.PriceAfterDiscount * 100) / (100 - SaleInfo.Discount);
}
int main()
{
	stSaleInfo SaleInfo;
	FillSaleInfo(SaleInfo);
	cout << fixed << setprecision(2) << Calc_MainPrice(SaleInfo) << endl;
}
