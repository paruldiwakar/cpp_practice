//
//  main.cpp
//  Structure as a parameter
//
//  Created by Parul Diwakar on 06/02/21.
//

#include <iostream>
#include <stdlib.h>

using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle &p)
{
    return p.breadth*p.length;
}

int area(struct Rectangle *p)
{
    return p->breadth*p->length;
}

int main() {
    // Pass by reference
    struct Rectangle ptr = { 10, 5};
    cout << "The area of the rectangle is : " << area(ptr) << endl;
    
    // Dynamically pass by address
    struct Rectangle *ptr1;
    ptr1 = new Rectangle;
    cout << "Enter Length:";
    cin >> ptr1->length;
    cout << "Enter Breadth:";
    cin >> ptr1->breadth;
    cout << "The area of the rectangle is : " << area(ptr1) << endl;
    delete ptr1;
    return 0;
}
