#include <stdio>
#include <stdlib>
#include <time>
#include <iostream>
using namespace std;

int GetRand();


int main()
{

int
 
p1_num1 = 0,
p1_num2 = 0,

p2_num1 = 0,
p2_num2 = 0,
p2_num3 = 0,

p1_result = 0,
p2_result = 0

;

char getcard = ' ';



p1_num1 = GetRand();
p1_num2 = GetRand();


p1_result = p1_num1 + p1_num2;





cout << endl << "You currently have " << p1_result << " points";
cout << endl << "want to get another card?";
cin >> getcard;
while (toupper(getcard) == 'Y') 
{
p1_result = p1_result + GetRand();



cout << endl << "You currently have " << p1_result << " points";
cout << endl << "want to get another card?   Y or N";
cin >> getcard;
}

cout << endl << "Your last score is " << p1_result;










p2_num1 = GetRand();
p2_num2 = GetRand();
p2_num3 = GetRand();
p2_result = p2_num1 + p2_num2 + p2_num3;




cout << endl << "The last score of the rival is " << p2_result << endl;  








// start evaluating who won
if (p1_result > 21 && p2_result > 21)	
{
	
	cout << "both lost";
}
else
{
	if (p1_result > 21 && p2_result <= 21)
	{
		
		cout << "p2 won by default. p1 sunk";	
	}
	else
	{
		if (p1_result <= 21 && p2_result > 21)
		{
			
			cout << "p1 won by default. p2 sunk";
		}
		else
		{
			if (p1_result > p2_result)
			{
			
				cout << "player 1 won";
			}
			else
			{
				if (p2_result > p1_result)
				{
				
					cout << "player 2 won";
				}
				else
				{
				
					cout << "TIED Game";
				}
			} // endif p1's result greater than p2's result
		}
	}

	

} // endif evaluating who won




cout << endl;


return 0;
}// end of main()








int GetRand()
{
	int num = 0;
	srand(time(NULL));
	num = 1 + rand() % (10 - 1 + 1);
	return num;
} // end of GetRand()
