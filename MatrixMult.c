
#include <stdio.h>
#include <malloc.h>

int** matMult(int **a, int **b, int size){
	// (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
	int **v;
	int i;
	int p;
	int x;
   v = (int**)malloc(size * sizeof(int));
     
   for (i=0; i<size; i++)
       *(v+i) = (int *)malloc(size * sizeof(int));

   for (i = 0; i < size; i++){
		for (p = 0; p < size; p++){
			*(*(v + i)+p) = 0;
			
			for (x = 0; x < size; x++){
				*(*(v + i) + p) += *(*(a + i) + x) * *(*(b + x) + p);
			}
			
		}
	}
	
   return v;
}

void printArray(int **arr, int n){
	// (2) Implement your printArray function here
	int i;
	int j;
	
	for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){
           printf("%d ",*(*(arr + i)+j));
       }
       printf("\n");
   }

}

int main() {
	int n = 2;
	int **matA, **matB, **matC;
	// (1) Define 2 n x n arrays (matrices).
	int i;
	matA = (int **)malloc(n * sizeof(int *));
	for (i=0; i<n; i++)
		*(matA+i) = (int *)malloc(n * sizeof(int));
		
	
	matB = (int **)malloc(n * sizeof(int *));
	for (i=0; i<n; i++)
		*(matB+i) = (int *)malloc(n * sizeof(int));
  
	*(*(matA + 0)+0)= 3;
	*(*(matA + 0)+1)= 1;
	*(*(matA + 1)+0)= 4;
	*(*(matA + 1)+1)= 5;
	*(*(matB + 0)+0)= 6;
	*(*(matB + 0)+1)= 8;
	*(*(matB + 1)+0)= 3;
	*(*(matB + 1)+1)= 7; 
	

	// (3) Call printArray to print out the 2 arrays here.
	printf("Matrix A: \n");
	printArray(matA,n);
	printf("Matrix B: \n");
	printArray(matB,n);
	
	//(5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA,matB,n);
	
	//(6) Call printArray to print out resulting array here.
	printf("Result: \n");
	printArray(matC,n);

    return 0;
}
