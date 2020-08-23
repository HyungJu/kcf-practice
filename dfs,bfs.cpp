#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int data[1001][1001];
int checked [1001];
int node, edge;

queue<int> q;
void bfs(int v){
    q.push(v);
    checked[v] = 1;
    while (!q.empty()){
        int a = q.front();
        q.pop();
        cout << a << " ";
        for(int i=1; i<=node; i++){
            if(!checked[i] && data[a][i] == 1){
                q.push(i);
                checked[i] = 1;
            }
        }
    }
}

void dfs(int v){
    checked[v] = 1;
    cout << v << " ";
    for(int i=1; i<=node; i++){
        if(!checked[i] && data[v][i] == 1){
            dfs(i);
        }
    }
}

int main() {
    int v;

    cin >> node >> edge >> v;

    for(int i=0; i<edge; i++){
        int a,b;
        cin >> a >> b;
        data[a][b] = 1;
        data[b][a] = 1;
    }
    dfs(v);
    cout << endl;
    memset(checked, 0, sizeof(checked));
    bfs(v);

    return 0;
}
