#include <iostream>
using namespace std;

int main()
{
	int ComputerNumber, GPUclockspeed, CPUclockspeed, Cores;
	string Resolution, GraphicsQuality;
	float PerformanceScore = 0, lowPerformanceScore = 0;
	
	cout << "How many computers are being processed? ";
	cin >> ComputerNumber;
	if (ComputerNumber > 0)
	{
		
		cout << "Computer Hardware Graphics Quality Recommendation Tool\n";
		
		for (int i = 0; i < ComputerNumber; i++)
		{
			
			cout << "Please enter the clock speed(in Megahertz) of your graphics card : ";
			cin >> GPUclockspeed;
			while (GPUclockspeed < 800 || GPUclockepeed > 2000)
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
			
		}
	}
