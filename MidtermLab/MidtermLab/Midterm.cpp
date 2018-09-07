/*  Kyle Riley
	SE114.21
	11/2/2017
	Midterm
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	int x;
	double tax = .08, tip = .2, cost = 55.35, bill, total,totalTax;
	cout << fixed << setprecision(2);
	cout << "Which part are you running?(1/2)" << endl;
	cin >> x;
	system("cls");
	switch (x)
	{
		case 1:

			cout << "The meal costs $55.35" << endl;
			totalTax = cost * tax;
			bill = cost + totalTax;
			tip = bill * tip;
			total = bill + tip;
			cout << "Your tax is $" << totalTax << endl;
			cout << "Your total bill is $" << bill << endl;
			cout << "Your estimated tip amount is $" << tip << endl;
			cout << "Your final total with tip is $" << total << endl;
			system ("pause");

		break;

		case 2:

			cout << "How much is the cost of the meal? " << endl;
			cin >> cost;
			cout << "What is your tip percentage (in decimal)? " << endl;
			cin >> tip;
			totalTax = cost * tax;
			bill = cost + totalTax;
			tip = bill * tip;
			total = bill + tip;
			cout << "Your tax is $" << totalTax << endl;
			cout << "Your total bill is $" << bill << endl;
			cout << "Your estimated tip amount is $" << tip << endl;
			cout << "Your final total with tip is $" << total << endl;
			system ("pause");

		break;
	}
}