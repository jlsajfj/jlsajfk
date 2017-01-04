#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    for(int i = a.length()-1; i+1; i--)
        printf("%c\n",a[i]);
}
