#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>
#include <fstream>


void set_money(double cash)
{
ofstream outi;
outi.open("money.txt");
outi << cash;
outi.close();
}
