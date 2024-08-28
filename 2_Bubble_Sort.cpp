#include <iostream>
using namespace std;

/*
In this type of sorting algorithm we compare the adjacent elements and swap if the element on the left is bigger
than the element on the right side and due to which the largest element is placed at the last of the array.

Time Complexity
Best     - n (if the array is sorted)
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

void bubble_sort(int arr[], int size)
{   
    int count = size;
    int didSwap = 0;
    cout<<"Before Sorting ";
    print(arr, size);
    while(count>0)
    {
        for(int i = 0; i < count - 1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                didSwap = 1;
            }
        }count--;
        if(didSwap == 0) break;
    }
    cout<<"After Sorting ";
    print(arr, size);
    
}

int main()
{
    int arr[] = {5, 2, 10, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
}