#include <iostream>


using namespace std;

int main(){
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;

    if(x%2!=0 &&x %3==0)
    cout<<x<<"is both odd and divisible by 3"<<endl;
    
    else 
    cout<<x<<" is not both odd and divisible by 3"<<endl;
    
return 0;
}