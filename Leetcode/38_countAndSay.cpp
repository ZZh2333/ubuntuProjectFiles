#include <bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        double ans;        
        string str;
        stringstream ss;        
        vector<int> num;
        vector<int> count;
        if(n==1){
            ans = 1;        
            ss<<ans;
            ss>>str;
            return str;
        }
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
        int wei = 0;
        for(int i=0;i<num.size();i++){
            int a = pow(4,2);
            ans+=num[i]*pow(10,wei);
            wei++;
            ans+=count[i]*pow(10,wei);
            wei++;
        }
        ss<<ans;
        ss>>str;
        return str;
    }
};

int main()
{
    Solution solve;
    int n = 111221;
    string ans = solve.countAndSay(n);
    cout << ans << endl;
}