#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// function to reverse an array
void ReverseArray(struct Array *arr)
{
    int i, j;
    int temp;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

// function to left shift of an array
void LeftShift(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
}

// function to right shift of an array
void RightShift(struct Array *arr)
{
    int i;
    for (i = arr->length; i >= 0; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }
    arr->A[0] = 0;
}

// function to right rotate
void RightRotate(struct Array *arr)
{
    int i;
    for (i = arr->length - 1; i >= 0; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }
    arr->A[0] = arr->A[arr->length];
}

// function to left rotate
void LeftRotate(struct Array *arr)
{
    int i;
    int x = arr->A[0];
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->A[arr->length - 1] = x;
}

// function to display an array element
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
    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    // ReverseArray(&arr);
    // LeftShift(&arr);
    LeftRotate(&arr);

    cout << "The element after Rotating element is: " << endl;
    Display(arr);
    return 0;
}