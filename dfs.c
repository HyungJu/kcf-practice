#include <iostream>

using namespace std;
int data[1000][1000];
int checked [1000];
int node, edge;

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

    return 0;
}
