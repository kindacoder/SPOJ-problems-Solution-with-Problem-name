#include<iostream>
using namespace std;
void factorial(int t){
    int fact,n;

while(t){
    fact=1;
    cin>>n;
    while(n){
      fact*=n;
      n--;

    }
    cout<<fact<<endl;
    t--;
}


}

int main(){
    int t;
    cin>>t;
    factorial(t);
return 0;
}
