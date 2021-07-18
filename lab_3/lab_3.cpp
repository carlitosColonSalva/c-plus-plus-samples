#include <iostream>
using namespace std;

void main()
{

double price = 0;
double subtotal = 0;
double tax = 0;
double total = 0;
int qty = 0;

cout << endl << "enter price: ";
cin >> price;

cout << endl << "enter quantity: ";
cin >> qty;

subtotal=price * qty;

tax=subtotal * 0.07;

total=subtotal + tax;

cout << endl << "price to be paid is: ";
cout << endl << "total;
system("pause");
}