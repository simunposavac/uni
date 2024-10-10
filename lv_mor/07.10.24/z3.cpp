#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,s=1,i=2,s2=2;

    cin>>a;

    for(int i; i<=a; ++i){
        s*=i;
    }

    for(int i; i<=a; ++i){
        s2+=7-i-1;
    }

    

    cout<<s2;


    return 0;
}