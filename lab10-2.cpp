//Lab10-2.cpp - displays total owed
//Created/revised by <your name> on <current date>

#include <iostream>
  #include <iomanip>
  using namespace std;

 void displayLine();
 void displayCompanyInfo();
 void displayTotalSales(double total);

 int main()
 {
 double store1Sales = 0.0;
 double store2Sales = 0.0;
 double totalSales = 0.0;

 cout << "Store 1's sales: ";
 cin >> store1Sales;
 cout << "Store 2's sales: ";
 cin >> store2Sales;

 totalSales = store1Sales + store2Sales;

 displayLine();
 displayCompanyInfo();
 displayTotalSales(totalSales);
 displayLine();

 return 0;
 } 
 void displayLine()
 {
 cout << "-------------------------" << endl;
 } 

 void displayCompanyInfo()
 {
 cout << "Martin Sports" << endl;
 cout << "Atlanta, GA" << endl << endl;
 } 

 void displayTotalSales(double total)
 {
 cout << fixed << setprecision(2);
 cout << "Total sales: $" << total << endl;
 } 