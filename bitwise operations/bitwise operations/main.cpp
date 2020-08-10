//
//  main.cpp
//  bitwise operations
//
//  Created by Parul Diwakar on 10/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

/* 1. Simple way
unsigned int countSetBits(unsigned int n){
    unsigned int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

 
2. Recursive way

unsigned int countSetBits(unsigned int n){
    if (n == 0)
        return 0;
    else
        // & 1 keeps the least significant bit nad clear other bits
        //mask->0000 0000 0000 0001
        //13 -> 0000 0000 0000 1101
        //result->                1
        return (n & 1) + countSetBits(n >> 1);
}
*/
// 3. Lookup table : O(1)

int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
1, 2, 2, 3, 2, 3, 3, 4 };

unsigned int countSetBits(unsigned int num) {
    int nibble = 0;
    if (0 == num)
        return num_to_bits[0];
  
    // Find last nibble
    nibble = num & 0xf;
  
    // Use pre-stored values to find count
    // in last nibble plus recursively add
    // remaining nibbles.
    return num_to_bits[nibble] + countSetBits(num >> 4);
}

int main() {
    int a;
    cin >> a;
    cout << countSetBits(a);
    return 0;
}

