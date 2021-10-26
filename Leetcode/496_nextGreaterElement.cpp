#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = 1;
                }
                if (nums1[i] < nums2[j] && flag == 1)
                {
                    ans.push_back(nums2[j]);
                    break;
                }
                if (j == nums2.size() - 1 && nums1[i] >= nums2[j])
                {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution solve;
    vector<int> nums1 = {4, 1, 2}, nums2 = {1, 3, 4, 2}, ans;
    ans = solve.nextGreaterElement(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "-";
    }
    cout << endl;
}