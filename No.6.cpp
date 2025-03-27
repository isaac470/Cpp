#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char x;
    cout<<"Enter a character"<<endl;
    cin>>x;

    if (isupper(x)){
            printf("Uppercase letter");
        }else{
            printf("Not an uppercase letter");
        }
return 0;
}