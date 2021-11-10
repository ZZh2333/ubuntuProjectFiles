#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ans = 0,end = 0;
        for(int i=0;i<timeSeries.size();i++){
            if(timeSeries[i]> end){
                end = timeSeries[i] + duration;
                ans += duration;
            }
            else{
                ans += timeSeries[i] + duration - end;
                end = timeSeries[i] + duration;
            }
        }
        return ans;
    }
};

int main()
{
    Solution solve;
    vector<int> ts = {1,3,5,7,9,11,13,15};
    int dura = 1;
    cout << solve.findPoisonedDuration(ts, dura);
}