#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; scanf("%d%d%d",&a,&b,&c);
    int aa=((a-100)>0?(a-100)*25:0)+b*15+c*20;
    int bb=((a-250)>0?(a-250)*45:0)+b*35+c*25;
    printf("Plan A costs %d.%d\nPlan B costs %d.%d\nPlan %s.",aa/100,aa%100,bb/100,bb%100,aa==bb?"A and B are the same price":(aa>bb?"B is cheapest":"A is cheapest"));
}
