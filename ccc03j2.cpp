#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    scanf("%d",&c);
    while(c){
        int a = sqrt(c);
        while(c%a) a--;
        printf("Minimum perimeter is %d with dimensions %d x %d\n",2*(a+c/a),a,c/a);
        scanf("%d",&c);
    }
}
