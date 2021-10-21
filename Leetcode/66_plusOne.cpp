#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = 0;
        vector<int> ans;
        for(int i=0;i<digits.size();i++){
            if(digits[i]!=9){
                flag = 1;
            }
            if(flag == 1){
                break;
            }
        }
        if(flag == 0){
            ans.push_back(1);
            for(int i=0;i<digits.size();i++){
                ans.push_back(0);
            }
            return ans;
        }
        else{
            digits[digits.size()-1] += 1;
            int tip = digits.size()-1;
            while(tip!=0){
                if(digits[tip]==10){
                    digits[tip]=0;
                    tip--;
                    digits[tip]+=1;
                }
                else{
                    tip--;
                }
            }
        }
        return digits;
    }
};

int main(){
    Solution solve;
    vector<int> num = {9,9,9};
    // vector<int> num = {6,9,9};
    vector<int> ans;
    ans = solve.plusOne(num);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<";";
    }
    cout<<endl;
}