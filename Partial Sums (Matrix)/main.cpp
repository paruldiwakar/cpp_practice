//
//  main.cpp
//  Partial Sums (Matrix)
//
//  Created by Parul Diwakar on 19/07/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

const int Nmax = 100;
long long int a[Nmax][Nmax], s[Nmax][Nmax];

void init(int m, int n){
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++)
            s[i][j] = s[i][j-1] + s[i-1][j] + a[i][j] - s[i-1][j-1];
    }
   for(int i = 1; i <= m; i++){
       for(int j = 1; j <= n; j++){
              cout << s[i][j] << " ";
       } cout << "\n";
   }
      
}

int query(int l1, int c1, int l2, int c2){
    int sum = 0;
    sum += s[l2][c2] - s[l1-1][c2] + s[l2][c1-1] + s[l1-1][c1-1];
    
    return sum;
}


int main() {
    int m, n;
    cout << "Enter the dimensions of the matrix:";
    cin >> m >> n;
    init(m, n);
    cout << query(1, 1, 4, 5);

    
   
}
