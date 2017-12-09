// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int l, int r) {
	int m = (l + r) / 2;

	if (l>r) {
		return -1;
	}


	if (n < arr[m]) {
		r = m-1;
		return binarySearch(arr,n,l,r);
	}
	else if (n > arr[m]) {
		l = m+1;
		return binarySearch(arr, n, l, r);
	}
	else if (n == arr[m]) {
		return m;
	}



}




int main()
{
	system("pause");
    return 0;
}

