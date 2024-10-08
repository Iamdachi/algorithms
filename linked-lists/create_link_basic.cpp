#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int x) : data(x), next(nullptr) {}
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x, ListNode * next) : data(x), next(next) {}
};

int main () {
    ListNode * front = new ListNode();
    front->data = 55;
    front->next = new ListNode(12);
    front->next->next = new ListNode(113);
    front->next->next->next = new ListNode(12);
    front->next->next->next->next = new ListNode(12);
}
