#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,cnt=0; scanf("%d%d",&a,&b);
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            if(i+j==10)
                cnt++;
    printf("There %s %d way%sto get the sum 10.",cnt==1?"is":"are",cnt,cnt==1?" ":"s ");
}
