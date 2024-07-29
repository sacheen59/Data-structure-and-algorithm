#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("The elements of an array are: \n");
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

// function to delete an item. Delete operation always takes an index
int Delete(struct Array *arr, int index)
{
    int x,i;
    if (index > 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }

    return 0;
}

int main()
{
    struct Array arr = {{2, 4, 5, 6, 7}, 10, 5};
    int deletedItem = Delete(&arr, 2);
    cout << "The deleted element at given index is: " << deletedItem << endl;
    Display(arr);
    return 0;
}