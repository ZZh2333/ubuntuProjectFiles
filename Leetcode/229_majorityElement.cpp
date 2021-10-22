#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> n;
        vector<int> c;
        int cont = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if(n.size()==0){
                n.push_back(nums[i]);
            }
            else if(nums[i]==n.back()){
                cont++;
            }
            else{
                n.push_back(nums[i]);
                c.push_back(cont);
                cont=1;
            }
        }
        c.push_back(cont);
        vector<int> ans;
        for(int i=0;i<c.size();i++){
            if(c[i]>nums.size()/3){
                ans.push_back(n[i]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution solve;
    // vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
    vector<int> nums = {3, 2, 3};
    vector<int> ans;
    ans = solve.majorityElement(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ";";
    }
    cout << endl;
}