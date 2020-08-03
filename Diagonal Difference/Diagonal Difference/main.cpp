//
//  main.cpp
//  Diagonal Difference
//
//  Created by Parul Diwakar on 03/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

int difference(int n) {
    
    int array[n][n];
    int sumP = 0, sumS = 0 ;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin >> array[i][j];
            
            if (i == j)
                sumP += array[i][j];
            if (i + j == (n - 1))
                sumS += array[i][j];
        }
    return (abs(sumP - sumS));
}

int main()
{   int n;
    
    cin >> n;
    cout << difference(n);
    return 0;
}
