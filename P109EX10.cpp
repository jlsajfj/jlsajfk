#include <bits/stdc++.h>
using namespace std;

int main(){
    int i; scanf("%d",&i);
    int q,d,n,p;
    q=i/25;
    d=i%25/10;
    n=i%20%10/5;
    p=i%5;
    printf("%d cent%srequires ",i,i==1?" ":"s ");
    !q?:printf("%d quarter%s ",q,q==1?",":"s,");
    !d?:printf("%d dime%s ",d,d==1?",":"s,");
    !n?:printf("%d nickel%s ",n,n==1?",":"s,");
    !p?:printf("%d cent%s",p,p==1?".":"s.");
}
