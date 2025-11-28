#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string name[n];
    for(int i=0; i<n; i++)
        cin >> name[i];

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(name[j] > name[j+1])
                swap(name[j], name[j+1]);

    cout << "Sorted Names:\n";
    for(int i=0; i<n; i++)
        cout << name[i] << endl;

    return 0;
}
