#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

//function to append the value on an array 
void Append(struct Array *arr, int x){
    arr->A[arr->length] = x;
    arr->length++;
}

//function to insert an element in given index
void Insert(struct Array *arr, int index, int value){
    int i;
    // check whether the given index is less than array length
    if(index < arr->length){
        for(i = arr->length; i > index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = value;
        arr->length++;
    }else{
        cout<< "Given index is invalid"<<endl;
    }
}

// function to display an array
void Display(struct Array arr){
    int i;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<endl;
    }
    
}

int main(){
    struct Array arr = {{2,4,5,6,7},10,5}; // elements = {2,3,4,5,7} size = 10 and length = 5
    // Append(&arr, 10); // Add/Append(address of array structure, value) added to last index
    Insert(&arr,6, 10); // Insert(address of array structure, index, vlaue) added to given index
    Display(arr);
    return 0;
}