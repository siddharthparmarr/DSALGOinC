#include<stdio.h>
#include<stdlib.h>

struct circulerqueue {

    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circulerqueue *q ) {

    if ( q -> r == q -> f) {

        return 1;

    }
    else {
        return 0;
    }


}
int isFull(struct circulerqueue *q ) {

    if ( (q -> r+1)%q -> size == q -> f) {

        return 1;

    }
    else {
        return 0;
    }


}
void encirculerqueue(struct circulerqueue *q, int val) {

    if (isFull(q)) {
        printf("full\n");
    }
    else {

        q -> r =  (q -> r+ 1) %q -> size;
        q -> arr[q -> r] = val;

    }



}
int decirculerqueue(struct circulerqueue* q) {

    int a = -1;
    if (isEmpty(q)) {
        printf("the circulerqueue is empty1\n");
	return 0;
    }
    else {
        q -> f = (q -> f + 1) %q -> size;
        a = q -> arr[q ->f ];
    }
    return a;


}
int main() {

    struct circulerqueue q;
    q.size = 100;
    q.f = q.r= 0;
    q.arr = (int*)malloc(q.size*sizeof(int));
    if (isEmpty(&q)) {
        printf("circulerqueue is Empty\n");
    }
    if(isFull(&q)) {
        printf("circulerqueue is full\n");

    }
    encirculerqueue(&q, 12);
    encirculerqueue(&q, 11);
    encirculerqueue(&q, 15);
    printf("dequeuing element %d\n", decirculerqueue(&q));
    printf("dequeuing element %d\n", decirculerqueue(&q));
    printf("dequeuing element %d\n", decirculerqueue(&q));

    return 0;
}
