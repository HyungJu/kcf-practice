#include <iostream>
#include <cmath>

double calc(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
    int people[1000][2];
    int n;
    double max = 0;
    int maxPeople[2];
    std::cin >> n;
    for(int i =0;i < n; i++){
        std::cin >> people[i][0] >> people[i][1];
    }

    for(int i =0;i < n; i++){
        for(int j=0; j<n; j++){
            double temp = calc(people[i][0], people[i][1], people[j][0], people[j][1]);

            if(temp > max){
                max = temp;
                maxPeople[0] = i;
                maxPeople[1] = j;
            }
        }
    }

    std::cout << maxPeople[0] + 1 << " " << maxPeople[1] + 1;
    return 0;
}
