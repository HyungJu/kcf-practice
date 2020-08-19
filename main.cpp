#include <iostream>

using namespace std;

int divide(int n){
    if(n == 1){
        return 0;
    }
    if( n%2 ){
        return 1;
    }
    if(n == 2){
        return 0;
    }

    return divide(n/2);
}
int main() {
    int n;
    cin >> n;

    if(divide(n) == 1){
        cout << "No";
    }else {
        cout << "Yes";
    }

    return 0;
}
