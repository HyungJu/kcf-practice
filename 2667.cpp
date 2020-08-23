#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int data[25][25];
int visited[25][25];
int c = 0;

int movements[4][4] = {
        {1,0},
        {0,1},
        {-1,0},
        {0,-1}
};

void dfs(pair<int, int> p){
    visited[p.first][p.second] = 1;
    c ++;
    int x = p.first;
    int y = p.second;
    for(int i=0; i<4; i++){
        int newX = x + movements[i][0];
        int newY = y + movements[i][1];

        if(0 <= newX && newX < n && 0 <= newY && newY < n && data[newX][newY] == 1 && !visited[newX][newY]){
            dfs(make_pair(newX, newY));
        }
    }
}
int main() {
    vector<int> ans;
    cin >> n;
    for(int i=0; i<n; i++){
        string d;
        cin >> d;

        for(int j=0;j<n;j++){
            data[i][j] = d[j] - 48;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(data[i][j] && !visited[i][j]){
                c = 0;
                dfs(make_pair(i, j));
                ans.push_back(c);
            }
        }
    }
    cout << ans.size() <<endl;
    sort(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}
