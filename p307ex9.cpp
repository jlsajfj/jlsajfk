#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    for(int i; t; t--){
        scanf("%d",&i);
        printf("%d\n",!(i%400)||(!(i%4)&&i%100));
    }
}
