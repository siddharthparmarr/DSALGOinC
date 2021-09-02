#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node* next;
};
void Traverse(struct Node* head ) {
    struct Node* ptr = head;
    do {
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    } while (ptr != head);

}
struct Node* insertAtfirst(struct Node* head, int data){

struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
struct Node* p = head -> next;
ptr -> data = data;

while (p -> next != head){



p = p -> next;

}
p -> next = ptr;
ptr -> next = head;
head = ptr;
return head;

}
int main() {

    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;

    head = (struct Node*) malloc(sizeof (struct Node));
    first = (struct Node*) malloc(sizeof (struct Node));
    second = (struct Node*) malloc(sizeof (struct Node));
    third = (struct Node*) malloc(sizeof (struct Node));

    head -> data = 3;
    head -> next = first;

    first -> data = 4;
    first -> next = second;

    second -> data = 5;
    second -> next = third;

    third -> data = 6;
    third -> next = head;

    Traverse(head);
    head =insertAtfirst(head, 59); 
    head =insertAtfirst(head, 57); 
    Traverse(head);
    return 0;
}
