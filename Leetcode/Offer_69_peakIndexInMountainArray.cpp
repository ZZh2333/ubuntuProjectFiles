// offer:剑指offer题库
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int i = 0;
        while (arr[i] < arr[i + 1])
        {
            i++;
        }
        return i;
    }
};

int main()
{
    Solution solve;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(2);
    cout << solve.peakIndexInMountainArray(arr) << endl;
    ;
}