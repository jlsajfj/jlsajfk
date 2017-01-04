#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b; cin >> a >> b;
    double bmi = a/(b*b);
    if(bmi>25) printf("Overweight");
    else if(bmi>=18.5) printf("Normal weight");
    else printf("Underweight");
}
