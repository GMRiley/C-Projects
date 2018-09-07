/*
	Kyle Riley
	SE114.21
	Lab 6A
	11/28/17
*/
#include <iostream>
#include <string>
using namespace std;

void main()
{
	string answer = "";
	string final = "";
	cout << "Enter your First and Last name: " << endl;
	getline (cin,answer);
	final = final + "Name: " + answer;

	cout << "Enter your street address: " << endl;
	getline (cin,answer);
	final = final + ", Street Address: " + answer;

	cout << "Enter your city: " << endl;
	getline (cin,answer);
	final = final + ", City: " + answer;

	cout << "Enter your state: " << endl;
	getline (cin,answer);
	final = final + ", State: " + answer;

	cout << "Enter your zip code: " << endl;
	getline (cin,answer);
	final = final + ", Zip Code: " + answer;
	system("cls");

	cout << final << endl;
	system("pause");

}