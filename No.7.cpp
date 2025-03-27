#include <iostream>


using namespace std;

int main(){
    string x;
    cout<<"Enter a character"<<endl;
    cin>>x;

    if (x.find('a')!=string::npos){
            printf("Contains 'a'");
        }else{
            printf("Does not contain 'a");
        }
return 0;
}