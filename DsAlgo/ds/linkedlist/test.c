#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node* next;
};

void Traverse(struct Node* head) {

    while (head != NULL) {
        printf("%d\n", head-> data);
        head = head -> next;


    }
}
struct Node* Deleteatfirst(struct Node* head) {

    struct Node* ptr = head;
    head = head -> next;
    free(ptr);
    return head;


}
struct Node* Deleteatvalue(struct Node* head, int value){


struct Node* ptr = head;
struct Node* p = head -> next;
while ( p -> data != value && p -> next != NULL){

ptr = ptr -> next;
p = p -> next;
}
if ( p -> data == value){
ptr -> next = p -> next;
free(p);
}
return head;


}
struct Node* Deleteatindex(struct Node* head, int index){

struct Node* ptr = head;
struct Node* p = head -> next;
int i = 0;
while ( i != index - 1){

ptr = ptr -> next;
p = p -> next;
i++;

}
ptr -> next = p -> next;
free(p);
return head;
}
struct Node* Deleteatlast(struct Node* head){

struct Node* ptr = head;
struct Node* p = head -> next;
while ( p -> next != NULL){

ptr = ptr -> next;
p = p -> next;

}
ptr -> next = NULL;
free(p);
return head;


}

int main() {
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;

    head = (struct Node*) malloc(sizeof(struct Node));
    first = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 3;
    head -> next = first;

    first -> data = 4;
    first -> next = second;

    second -> data = 5;
    second -> next = third;

    third -> data = 6;
    third -> next = NULL;
    head = Deleteatvalue(head, 5);
    Traverse(head);

    return 0;
}
