#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

   int ** arr = new int*[n]; 

   for(int i = 0; i <n; i++) {
        arr[i] = new int [n];
   }

   //creation done

   // taking input
   for(int i = 0; i < n ; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];

        }
   }

   // taking output
   cout << endl;
    for(int i = 0; i < n ; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;

    }

    //releasing memory
    for(int i = 0; i < n ; i++) {
        delete [] arr[i];
    }


    // how to create a 2d array
    // input/output
    //memory free kaise karani hai 

    return 0;
}
