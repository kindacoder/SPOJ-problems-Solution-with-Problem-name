///I got error 3 times. Lost !...Copied the code ?. Yes very simple.
#include<iostream>
using namespace std;

int main()
{
    int a1,a2,a3;
    while(1)
    {
        cin>>a1>>a2>>a3;
        if(a1==0&&a2==0&&a3==0)break;
        if((a3-a2)==(a2-a1))
            cout<<"AP"<<" "<<a3+(a3-a2)<<endl;
        else
            cout<<"GP"<<" "<<a3*(a3/a2)<<endl;
    }
    return 0;
}
