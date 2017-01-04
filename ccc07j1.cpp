#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a>=b?b>=c?b:a>=c?c:a:b>=a?a>=c?a:b>=c?c:b:c>=a?a>=b?a:c>=b?b:c:a) << endl;
}
