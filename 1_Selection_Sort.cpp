#include <iostream>
using namespace std;

/*
In this type of sorting algorithm we take the minium value and place it at the beginning of the array
and repeat the same step for the other elements till n-1 steps where n is the length of the array.

Time Complexity
Best     - n^2
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

void selection_sort(int arr[], int size)
{
    cout<<"Before Sorting ";
    print(arr, size);
    for (int i = 0; i <= size - 2; i++)
    {
        int min = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout<<"After Sorting ";
    print(arr, size);
    
}

int main()
{
    int arr[] = {5, 2, 10, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, size);
}