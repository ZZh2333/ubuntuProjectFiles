#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findComplement(int num)
    {
        vector<int> num2wei;
        int ans = 0;
        while (num != 0)
        {
            num2wei.push_back(1 - num % 2);
            num = num / 2;
        }
        while (num2wei.size() != 0)
        {
            ans += num2wei.back()*pow(2,(num2wei.size()-1));
            num2wei.pop_back();
        }
        return ans;
    }
};

int main()
{
    Solution solve;
    int num = 10;
    int ans = solve.findComplement(num);
    cout<<"ans:"<<ans<<endl;
}