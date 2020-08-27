#include <iostream>
#include <cstring>

using namespace std;
int main() {
    int n, cnt = 0;
    int last;
    cin >> n;

    for(int i=1; cnt < n; i++){
        string a = to_string(i);
        int isnot = 0;
        for(int j=0; j < a.length(); j++){
            for(int k=0; k < a.length(); k++){
                if(j!=k){
                    if(a[j] == a[k]){
                        isnot = 1;

                    }
                }
            }
        }
        if(isnot == 0){
            cnt ++;
            last = i;
        }

    }

    cout << last;
}
