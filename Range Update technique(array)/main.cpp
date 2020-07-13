//
//  main.cpp
//  Range Update technique(array)
//
//  Created by Parul Diwakar on 12/07/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

const int Nmax = 100005;
int a[Nmax],b[Nmax],s[Nmax];

void update(int x , int y , int val ){
    b[x] += val; //2+10 =12 b[0]
    b[y+1] -= val; //19-10 =9 b[5]
}

void buildFinalArray(int a[],int n){
    int i;

    for(i = 1 ; i <= n ; i++ ){
        s[i] = s[i-1] + b[i];
        a[i] += s[i];
        cout << a[i] << " ";
    }

}

int main() {
    
    int a[] = {2,-7,10,3,-1,19,-20,23,17};
    int n = 9;
    update(a[0], a[5], 10);
    buildFinalArray(a, n);
    
    return 0;
}
