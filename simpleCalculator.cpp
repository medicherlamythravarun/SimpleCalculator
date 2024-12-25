#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"\n\t\tWelcome to the 'SIMPLE CALCULATOR'"<<endl;
    cout<<endl;
    cout<<"The main aim of creating this game is for a fast calculations.!"<<endl;
    cout<<endl;
    double num1;
    double num2;
    char op;
    double sum;
    double diff;
    double multi;
    double div;

    cout<<"Enter the Arthimetic operator from (+,-,*,/): "<<endl;
    cin>>op;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;


    switch(op){
    case '+':
        cout<<"The sum of these two numbers is: "<<num1 + num2<<endl;
        break;
    case '-':
        cout<<"The difference of the two numbers is: "<<num1 - num2<<endl;
        break;
    case '*':
        cout<<"the multiplication of the two numbers are: "<<num1 * num2<<endl;
        break;
    case '/':
        cout<<"The division of the two numbers are: "<<num1/num2<<endl;
        break;
    }

    return 0;
    
}