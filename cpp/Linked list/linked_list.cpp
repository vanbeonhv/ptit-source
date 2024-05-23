#include<bits/stdc++.h>
using namespace std;

//Xem file pointer_definition de hieu ve con tro va toan tu giai tham chieu

struct Node{
	int data;
	//con tro next tro toi phan tu tiep theo
	Node *next;
};

//Cap phat dong 1 node moi voi du lieu la so nguyen x
Node *makeNode(int x){
	Node* tmp = new Node();
	tmp->data = x;
	tmp->next = NULL; //hoac nullptr. ap dung cho c++ 11 tro len
	return tmp;
}

//Kiem tra rong
bool isEmpty(Node *node){
	return node == NULL;
}

//In dslk
//Duyet dslk nay se ko lam thay doi dslk.
//Vi khi pass `Node* head` thi la pass tham tri. khong phai tham chieu hay con tro
void print(Node *head){
	while(head != NULL){
		cout << head->data << " "; //cout << *&head->data << "-" cung se cho ket qua tuong tu neu ban da hieu;
		head = head->next;
	}
}

//Them phan tu vao dau dslk. Cach 1: argument la con tro **head
void insertFirst(Node **head, int x){
	Node *newNode = makeNode(x);

	if(head == NULL){
		//`*head` la lay gia tri ma con tro `head` dang tro toi
		*head = newNode;
	}else{
		//Buoc 1: phan next cua newNode => head
		newNode->next = (*head); //`*` o day la toan tu rai tham chieu. *head => dia chi cua node head trong dslk
		//Buoc 2: cap nhap node head => newNode
		*head = newNode;	
	}
}

//Cach 2. argument la tham chieu
void insertFirst2(Node *&head, int x){
	Node *newNode = makeNode(x);
	if(head == NULL){
		head = newNode;
	} else {
		newNode->next = head;
		head = newNode;
	}
	
}


//Ham nay truyen gia tri cua con tro head.
//Nen head trong nay la 1 ban copy cua con tro head. moi thao tac se la local/cuc bo.
//Khong anh huong toi dslk ben ngoai
void insertFirstDirect(Node *head, int x){
	Node *newNode = makeNode(x);

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;	
	}
}


//Lay chieu dai
int size(Node *node){
	int cnt = 0;
	
	while(node->next != NULL){
		cnt++;
		//gan dia chi cua node tiep theo cho node hien tai
		//cho node hien tai nhay sang node tiep theo
		node = node->next; 
	}
	return cnt;
}

//Them 1 phan tu vao dau linked list




int main(){
//	Node* a = new Node();
	Node *head = NULL;
	insertFirst2(head, 2);
	insertFirst(&head, 1);
	print(head);
}
