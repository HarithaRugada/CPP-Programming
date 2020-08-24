#include <iostream>
using namespace std;

void display(int *array, int size)
{
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = c[i];
    }
}

void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low+high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr ,mid+1, high);
        merge(arr, low, high, mid);
    }
}

int main()
{
    int myarray[30], num;
    cout << "Enter number of elements to be sorted : ";
    cin >> num;
    cout << "Enter " << num << " elements to be sorted : " << endl;
    for(int i = 0; i < num; i++) 
        cin >> myarray[i];
    cout << "Unsorted array > ";
    display(myarray, num);
    merge_sort(myarray, 0, num-1);
    cout << "Sorted array > ";
    display(myarray, num);
    return 0;
}