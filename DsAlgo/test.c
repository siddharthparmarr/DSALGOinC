#include <stdio.h>
void printarray(int* a, int n){

	for(int i=0; i<n; i++){
	
	printf("%d ", a[i]);
	}

printf("\n");

}
int partation(int* a, int mid,int low, int high){

int i = low;
int j = mid+1;
int k = low;
int b[100];

while (i<=mid && j<=high){


if (a[i] < a[j]){
b[k] = a[i];
i++;
k++;

}
else {
b[k] = a[j];
	j++;
k++;

}


}

while (i<= mid){
b[k] = a[i];
	i++;
k++;

}
while (j<=high){
b[k] = a[j];
j++;
k++;

}

for (i=low; i<=high; i++){

a[i] = b[i];

}
}

void quick(int* a, int low, int high) {

int mid;
if (low<high){
mid = (low+high)/2;
quick(a, low, mid);
quick(a, mid+1, high);
partation (a, mid, low, high);
}




}
int main () {

int a[] = {1,2,63,4,5,6};
int n = 6;

printarray(a,n);
quick(a,0,n-1);
printarray(a,n);


return 0;

}
