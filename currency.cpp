#include "currency.h"
#include <iostream>

using namespace std;

currency::currency()
{
	int number = 1;
	int numbers = 1;
	float amount = 1.0;
	double currencyValue = 0.0;
	float dollar = 0.0;
}

void currency::currencyCatalogue()
{
	cout << "\nWELCOME TO THE CURRENCY CONVERTER PROGRAM." << endl;
	cout << "\nThese are the currencies you can inter-convert. \n1. $ Dollars \n2. Naira \n3. Euros"
	<< "\n4. Pounds \n5. Won \n6. Yen \n7. Cedis \n8. Canadian Dollars \n9. Rupee \n10. Australian Dollar \n11. Singapore Dollar \n12. Swiss Franc \n13. Malaysian Ringgit \n14. Chinese Yuan Renminbi" << endl;
}

int currency::askConvert1()
{
	cout << "\nWhich currency do you want to convert? " << endl;
	
	return number;
}

float currency::askAmount()
{
	cout << "\nHow much?" << endl;

	return amount;
}

int currency::askConvert2()
{
	cout << "\nWhich currency do you want to convert to? " << endl;

	return numbers;
}

float currency::convertCurrency(int number, float amount)
{

	if (number == 2)
	{
		cout << "\nTo convert " << amount << " Naira" << endl;
		dollar = 0.0024 * amount;
		return dollar;
	}
	else if (number == 1)
	{
		cout << "\nTo convert " << amount << " Dollars" << endl;
		dollar = 1.0 * amount;
		return dollar;
	}
	else if (number == 3)
	{
		cout << "\nTo convert " << amount << " Euros" << endl;
		dollar = 1.160232 * amount;
		return dollar;
	}
	else if (number == 4)
	{
		cout << "\nTo convert " << amount << " Pounds" << endl;
		dollar = 1.363620 * amount;
		return dollar;
	}
	else if (number == 5)
	{
		cout << "\nTo convert " << amount << " Won" << endl;
		dollar = 0.000843 * amount;
		return dollar;
	}
	else if (number == 6)
	{
		cout << "\nTo convert " << amount << " Yen" << endl;
		dollar = 0.008972 * amount;
		return dollar;
	}
	else if (number == 7)
	{
		cout << "\nTo convert " << amount << " Cedis" << endl;
		dollar = 98.0 * amount;
		return dollar;
	}
	else if (number == 8)
	{
		cout << "\nTo convert " << amount << " Canadian Dollars" << endl;
		dollar = 0.795416 * amount;
		return dollar;
	}
	else if (number == 9)
	{
		cout << "\nTo convert " << amount << " Rupees" << endl;
		dollar = 0.013421 * amount;
		return dollar;
	}
	else if (number == 10)
	{
		cout << "\nTo convert " << amount << " Australian Dollars" << endl;
		dollar = 0.729491 * amount;
		return dollar;
	}
	else if (number == 11)
	{
		cout << "\nTo convert " << amount << " Singapore Dollars" << endl;
		dollar = 0.737070 * amount;
		return dollar;
	}
	else if (number == 12)
	{
		cout << "\nTo convert " << amount << " Swiss Franc" << endl;
		dollar = 1.077669 * amount;
		return dollar;
	}
	else if (number == 13)
	{
		cout << "\nTo convert " << amount << " Malaysian Ringgit" << endl;
		dollar = 0.239308 * amount;
		return dollar;
	}
	else if (number == 14)
	{
		cout << "\nTo convert " << amount << " Chinese Yuan Renminbi" << endl;
		dollar = 0.155046 * amount;
		return dollar;
	}
	else
		cout << "INVALID INPUT" << endl;

}

void currency::display(float dollar, int numbers)
{
	string d = "Dollars";
	string n = "Naira";
	string e = "Euros";
	string p = "Pounds sterling";
	string w = "Won";
	string y = "Yen";
	string c = "Cedis";
	string ca = "Canadian dollars";
	string r = "rupee";
	string a = "Australian dollars";
	string s = "Singapore dollars";
	string f = "Swiss franc";
	string m = "Malaysian Ringgit";
	string ch = "Chinese Yuan Renminbi";

	if (numbers == 2)
	{
		currencyValue = (410.81) * dollar;
		cout << "\nThe amount in " << n << " is " << currencyValue << " " << n << endl;
	}
	else if (numbers == 1)
	{
		currencyValue = 1 * dollar;
		cout << "\nThe amount in " << d << " is " << currencyValue << " " << d << endl;
	}
	else if (numbers == 3)
	{
		currencyValue = (0.861897) * dollar;
		cout << "\nThe amount in " << e << " is " << currencyValue << " " << e << endl;
	}
	else if (numbers == 4)
	{
		currencyValue = (0.733342) * dollar;
		cout << "\nThe amount in " << p << " is " << currencyValue << " " << p << endl;
	}
	else if (numbers == 5)
	{
		currencyValue = (1186.297267) * dollar;
		cout << "\nThe amount in " << w << " is " << currencyValue << " " << w << endl;
	}
	else if (numbers == 6)
	{
		currencyValue = (111.462746) * dollar;
		cout << "\nThe amount in " << y << " is " << currencyValue << " " << y << endl;
	}
	else if (numbers == 7)
	{
		currencyValue = (1.0/98.0) * dollar;
		cout << "\nThe amount in " << c << " is " << currencyValue << " " << c << endl;
	}
	else if (numbers == 8)
	{
		currencyValue = (1.257203) * dollar;
		cout << "\nThe amount in " << ca << " is " << currencyValue << " " << ca << endl;
	}
	else if (numbers == 9)
	{
		currencyValue = (74.512736) * dollar;
		cout << "\nThe amount in " << r << " is " << currencyValue << " " << r << endl;
	}
	else if (numbers == 10)
	{
		currencyValue = (1.370819) * dollar;
		cout << "\nThe amount in " << a << " is " << currencyValue << " " << a << endl;
	}
	else if (numbers == 11)
	{
		currencyValue = (1.356722) * dollar;
		cout << "\nThe amount in " << s << " is " << currencyValue << " " << s << endl;
	}
	else if (numbers == 12)
	{
		currencyValue = (0.927928) * dollar;
		cout << "\nThe amount in " << f << " is " << currencyValue << " " << f << endl;
	}
	else if (numbers == 13)
	{
		currencyValue = (4.178720) * dollar;
		cout << "\nThe amount in " << m << " is " << currencyValue << " " << m << endl;
	}
	else if (numbers == 14)
	{
		currencyValue = (6.449705) * dollar;
		cout << "\nThe amount in " << ch << " is " << currencyValue << " " << ch << endl;
	}
	else
		cout << "INVALID INPUT" << endl;
}