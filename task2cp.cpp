#include<iostream>
using namespace std;
float discount(int i,float num);
float price(string movie[], string name);
main(){
    string movie[5]={"Star Wars","PK","End Game","Fogg"};
    string name=" ";
    cout << "Enter the movie name {Star Wars,PK,End Game,Fogg}: ";
    getline(cin,name);
    float num=0.0;
    cout << "Enter the price of movie : ";
    cin >> num;
    int idx = price( movie, name);
    float ans=discount(idx,num);
    cout << "Discounted price is : " << ans;
        
}
float price(string movie[], string name){
    for(int i=0;i<5;i++){
        if(name==movie[i]){
            return i;
        }
    }


}
float discount(int i, float num){
    float p=0.0;
    if(i==1 || i==5){
        p=num-num*0.05;

    }
    else{
        p=num-num*0.1;
    }
    return p;
}