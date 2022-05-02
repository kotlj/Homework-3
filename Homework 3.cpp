
#include <iostream>

using namespace std;

int main()
{
	while (true) {
		cout << "\nchoose task:\n1 - ax + b = 0\n2 - pow\n3 - temperature\n4 - a,b = b,a\n0 - exit\n";
		int choise;
		cin >> choise;
		double num_0;
		double num_1;
		double num_2;
		if (choise == 1)
		{
			cout << "input a\n";
			cin >> num_0;
			cout << "input b\n";
			cin >> num_1;
			cout << "x = " << -num_1 / num_0;
		}
		if (choise == 2)
		{
			cout << "input number:\n";
			cin >> num_0;
			cout << "input number to ^\n";
			cin >> num_1;
			cout << pow(num_0, num_1);
		}
		if (choise == 3)
		{
			double num_0;
			cout << "input temperature by C^\n";
			cin >> num_0;
			cout << "F^ - " << num_0 * 1.8 + 32 << "\nK^ - " << num_0 + 273.15 << "\nR^ - " << num_0 * 0.8 << "\nDe^ - " << (100 - num_0) * 1.5;
		}
		if (choise == 4)
		{
			cout << "\ninput number a\n";
			cin >> num_0;
			cout << "input number b\n";
			cin >> num_1;
			// num_0 , num_1 = num_1 , num_0;
			num_2 = num_0;
			num_0 = num_1;
			num_1 = num_2;
			cout << "a = " << num_0 << "\nb = " << num_1;
		}
		if (choise == 0)
		{
			break;
		}
	}
}