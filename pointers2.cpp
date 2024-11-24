#include<iostream>
using namespace std;


int main () {

    //pointer to int is created and pointing to some garbage address
   // int *p;

   //int *p = 0;
 
  // int i = 5;


   //int *q = &i;
  // cout << q << endl;
  // cout << *q << endl;

  // int *p = 0;
  // p = &i;


    //cout << p << endl;
   // cout << *p << endl;

   int num = 5;
   int a =num;
   a++;

   cout << num << endl;

   int *p = &num;
   cout << "before" << num << endl;
   (*p)++;
   cout << "after" << num << endl;

// copying a pointer
   int *q = p;
   cout << p << "_" << q << endl;
   cout << *p << "_" << *q << endl; 

   //important concept
   int i = 3;
   int *t = &i;

   *t = *t +1;
   cout << *t << endl;
   cout << "before t" << t << endl;
   t = t + 1;
   cout << "after t" << t << endl;


   

    


    return 0;
}