//
//  main.cpp
//  vectorsum
//
//  Created by Parul Diwakar on 30/07/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<string> split_string(string);

// Complete the simpleArraySum function below.
int simpleArraySum(vector<int> ar) {
    int sum ;
    sum = accumulate(ar.begin(), ar.end(), 0);
    return sum;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int>ar(n);

    for(int i = 0; i < n; i++){
       cin>> ar[i];
    }
        
    cout << simpleArraySum(ar);
    return 0;
}
