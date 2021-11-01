#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        sort(candyType.begin(), candyType.end());
        int cont = 1;
        for (int i = 1; i < candyType.size(); i++)
        {
            if (candyType[i] != candyType[i - 1])
            {
                cont++;
            }
        }
        return cont > candyType.size() / 2 ? candyType.size() / 2 : cont;
    }
};

int main()
{
    Solution solve;
    vector<int> candy = {1, 1, 2, 2, 3, 3};
    cout << solve.distributeCandies(candy);
}