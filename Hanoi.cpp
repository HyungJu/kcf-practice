#include <iostream>
using namespace std;


void hanoi(int n, int from, int by, int to){
    if(n == 0){
        return;
    }

    hanoi(n-1, from, to, by);
    cout << n << " " << to <<endl;
    hanoi(n-1, by, from, to);
}
int main() {
    int n, k;
    cin >> n >> k;
    hanoi(n, 1, 5-k, k);
    return 0;
}
