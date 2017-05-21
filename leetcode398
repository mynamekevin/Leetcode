//
//  leetcode398.cpp
//  study
//
//  Created by 顾凯文 on 2017/5/20.
//  Copyright © 2017年 顾凯文. All rights reserved.
//  1,11,21,1211,111221,312211,13112221,
// 当时在22行，写成j=k； 纠结了将近40分钟才找到这个很不起眼的错误。所以往往自己觉得正确的可能就是错误的，检查一定要细心，不能放过每个赋值语句

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        string out="";
        for(int i=1;i<n;i++){
            int j=0,k = 0;
            while(j<s.length()){
                k=j;
                while(k+1<s.length() && s[k]==s[k+1]){
                    k++;
                }
                out.append(to_string(k-j+1)+s[j]);
                j=j+(k-j+1);
            }
            s=out;
            //cout<<out<<endl;
            out="";
        }
        return s;
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    string out = s.countAndSay(n);
    cout<<out<<endl;
    return 0;
}
