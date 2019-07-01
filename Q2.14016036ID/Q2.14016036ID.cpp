#include "Q2.h"

using namespace std;

int recurrence(int a, int b, int k, int u0)
{

	for (int j = 0; j < k; j++)
	{
		u0 = a * u0 + b;
	}
	return u0;
}

void LFSR(int k, vector<int> &u)
{
	int equation = 0;
	int remainder = 0;
	for (int i = 0; i < k; i++)
	{
		equation = u[i + 1] + u[i];
		remainder = equation % 2;
		u.push_back(remainder);

	}

	for (int i = 0; i < u.size(); i++)
	{
		cout << u[i];
	}

	cout << endl;
	cout << "On the 15th term is when it starts repeating itself" << endl;
}














































//int u1;
//int u2;
//int u3;
//
//u1 = a * u0 + k;
//cout << u1 << endl;
//u2 = a * u1 + k;
//cout << u2 << endl;
//u3 = a * u2 + k;
//cout << u3 << endl;
//return u1, u2, u3;