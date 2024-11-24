#include <iostream>
using namespace std;

 int score = 15;    // global variable
                    // these variables can be changed by any function
                    // avoid them

void a(int& i) {
    cout << score << "in a" << endl;
    char ch = 'a';       //  local variable
    cout << i << endl; 
   // b(i);

}

void b(int& i) {
    cout << score << "in b" << endl;
    cout << i << endl;   

}

int main() {
    cout << score << "in main" << endl;

    int i = 5;
    a(i);
    b(i);

  /*  {
        int i = 2;
        cout << i << endl;
    }*/


    return 0;
}
