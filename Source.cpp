#include "currency.h"
#include <iostream>

#include <string>

using namespace std;

int main()
{
	int number1 = 0, number2 = 0;
	float amount1 = 1.0;
	float dollars = 0.0;

	currency object;

	string response = "yes";

	do
	{
		object.currencyCatalogue();

		object.askConvert1();
		cin >> number1;

		object.askAmount();
		cin >> amount1;

		object.askConvert2();
		cin >> number2;

		cout << "Please wait while we process your request! " << endl;

		float dollars = object.convertCurrency(number1, amount1);
		object.display(dollars, number2);

		cout << "\nDo you want to compute currency conversion again? (yes/no) " << endl;
		cin >> response;
	} while (response == "yes");
	

	return 0;
}