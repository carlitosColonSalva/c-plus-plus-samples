// PROGRAMA CERDOS EN GRANJA 
// Carlos Colon


#include <iostream>
using namespace std;

#include <string>
#include <iomanip>


double pig_price(int, int); // declaracion de funcion

string get_appearance(int);

void decimal(double); // FUNCTION TO PRESENT DECIMAL NUMBERS CORRECTLY
int main()
{


string
farm_name,
owner_name;

int pigs_quantity;


cout << endl << "ENTRE EL NOMBRE DE LA GRANJA: ";
cin >> farm_name;

cout << endl << "NOMBRE DE LA PERSONA QUE ENTREGA LOS CERDOS: ";
cin >> owner_name;


cout << endl << "ENTRE LA CANTIDAD DE CERDOS: ";
cin >> pigs_quantity;


int pigs_type[pigs_quantity];
string pigs_appearance[pigs_quantity];

double pigs_traits[pigs_quantity][2], // weight and length
pigs_price[pigs_quantity],
pigs_total = 0;

int appearance;





for (int i = 0;i < pigs_quantity;i++)
{
cout << endl << "----------------------------------------------------" << endl;
  
cout << "RECOPILANDO INFORMACIÓN DEL CERDO " << i + 1;
  

cout << endl << "----------------------------------------------------";
cout << endl << endl << "TIPOS DEL CERDO: ";
cout << endl << endl << "	ENTRA 1		SI EL CERDO PESA MENOS DE 50 LIBRAS Y EL LARGO ES  ENTRE 24 Y 32 PULGADAS";
cout << endl << endl << "	ENTRA 2		SI EL CERDO PESA MENOS DE 75 LIBRAS, PESA MAS DE 49 LIBRAS Y SU LARGO ES ENTRE 33 Y 48 PULGADAS";
cout << endl << endl << "	ENTRA 3		SI EL CERDO PESA MAS DE 75 LIBRAS Y EL LARGO ES MAYOR DE 48 PULGADAS";
cout << endl << endl << "TIPO DEL CERDO " << i + 1 << ": ";
cin >> pigs_type[i];

cout << endl << endl << "--------------" << endl;

cout << endl << "ENTRA LAS LIBRAS QUE PESA EL CERDO " << i + 1 << ": ";
cin >> pigs_traits[pigs_quantity][0];


cout << endl << "ENTRA LAS PULGADAS DEL CERDO " << i + 1 << ": ";
cin >> pigs_traits[pigs_quantity][1];



cout << endl << endl << "-------------" << endl;
cout << "LA APARIENCIA DEL CERDO ES:" << endl << "1	DELGADO" << endl << "2	GRUESO" << endl << "3	OBESO";
cout << endl << "APARIENCIA DEL CERDO " << i + 1<< " ES: ";
cin >> appearance;

pigs_appearance[i] = get_appearance(appearance);


pigs_price[i] = pig_price(pigs_type[i], appearance);

pigs_total += pigs_price[i];


cout << endl << "------------" << endl;

 cout << endl << "PRECIO  DEL CERDO " << i + 1 << " ES: $";
 decimal(pigs_price[i]);



} // END OF FOR PIGS INFORMATION



// print info
cout << endl << "-------------------------------------------------------------------------" << endl;
cout << "TOTAL DE VALOR DE TODOS LOS CERDOS EN LA GRANJA ES $";
decimal(pigs_total);




return 0;
} // END OF MAIN



double pig_price(int pig_type, int pig_appearance){
  double pig_price;
				switch (pig_type) {
						case 1:
						  switch (pig_appearance)
						  {
						    
						    case 1:
						      pig_price = 3.50;
						      break;
						      
						    case 2:
						      pig_price = 3.00;
						      break;

						    case 3:
						      pig_price = 2.15;
						      break;
						      
						  }
						break;

						case 2:
						 switch (pig_appearance)
						  {
						    
						    case 1:
						      pig_price = 3.75;
						      break;
						      
						    case 2:
						      pig_price = 2.50;
						      break;

						    case 3:
						      pig_price = 2.05;
						      break;
						      
						  }
						  break;

						case 3:
						 switch (pig_appearance)
						  {
						    
						    case 1:
						      pig_price = 4.50;
						      break;
						      
						    case 2:
						      pig_price = 2.00;
						      break;

						    case 3:
						      pig_price = 1.75;
						      break;
						      
						  }
						  break;

					} // end of pig type








return pig_price;
}// end of function pig_price()



string get_appearance(int choice)
			{
			string appearance;

			switch(choice)
			{
			case 1:
			appearance = "LEAN";
			break;

			case 2:
			appearance = "GRUESO";
			break;

			case 3:
			appearance = "OBESO";
			break;
			} // end of choice case

		return appearance;
		} // end of function get_appearance()
		
		
		void decimal(double decimal_number)
{
  
  cout << fixed;
  cout << setprecision(2) << decimal_number << '\n';
}