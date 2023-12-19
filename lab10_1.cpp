#include <iostream>
using namespace std;

int main()
{
	int count[5] = {};
	int amount = 0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do
	{
		cout << "Student [" << ++amount << "]: ";
		cin >> grade;
		switch (grade)
		{
		case 'A':
			count[0]++;
			break;
		case 'B':
			count[1]++;
			break;
		case 'C':
			count[2]++;
			break;
		case 'D':
			count[3]++;
			break;
		case 'F':
			count[4]++;
			break;
		case '0':
			amount--;
			break;

		default:
			cout << "Wrong input. Please input again." << endl;
			amount--;
			break;
		}
	} while (grade != '0');

	cout << "In total " << amount << " students." << endl;
	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4];

	return 0;
}
