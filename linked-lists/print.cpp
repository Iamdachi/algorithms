#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int x) : data(x), next(nullptr) {}
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x, ListNode * next) : data(x), next(next) {}
};

void print(ListNode * front) {
    while(front != nullptr) {
    	cout << front->data << endl; // basic iteration. this line can be anything you want
	front = front->next;
    }
}


int main () {
    ListNode * front = new ListNode();
    front->data = 1;
    front->next = new ListNode(12);
    front->next->next = new ListNode(123);
    front->next->next->next = new ListNode(1234);
    front->next->next->next->next = new ListNode(12345);

    print(front);
}

