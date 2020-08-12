//
//  main.cpp
//  Z Traversal (Recursion)
//
//  Created by Parul Diwakar on 12/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
using namespace std;
int a[4][4] = {
    {1, 2, 5, 6},
    {3, 4, 7, 8},
    {9, 10, 13, 14},
    {11, 12, 15, 16}
};

int getValue(int n, int x, int y){
    if (n == 0) return 1;
    
    if (x <= 1 << (n - 1)){
        if(y <= (1 << n - 1))
            return getValue(n - 1, x, y);
        return (1 << (2 * n - 2)) + getValue(n - 1, x, y - (1 << (n - 1)));
    }
    if (y <= (1 << n - 1))
        return (1 << (2 * n - 1)) + getValue(n - 1, x - (1 << (n - 1)), y);
    return 3 * (1 << (2 * n -2)) +  getValue(n - 1, x - (1 << (n - 1)), y - (1 << (n - 1)));


}

int main() {
    int row, column;
    int n = 2;
    cin >> row;
    cin >> column;
    cout << getValue(n, row, column);
    return 0;
}
