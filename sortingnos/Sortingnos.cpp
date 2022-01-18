#include<iostream>
using namespace std;

int main()
{
	int number;

	cout << "\nEnter N Value to print Natural Numbers =  ";
	cin >> number;
	

	for (int i = number; i >= 0; i--)
	{
		cout << i << " ";
	}
	for (int i = 1; i <= number; i++)
	
	{
		cout << i << " ";
	}
	
			if (number < 0)
			cout << "Error input cannot be negative" << endl;
			else


	return 0;
}