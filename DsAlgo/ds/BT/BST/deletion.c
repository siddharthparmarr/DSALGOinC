#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node* left;
    struct node* right;

};
struct node* createnode(int data) {


    struct node* n;
    n = (struct node*) malloc(sizeof(struct node));
    n -> data = data;
    n-> left = NULL;
    n -> right = NULL;
    return n;

}

void  inorder (struct node* root) {

    if (root != NULL) {
        inorder(root -> left);
        printf("%d\n", root -> data);
        inorder(root -> right);
    }

}
struct node* inOrderPre(struct node* root){

root = root -> left;
while (root -> right != NULL){

root = root -> right;


}
return root; 


}
struct node* deletenode(struct node* root, int value) {
	struct node* iPre;
    if (root == NULL) {

        return NULL;

    }
    if (root -> left == NULL && root -> right == NULL) {

        free(root);
	return NULL;
    }

    if (value < root -> data) {

        root -> left = deletenode(root -> left, value);
    }
    else if ( value > root -> data) {

        root -> right = deletenode( root -> right, value);

    }
    //deleting statagy
    else {

        iPre = inOrderPre(root);
        root -> data = iPre -> data;
        root -> left = deletenode(root -> left, iPre -> data);
    }
    return root;


}
int main() {

    struct node* p = createnode(5);
    struct node* p1 = createnode(3);
    struct node* p2 = createnode(6);
    struct node* p3 = createnode(1);
    struct node* p4 = createnode(4);
    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    inorder(p);
    deletenode(p , 3);
    printf("\n");
    inorder(p);
    return 0;
}
