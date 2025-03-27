#include <iostream>

using namespace std;

int main(){
    
    int x;
    cout<<"Enter a number";
    cin>>x;

    if(x>0 &&(x&(x-1))==0)
    cout<<x<< "is a power of 2"<<endl;
    else
    cout<<x<<"is not a power of 2"<<endl;

    return 0;
}