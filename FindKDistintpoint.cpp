
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k; // Read xc, yc, and k

     

        // Generate k distinct points around the center (xc, yc)
        for (int i = 0; i < k; ++i) {
            // Use a simple pattern to generate distinct points
            // For example, (xc + i, yc + i) for i from 0 to k-1
            cout<<xc+i<<" "<<yc<<endl;
        }

       
    }

    return 0;
}


