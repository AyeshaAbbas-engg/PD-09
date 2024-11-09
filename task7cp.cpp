#include<iostream>
using namespace std;
int count(string n1, string n2);
main(){

    string n1=" ";
    string n2=" ";
    cout << "Enter the name 1 : ";
    cin >> n1;
    cout << "Enter the name2 : ";
    cin >> n2;
    int ans=count(n1,n2);
    cout << ans;
}
int count(string n1, string n2){
    int c=0;
    for(int i=0;n1[i]!='\0';i++){
        for(int j=0;j<n2[j]!='\0';j++){
            if(n1[i]==n2[j]){
              n2[j]=236;
                c++;
            }
        }

    }
    return c;
}