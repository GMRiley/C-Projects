/*
	Kyle Riley
	SE114.21
	November 14th
	Lab 5
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int peopleNum, capacity, require;
		cout << "What is the room's capacity?" << endl;
		cin >> capacity;
		cout << "How many people are attending the meeting?" << endl;
		cin >> peopleNum;
		if (peopleNum > capacity)
		{
			require = peopleNum - capacity;
			cout << "The amount of people violates fire regulations. You need to remove " << require << " people." << endl;
		}
		else
		{
			require = capacity - peopleNum;
			cout << "It is legal to hold this meeting. You have slots available for " << require << " people." << endl;
		}
		system ("pause");
}