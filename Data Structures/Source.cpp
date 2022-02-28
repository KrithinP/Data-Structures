#include<iostream>
using namespace std;
//Program to find the length of an array
int main()
{
	int array[] = { 1,2,3,4,5,6 };
	int n = sizeof(array) / sizeof(int);

	cout << "In Main" << sizeof(array) << endl;


		PrintArray(array, n);
}

void PrintArray(int *array, int n)
{
	cout << "The length of the array is" << n;
}