#include <iostream>
using namespace std;

int main()
{
	int ComputerNumber, GPUclockspeed, CPUclockspeed, Cores;
	string Resolution, GraphicsQuality;
	float performanceScore, multiplier;
	float highPerformanceScore = 0, lowPerformanceScore = 0;
	
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
            
			if (choice == 1)
            {
                resolution = "1280 x 720";
                multiplier = 1;
            }
            else if (choice == 2)
            {
                resolution = "1920 x 1080";
                multiplier = 0.75;
            }
            else if (choice == 3)
            {
                resolution = "2560 x 1440";
                multiplier = 0.55;
            }
            else if (choice == 4)
            {
                resolution = "3840 x 2160";
                multiplier = 0.35;
            }
            
            performanceScore = ((5 * graphicCardClockSpeed) + (cores * processorClockSpeed)) * multiplier;
		
		
	
	
	
		}
		
	}
