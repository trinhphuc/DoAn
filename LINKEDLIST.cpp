#include <iostream>
#include<conio.h>
#include"stdlib.h"
struct NODE {
	int info;
	struct NODE *next;
};
struct LINKEDLIST {
	NODE *Head;
	NODE *Tail;
};
void InitList(LINKEDLIST& myList) {
	myList.Head = myList.Tail = NULL;
}
int IsEmptyList(LINKEDLIST myList) {
	if (myList.Head == NULL)
		return 1;
	return 0;
}
NODE*CreateNode(int x) {
	NODE*p = new NODE;
	if (p == NULL) {
		printf_s("\nKhong du bo nho");
		return NULL;
	}
	p->info = x;
	p->next = NULL;
	return p;
}
void AddLast(LINKEDLIST& myList, NODE*p) {
	if (IsEmptyList(myList))
		myList.Head = myList.Tail = p;
	else {
		myList.Tail->next = p;
		myList.Tail = p;
	}
}
void xuatds(LINKEDLIST myList)
{
		NODE*i;
		for (i = myList.Head; i != NULL; i = i->next)
			printf_s("%d -> ", i->info);
		printf_s("NULL");
}
void AddFirst(LINKEDLIST& myList, NODE*p) {
	if (IsEmptyList(myList))
		myList.Head = myList.Tail = p;
	else {
		p->next = myList.Head;
		myList.Head = p;
	}
}
void RemoveFirst(LINKEDLIST& myList) {
	if (IsEmptyList(myList))
		printf_s("\nDanh sach rong");
	else {
		NODE*p = myList.Head;
		if (myList.Head == myList.Tail)
			myList.Head = myList.Tail = NULL;
		else
			myList.Head = myList.Head->next;
		delete p;
	}
}
void RemoveLast(LINKEDLIST& myList) {
	if (IsEmptyList(myList))
		printf_s("\nDanh sach rong");
	else {
		NODE*q = myList.Tail;
		if (myList.Head == myList.Tail)
			myList.Head = myList.Tail = NULL;
		else
		{	
			NODE*p;
			for (p = myList.Head; p->next != myList.Tail; p = p->next);
			p->next = NULL;
			myList.Tail = p;
			delete q;
		}
	}
}
int NodeCount(LINKEDLIST myList) {
	NODE*t = myList.Head;
	int dem = 0;
	while (t != NULL) {
		dem++;
		t = t->next;
	}
	return dem;
}
int SearchNode(LINKEDLIST myList,int x){
	NODE*p = myList.Head;
	while (p != NULL) {
		if (p->info == x)
			return 1;
		p = p->next;
	}
	return 0;
}
void RemoveNode(LINKEDLIST& myList, NODE*q) {
	NODE*p = q->next;
	if (p == NULL)
		printf_s("\nKhong ton tai phan tu sau q");
	else {
		q->next = p->next;
		if (p == myList.Tail)
			myList.Tail = q;
		delete p;
	}
}
void hoanvi(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void main() {
	LINKEDLIST myList;
	InitList(myList);
}