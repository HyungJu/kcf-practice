#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int d = n/5;

    while(d > -1){
        if( (n-d * 5) % 3 == 0){
            cout << d + (n-d * 5) / 3;
            return 0;
        }

        d--;
    }

    cout << -1;

    return 0;
}
