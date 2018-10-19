#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void QuickSort(int a[], int leftIndex, int rightIndex);

void main()
{
	//Code demo
}
void QuickSort(int a[], int leftIndex, int rightIndex) {
	gan = gan+ 3;
	int i = leftIndex;
	int j = rightIndex;
	int pivot = a[(leftIndex + rightIndex) / 2];

	while (i <= j) {
		ss++;
		while (a[i] < pivot) ss++,i++;
		while (a[j] > pivot) ss++,j--;
		
		if (i <= j) {
			ss++;
			gan = gan + 3;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++; j--;
		}
		if (i < rightIndex) { ss++; QuickSort(a, i, rightIndex,gan,ss); }
		if (j > leftIndex) { ss++; QuickSort(a, leftIndex, j,gan,ss); }
	}
}