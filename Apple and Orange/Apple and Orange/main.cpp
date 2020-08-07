//
//  main.cpp
//  Apple and Orange
//
//  Created by Parul Diwakar on 06/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

const int Nmax = 100005;

int main() {
    long long int s, t, a, b, m, n, apples[Nmax], oranges[Nmax];
    int appleCount = 0, orangeCount = 0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        cin >> apples[i];
        if(a + apples[i] >= s && a + apples[i] <= t)
            appleCount++;
    }
    for (int j = 0; j < n; j++){
        cin >> oranges[j];
        if(b + oranges[j] >= s && b + oranges[j] <= t)
            orangeCount++;
    }
    cout << appleCount << "\n" << orangeCount;
    
    return 0;
}
