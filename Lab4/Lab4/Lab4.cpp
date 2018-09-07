/*
	Kyle RIley
	SE114.21
	October 31st
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int x, itemNum, years, months;
	double cost = 0, money, change, total = 0, balance, deposit, interest;
	cout << "Which part would you like to run?" << endl;
	cin >> x;

	system("cls");

	switch(x)
	{
	case 1:
		cout << fixed << setprecision(2);
		cout << "How many items did you purchase?" << endl;
		cin >> itemNum;

		for (int y = 0; y < itemNum; y++)
		{
			cout << "How much does the item cost?" << endl;
			cin >> cost;
			total = total + cost;
		}

		cout << "The total is $" << total << endl;
		cout << "How much are you paying with?" << endl;
		cin >> money;
		change = money - total;
		cout << "Your change will be $" << change << endl;

		system("pause");
	break;

	case 2:
		cout << fixed << setprecision(2);
		cout << "What is your beginning balance?" << endl;
		cin >> balance;

		cout << "How many years will you be saving?" << endl;
		cin >> years;
		months = years * 12;

		cout << "What is your monthly deposit?" << endl;
		cin >> deposit;

		cout << "What is your interest rate in %?" << endl;
		cin >> interest;
		interest = interest / 100;

		for (int y = 0; y < months; y++)
		{
			money = balance * interest/12;
			total = balance + money + deposit;
			balance = total;
		}

		cout << "After " << years << " years, you will have a total balance of $" << balance << endl;
		system("pause");
	break;
	}
}