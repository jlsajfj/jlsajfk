#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    for(int i; t; t--){
        scanf("%d",&i);
        if(i<0) printf("X\n");
        else if(i>=0&&i<50) printf("F\n");
        else if(i<60) printf("D\n");
        else if(i<70) printf("C\n");
        else if(i<80) printf("B\n");
        else if(i<=100) printf("A\n");
        else printf("X\n");
    }
}
