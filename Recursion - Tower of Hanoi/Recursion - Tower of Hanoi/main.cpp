//
//  main.cpp
//  Recursion - Tower of Hanoi
//
//  Created by Parul Diwakar on 18/02/21.
//

#include <iostream>
#include <stdio.h>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("move 1 disk from Tower %d to Tower %d.\n", A, C);
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int n;
    cout << "Enter the no. of disks : ";
    cin >> n;
    TOH(n, 1, 2, 3);
    return 0;
}
