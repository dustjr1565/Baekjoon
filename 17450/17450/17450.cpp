#include <iostream>
using namespace std;

int main(void)
{
	float priceArr[3];
	float weightArr[3];
	float costArr[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> priceArr[i] >> weightArr[i];
		if (priceArr[i] * 10 >= 5000)
			costArr[i] = (float)((weightArr[i] * 10) / (priceArr[i] * 10 - 500));
		else
			costArr[i] = (float)((weightArr[i]*10) / (priceArr[i]*10));
	}

	int maxIndex = 2;
	for (int i = 0; i < 2; i++)
	{
		if (costArr[i] > costArr[maxIndex])
			maxIndex = i;
	}

	if (maxIndex == 0)
		cout << "S";
	else if (maxIndex == 1)
		cout << "N";
	else if (maxIndex == 2)
		cout << "U";
}