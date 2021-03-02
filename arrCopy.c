#include<stdio.h>
#include<string.h>

void printArr(int *a, int size, char *name){
	//Your code here
	int i;
	printf("%s array contents: ", name);
	for(i=0; i<size; i++)
		printf("%ld ", *(a + i));
	printf("\n");
	
}

int* arrCopy(int *a, int size){
	//Your code here
	int i;
	int b[size];
	for(i=0; i<size; i++)
		b[i] = *(a+i);
		
	return b;
}

int main(){
    int n;
    int *arr;
    int *arr_copy;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    //Dynamically create an int array of n items
    //Your code here
    arr = calloc(n, sizeof(int));
    //arr_copy = calloc(n, sizeof(int));

    //Ask user to input content of array
	//Your code here
	int x = 4;
	for(i=0; i<n; i++){
		printf("Enter the array element #%d: ", i+1);
		scanf("%d", &x);
		*(arr + i) = x;
	}
	printf("\n");
	
	
/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array
    arr_copy = arrCopy(arr, n);
    
	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}
