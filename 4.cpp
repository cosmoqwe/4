#include<iostream>
#include<ctime>
using namespace std;
template <typename T>
T qwe(T massiv[5],  T size)
{
	T max = massiv[0];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = 1+ rand() % 100;
		if (max < massiv[i])
		{
			max = massiv[i];
		}
		cout << massiv[i] << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Max: " << max;
	return max;
}
template <typename T>
T qwe(T massiv2[][5], T size, T size2)
{
	T max = massiv2[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv2[i][j] = 1+ rand() % 100;
			if (max < massiv2[i][j])
			{
				max = massiv2[i][j];
			}
			cout << massiv2[i][j] << "\t";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Max: " << max;
	return max;
}
template <typename T>
T qwe(T massiv3[][5][5],T size, T size2, T size3)
{
	T max = massiv3[0][0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			for (int k = 0; k < size3; k++)
			{
				massiv3[i][j][k] = 1+ rand() % 100;
				if (max < massiv3[i][j][k])
				{
					max = massiv3[i][j][k];
				}
				cout << massiv3[i][j][k] << "\t";
			}
		}
	}
	cout << endl;
	cout << endl;
	cout << "Max:" << max;
	return max;
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
	srand(time(NULL));
	do
{
	cout << "Enter: ";
	cin >> menu;
	switch (menu)
	{
	case 1:
	{
		qwe <int> (massiv, size);
		cout << endl;

	}break;
	case 2:
	{
		qwe <int>(massiv2, size, size2);
		cout << endl;

	}break;
	case 3:
	{
		qwe <int> (massiv3, size, size2, size3);
		cout << endl;

	}break;
	default:
	{
		cout << "Enter correct number(1-3)" << endl;
	}break;
	}
} while (menu != 0);
}
