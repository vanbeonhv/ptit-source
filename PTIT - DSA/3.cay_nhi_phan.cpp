#include<bits/stdc++.h>
using namespace std;

struct CanBo{
	long MaSo;
	char HoTen[8];
};

struct Node{
	CanBo Info;
	Node *Left, *Right;
}

void makeRoot(Node *root, CanBo cb){
	Node *p = new Node;
	p->Left = p->Right = NULL;
}

int main(){
	Node *root = NULL;
	
	
	return 0;
}