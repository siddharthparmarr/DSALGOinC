#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node* next;
};


int isEmpty(struct Node* top) {
    if (top == NULL) {

        return 1;

    }
    else {

        return 0;
    }
}

int  isFull(struct Node* top) {
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    if (p == NULL) {
        return 1;

    }
    else {

        return 0;
    }
}

struct Node* push(struct Node* top, int x) {
    if (isFull(top)) {

        printf("stack overflow\n");
    }
    else {
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n -> data = x;
        n -> next = top;
        top = n;
        return top;

    }
}
int pop (struct Node** top) {


    if (isEmpty(*top)) {

        printf("stack underflow\n");
    }
    else {
        struct Node* n  = *top;
        *top = (*top) -> next;
        int x = n -> data;
        free(n);
        return x;

    }

}
void Traverse(struct Node* ptr) {

    while (ptr != NULL) {

        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }


}
int peek(struct Node* top , int pos) {

    struct Node* ptr = top;
    for (int i = 0; (i< pos-1 && ptr != NULL); i++) {

        ptr = ptr -> next;

    }
    if (ptr!=NULL) {
        return ptr -> data;
    }
    else {

        return -1;
    }


}
int stacktop (struct Node* top){

return top -> data;

}
int stackbottom(struct Node* top){

struct Node* k = top;
while (k -> next != NULL){

k = k -> next;
}
return k -> data;

}
int main() {

    struct Node* top = NULL;
    top = push(top,45);
    top = push(top,5);
    top = push(top,4);
    Traverse(top);
    printf("value at pos 1 is %d\n", peek(top, 1));
    printf("stacktop is %d\n", stacktop(top));
    printf("stackbotton is %d\n", stackbottom(top));

    return 0;
}
