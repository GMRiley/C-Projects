/*
	Kyle Riley
	SE114.21
	October 10th 2017
	Lab2
*/
#include <iostream>
using namespace std;
/*
void main()
{
	double margin, cost, price;
	margin = 20;
	cost = 25.4;
	price = (1/(1-margin/100))*cost;
	cout << "With a margin of 20% and a cost of $25.40, your selling price is $" << price << endl;
	system("pause");
}
*/
 void main()
{
	double margin, cost, price;
	margin =20;
	
	cout << "What is the cost?" << endl;
	cin >> cost;
	price = (1/(1-margin/100))*cost;
	cout << "The selling price is $" << price << endl;
	system("pause");

}

/*
	2A: you can't use "selling price" as a variable name due to the space.
	2B: The purpose of the cin command is to gather user input.
	2C: It would force double values into an int, therefore there won't be any decimals.
*/