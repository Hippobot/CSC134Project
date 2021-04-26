#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayTitle()
{
	string comp = "Computer Hardware Graphics Quality Recommendation Tool";
	cout<<"\n\n"<<comp<<"\n\n";
	
}

string getResolution(int choice)
{
	string Monitor_Res;
	if (choice == 1){
		Monitor_Res = "1280x720";
	} else if (choice == 2) {
		Monitor_Res = "1920x1080";
	} else if (choice == 3) {
		Monitor_Res = "2560x1440";
	} else if (choice == 4) {
		Monitor_Res = "3840x2160";
	}
	return Monitor_Res;
}

float getMultiplier(int choice)
{
	float Multiplier = 0;
	if (choice == 1) {
		Multiplier = 1;
	} else if (choice == 2) {
		Multiplier = 0.75;
	} else if (choice == 3) {
		Multiplier = 0.55;
	} else if (choice == 4) {
		Multiplier = 0.35;
	}
	return Multiplier;
}	

double CalcPerformanceScore(double GPUclockspeed,double CPUclockspeed,double Multiplier,double Cores)
{
	return ((5 * GPUclockspeed) + (Cores * CPUclockspeed)) * Multiplier;
}

string getRecommendedQuality(double Performance)
{
	if (Performance > 17000) {
		return "Ultra";
	} else if (Performance > 15000 && Performance <= 17000) {
		return "High";
	} else if (Performance > 13000 && Performance <= 15000) {
		return "Medium";
	} else if (Performance > 11000 && Performance <= 13000) {
		return "Low";
	} else if (Performance <= 11000) {
		return "Unable to Play";
	}
	return"";
}

void DisplayInformation(double GPUclockspeed, double CPUclockspeed, double Cores, string Monitor_Res, double Performance, string graphicsQuality)
{
	cout << "Computer Hardware Graphics Quality Tool \n\n";
	cout << "GPU Clock Speed: " << GPUclockspeed << " MHz";
    cout << "\nCPU Clock Speed: " << CPUclockspeed << " MHz";
    cout << "\nNumber of cores: " << Cores;
    cout << "\nMonitor Resolution: " << Monitor_Res;
    cout << "\nPerformance Score: " << Performance;
    cout << "\nRecommended Graphics Quality: " << graphicsQuality << "\n";
}

int main()
{
	int ComputerNumber;
	double GPUclockspeed, CPUclockspeed, Cores, Performance;
	string Monitor_Res, graphicsQuality;
	float Multiplier;
	float highPerformanceScore = 0, lowPerformanceScore = 0;
	
	cout << "How many computers are being processed? ";
	cin >> ComputerNumber;
	if (ComputerNumber > 0)
	{
		cout << endl;
		cout << "Computer Hardware Graphics Quality Recommendation Tool\n";
		
		for (int i = 0; i < ComputerNumber; i++)
		{
			displayTitle();
			
			cout << "Please enter the clock speed(in Megahertz) of your graphics card : ";
			cin >> GPUclockspeed;
			while (GPUclockspeed < 800 || GPUclockspeed > 2000)
			{
				cout << "Invalid input(Please Re-enter the clock speed(in Megahertz) of your graphics card) : ";
				cin >> GPUclockspeed;
				
			}
			
			cout << "Please enter the clock speed(in Megahertz) of your processor : ";
			cin >> CPUclockspeed;
			while (CPUclockspeed < 1000 || CPUclockspeed > 5500)
			{
				cout << "Invalid input(Please Re-enter the clock speed(in Megahertz) of your processor) :";
				cin >> CPUclockspeed;
		
			}
			
			cout << "Please enter the number of cores of your processor : ";
			cin >> Cores;
			while (Cores < 1 || Cores > 16)
			{
				cout << "Invalid input (Please RE-enter the number of cores of your processor) : ";
				cin >> Cores;
				
			}
			
			cout << "What is the resolution of your monitor?";
            cout << "\n\t\t1. 1280 x 720";
            cout << "\n\t\t2. 1920 x 1080";
            cout << "\n\t\t3. 2560 x 1440";
            cout << "\n\t\t4. 3840 x 2160";
            cout << "\nPlease select from the options above: ";
            
            int choice;
            cin >> choice;
            while (choice < 1 || choice > 4)
            {
                cout << "Invalid choice Enter again: ";
                cin >> choice;
            }
            
            while (choice < 1 || choice > 4);
            string Monitor_Res = getResolution(choice);
            Multiplier = getMultiplier(choice);
            
            double Performance = CalcPerformanceScore(GPUclockspeed, CPUclockspeed, Multiplier, Cores);
            
            string graphicsQuality = getRecommendedQuality(Performance);
            
            if (highPerformanceScore == 0 && lowPerformanceScore == 0)
            {
                highPerformanceScore = Performance;
                lowPerformanceScore = Performance;
            }
            else
            {
                if (Performance > highPerformanceScore)
                {
                    highPerformanceScore = Performance;
                }
                if (Performance < lowPerformanceScore)
                {
                    lowPerformanceScore = Performance;
                }
            }
            
            DisplayInformation(GPUclockspeed, CPUclockspeed, Cores, Monitor_Res, Performance, graphicsQuality);
    	}	
	}	
    else
	{
		cout << "Invalid Input(count of computers to be less than 0";
	}
	
	cout << "The highest performance score was: " << highPerformanceScore;
    cout << "\nThe lowest performance score was: " << lowPerformanceScore;
    		
    return 0;
}
    		


