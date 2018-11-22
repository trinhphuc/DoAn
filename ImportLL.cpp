#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ImportLL(LINKEDLIST &myList){
	srand((int)time(NULL));
	NODE *p;
	int x, n;
	//InitList(myList);//Khoi tao LinkedList rong
	cout << "- Nhap vao so luong node: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		x = rand() % 30000;
		p = CreateNode(x);
		AddLast(myList, p);
	}
}