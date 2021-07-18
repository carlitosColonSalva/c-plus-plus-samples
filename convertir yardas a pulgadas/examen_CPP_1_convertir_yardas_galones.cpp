
#include <iostream>
using namespace std;


void main()
{
	int tipo = 0;
	int yardas = 0;
	int galones = 0;
	int pulgadas = 0;

	double litros = 0;




	cout << "para convertir yardas a pulgadas entre: 1" << endl << "para convertir de galones a litros entre: 2" << endl << ": ";
	cin >> tipo;


	cout << endl << endl << endl;

	if (tipo == 1)
	{
	cout << "entre la cantidad de yardas que desea entrar a pulgadas: ";
	cin >> yardas;

	pulgadas = yardas * 36;

cout << endl << "la cantidad de pulgadas que equivalen a " << yardas << " yardas son: " << pulgadas << " pulgadas." << endl;
	}
	else
	{
	if (tipo == 2)
	{
	cout << "entre la catidad de galones que desea convertir a litros: ";
	cin >> galones;


	litros = galones * 3.81;

	cout << "la cantidad de litros que equivalen a " << galones << " galones son: " << litros << " litros." << endl;

	}
	else
	{
	cout << "entro una opcion incorrecta, intente de nuevo." ;
	}
	
	
	
	}



	cout << endl << endl << endl;
	system("pause");
}