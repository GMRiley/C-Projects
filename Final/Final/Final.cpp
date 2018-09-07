/*
	Kyle Riley
	SE114.21
	Final
	December 14th, 2017
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;
void goto_xy(int c, int r);
double amt_deductions(double gross, int dependents);
double net(double gross, double deductions);

int column = 32, row = 0;

void main()
{
	double gross, deductions, hourly, netPay;
	double totalGross = 0, totalNet = 0, totalDeduct = 0;
	int totalEmployees = 0;
	int hours, dependents, x = 0;
	string name;
	char answer = 'Y';

	while (answer == 'Y')
	{
		name = "";
		cout << "Enter last name: " << endl;
		goto_xy(column,row+x);
		cin >> name;
		cout << "Enter hourly rate: " << endl;
		goto_xy(column,row+x+1);
		cin >> hourly;
		cout << "Enter hours worked: " << endl;
		goto_xy(column,row+x+2);
		cin >> hours;
		cout << "Enter the number of dependents: " << endl;
		goto_xy(column,row+x+3);
		cin >> dependents;

		gross = hourly * hours;
		deductions = amt_deductions( gross,  dependents);
		netPay = net( gross, deductions);

		totalGross = totalGross + gross;
		totalNet = totalNet + netPay;
		totalDeduct = totalDeduct + deductions;
		cout << fixed << setprecision(2);
		cout << name << " " << gross<< " "  << netPay << " " << deductions<< " "  << endl;
		cout << "Any more data? (Y/N)" << endl;
		goto_xy(column,row+x+5);
		cin >> answer;
		answer = toupper(answer);
		totalEmployees++;
		x = x + 6;
	}
	column = 40, row = 15;
	goto_xy(column,row);
	cout << totalEmployees << " " << totalGross << " " << totalNet << " " << totalDeduct << endl;
	goto_xy(0,25);
	system("pause");
}
double amt_deductions(double gross, int dependents)
{
	double deductions;
	if(dependents == 0)
	{
		deductions = gross * .10;
	}
	if(dependents == 1)
	{
		deductions = gross * .08;
	}
	if(dependents == 2)
	{
		deductions = gross * .06;
	}
	if(dependents >= 3)
	{
		deductions = gross * .03;
	}
	return deductions;
}
double net(double gross, double deductions)
{
	double netPay;
	netPay = gross - deductions;
	return netPay;
}
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	return;
}