#include <iostream>
using namespace std;
bool Operator(char a){
    return a=='+' || a=='-' || a=='*' || a=='/' || a=='%' || a=='=';
}
int main(){
    string userinput;
    cout<<"Enter the input: ";
    cin>>userinput;

    cout<<"operator in the input is: "<<endl;
    for(char a:userinput){
        if(Operator(a)){
            cout<<"Operator is: "<<a<<endl;
        }
    }
    return 0;



}

