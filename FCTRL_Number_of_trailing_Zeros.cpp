///In this problem we have to actually calculate Trailing number of Zeros-
///visit this Link for tutorial : https://brilliant.org/wiki/trailing-number-of-zeros/

#include<iostream>
using namespace std;

void trailingZeros(int t){
    int n,zeros=0;

    while(t--){

            ///enter a number:
            cin>>n;
          while(n>=5){
                zeros=zeros+(n/5);
                n=n/5;
          }

          cout<<zeros<<endl;
          zeros=0;
    }


}
int main(){
  int t;
  cin>>t;
  trailingZeros(t);




return 0;
}
