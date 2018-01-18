///Take a pen and Draw the diagram and look for logic:- It will click sure ::)
#include<iostream>
using namespace std;

int findTheNumber(int t){
int a,b,sub;
while(t){

      ///enter both the numbers-
        cin>>a>>b;
        sub=a-b;
///check the numbers odd or even:-

///Conditions:-
if((a%2)==0 && (b%2)==0 && sub==0 && a<=10000 && b<=10000){
    cout<<a+b<<endl;
}
else if((a%2)==1 && (b%2)==1 && sub==0 && a<=10000 && b<=10000){
    cout<<a+b-1<<endl;
}
else if((a%2)==0 && (b%2)==0 && sub==2 && a<=10000 && b<=10000){
    cout<<a+b<<endl;
}
else if((a%2==1) && (b%2)==1 && sub==2 && a<=10000 && b<=10000){
    cout<<a+b-1<<endl;
}
else{
    cout<<"No Number"<<endl;
}

    t--;
}

}
int main(){
int t;
cin>>t;
findTheNumber(t);

return 0;
}
