#include "Q2.h"

int main()
{
	// Question 2(a)
	cout << "The Kth Term will = " << recurrence(3, 6, 0, 3) << endl;	//The close form solution = f(n) = 3 (2*3^n - 1)
	
	cout << "The Kth Term will = " << recurrence(13, 16, 5, 2) << endl;	//The closed form solution = f(n) = (2/3) (5x13^n - 2)
	cout << endl;
	// Question 2(b)
	vector<int> u;
	u.push_back (1);
	u.push_back (1);
	u.push_back (0);
	u.push_back (0);

	LFSR(49, u);

	cout << endl;
	system("pause");
	return 0;
}