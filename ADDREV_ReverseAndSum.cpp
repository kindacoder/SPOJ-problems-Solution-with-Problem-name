#include<iostream>
using namespace std;
int sum(int a,int b){
///sum both the reversed number and Again reverse the sum



}
int reverse(int n){
    int rev=0,rem;
    while(n){
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
    }

return rev;
}
void sum(int t){
    int sum,sum_of_reverse;
    while(t){
             int a,b;
    cin>>a>>b;
    sum=reverse(a)+reverse(b);
    t--;

sum_of_reverse=reverse(sum);
   cout<<sum_of_reverse<<endl;

    }
}
int main(){
    int t;

   cin>>t;
   sum(t);


return 0;
}
