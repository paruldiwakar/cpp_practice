//
//  main.cpp
//  Insertion Sort
//
//  Created by Parul Diwakar on 17/09/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

///  INCREASING ORDER

/*int main() {
    vector <int> array = {31, 41, 59, 26, 41, 38};
    for(int j = 1; j < array.size(); j++ ){
        int key = array[j];
        int i = j - 1;
        while( i >= 0 && array[i] > key){
            array[i + 1] = array[i];
            i -= 1;
            array[i + 1] = key;
        }
    }
    
    for(int i = 0; i < array.size(); i++ )
               cout << array[i] << " ";
    //cout << *(array.begin());
    
    return 0;
}*/

///  DECREASING ORDER

int main() {
    vector <int> array = {31, 41, 59, 26, 41, 38};
    for(int j = (array.size() - 2); j >= 0 ; j-- ){
        int key = array[j];
        int i = j + 1;
        while( i <= (array.size() - 1) && array[i] > key){
            array[i - 1] = array[i]  ;
            i += 1;
            array[i - 1] = key;
        }
    }
    
    for(int i = 0; i < array.size(); i++ )
               cout << array[i] << " ";
    //cout << array[5];
    
    return 0;
}

