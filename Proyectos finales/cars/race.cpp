#include <iostream>
using namespace std;


#include "get_random_movement.cpp"
#include "upgrade_level.cpp"




void delay();
void spaces_before_car(int);
void race(double);



void race(double cash)
{

int car_position = 0;
int car2_position = 0;
  
int level = upgrade_level();
int level_car2 = GetRand(1,12); 

  while (car_position < 50 && car2_position < 50)
{


car_position += GetRand(1,level);
car2_position += GetRand(1,level_car2);




 for (int z = 0; z <= 5; z++)  //? draw endline before drawing
	{cout << endl;}


// draw spaces, car, and finish line
spaces_before_car(car_position);
cout << "\\-o-1-o-";
for (int j = 50; j >= car_position; j--)
{
cout << " ";
}
cout << "\\";
cout << endl;

// draw car 2
spaces_before_car(car2_position);
cout << "\\-o-2-o-";
for (int j = 50; j >= car2_position; j--)
{
cout << " ";
}
cout << "\\";
cout << endl;
delay(); 
}

double current_cash = points();
cash = 25 * GetRand(1,level_car2);

if (car_position > car2_position){
	set_money(current_cash + (cash * 3));
	cout << "YOU WON AND GOT " << cash * 3 << "$"; } 
else {
	set_money(current_cash + cash);
	cout << "YOU LOST BUT GOT " << cash << "$ FOR PARTICIPATING"; }
// end if

cout << endl << "YOU NOW HAVE " << points() << "$" << endl;

cin.get();
pausey();
} // end of race()



void delay()
{
  for (int m = 0; m <= 17; m++){ cout << "\r\n";} // lines to skip and clear
  for (int j = 0; j <= 999999; j++){
    for  (int k = 0; k <= 50; k++){ }} // (k <= num) = speed from 10 to 100  
} // end of delay()


void spaces_before_car(int car_position)
{
	for (int spaces = 0; spaces <= car_position; spaces++) { // spaces before car
	
		cout << " "; }}
	
// end of spaces_before_car()