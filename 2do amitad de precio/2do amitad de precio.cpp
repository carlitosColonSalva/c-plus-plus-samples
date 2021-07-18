/*

PRECIO ATICULO 1

PRECIO ARTICULO 2




SI EL PRECIO ARTICULO 1 ES MAYOR


TOTAL ES IGUAL AL PRECIO DEL ARTICULO 1 + LA MITAD DEL PRECIO DEL ARTICULO 2






SI EL PRECIO ARTICULO 2 ES MAYOR


TOTAL ES IGUAL AL PRECIO DEL ARTICULO 2 + LA MITAD DEL PRECIO DEL ARTICULO 1







SI EL PRECIO ARTICULO 1 ES IGUAL AL PRECIO DEL ARTICULO 2


TOTAL ES IGUAL AL PRECIO DEL ARTICULO 1 + LA MITAD DEL PRECIO DEL ARTICULO 2











IMPRIMIR TOTAL */




#include <iostream>
using namespace std;




void main()
{
double item_1, item_2, total;

cout << endl << "enter price for item 1 : ";
cin >> item_1;

cout << endl;

cout << endl << "enter price for item 2 : ";
cin >> item_2;


if (item_1 < item_2)
{
	total = item_2 + (item_1 / 2);
}
else
{
	total = item_1 + (item_2 / 2);
}

cout << endl << endl << "total to be paid is: $" << total;

system("pause")
}


