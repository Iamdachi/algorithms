#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int x) : data(x), next(nullptr) {}
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x, ListNode * next) : data(x), next(next) {}
};

int main() {
    ListNode dachi;
    dachi.data = 17;
    dachi.next = nullptr;

    cout << dachi.data << endl;
    cout << dachi.next << endl;

    ListNode* bachi = new ListNode();
    bachi->data = 18;
    bachi->next = nullptr;

    cout << bachi->data << endl;
    cout << bachi->next << endl;
    
    ListNode * xachi = new ListNode(18);

    cout << xachi->data << endl;
    cout << xachi->next << endl;
}
