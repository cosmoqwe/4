#include <iostream>
#include<ctime>
using namespace std;
void  yagodka(int massiv[][3], int size, int size2)
{
	srand(time(NULL));
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv[i][j] = rand() % 50;
			cout << massiv[i][j]<<"\t";
		}
		cout << endl;
	}
}
void  yagodka(double massiv[][3], int size, int size2)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv[i][j] = rand()%50*0.1;
			cout << massiv[i][j] << "\t";
		}
		cout << endl;
	}
}
void  yagodka(char massiv[][3], int size, int size2)
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv[i][j] = rand() % 50 * 0.1;
			cout << massiv[i][j] << "\t";
		}
		cout << endl;
	}
}
void main()
{
	const int size = 3;
	const int size2 = 3;
	int massiv[size][size2];
	double massivF[size][size2];
	char massivC[size][size2];
	yagodka(massiv, size, size2);
	cout << endl;
	yagodka(massivF, size, size2);
	cout << endl;
	yagodka(massivC, size, size2);
}
