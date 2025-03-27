#include <iostream>

using namespace std;

int main(){
    float x,y;
    cout<<"Enter two floating numbers";
    cin>>x>>y;

    float larger =(x>y)?x:y;
    cout<<"Larger number is: "<<larger<<endl;
    
    return 0;
}