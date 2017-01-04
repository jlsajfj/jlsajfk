#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c; scanf("%lf%lf%lf",&a,&b,&c);
    for(int i = 0; i <= c; i++){
        printf("%d %.2f\n",i,a);
        a*=1+b/100;
    }
}
