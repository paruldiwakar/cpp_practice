//
//  main.cpp
//  Sieve of Eratosthenes
//
//  Created by Parul Diwakar on 08/07/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

const int Nmax = 100001;
bool isPrime[Nmax]; //default value intialisation in bool is False

void SOE(int n){
    for(int i=2;i<=n;i++){
        isPrime[i] = true;
    }
    for(int i=2;i<=n/2;i++){
        if(isPrime[i] == true)
            for(int j = 2*i; j<= n ;j+=i)
            {
                isPrime[j] = false;
            }
    }
    
}

int main() {
    int n;
    cout<<"Enter no.:";
    cin>>n;
    SOE(n);
    for(int i=2;i<=n;i++){
        if(isPrime[i] == true)
            cout<<i<<" 11";
    }
    return 0;
}
