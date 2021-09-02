#include<stdio.h>

void printArray(int* A, int n){


	for (int i=0; i<=n; i++){
	
	
		printf("%d ",A[i]);
	
	}
printf("\n");

}

void bubblesort(int *A, int n){
	
	int temp;
	int isSorted=1;	
	for (int i=0;i<=n-1;i++){
	
		printf("Working on pass number %d", i+1);
		printf("\n");

		for (int j=0;j<=n-1-i;j++){//for comparission
		
		
			if(A[j]>A[j+1]){
			
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
			isSorted=0;
			
			}
		
		
		}
	
		if (isSorted){
		
			return;
		
		}	
	
	}


}

int main () {

//int A[] = {12,54,65,7,23,9};
int A[] = {1,2,3,3,5,8,9};
int n=6;

printArray(A, n);
bubblesort(A,n);
printArray(A,n);


return 0;
}
