#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            int flag = 0;
            for(int j=1;j<words[i].size();j++){
                if(findHang(words[i][j-1])!=findHang(words[i][j])){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){   
                ans.push_back(words[i]);
            }
        }
        return ans;
    }

    int findHang(char a)
    {
        vector<char> yi = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
        vector<char> er = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        vector<char> sa = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        for (int i = 0; i < yi.size(); i++)
        {
            if (a == yi[i])
            {
                return 1;
            }
        }
        for (int i = 0; i < er.size(); i++)
        {
            if (a == er[i])
            {
                return 2;
            }
        }
        for (int i = 0; i < sa.size(); i++)
        {
            if (a == sa[i])
            {
                return 3;
            }
        }
        return 0;
    }
};

int main()
{
    Solution solve;
    vector<string> str, ans;
    str = {"Hello","Alaska","Dad","Peace"};
    ans = solve.findWords(str);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '-';
    }
    cout << endl;
}