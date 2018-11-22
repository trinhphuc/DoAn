void QuickSort(LINKEDLIST& myList) {
	LINKEDLIST myList1;
	LINKEDLIST myList2;
	NODE *pivot;
	NODE *p;
	InitList(myList1);
	InitList(myList2);
	//Truong hop danh sach rong hoac co 1 phan tu
	if (myList.Head == myList.Tail)
		return;
	//Phan hoach danh sach thanh 2 danh sach con
	pivot = myList.Head;//Phan tu cam canh
	p = myList.Head->next;
	while (p != NULL)
	{
		NODE*q = p;
		p = p->next;
		q->next = NULL;
		if (q->info < pivot->info)
			AddLast(myList1, q);//Them vao cuoi danh sach 1
		else
			AddLast(myList2, q);//Them vao cuoi danh sach 2
	};
	//Goi de quy sap xep cho cac danh sach con
	QuickSort(myList1);
	QuickSort(myList2);
	//Ghep noi danh sach 1 + pivot
	if (!IsEmptyList(myList1)) {
		myList.Head = myList1.Head;
		myList1.Tail->next = pivot;
	}
	else myList.Head = pivot;
	//Ghep noi pivot + danh sach 2
	pivot->next = myList2.Head;
	if (!IsEmptyList(myList2))
		myList.Tail = myList2.Tail;
	else myList.Tail = pivot;
}