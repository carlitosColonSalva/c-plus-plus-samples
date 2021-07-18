// program veryfying if a person can go to the movies

//std was not imported, to change the way of coding and underrstand how lbraries work




#include <iostream>


void main()
{
// variable declarations
double money;
bool car;

std::cout << "do you have a car? 1=yes 0=no: ";
std::cin >> car;


if (car == true)
{
	std::cout << std::endl << "ok,  how much money do you have?: $";
	std::cin >> money;

	if (money >= 10)
		{
		std::cout << "ok, you can go to the movies" << std::endl;
		}
	else
		{
			std::cout << std::endl << "stay in your house" << std::endl;
		}


}
else
{
	std::cout << std::endl << "stay in your house"<< std::endl;
}


system("pause");

}
