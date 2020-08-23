#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int data[101][101];
int checked [101][101];
int trace [101][101];
int node, edge;
int n,m;

queue<pair<int, int>> q;

int moved[4][2] = {
        { 1, 0 },
        { 0, 1 },
        { -1, 0 },
        { 0, -1 }
};

void move(pair<int,int> pair){
    q.push(pair);
    checked[pair.first][pair.second] = 1;
    trace[pair.first][pair.second] = 1;
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        //cout <<x << " " <<y<<endl;

        for(int i=0; i<4; i++){
            int newX = x + moved[i][0];
            int newY = y + moved[i][1];
            if( 1 <= newX && newX <= n && 1 <= newY && newY <= m && data[newX][newY] && !checked[newX][newY]){
                q.push(make_pair(newX, newY));
                checked[newX][newY] = 1;
                trace[newX][newY] = trace[x][y]+1;
            }
        }
    }
}

int main() {
    int v;


    cin >> n >> m;

    for(int i=1; i<=n; i++){
        string d;
        cin >> d;

        for(int j=0;j<=m;j++){
            data[i][j+1] = d[j] - 48;
        }
    }


    move(make_pair(1,1));
    cout << trace[n][m];
    return 0;
}
