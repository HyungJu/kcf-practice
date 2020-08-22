#include <iostream>
using namespace std;
int main() {
	int n,t, cnt = 0;
	cin >> n;
	t = n;
	for(int i=5; i <t; i *= 5){
		cnt += n / i;
	}
	
	cout << cnt;
	return 0;
}
