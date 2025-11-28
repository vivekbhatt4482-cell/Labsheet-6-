#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int a[r][c], b[r][c], sub[r][c];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> a[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> b[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            sub[i][j] = a[i][j] - b[i][j];

    cout << "Subtraction:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }

    return 0;
}
