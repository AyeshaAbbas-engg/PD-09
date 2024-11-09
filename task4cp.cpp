#include<iostream>
using namespace std;
string check(int arr[],int num);
main(){
    int num=0;
    cout << "Enter the length of array : ";
    cin >> num;
    int arr[num];
    for(int i=0;i<num ; i++){
        cout << "Enter number " << i +1<< " : ";
        cin >> arr[i];
    }
    string ans=check(arr, num);
    cout << ans;
    
}
string check(int arr[],int num){

    int n=7;
    int arr2[num];
    int arr3[num];
    for(int j=0;j<num;j++){

        arr2[j]=arr[j]/10;
        arr3[j]= arr[j]%10;
        
    }
    for(int k=0;k<num;k++){

        if(arr3[k]==n ||arr2[k]==n){
            return "Boom!";
            
        }
        
    }
    return "You didnt enter 7!";
}