#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b; scanf("%lf %lf",&a,&b);
    b*=-1;
    if(!a&&!b) printf("indeterminate\n");
    else if(!a) printf("undefined\n");
    else printf("%.2f\n",(b/a));
}
