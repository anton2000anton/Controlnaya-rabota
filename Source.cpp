#include <iostream>

using namespace std;

int nextSmallerThan(int);
void nextSmallerThanTests();

int main()
{
	nextSmallerThanTests();
	system("pause");
}

int nextSmallerThan(int number)
{
	int digit = 0, number1 = number, number2 = number, number3 = 0;

	while (number1)
	{
		digit++;
		number1 /= 10;
	}
	
	int arr[4]{};

	for (int i = 0; i < digit; i++)
	{
		arr[i] = number2 % 10;
		number2 /= 10;
	}



	if (arr[0] < arr[1])
	{
		number3 = arr[1] + arr[0] * 10 + arr[2] * 100 + arr[3] * 1000;
	}


	else if (arr[1] < arr[2] && arr[0] < arr[2])
	{
		number3 = arr[0] + arr[2] * 10 + arr[1] * 100 + arr[3] * 1000;
	}

	else if (arr[1] < arr[2] && arr[0] > arr[2])
	{
		number3 = arr[2] + arr[0] * 10 + arr[1] * 100 + arr[3] * 1000;
	}

	else if (arr[2] < arr[3] && arr[3] > arr[1] && arr[3] > arr[0])
	{
		number3 = arr[0] + arr[1] * 10 + arr[3] * 100 + arr[2] * 1000;
	}

	else if (arr[2] < arr[3] && arr[3] < arr[1] && arr[3] > arr[0])
	{
		number3 = arr[0] + arr[3] * 10 + arr[1] * 100 + arr[2] * 1000;
	}

	else if (arr[2] < arr[3] && arr[3] > arr[1] && arr[3] < arr[0])
	{
		number3 = arr[1] + arr[3] * 10 + arr[0] * 100 + arr[2] * 1000;
	}

	else if (arr[2] < arr[3] && arr[3] < arr[1] && arr[3] < arr[0] && arr[1] < arr[0])
	{
		number3 = arr[3] + arr[1] * 10 + arr[0] * 100 + arr[2] * 1000;
	}

	else if (arr[2] < arr[3] && arr[3] < arr[1] && arr[3] < arr[0] && arr[1] > arr[0])
	{
		number3 = arr[3] + arr[0] * 10 + arr[1] * 100 + arr[2] * 1000;
	}

	if (number3) return number3;
	else return -1;
}

void nextSmallerThanTests()
{
	cout << (nextSmallerThan(21) == 12) << endl;
	cout << (nextSmallerThan(531) == 513) << endl;
	cout << (nextSmallerThan(2071) == 2017) << endl;
	cout << (nextSmallerThan(9) == -1) << endl;
	cout << (nextSmallerThan(111) == -1) << endl;
	cout << (nextSmallerThan(135) == -1) << endl;
	cout << (nextSmallerThan(1127) == -1) << endl;
	cout << (nextSmallerThan(2859) == 2598) << endl;
	cout << (nextSmallerThan(1258) == -1) << endl;
	cout << (nextSmallerThan(1911) == 1191) << endl;
	cout << (nextSmallerThan(1789) == -1) << endl;
	cout << (nextSmallerThan(1425) == 1254) << endl;
	cout << (nextSmallerThan(1111) == -1) << endl;
	cout << (nextSmallerThan(219) == 192) << endl;

}