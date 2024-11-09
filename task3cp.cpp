#include<iostream>
using namespace std;
bool check(string name);
main(){
    string name=" ";
    cout << "Enter the name : ";
    cin >> name;
    bool ans=check(name);
    cout << ans;

}
bool check(string name){
    int str=0;
    for(int i=0;name[i]!='\0';i++){
        str++;
    }
    if(str%2==0){
        return true;
    }
    else{
        return false;
    }
    

}