#include <iostream>
using namespace std;
int main()
{
		int GC_Clock_Speed = 0; //The clock speed of the GPU
		int PROC_Clock_Speed = 0; //The clock speed of the CPU
		int NUM_Cores = 0; //The number of cores of the users processor
		double Multiplier = 1; //The multiplier thats based on resolution
		int Option = 0; //option of the resolution
		
		for(int run=1; run <7;run++)
		{
		
			//Users Input
			cout <<"Please enter the clock speed (in Megahertz) of your graphics card: ";
			cin >> GC_Clock_Speed;
		
			if (GC_Clock_Speed < 0)
			{
				cout << "Invalid graphics card speed entered. Program will terminate./n";
				continue;
				
			}
			
			cout << "Please enter the clock speed (in Megahertz) of your processor: ";
			cin >> PROC_Clock_Speed;
			
			if (PROC_Clock_Speed < 0) 
			{	
				cout << "Invalid processor speed entered. Program will terminate.\n";
				continue;
			}
			
			cout << "Please enter the number of cores on your processor: ";
			cin >> NUM_Cores;
			
			if(NUM_Cores < 0)
			{
				cout << "Invalid number of cores entered. Program will terminate.\n";
				continue;
				
			}

			cout << "What is the resolution of your monitor? \n";
			cout <<	"\t\t1. 1280 x 720\n";
			cout << "\t\t2. 1920 x 1080\n";
			cout << "\t\t3. 2560 x 1440\n";
			cout << "\t\t4. 3840 x 2160\n";
			cout << "Please select from the options above: ";
			cin >> Option;
			
			if (Option < 1 || Option >4)
			{
				cout << "Invalid Resolution menu choice. Program will terminate. \n";
				continue;
			}
			
			cout << "\n\nComputer Hardware Graphics Quality Recommendation Tool\n";
        	cout << "GPU Clock Speed: " << GC_Clock_Speed << endl;
        	cout << "CPU Clock Speed: " << PROC_Clock_Speed << endl;
        	cout << "Number of cores: " << NUM_Cores << endl;
        	cout << "Monitor Resolution: ";
        	switch (Option)
        	{
			
			case 1:
            	cout << "1280 x 720";
            	Multiplier = 1;
            	break;
        	case 2:
            	cout << "1920 x 1080";
            	Multiplier = 0.75;
            	break;
        	case 3:
            	cout << "2560 x 1440";
            	Multiplier = 0.55;
            	break;
        	case 4:
            	cout << "3840 x 2160";
            	Multiplier = 0.35;
            	break;
        	}
			
			double GScore = ((5 * GC_Clock_Speed) + (NUM_Cores * PROC_Clock_Speed)) * Multiplier;
			cout << "\nPerformance Score: " << GScore;
			cout << "\nRecommended Graphics Utility: ";
			
			if (GScore <= 11000)
			{
				cout <<"Unable to Play\n";
			}
			else if (GScore <= 13000)
			{
				cout << "Low\n";
			}
			else if (GScore <= 15000)
			{
				cout << "Medium\n";
			}
			else if (GScore <= 17000)
			{
				cout << "High\n";
			}
			else if (GScore > 17000)
			{
				cout << "Ultra\n";
			}
		}
		
		cout <<endl;
		return 0;
	} //end of the main method.
