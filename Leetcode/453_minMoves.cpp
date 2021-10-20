#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // 相对变化
    int minMoves(vector<int> nums){
        int cont = 0;
        sort(nums.begin(),nums.end());
        int min = nums[0];
        for(int i=1;i<nums.size();i++){
            cont+=nums[i]-min;
        }
        return cont;
    }

    // 暴力法
    int forceMinMoves(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int cont = 0;
        while (nums[0] != nums[nums.size()-1])
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                nums[i] += 1;
            }
            sort(nums.begin(), nums.end());
            cont += 1;
        }
        return cont;
    }
};

int main()
{
    Solution solve;
    vector<int> nums ={ 1,2,3,4,5};
    int cont = solve.minMoves(nums);
    cout<<cont;
}