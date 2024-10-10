#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c;
    float s,r;

    cin>>a>>b>>c;
    s=(a+b+c)/2.0;
    r=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"Opseg: "<<a+b+c<<"\n";
    cout<<"Povrsina: "<<r<<"\n";

    return 0;
}