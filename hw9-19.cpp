//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double getPayment(int, double, int);

int main()
{
int carPrice = 0;
int rebate = 0;
double creditRate = 0.0;
double dealerRate = 0.0;
int term;
double creditPayment = 0.0;
double dealerPayment = 0.0;
char again;
do
{
cout << "\nCar Pricr (after any trade-in): ";
cin >> carPrice;
cout << "Rebate: ";
cin >> rebate;
cout << "Credit union rate: ";
cin >> creditRate;
cout << "Dealer rate: ";
cin >> dealerRate;
cout << "Term in years: ";
cin >> term;

if (dealerRate > 1)
dealerRate /= 100;
if (creditRate > 1)
creditRate /= 100;

creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);
cout << fixed << setprecision(2) << endl;
cout << "Credit union payment: $" << creditPayment << endl;
cout << "Dealer payment: $" << dealerPayment << endl;

if (creditPayment < dealerPayment)
{
cout << "Take the rebate and finance throught the credit union." << endl;
}
else if (creditPayment > dealerPayment)
{
cout << "Don't take the rebate. Finance through the dealer." << endl;
}
else
{
cout << "You can finance through the dealer or the credit union." << endl;
}
cout << "Do you want to calculate another montly payment (y/n)? ";
cin >> again;
}while (again == 'y');
system("pause");
return 0;
}
double getPayment(int prin, double monthRate, int months)
{
double monthPay = 0.0;
monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
return monthPay;
}
