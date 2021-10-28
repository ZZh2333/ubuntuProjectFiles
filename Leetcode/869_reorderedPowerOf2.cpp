#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        vector<int> search = contDigital(n);
        vector<vector<int>> allPossible;
        for (int i = 0; i < 30; i++)
        {
            allPossible.push_back(contDigital(pow(2, i)));
        }
        for (int i = 0; i < allPossible.size(); i++)
        {
            if (search == allPossible[i])
            {
                return true;
            }
        }
        return false;
    }
    vector<int> contDigital(int n)
    {
        vector<int> count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        while (n != 0)
        {
            count[n % 10]++;
            n = n / 10;
        }
        return count;
    }
};

int main()
{
    Solution solve;
    int n = 46;
    cout << solve.reorderedPowerOf2(n) << endl;
}