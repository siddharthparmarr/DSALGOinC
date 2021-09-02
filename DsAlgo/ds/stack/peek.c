#include<stdio.h>
#include<stdlib.h>

struct stack {

    int size;
    int top;
    int* arr;

};

int isEmpty(struct stack* ptr) {
    if (ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }

}
int isFull (struct stack* ptr) {
    if (ptr->top == ptr->size - 1) {

        return 1;
    }
    else {
        return 0;
    }


}
void push(struct stack* ptr, int val) {

    if (isFull(ptr)) {

        printf("stack overflow can not push value %d\n", val);
    }
    else {
        ptr -> top ++;
        ptr -> arr[ptr -> top] = val;

    }

}
int pop (struct stack* ptr) {

    if (isEmpty(ptr)) {

        printf("stack underflow\n");
        return -1;

    }
    else {
        int val = ptr -> arr[ptr -> top];
        ptr -> top--;
        return val;

    }


}
int peek(struct stack* sp, int i) {

    int arryInd = sp -> top - i +1;
    if (sp-> top - i + 1 < 0) {

        printf("not a valid position");
        return -1;
    }
    else {

        return sp -> arr[arryInd];


    }



}
int main() {
    /*
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int*) malloc(s.size * sizeof(int));*/

    struct stack *sp;
    sp = (struct stack*) malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    sp -> arr = (int*) malloc(sp->size * sizeof(int));
    if (isEmpty(sp)) {
        printf("the stack is empty\n");
    }
    else {

        printf("the stack is not empty\n");
    }
    push(sp,56);
    push(sp,5);
    push(sp,54);
    printf("poped :%d\n",pop(sp));
    if (isEmpty(sp)) {
        printf("the stack is empty\n");
    }
    else {

        printf("the stack is not empty\n");
    }
    for (int j = 0; j < sp -> top +1; j++) {



        printf("%d , %d ", j,peek(sp,j));
    }
    return 0;

}
