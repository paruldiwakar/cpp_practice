//
//  main.cpp
//  min max
//
//  Created by Parul Diwakar on 20/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

void miniMaxSum(long int arr[], int n) {
    long int min = 0, max = 0, sum = 0;
    min = arr[0];
    max = min;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max )
            max = arr[i];
    }

    cout << (sum - max) << " " << (sum - min);
}

int main()
{
    int n = 5;
    long int arr[5];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    

    miniMaxSum(arr, n);

    return 0;
}
