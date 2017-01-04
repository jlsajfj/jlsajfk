#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    for(int i; t; t--){
        scanf("%d",&i);
        if(i>314||i<46) printf("N");
        else if(i>270) printf("W");
        else if(i>135) printf("S");
        else printf("E");
        cout << endl;
    }
}
