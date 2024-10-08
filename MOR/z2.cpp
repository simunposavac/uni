#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;

    cin>>a;
    cout<<a%10<<endl;
    a/=10;

    while(a%10 != 0){
        if((a/10)%10 == 0){
            cout<<a<<endl;
            break;
        }
        a/=10;
    }

    return 0;
}