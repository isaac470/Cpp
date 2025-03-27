#include <iostream>

using namespace std;

int main(){
    int x;
    int y;

    cout<<"Enter 1st integer value"<<endl;
    cin>>x;

    cout<<"Enter 2nd integer value"<<endl;
    cin>>y;

    if (x>y){
        printf("First value is greater");
    }
    else{
        printf("Second value is greater");
    }

    return 0;
}