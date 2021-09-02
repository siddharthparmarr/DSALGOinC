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
struct Node* Deletefirst(struct Node* head) {


    struct Node* ptr = head;
    head = head -> next;
    free(ptr);
    return head;


}
struct Node* DeleteAtindex(struct Node* head, int index) {

    struct Node* p = head;
    struct Node* q = head -> next;
    for (int i = 0; i < index -1 ; i++) {

        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);

    return head;



}
struct Node* DeletelastNode(struct Node* head) {

    struct Node* p = head;
    struct Node* q = head -> next;

    while ( q -> next != NULL) {

        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;


}

struct Node* DeleteAtvalue(struct Node* head, int value) {

    struct Node* p = head;
    struct Node* q = head -> next;


    while (q -> data!=value && q -> next != NULL) {

        p = p -> next;
        q = q -> next;




    }
    if (q -> data == value) {

        p -> next = q -> next;
        free(q);

    }
    return head;
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
    printf("elements before deletion\n");
    TraverseLinkedlist(head);
    head = DeleteAtvalue(head, 4);
    printf("elements after deletion\n");
    TraverseLinkedlist(head);

    return 0;
}
