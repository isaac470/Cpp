#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"Enter two integers";
    cin>>x>>y;

    cout<<"Before swraping: x= "<<x<<", y="<<x<<endl;

    x=x^y;
    y=x^y;
    x=x^y;

    cout<<"After swapping: x=" <<x<<" ,b="<<y<<endl;

    return 0;
}