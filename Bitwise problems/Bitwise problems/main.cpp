//
//  main.cpp
//  Bitwise problems
//
//  Created by Parul Diwakar on 12/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

// 1.To check whether a number is a power of 2 or not.
//All power of two numbers have only one bit set. So count the no. of set bits and if you get 1 then number is a power of 2
/*
class Bits{
    public:
    bool countBits(long long n){
        unsigned int count = 0;
        while(n){
            n = n & (n - 1);
            count ++;
        }
      if (count == 1)
          return true;
        return false;
    }
};
int main() {
    long long n;
    cin >> n;
    Bits B;
    cout << B.countBits(n) << "\n";
    //OR
    cout << (!(n & (n-1)));
    
    return 0;
}*/

//2.Odd occurrences in an array. O(n)

// Function to find element occurring
// odd number of times
/*int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)
        res = res ^ ar[i];
      
    return res;
}
  
int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar)/sizeof(ar[0]);
      
    // Function calling
    cout << getOddOccurrence(ar, n);
      
    return 0;
}*/

