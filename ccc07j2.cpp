#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    while(a!="TTYL"){
        if(a=="CU") a="see you";
        else if(a==":-)") a="I'm happy";
        else if(a==":-(") a="I'm unhappy";
        else if(a==";-)") a="wink";
        else if(a==":-P") a="stick out my tongue";
        else if(a=="(~.~)") a="sleepy";
        else if(a=="TA") a="totally awesome";
        else if(a=="CCC") a="Canadian Computing Competition";
        else if(a=="CUZ") a="because";
        else if(a=="TY") a="thank-you";
        else if(a=="YW") a="you're welcome";
        else if(a=="TTYL") a="talk to you later";
        cout << a << endl;
        cin >> a;
    }
    cout << "talk to you later" << endl;
}
