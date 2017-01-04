#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,m; scanf("%d%d",&a,&m);
    for(int x=1; x<=m; x++)
        if((a*x) % m == 1){
            printf("%d\n",x);
            return 0;
        }
    printf("No such integer exists.\n");
}
