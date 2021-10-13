#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> str;
        for (long i = 1; i <= n; i++)
        {
            if (i % 3 == 0)
            {
                if (i % 5 == 0)
                {
                    str.push_back("FizzBuzz");
                }
                else
                {
                    str.push_back("Fizz");
                }
            }
            else if (i % 5 == 0)
            {
                str.push_back("Buzz");
            }
            else
            {
                // 将数字转换为字符串
                string temp;
                stringstream ss;
                ss<<i;
                ss>>temp;
                // ×××
                str.push_back(temp);
            }
        }
        return str;
    }
};

int main()
{
    Solution solve;
    vector<string> ans;
    cout<<"Please enter n:";
    int n;
    cin>>n;
    ans = solve.fizzBuzz(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    cout <<endl;
}