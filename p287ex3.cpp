#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    double m = 1004;
    for(double i; n; n--){
        scanf("%lf",&i);
        if(i < m) m = i;
    }
    printf("%.2lf",m);
}
