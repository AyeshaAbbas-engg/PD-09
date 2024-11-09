#include<iostream>
using namespace std;
void add(int arr[],int ch,int num);
main(){
    int num=0;
    cout << "Enter the legth : ";
    cin >> num;
    int ch=0;
    cout << "Enter how much time you want to repeat the loop : ";
    cin >> ch;
    int arr[num];
    for(int i=0;i<num;i++){
        cout << "Enter the element : ";
        cin >> arr[i];
    }
    add(arr,ch,num);
    for(int s=0;s<num;s++){
        cout << arr[s] << " ";
    }

}
void add(int arr[],int ch,int num){

    for(int j=0;j<num;j++){
        if(arr[j]%2==0){
            for(int h=0;h<ch;h++){
                arr[j]=arr[j]-2;
            }
        }
        else if(arr[j]%2!=0){
            for(int h=0;h<ch;h++){
                arr[j]=arr[j]+2;
            }
        }


    }
}