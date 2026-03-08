#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]); // Swap after finding the min element
    }
}

int main()
{
    int arr[] = {2, 4, 6, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    print_array(arr, size);

    selection_sort(arr, size);

    cout << "After sorting: ";
    print_array(arr, size);

    return 0;
}
