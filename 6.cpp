#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cin >> key;

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            found = 1;
            cout << "Element found at index " << i;
            break;
        }
    }

    if(!found) cout << "Element not found";

    return 0;
}
