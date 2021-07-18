#include <iostream>
using namespace std;





void print_stars();




void main()
{
	int 
		num = 0,
		stars = 0,
		lines = 0;


	cout << "enter stars: ";
	cin >> num;
	stars = num;
	lines = num;


	while (lines > 0)
	{
		while (stars > 0)
			{
			stars--;
			print_stars();
			}
		lines--;
		stars = lines;
		cout << endl;
	}


	system("pause");
}


void print_stars()
{
cout << "*";
}