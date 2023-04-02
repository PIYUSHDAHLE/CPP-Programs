#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i-1) {
            cout << "  "; // print spaces for indentation
            j++;
        }
        int k = 1;
        while (k <= (n-i+1)) {
            cout << "* "; // print stars for the pyramid
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// Enter the number of rows: 5
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 