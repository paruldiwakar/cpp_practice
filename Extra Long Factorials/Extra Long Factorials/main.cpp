//
//  main.cpp
//  Extra Long Factorials
//
//  Created by Parul Diwakar on 02/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>

#define MAX 500
using namespace std;

/*string extraLongFactorials(int n) {
    if (n > MAX){
        return "";
    }
    long long counter;
    long double sum = 0;
    
    if(n == 0)
        return "1";
    for(counter = 1; counter <= n; counter++)
        sum += log(counter);
    string result = to_string(round(exp(sum)));
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << extraLongFactorials(n);
    return 0;
}*/

int multiply(int x, int res[], int res_size);
  
// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];
  
    // Initialize result
    res[0] = 1;
    int res_size = 1;
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
  
    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
  
        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;
  
        // Put rest in carry
        carry  = prod/10;
    }
  
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
