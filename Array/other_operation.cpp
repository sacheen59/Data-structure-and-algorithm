#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// function to find the maximum value from an array
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

// function to find the minimum value from an array
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

// function to get an element at specified index
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
}

// function to set the value at the given index of an array 
void Set(struct Array *arr, int value, int index)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
}

// function to find the total sum of an array element of given array 
int SumOfArray(struct Array arr){
    int sum = 0;
    int i;
    for(i = 0; i< arr.length; i++){
        sum = sum + arr.A[i];
    }
    return sum;
}

// function to display an element of an array 
void Display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

int main()
{
    struct Array arr = {{2, 4, -1, 7, 6}, 10, 5};
    int getValue = Get(arr, 2); // here 2 -> index of element
    cout << "The element at given index is: " << getValue << endl;

    Set(&arr, 10, 2);

    int maxValue = Max(arr);
    cout << "The max element of an given array is: " << maxValue << endl;

    int minValue = Min(arr);
    cout << "The min value of an given array is: " << minValue << endl;

    int totalSum = SumOfArray(arr);
    cout<<"The sum of an array element is: "<<totalSum<<endl;

    Display(arr);
    return 0;
}