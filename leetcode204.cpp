//
//  leecode_204.cpp
//  study
//
//  Created by 顾凯文 on 2017/5/20.
//  Copyright © 2017年 顾凯文. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    bool isprime(int n){
        for(int j=2;j*j<=n;j++){
            if(n%j==0)return false;
        }
        return true;
    }
public:
    int countPrimes(int n) {
        if(num<=2)return 0;
        int num=1;
        for(int i=3;i<n;i=i+2){
            if(isprime(i)){
                cout<<i<<endl;
                num++;
            }
            
        }
        return num;
    }
};

int main(){
    Solution s;
    int num=s.countPrimes(3);
    cout<<num<<endl;
    return 0;
}
