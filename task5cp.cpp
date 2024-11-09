#include<iostream>
using namespace std;
int check(string arr[],int num);
bool check2(string arr[],int num);
main(){
    int num=0;
    cout << "Enter the length of array : ";
    cin >> num;
    string arr[num];
    for(int i=0;i<num;i++){
        cout << "Enter the element : " << i+1 << "  ";
        cin >> arr[i];
    }
    bool ans=check2(arr,num);
    cout << ans;


}
int check(string arr[],int num){
    int count=0;
    for(int k=0;k<num;k++){
        if(arr[0]==arr[k]){
            count++;
        }

    }
    return count;
}
bool check2(string arr[], int num){
    int str=check(arr,num);
    if(str==num){
        return true;
    }
    else{
        return false;
    }
}