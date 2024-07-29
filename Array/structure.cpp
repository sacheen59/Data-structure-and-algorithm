#include<stdio.h>
#include <malloc.h>

//defining the structure of an array

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("The elements of an array are: \n");
    for(i=0;i<arr.length;i++){
        printf("%d\n",arr.A[i]);
    }
}

int main(){
    struct Array arr;
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter all the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;

    //calling display function

    Display(arr);
    return 0;
}