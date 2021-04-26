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


