#include<iostream>
using namespace std;
//program to print the marks of n number of students

int main()
{
	int marks[40] = { 0 };

	int n;
	cout << "Enter the number of students"  ;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> marks[i];
	}

	for (int i = 0; i < n; i++) {
		cout << marks[i];

	}


}