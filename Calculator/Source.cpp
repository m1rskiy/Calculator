#include <iostream>
using namespace std;

void main()
{
	int a, b, selection;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "Choose mathematics operations: " << endl <<
		"1. Addition" << endl <<
		"2. Subtraction" << endl <<
		"3. Division" << endl <<
		"4. Multiplication" << endl;

	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "Addition result: " << a + b << endl;
		break;
	case 2:
		cout << "Subtraction result: " << a - b << endl;
		break;
	case 3:
		if (b == 0)
		{
			cout << "Error! This expression cannot be solved!" << endl;
		}
		else
		{
			cout << "Division result: " << (float)a / b << endl;
		}
		break;
	case 4:
		cout << "Multiplication result: " << a * b << endl;
		break;

	default:
		cout << "Error! Menu item missing!" << endl;
		break;
	}
}