#include<stdio.h>
#include<stdlib.h>
struct Node {

    int data;
    struct Node * next;

};
void TraverseLinkedlist(struct Node* ptr) {
    while (ptr!=NULL) {
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    }

}

int main() {

    struct Node * head ;
    struct Node * first ;
    struct Node * second ;
    struct Node * third ;
//allocate memory for nodes in heap
    head = (struct Node*) malloc(sizeof (struct Node));
    first = (struct Node*) malloc(sizeof (struct Node));
    second = (struct Node*) malloc(sizeof( struct Node));
    third = (struct Node*) malloc(sizeof( struct Node));

    head->data = 67;
    head-> next = first;

    first->data=4;
    first->next = second;

    second-> data = 3;
    second->next = third;

    third->data= 34;
    third->next=NULL;
    TraverseLinkedlist(head);

    return 0;
}
