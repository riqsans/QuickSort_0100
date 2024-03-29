// QuickSort_0100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//array of integers to hold value
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of data movement
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\Enter Array Element" << endl;
	cout << "\n------------------" << endl;
}