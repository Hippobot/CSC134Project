#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
		
		int SprayChoice = 0;
		int NumberofSprays = 0;
		double SprayPrice = 0.0;
		
		cout << fixed << setprecision(2);
		

				//Users Input
				cout <<"Choose from one of the following types of Disinfectant Sprays: \n";
				cout <<	"\t\t1. LieSol\n";
				cout <<	"\t\t2. Microbond\n";
				
				cout <<"Which type of Disinfectant will be purchased? ";
				cin >> SprayChoice;
				cout << "\n";
				
				if ( (SprayChoice <= 0) || (SprayChoice >= 3) )
				{				
				cout <<"Invalid Menu Option. Program will end.\n";
				return 0;				
				}
				
				if (SprayChoice == 1)
				{				
				cout <<"How many Liesol Sprays will be purchased (min:1)? ";
				cin >> NumberofSprays;				
				}
				
				
				else if (SprayChoice == 2)
				{				
				cout <<"How many Microbond Sprays will be purchased (min:1)? ";
				cin >> NumberofSprays;				
				}
				
				if (NumberofSprays < 1 && SprayChoice == 1)
				{	
				cout << "\n";			
				cout << "Invalid number of LieSol Sprays entered. Program will end.\n";
				return 0;				
				}
				
				else if (NumberofSprays < 1 && SprayChoice == 2)
				{
				cout << "\n";
				cout << "Invalid number of Microbond Sprays entered. Program will end.\n";
				return 0;
				}
				
				if (SprayChoice == 1 && NumberofSprays == 1)
				
						SprayPrice = 8.99;
				
				else if (SprayChoice == 1 && NumberofSprays == 2)
				
						SprayPrice = 8.99;
				
				else if (SprayChoice == 1 && NumberofSprays >= 3)
				
						SprayPrice = 8.75;
				
				else if ((SprayChoice == 2 ) && (NumberofSprays == 1))
				
						SprayPrice = 7.99;
				
				else if (SprayChoice == 2 && NumberofSprays == 2)
				
						SprayPrice = 7.99;
				
				else if (SprayChoice == 2 && NumberofSprays >= 3)
				
						SprayPrice = 7.50;
				
				
				double Subtotal = (SprayPrice * NumberofSprays);
				double Tax = (Subtotal * 0.0475);
				cout << "\n";
				cout <<	"\t\t Subtotal: \t $" << Subtotal << "\n";
				cout << "\t\t Sales Tax: \t $" << Tax << "\n";
				
				double Total = (Subtotal + Tax);
				cout << "The total cost of this purchase  $" << Total << "\n";
				cout << "\n";
		
		cout <<endl;
		return 0;
}
