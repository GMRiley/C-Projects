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
	int itemNum;
	double cost, total = 0, tax = .07, change, money;
	char answer;

	cout << fixed << setprecision(2);
	cout << "How many items did you purchase?" << endl;
	cin >> itemNum;

	for (int y = 0; y < itemNum; y++)
	{
		cout << "How much does the item cost?" << endl;
		cin >> cost;
		cout << "Is the item taxable? (Enter 't' if so)" << endl;
		cin >> answer;

		if (answer == 't')
			cost = cost + (cost*tax);

		total = total + cost;
	}

	cout << "The total is $" << total << endl;
	cout << "How much are you paying with?" << endl;
	cin >> money;
	change = money - total;
	cout << "Your change will be $" << change << endl;

	system("pause");
}