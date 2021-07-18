#include <fstream>
#include <iostream>
using namespace std;

#include <string>



int main()
{
  ofstream outfile;
  outfile.open("me.txt", ios::out);
	int stars = 0,
		stars_c = 0,
		lines_c = 0;


	cout << "enter the quantity of stars: ";
	cin >> stars;


	stars_c = stars;
	lines_c = stars;


	while (lines_c > 0)
	{
	
		while (stars_c > 0)
	{
	cout << "*";
	outfile << "*";
	stars_c--;	
	}
		lines_c--;
		stars_c = lines_c;
		cout << endl;
		outfile << endl;
	}
system("timeout 5");
outfile.close();
return 0;
}