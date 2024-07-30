#include <iostream>
#include <cmath>
using namespace std;

struct Array
{
    int A[15];
    int size;
    int length;
};

int BinSearch(struct Array arr, int l, int h, int key)
{
    while (l <= h)
    {
        int mid = floor((l + h) / 2);
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

// function of binary search using recursion

int RBinSearch(struct Array arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = floor((l + h) / 2);
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            return RBinSearch(arr, l, mid - 1, key);
        }
        else
        {
            return RBinSearch(arr,mid+1,h,key);
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 15, 15};
    // ==> note that the array must be sorted before performing binary search <==
    // int indexOfElement = BinSearch(arr, 0, arr.length - 1, 25);
    int indexOfElement = RBinSearch(arr, 0, arr.length - 1, 43);
    if (indexOfElement == -1)
    {
        cout << "The element doesnot exists." << endl;
    }
    else
    {

        cout << "The element found at index: " << indexOfElement << endl;
    }
    return 0;
}