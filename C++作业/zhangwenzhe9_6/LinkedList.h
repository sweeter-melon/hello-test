#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"

template<class T>
class LinkedList{
	private:
		Node<T> *front,*rear;
		Node<T> *prevPtr,*currPtr;
		int size;
		int position;
		Node<T> *newNode(const T &item,Node<T> *ptrNext=NULL);
		void freeNode(Node<T> *p);
		void copy(const LinkedList<T> &L);
	public:
		LinkedList();
		LinkedList(const LinkedList<T> &L);
		~LinkedList();
		LinkedList<T> &operator=(const LinkedList<T> &T);
		int getsize() const;
		bool isEmpty() const;
		void reset(int pos=0);
		void next();
		bool endOfList()const;
		int currentPosition();
		void insertFront(const T &item);
		void insertRear(const T &item);
		void insertAt(const T &item);
		void insertAfter(const T &item);
		T deleteFront();
		void deleteCurrent();
		T& data() const;
		void clear();
};
template<class T>
Node<T> *LinkedList<T>::newNode(const T &item,Node<T> *ptrNext)
{//生成一个新节点
	Node<T> *tempPtr=new Node<T>(item,ptrNext);
	return tempPtr;
}
template<class T>
void LinkedList<T>::freeNode(Node<T> *p)
{//释放节点
	delete p;
}
template<class T>
void LinkedList<T>::copy(const LinkedList<T> &L)
{//将链表L复制到当前表中
	L.reset();
	for(int i=0;i<L.size;i++)
	{
		insertRear(L.data());
		L.next();
	}
}

template<class T>
LinkedList<T>::LinkedList()
{
	size=0;
	prevPtr=currPtr=front=rear=new Node<T>(0);
}
template<class T>
LinkedList<T>::LinkedList(const LinkedList<T> &L)
{
	size=L.size;
	prevPtr=currPtr=front=rear=new Node<T>(0);
	copy(L);
}

template<class T>
LinkedList<T>::~LinkedList()
{
	clear();
	delete front;
}

template<class T>
LinkedList<T> & LinkedList<T>::operator=(const LinkedList<T> &L)
{
	clear();
	front->nextNode()=NULL;
	copy(L);
	return *this;
}

template<class T>
int LinkedList<T>::getsize() const
{
	return size;
}

template<class T>
bool LinkedList<T>::isEmpty() const
{
	if(rear==front)
	{
		return true;
	}
	return false;
}

template<class T>
void LinkedList<T>::reset(int pos)
{
	position=pos;
	prevPtr=front;
	currPtr=front->nextNode();
}
template<class T>
void LinkedList<T>::next()
{
	prevPtr=currPtr;
	currPtr=currPtr->nextNode();
}

template<class T>
bool LinkedList<T>::endOfList()const
{
	if(currPtr->nextNode()==NULL)
	{
		return true;
	}
	return false;
}

template<class T>
int LinkedList<T>::currentPosition() 
{
	Node<T> *tempPtr=front->nextNode();
	position=0;
	while(tempPtr!=currPtr)
	{
		tempPtr=tempPtr->nextNode();
		position++;
	}
	return position;	
}

template<class T>
void LinkedList<T>::insertFront(const T &item)
{
	prevPtr=front;
    Node<T> *tempPtr=newNode(item,front->nextNode());
	currPtr=tempPtr;
	front->insertafter(currPtr);
	if(front==rear)
	{
		rear=tempPtr;
	}
	size++;
}

template<class T>
void LinkedList<T>::insertRear(const T &item)
{
	prevPtr=rear;
	currPtr=newNode(item,rear->nextNode());
	rear->insertafter(currPtr);
	rear=currPtr;
	size++;
}

template<class T>
void LinkedList<T>::insertAt(const T &item)
{
	if(front!=rear)
	{
		Node<T> *tempPtr=newNode(item,prevPtr->nextNode());
		currPtr=tempPtr;
		prevPtr->insertafter(currPtr);
		size++;
	}
}

template<class T>
void LinkedList<T>::insertAfter(const T &item)
{
	prevPtr=currPtr;
	Node<T> *tempPtr=newNode(item,currPtr->nextNode());
	currPtr->insertafter(tempPtr);
	if(currPtr==rear)
	{
		rear=tempPtr;
	}
	currPtr=tempPtr;
	size++;
}

template<class T>
T LinkedList<T>::deleteFront()
{
	Node<T> *tempPtr=front->nextNode();
	currPtr=tempPtr;
	front->insertafter(currPtr->nextNode());
	prevPtr=front;
	delete tempPtr; 
}

template<class T>
void LinkedList<T>::deleteCurrent()
{
	Node<T> *tempPtr=currPtr;
	prevPtr->deleteAfter(); 
	delete currPtr;
	currPtr=tempPtr->nextNode();
	prevPtr->insertafter(currPtr);
	size--;
}

template<class T>
T& LinkedList<T>::data() const
{
	return currPtr->data;
}

template<class T>
void LinkedList<T>::clear()
{
	Node<T> *tempPtr=front->nextNode();
	while(tempPtr!=NULL)
	{
		Node<T> *temp=tempPtr;
		tempPtr=temp->nextNode();
		delete temp;
		size--;
	}
	currPtr=prevPtr=rear=front;
}
#endif
