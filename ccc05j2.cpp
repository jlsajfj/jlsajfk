#include <bits/stdc++.h>
using namespace std;

int factors[1004];

int main(){
    for(int i = 2; i < 1004; i++)
        for(int j = i; j < 1004; j+=i)
            factors[j]++;
    int cnt = 0;
    int a,b; scanf("%d%d",&a,&b);
    for(int i = a; i <= b; i++)
        if(factors[i]==3)
            cnt++;
    printf("The number of RSA numbers between %d and %d is %d\n",a,b,cnt);
}
