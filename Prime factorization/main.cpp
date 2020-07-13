//
//  main.cpp
//  Prime factorization
//
//  Created by Parul Diwakar on 07/07/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

int f[100],expo[100];
long long len;

void primeFact(long long n){
    int d = 2;
    if(n==1){
        len++;
        f[len] = 2;
        expo[len] = 0;
        return;
    }
    while(1LL*d*d <= n && n>1){
        int k = 0;
        while(n%d == 0){
            k++;
            n /= d;
        }
        if(k>0){
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if(n>1){
        len++;
        f[len] = n;
        expo[len] = 1;
    }
}

int main() {
    
    primeFact(987654321);
    for(int i=1; i<= len; i++){
        cout<<f[i]<<"->"<<expo[i]<<"\n";
    }
    return 0;
}
