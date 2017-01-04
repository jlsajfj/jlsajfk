#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    while(a!="quit!"){
        if(a.length()>3&&a.substr(a.length()-2)=="or"){
            switch(a[a.length()-3]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                cout << a << endl;
                break;
            default:
                cout << a.substr(0,a.length()-2) << "our" << endl;
            }
        }
        else cout << a << endl;
        cin >> a;
    }
}
