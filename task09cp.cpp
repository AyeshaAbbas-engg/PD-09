#include<iostream>
using namespace std;
void code(string move[10],string pin);
main(){
    string move[10] = {"Shimmy", "Shake", "Pirutte", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabsque"};
    string pin;
    cout << "Enter the pin : ";
    cin >> pin;
    code(move, pin);
}
void code(string move[10],string pin){
    int count=0;
    int str=0;
    int val=0;

    while(pin[count]!='\0'){
        count++;
    }
    if(count==4){
        for(int i=0;i<4;i++){
            if(pin[i]<='9' && pin[i]>='0'){
                str++;
            }

        }
        if(str==4){
            for(int j=0;j<4;j++){
                val=pin[j]-'0';
                val+=j;
                if(val>9){
                    val=val%10;
                    cout << move[val] << " ";
                }
                else{
                    cout << move[val] << " ";
                }
            }
        }
        else{
            cout << "Invalid Input! pin should be integers !";
        }
    }
    else{
        cout << "Invalid input ! pin should be of 4 digits! ";
    }
}