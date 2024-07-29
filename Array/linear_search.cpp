#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int LinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

// improving linear search using Transposition method
int TranspositionLinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            swap(&arr.A[i], &arr.A[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

// imporving linear search using Move to head method
int MoveToHeadLinearSearch(struct Array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            swap(&arr.A[i], &arr.A[0]);
            return 0;
        }
    }
    return -1;
}

void Display(struct Array arr)
{
    int i;
    cout << "The elements of an array are: " << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    // int indexOfElement = LinearSearch(arr, 10);

    // ====> the key 4 is at index 2 but transposition returns 1 by swaping it with previous index which helps to search fast. <====

    // int indexOfElement = TranspositionLinearSearch(arr, 4);

    // ====> the key 4 is at index 2 but move to head returns 0 by swaping it with first index element which helps to search same element fast next time. <====

    int indexOfElement = MoveToHeadLinearSearch(arr, 4);
    if (indexOfElement == -1)
    {
        cout << "The given element doesnot exists." << endl;
    }
    else
    {
        cout << "The element is found at index: " << indexOfElement << endl;
    }
    // display function
    Display(arr);
    return 0;
}