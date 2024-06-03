#include<bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *make_node(int i){
	Node *head = new Node();
	head->data = i;
	head->next = NULL;
	return head;
}


void insertFirst(Node **head, int x){
	Node *node = make_node(x);
	if(*head == NULL){
		*head = node;
	} else{
		node->next = *head;
		*head = node;
	}
}

void show(Node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int main(){
	
	Node *head = NULL;
	insertFirst(&head,2);
	insertFirst(&head,3);
	show(head);
	
	return 0;
}
