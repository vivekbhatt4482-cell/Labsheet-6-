#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Array must be sorted in ascending order
    int low = 0, high = n - 1;
    int largest = arr[n - 1];   // last element is largest
    int index = -1;

    // Binary search for the last occurrence of largest element
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == largest) {
            index = mid;
            low = mid + 1;   // search in right half
        }
        else if(arr[mid] < largest)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Largest element = " << largest << endl;
    cout << "Found at index = " << index;

    return 0;
}
