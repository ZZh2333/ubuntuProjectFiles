#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSelfCrossing(vector<int> &distance)
    {
        vector<vector<int>> road;
        road.push_back({0, 0});
        for (int i = 1; i <= distance[0]; i++)
        {
            cout << "up:" << endl;
            cout << "0," << i << endl;
            road.push_back({0, i});
        }
        for (int i = 1; i <= distance[1]; i++)
        {
            cout << "left:" << endl;
            cout << -i << "," << distance[0] << endl;
            road.push_back({-i, distance[0]});
        }
        for (int i = 1; i <= distance[2]; i++)
        {
            cout << "down:" << endl;
            cout << -distance[1] << "," << distance[0] - i << endl;
            road.push_back({-distance[1], distance[0] - i});
        }
        for (int i = 1; i <= distance[3]; i++)
        {
            cout << "right:" << endl;
            cout << -distance[1] + i << "," << distance[0] - distance[2] << endl;
            road.push_back({-distance[1] + i, distance[0] - distance[2]});
        }
        for (int i = 0; i < road.size(); i++)
        {
            for (int j = i + 1; j < road.size(); j++)
            {
                if (road[i] == road[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution solve;
    vector<int> dis = {1, 1, 1, 1};
    cout << solve.isSelfCrossing(dis);
}