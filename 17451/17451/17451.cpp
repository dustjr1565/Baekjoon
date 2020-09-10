#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int* vArr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> vArr[i];
	}

	long long result = vArr[n-1];
	for (int i = n-2; i > -1; i--)
	{
		if (vArr[i] >= result)
			result = vArr[i];
		else
			result = vArr[i] * ceil((double)result / (double)vArr[i]);
	}

	cout << result;
	delete[] vArr;
}