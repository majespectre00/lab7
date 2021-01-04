/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int age, money;
    string status;
    cout <<"Enter your age: ";
    cin >> age;
    if(age<=20){
        int hei;
        cout <<"Enter your height: ";
        cin >> hei;
        if(hei<160)
            status = "UNFRIEND";
        else if (hei<175){
            status = "FRIEND";
            }else{
                cout <<"Enter your property: ";
                cin >> money;
                    if(money>69000000)
                        status = "MARRIED";
                    else
                        status = "ONE-NIGHT-STAND";
                }
    }else if(age<30){
        cout <<"Enter your property: ";
        cin >> money;
            if(money > 10000000)
                status = "BEST FRIEND";
            else
                status = "UNFRIEND";
        }else
            status = "UNFRIEND";
    cout <<"Your status = "<<status;
    return 0;
}