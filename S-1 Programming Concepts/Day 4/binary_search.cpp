#include <iostream>
using namespace std;

int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid-1, num);
        if(arr[mid] < num)
            return binarySearch(arr, mid+1, r, num);
    }
   return -1;
}

int main() 
{
    int n, number;
    cout << "Enter the number of elements > ";
    cin >> n;
    int array[n];
    cout << "Enter the sorted elements > \n";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    cout << "Enter the element to be searched > ";
    cin >> number;
    int index = binarySearch(array, 0, n-1, number);
    if(index == -1)
        cout << number << " is not present in the array";
    else
        cout << number << " is present at index " << index << " in the array";
    return 0;
}