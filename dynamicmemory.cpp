#include <iostream>
using namespace std;

//void update2(int& n) {
 //   n++;
//}
//void update1(int n) {
  //  n++;

//}
int getSum(int *arr ,int n ) {
    int sum =0;
    for(int i =0; i<n; i++) {
        sum +=arr[i];
    }
    return sum;
}

int main() {
    /*int i = 5;
    // cretae a ref variable 

    int &j =i;                 //when we use stack memory it is called static memory allocation 
                            
                            //when we use heap memory it is called dynamic memory allocation

    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << j << endl;
    
    int n =5;

    cout << "before " << n << endl;

    update2(n);

    cout << "After " << n << endl;

    char ch = 'q';
    cout << sizeof(ch) << endl;

    char* c = &ch;
    cout << sizeof(c) << endl;*/


    int n;
    cin >> n;

    //variable size array
    int* arr = new int[n];


    //taking inouts in array
    for(int i =0; i<n; i++) {
        cin >> arr[i];
    }

    int ans  = getSum(arr, n) ; 

    cout << "anwser is " << ans << endl; 


    // case 1
    while(true) {
        int i = 5;
    }

    // in dynamic meory allocation we have to manually release memory

    return 0;
}