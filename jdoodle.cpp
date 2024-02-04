#include <iostream>
#include <string>
using namespace std;

int main(){
    string retraveled, agreemask, agreedistancing;
    int num1, num2;

    cout<<"Have you recently traveled to a high coronavirus cases country? (yes/no): ";
    getline(cin, retraveled);
    cout<<"Do you agree to wear a mask on the flight? (yes/no): ";
    getline(cin, agreemask);
    cout<<"Do you agree to respect social distancing on the flight? (yes/no): ";
    getline(cin, agreedistancing);
    
    if ((retraveled=="no") && (agreemask=="yes") && (agreedistancing=="yes")){
        cout<<"You have successfully on-boarded";
    }
    else{
        cout<<"You haven't on-boarded";
    }
}