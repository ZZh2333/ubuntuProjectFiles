#include <bits/stdc++.h>
using namespace std;

// 字母大小写转换
int main()
{
    string test = "hello", ans = "";
    ;
    for (int i = 0; i < test.size(); i++)
    {
        char temp = test[i];
        ans += temp - 32;
    }
    cout << ans << endl;
    return 0;
}