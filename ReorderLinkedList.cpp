/*Given a singly linked list: A0→A1→…→An-1→An, reorder it to:
A0→An→A1→An-1→A2→An-2→…
For example: Given 1->2->3->4->5 its reorder is 1->5->2->4->3.

Note: It is recommended do this in-place without altering the
nodes' values.*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends


/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node* reverse(Node* head){
    Node* current = head;
    Node* prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
    return prev;
}
void reorderList(Node* head) {
    Node* fast = head->next;
    Node* slow = head;
    
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
          Node* head1 = head;
          Node* head2 = slow->next;
          slow->next = NULL;
    
    head2 = reverse(head2);
    
    Node* newH = new Node(0);
          while(head1 || head2){
              if(head1){
                  newH->next = head1;
                  head1 = head1->next;
                  newH = newH->next;
              }
              if(head2){
                  newH->next = head2;
                  head2 = head2->next;
                  newH = newH->next;
              }
          }
         head = newH->next;
}