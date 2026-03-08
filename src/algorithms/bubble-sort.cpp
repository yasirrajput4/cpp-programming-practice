#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int k = 0; k < size - j - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
}

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 3, 2, 0, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    printarray(arr, size);

    bubblesort(arr, size);

    cout << "After sorting: ";
    printarray(arr, size);

    return 0;
}
