#include <iostream>
using namespace std;
void Comment(string line){
    if (line.size()>=2 && line[0] == '/' && line[1] == '/'){
        cout<<"it is single line comment"<<endl;
        return;

    }
    
    if (line.size()>=4 && line[line.size() - 2] == '*'
        && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {
 
        cout << "It is a multi-line comment";
        return;
    }
    cout<<"it not comment"<<endl;

}
int main(){
    string line="/Priyo/";
    Comment(line);
    return 0;
}