#pragma once

#ifndef CURRENCY_H
#define CURRENCY_H

class currency
{
private:
	int number;
	int numbers;
	float amount;
	double currencyValue;
	float dollar;

public:
	currency();
	void currencyCatalogue();
	int askConvert1();
	float askAmount();
	int askConvert2();
	float convertCurrency(int number, float amount);
	void display(float dollar, int numbers);

};

#endif // !CURRENCY_H



