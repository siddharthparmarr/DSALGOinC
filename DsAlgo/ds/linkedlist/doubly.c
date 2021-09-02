#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node* prev;
    struct Node* next;
};
void Traverse(struct Node* head) {

    while (head != NULL) {
        printf("%d\n", head -> data);
        head = head -> next;

    }

}
void reverse(struct Node* head) {

struct Node* ptr = head;
struct Node* temp = NULL;

while ( ptr != NULL){

	  temp = ptr -> next;
	  ptr -> next = ptr -> prev;
	  ptr -> prev = temp;
	  ptr = temp;
printf("%d\n", ptr ->data);
}


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

    head -> prev = NULL;
    head -> data = 3;
    head -> next = first;

    first -> prev = head;
    first -> data = 4;
    first -> next = second;

    second -> prev = first;
    second -> data = 5;
    second -> next = third;

    third -> prev = second;
    third -> data = 6;
    third -> next = NULL;

    Traverse(head);
    reverse(head);
    return 0;
}
