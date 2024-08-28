#include <iostream>
using namespace std;

/*
In this type of sorting algorithm we take an element and place it at it's correct position and repeat
the step until the entire array is sorted.

Time Complexity
Best     - n
Average  - n^2
Worst    - n^2

*/

void print(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int arr[], int size)
{
    cout << "Before Sorting ";
    print(arr, size);
    for (int i = 0; i < size - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    cout << "After Sorting ";
    print(arr, size);
}

int main()
{
    int arr[] = {5, 2, 10, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
}