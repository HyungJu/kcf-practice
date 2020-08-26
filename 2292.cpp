#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int min = 2 , max = 7;
    if(n == 1){
        cout << 1;
        return 0;
    }
    for(int i=1; ; i++){

        if(min <= n && n<=max){
            cout << i +1;
            return 0;
        }
        min += 6 * i;
        max += 6 * (i+1);
    }


    return 0;
}
