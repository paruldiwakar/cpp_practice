//
//  main.cpp
//  The Time in Words
//
//  Created by Parul Diwakar on 26/08/20.
//  Copyright © 2020 Parul Diwakar. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

void time(int hh, int mm){
    map<int, string> clock;
    clock.insert(pair<int, string>(0, "o' clock "));
    clock.insert(pair<int, string>(1, "one "));
    clock.insert(pair<int, string>(2, "two "));
    clock.insert(pair<int, string>(3, "three "));
    clock.insert(pair<int, string>(4, "four "));
    clock.insert(pair<int, string>(5, "five "));
    clock.insert(pair<int, string>(6, "six "));
    clock.insert(pair<int, string>(7, "seven "));
    clock.insert(pair<int, string>(8, "eight "));
    clock.insert(pair<int, string>(9, "nine "));
    clock.insert(pair<int, string>(10, "ten "));
    clock.insert(pair<int, string>(11, "eleven  "));
    clock.insert(pair<int, string>(12, "twelve "));
    clock.insert(pair<int, string>(13, "thirteen "));
    clock.insert(pair<int, string>(14, "fourteen "));
    clock.insert(pair<int, string>(15, "quarter "));
    clock.insert(pair<int, string>(16, "sixteen "));
    clock.insert(pair<int, string>(17, "seventeen "));
    clock.insert(pair<int, string>(18, "eighteen "));
    clock.insert(pair<int, string>(19, "nineteen "));
    clock.insert(pair<int, string>(20, "twenty "));
    clock.insert(pair<int, string>(21, "twenty one "));
    clock.insert(pair<int, string>(22, "twenty two "));
    clock.insert(pair<int, string>(23, "twenty three "));
    clock.insert(pair<int, string>(24, "twenty four "));
    clock.insert(pair<int, string>(25, "twenty five "));
    clock.insert(pair<int, string>(26, "twenty six "));
    clock.insert(pair<int, string>(27, "twenty seven "));
    clock.insert(pair<int, string>(28, "twenty eight "));
    clock.insert(pair<int, string>(29, "twenty nine "));
    clock.insert(pair<int, string>(30, "half "));
    
       
       if(!mm)
           cout << clock.at(hh) << clock.at(mm);
       
       else if(mm == 1)
           cout << clock.at(mm) << "minute past " << clock.at(hh);
       
       else if(mm > 1 && mm <= 30){
           if(mm % 15 == 0)
               cout << clock.at(mm) << "past " << clock.at(hh);
           else
               cout << clock.at(mm) << "minutes past " << clock.at(hh);
           
           }
       else{
           mm = 60 - mm;
           
           if(hh == 12)
               hh = (hh + 1) % 12 ;
           else
               hh += 1;
           
           if(mm % 15 == 0)
               cout << clock.at(mm) << "to " << clock.at(hh);
           else if(mm == 1)
               cout << clock.at(mm) << "minute to " << clock.at(hh);
           else
               cout << clock.at(mm) << "minutes to " << clock.at(hh);
       }
        
  
}

int main() {
    int hh, mm;
    cin >> hh >> mm;
    time(hh, mm);
   
    return 0;
}
