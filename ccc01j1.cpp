#include <bits/stdc++.h>
using namespace std;

int main(){
    int h; scanf("%d",&h);
    int s=1,n=1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++)
            printf("*");
        for(int j = 0; j < 2*(h-n); j++)
            printf(" ");
        for(int j = 0; j < n; j++)
            printf("*");
        if(n==h)s=-1;
        n+=2*s;
        cout << endl;
    }
}
