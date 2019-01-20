#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node * previous;
		Node(int value){
			next = NULL;
			previous = NULL;
			data = value;
			}
	};
class Doublell{
	public:
		Node * head;
		Node * tail;
	Doublell(){ 
				head= NULL;
				tail= NULL;
			  }

void insert(int value){
	Node * temp = new Node;
	temp->data=value;
	if (head == NULL){
		head = temp;
	}
	else{
		tail->next = temp;
		temp->previous = tail;
		}		
		temp = tail;
		Node * current = head;
		while(currentt->next  !=NULL)
		current = current->next;
		current next->=temp;
		temp->previous=current;
}

