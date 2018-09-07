/* 
	Kyle Riley
	SE114.21
	November 9, 2017
	FlowPrompt
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	double fahr, cels, tempCompare = 32; // celsius
	char answer = 'y';
	do
	{
	cout << "Enter the temperature in Fahrenheit:" << endl;
	cin >> fahr;
	cels = (fahr - 32) * 1.8;
	
	if (cels => 32) 
		cout << "Is hot" << endl;
	if (cels =< 32) 
		cout << "Freezing" << endl;

	cout << "Do you want to cont?" << endl;
	cin >> answer;
	}
	while(answer == 'y');
}