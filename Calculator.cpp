// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float operations(float a, float b) {
	cout << "Press 1 for +" << endl;
	cout << "Press 2 for -" << endl;
	cout << "Press 3 for *" << endl;
	cout << "Press 4 for /" << endl;
	int n; 
	cin >> n;
	switch (n)
	{
	case 1:
	{
		return a + b;

	}
	break;
	case 2:
		return a - b;
		break;
	case 3:
		return a * b;
		break;
	case 4:
		{
			return a / b;

		}

	
	}
}

int main()
{
	float num1, num2;
	cout << "please enter first number: \n";
	cin >> num1;
	cout << "please enter a second number: \n";
	cin >> num2;

	float store = operations(num1, num2);


	cout << "result " << store;
}
