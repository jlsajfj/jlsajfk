#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,cnt=0; scanf("%d%d%d%d",&a,&b,&c,&d);
    switch(a){
    case 1:
        cnt+=30;
    case 2:
        cnt+=11;
    case 3:
        cnt+=420;
        break;
    }
    switch(b){
    case 1:
        cnt+=30;
    case 3:
        cnt+=13;
    case 2:
        cnt+=57;
        break;
    }
    switch(c){
    case 2:
        cnt+=30;
    case 1:
        cnt+=12;
    case 3:
        cnt+=118;
        break;
    }
    switch(d){
    case 2:
        cnt+=99;
    case 1:
        cnt+=92;
    case 3:
        cnt+=75;
        break;
    }
    printf("Your total Calorie count is %d.",cnt);
}
