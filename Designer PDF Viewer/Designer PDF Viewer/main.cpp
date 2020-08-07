//
//  main.cpp
//  Designer PDF Viewer
//
//  Created by Parul Diwakar on 06/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int heights[26];
    for(int i = 0; i < 26; i++)
        cin >> heights[i];
    string word;
    cin >> word;
    
    int maxHeight = 0;
    for (char i : word)
        if(heights[(int)i - 97] > maxHeight) maxHeight = heights[(int)i - 97];
    cout << maxHeight * word.size();
    return 0;
}
