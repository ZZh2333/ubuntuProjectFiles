#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bulbSwitch(int n)
    {
        int cont = 0, be = 3;
        while (n > 0)
        {
            cont++;
            n = n-be;
            be += 2;
        }
        return cont;
    }

    int originbulbSwitch(int n)
    {
        vector<int> bulb;
        for (int i = 0; i < n; i++)
        {
            bulb.push_back(0);
        }
        for (int m = 1; m <= n; m++)
        {
            int k = m - 1;
            while (k < n)
            {
                bulb[k] = 1 - bulb[k];
                k += m;
            }
        }
        int cont = 0;
        for (int i = 0; i < n; i++)
        {
            cout << bulb[i] << " ";
            if (bulb[i] == 1)
                cont++;
        }
        return cont;
    }
};

int main()
{
    Solution solve;
    for (int i = 1; i < 20; i++)
    {
        cout<<solve.bulbSwitch(i);
    }
}