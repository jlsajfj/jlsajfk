#include <bits/stdc++.h>
using namespace std;

bool prime[1004];

int main(){
    int n; scanf("%d",&n);
    int p = log2(n)*100+0.5;
    fill(prime,prime+1000,1);
    prime[0]=prime[1]=0;
    for(int i = 2; i < sqrt(p); i++)
        if(prime[i])
            for(int j = 2*i; j < p; j+=i)
                prime[j]=0;
    for(int i = 0; n; i++){
        if(prime[i]){
            n--;
            printf("%d\n",i);
        }
    }
}
