#include <iostream>
#include <string>
using namespace std;
template <class ElemType>
struct listNode{
	ElemType data;
	listNode<ElemType> *next;
};
template <class ElemType>
listNode<ElemType> *createList(listNode<ElemType> *header,int length){
	listNode<ElemType> *head = header;

	head->data = 0;

	head->next = NULL;
	listNode<ElemType> *p = NULL;
	listNode<ElemType> *q = head;
	for(int i = 0;i < length;i++)
	{
		p = new listNode<ElemType>;
		p->data = 10;
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return head;
}
int main()
{
	listNode<int> *head = new listNode<int>;
	head = createList(head,3);
	for(int i = 0; i < 5;i++)
	{
		cout << head->data << '\n' << head->next << endl;
		head = head->next;
	}
	return 0;
}
