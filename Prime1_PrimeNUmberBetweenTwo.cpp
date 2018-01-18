#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}

void generatePrime(int t){
while(t){
    int a,b;
    ///enter both the Number a&b in between you want to get the Prime:

    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    t--;
    cout<<endl;
}
}

int main(){
int t;
///Enter number of Test-cases:

cin>>t;
generatePrime(t);


return 0;
}
