#include<iostream>
using namespace std;
void price(float quan[4]);
main(){

    string fruit[4];
    float quan[4];
    for(int i=0;i<4;i++){
        cout << "Enter fruit name : ";
        cin >> fruit[i];
        cout << "Enter quantity : ";
        cin >> quan[i];

    }
    price(quan);
    cout << "Fruit name \t price"<< endl;
    for(int k=0;k<4;k++){
        cout << fruit[k] << "\t \t" << quan[k] << endl;
    }

}
void price(float quan[4]){
    quan[0]=quan[0]*230;
    quan[1]=quan[1]*129;
    quan[2]=quan[2]*431;
    quan[3]=quan[3]*220;

}