#include<iostream>
#include <ctime>
using namespace std;
template <class T>
T yagodka(T massiv[][5], T size, T size2)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			massiv[i][j] = 1 + rand() % 50;
			cout << massiv[i][j] << " ";
		}
	}
	return 0;
}
void main()
{
	const int size = 5;
	const int size2 = 5;
	int massiv[size][size2];
	yagodka < int >(massiv, size, size2);
}