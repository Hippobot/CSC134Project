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

double CalcPerformanceScore(double GPUclockspeed,double CPUclockspeed,double Multiplier,double Cores, )
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



