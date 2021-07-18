#include <iostream>

using namespace std;
#include <string>

int main()
{
string pause;

int num1, num2, num4, num5;
float num3;

num1 = 0;
num2 = 0;
num3 = 0;
num4 = 0;
num5 = 0;



cout << "enter number 1: " << endl;
cin >> num1;

cout << "enter number 2: " << endl;
cin >> num2;


if (num1 > num2)
{
	num3 = num1 % num2;
	num4 = num3 * num2 - num1;
	cout << "love puerto rico" << endl;
}
else
{
	num5 = num4 * num3 + num2;
	cout << "number 1:" << endl;
	cout << num1 << endl;

	cout << "number 2:" << endl;
	cout << num2 << endl;

	cout << "number 3:" << endl;
	cout << num3 << endl;

	cout << "number 4:" << endl;
	cout << num4 << endl;

	cout << "number 5:" << endl;
	cout << num5 << endl;
}

// --------------------------------------------------------------

int
plants = 0,
mercurio = 0
;


float
abono = 0,
calcio = 0,
urea = 0,
precio_finca = 0,
cash = 0;
;

long dinero = 0;



cout << "enter plants" << endl;
cin >> plants;

abono = plants * 0.53;

calcio = abono / 2;

cout << calcio << endl;

urea = plants * 1.5;

cout << endl;

if (urea > plants && urea < abono)
{
	mercurio = 100 * plants;
}
else
{
	cout << endl <<"no ";
}
	cout << "lleva mercurio" << endl;


if (mercurio == 0)
{
	cout << endl << "compra una finca" << endl;
	dinero = 1000000;
}
else
{
	cout << endl << "no agricultor" << endl;
	dinero = 100;
}


if (dinero < 900000)
{
	cout << endl << "entra el precio de la finca" << endl;
	cin >> precio_finca;
	if (precio_finca < dinero)
	{
		cash = dinero - precio_finca;
		cout << endl << "tienes finca" << endl;
	}
	else
	{
		cout << endl << "no tienes finca" << endl;
	}
}
else
{
	cout << endl << "no tienes finca" << endl;
}





cout << "press enter to finish";
cin >> pause;
}
