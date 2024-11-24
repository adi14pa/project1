#include <iostream>
using namespace std;

// inline functions are used to reduce the function call overhead

/*void func(int a , int b) {

    a++;
    b++;
    cout << a << b << endl;

}*/
 inline int getMax(int& a , int& b) { 
    return (a>b) ? a : b;
}


int main() {

   /* int a = 1, b = 2;
    func(a,b);  */       // fucntion call overhead

    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a,b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;                 // no extra memory usage


    ans = getMax(a,b);
    cout << ans << endl;

   // ans = (a>b) ? a : b;
    
    return 0;
}