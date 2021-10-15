#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
    }

    int describe(int n)
    {
        vector<int> num;
        vector<int> count;
        int cont = 1;
        while (n != 0)
        {
            int temp = n % 10;
            if (num.size() != 0 && num.back() == temp)
            {
                cont++;
            }
            else if (num.size() == 0)
            {
                num.push_back(temp);
            }
            else
            {
                num.push_back(temp);
                count.push_back(cont);
                cont = 1;
            }
            n = n / 10;
        }
        count.push_back(cont);
        int ans = 0;
        int wei = 0;
        for (int i = 0; i < num.size(); i++)
        {
            ans += num[i] * pow(10, wei);
            wei++;
            ans += count[i] * pow(10, wei);
            wei++;
        }
        return ans;
    }
};

int main()
{
    Solution solve;
    int n;
    cin >> n;
    cout << solve.describe(33221);
}