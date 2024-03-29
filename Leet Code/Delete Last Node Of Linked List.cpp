/**  Coding Ninjas
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* deleteLast(Node* list) {
    Node* head = list;
    Node* mover = head;
    int len = 0;
    while (mover) { 
        mover = mover->next;
        len++;
    }
    mover = head;
    for (int i = 1; i < len - 1; i++) {
        mover = mover->next;
    }
    mover->next = nullptr;
    return head;
}
