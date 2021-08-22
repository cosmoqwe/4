#include<iostream>
#include<ctime>
using namespace std;
int max = 0;
void qwe(int massiv[5], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		massiv[i] = rand() % 100;
		if (max < massiv[i])
		{
			max = massiv[i];
		}
		cout << massiv[i] << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Max: " << max;
	max = 0;
}
void qwe(int massiv[][5], int size, int size2)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv[i][j] = rand() % 100;
			if (max < massiv[i][j])
			{
				max = massiv[i][j];
			}
			cout << massiv[i][j] << "\t";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Max: " << max;
	max = 0;
}
void qwe(int massiv[][5][5], int size, int size2, int size3)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			for (int k = 0; k < size3; k++)
			{
				massiv[i][j][k] = rand() % 100;
				if (max < massiv[i][j][k])
				{
					max = massiv[i][j][k];
				}
				cout << massiv[i][j][k] << "\t";
			}
		}
	}
	cout << endl;
	cout << endl;
	cout << "Max:" << max;
	max = 0;
}
void main()
{
	const int size = 5;
	const int size2 = 5;
	const int size3 = 5;
	int massiv[size];
	int massiv2[size][size2];
	int massiv3[size][size2][size2];
	int menu;
	do
	{
		cout << "Enter: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			qwe(massiv, size);
			cout << endl;
			
		}break;
		case 2:
		{
			qwe(massiv2, size, size2);
			cout << endl;

		}break;
		case 3:
		{
			qwe(massiv3, size, size2, size3);
			cout << endl;
			
		}break;
		default:
		{
			cout << "Enter correct number(1-3)" << endl;
		}break;
		}
	} while (menu != 0);
}