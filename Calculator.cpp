#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		double a, b;
		cout << "Enter a: " << endl;
		cin >> a;
		cout << "Enter b: " << endl;
		cin >> b;

		char choise;
		cout << "If you want to have sum enter +\nIf you want to have residual enter -" << endl;
		cout << "If you want to have composition enter *\nIf you want to have quotient enter / or :" << endl;
		cout << "If you want to come out press e:\n";
		cin >> choise;

		double result = 0;
		switch (choise)
		{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case ':':
		case '/':
			while (true)
			{
				if (b != 0) break;
				cout << "Error!" << endl;
				cout << "Enter b: ";
				cin >> b;
			}
			result = a / b;
			break;
		case'e':
			return 0;
		default:
			cout << "There are not this symbol " << choise << endl;
			cout << "Make right choise (+,-,*,: or /): ";
		}
		cout << "Result is " << a << ' ' << choise << " " << b << " = " << result << endl;
		system("pause");
		system("cls");
	}
	return 0;
}
