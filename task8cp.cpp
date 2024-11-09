#include<iostream>
using namespace std;
int sum(string name[],int num);
main(){

    int num=0;
    cout << "Enter the length of array : ";
    cin >>num;
    string name[num];
    for(int i=0;i<num;i++){
        cout <<" Enter element "<< i+1<< " : ";
        cin >> name[i];
    }
    int ans=sum(name,num);
    cout << "Total time taken to fill all the coloring : " <<(num*2)+ans << " sec";

    
}
int sum(string name[],int num){
    int count=0;
    for(int j=0;j<num-1;j++){
        if(name[j]==name[j+1]){
            count+=0;
        }
        else if(name[j]!=name[j+1]){
            count+=1;
        }
    }
    return count;
}
