//
//  main.cpp
//  assi4
//
//  Created by Joeun Park on 3/21/19.
//  Author: Jonah Dorant(21313339) Joeun Park (40066406)
//

#include <iostream>
#include "vector.hpp"
using namespace std;

// class ostream {
//   // this one
//   void << (a, b) {
//     // here we can now read b.a, b.b, b.c
//   }
// }
// class vector {
//   friend << () { }
// }
// vector v1(1,1,1);
//
// cout << v1


int main(void){
    vector v1(1,2,3),v2(4,5,6),sum(0,0,0),cross(0,0,0);
    
    cout << "Please enter 3 numbers with spaces, like so '1 2 3'";
    cin >> v1;
    cout << "The vector1 is ";
    cout << v1;
    
    cout << "Please enter 3 numbers with spaces, like so '1 2 3'";
    cin >> v2;
    cout << "The vector2 is ";
    cout << v2;
    cout<<"add: "<<(v1 + v2);
    cout << "Dot product: " << vector::sdot(v1,v2);
    cout << "Cross product: " << v1*v2;
    //cout << "Checking for equality";
    if(v1!=v2) {
        cout << "Indeed not equal" << endl;
    }
    else if (v1==v2){
        cout << "Actually equal" << endl;
    }  else {
        cout << "Not clear what is happening" << endl;
    }
    
    
    return 0;
    
}
