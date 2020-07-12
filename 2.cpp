#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return((a*b)/gcd(a,b));
}
s
int main(){
int t;
cin>>t;
while(t--){
    int n,l,a,b,c,d;
    cin>>n;
    a=n/2;b=n-a;
    c=a;d=b;
    l=lcm(a,b);
    for(int i=0;i<n/2;i++){
        if(lcm(a,b)<l){l=lcm(a,b);c=a;d=b;}
        a--;b++;
    }
    cout<<c<<' '<<d<<'\n';
    }

return 0;
}
