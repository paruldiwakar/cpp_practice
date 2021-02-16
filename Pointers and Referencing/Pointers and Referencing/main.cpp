//
//  main.cpp
//  Pointers and Referencing
//
//  Created by Parul Diwakar on 16/11/20.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main() {
    int a = 10, *p, *t;
    rectangle *s1, *s2;
   // p = &a;
    
    // HEAP MEMORY ALLOCATION
    // C
    p = (int *)malloc(4 * sizeof(int));
    // C++
    t = new int[4];
    p[0] = 12; p[1] = 13; p[2] = 45; p[3] = 89;
    t[0] = 12; t[1] = 13; t[2] = 45; t[3] = 89;
    for(int i = 0; i < 4; i++)
        cout << p[i] << " " << t[i] <<endl;
    // DEALLOCATION
    
    delete [] t; // C++
    free(p);     // C
    p = NULL;
    
    //POINTER TO A STRUCTURE
    
    // C HEAP MEMORY ALLOCATION
    s1 = (struct rectangle *) malloc(sizeof(struct rectangle));
    s1->length = 15;
    s1->breadth = 34;
    cout << s1->length * s1->breadth << endl;
    free(s1);
    s1 = NULL;
    
    // C++ HEAP MEMORY ALLOCATION
    s2 = new rectangle;
    s2->length = 25;
    s2->breadth = 3;
    cout << s2->length * s2->breadth << endl;
    delete s2;
    
    // Referencing
    
    int x = 10;
    int &y = x;
    
    cout << x++ << " " << x << " " << y << endl;
    return 0;
}
