//
//  leetcode260.cpp
//  study
//
//  Created by 顾凯文 on 2017/5/21.
//  Copyright © 2017年 顾凯文. All rights reserved.
//
//  思考两个问题，问题一：如何找到一个数的二进制某一位为1 ？问题二：几个数异或，一开始用什么数来异或第一个数呢？
//  位运算符有： & | ^ ~ 分别代表 与、或、异或、非
//  逻辑运算符： && || ! 分别代表 逻辑与、逻辑或、逻辑非

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>out{0,0};
        int xorV=nums[0];
        for(int i=1;i<nums.size();i++){
            xorV^=nums[i];
        }
        int tem=xorV&-xorV;            // x&(-x) 得到最后一位为1的二进制数
        for(int i=0;i<nums.size();i++){
            if((nums[i]&tem)==0)
                out[0]^=nums[i];       // 0与任何数异或，不变。
            else
                out[1]^=nums[i];
        }
        return out;
    }
};
int main(){
    int n=0;
    cin>>n;
    vector<int> input(n,0),output;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    Solution s;
    output = s.singleNumber(input);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }

    return 0;
}
