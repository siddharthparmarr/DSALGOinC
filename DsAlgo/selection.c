#include<stdio.h>

void printArray(int* A, int n){

	for (int i=0;i<n;i++){

		printf("%d ",A[i]);



	}

	printf("\n");

}

void selectionSort(int* A, int n){
	
	int indexOfmin, temp;

printf("Running selection sort!\n");

	for (int i=0; i<=n-1;i++){
	
		indexOfmin=i;
		for (int j=i+1;j<n;j++){
		
		
		if(A[j]<A[indexOfmin]){
		
		indexOfmin=j;
		
		}
		
		}
	
	temp=A[i];
	A[i]=A[indexOfmin];
	A[indexOfmin]=temp;
	
	}



}


int main () {

int A[] = {3,5,2,13,2};
int n=5;

printArray(A,n);
selectionSort(A,n);
printArray(A,n);


return 0;
}
