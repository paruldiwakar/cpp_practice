//
//  main.cpp
//  aVeryBigSum
//
//  Created by Parul Diwakar on 01/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


// Complete the simpleArraySum function below.
long long aVeryBigSum(vector<long long> ar) {
    long long sum ;
    sum = accumulate(ar.begin(), ar.end(),(long long) 0); /// passing long long as initial value
    return sum;
}


int main()
{
    int n;
    cin >> n;
    
    vector<long long>ar(n);

    for(int i = 0; i < n; i++){
       cin>> ar[i];
    }
        
    cout << aVeryBigSum(ar);
    return 0;
}
