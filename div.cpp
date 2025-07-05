#include <iostream>
using namespace std;
void displaycalculator(double result){
    cout<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"| SIMPLE CALCULATOR:   |"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"| RESULT:"<< result <<"             |"<<endl;
    cout<<"-----------------------"<<endl;
      cout<<"| C |  ()| % | / | "<<endl
          <<"| 7 |  8 | 9 | * | "<<endl
          <<"| 4 |  5 | 6 | - | "<<endl
          <<"| 1 |  2 | 3 | + | "<<endl
          <<"| E |  0 | . | = | "<<endl;  
    cout<<"-----------------------"<<endl;  
}
int main() {
    double num1,num2, result = 0;
    char operation , choice;
    bool  isrunning = true;

    while(isrunning){
        displaycalculator(result);

        cout<<"enter first number: "<<endl;
        cin>>num1;
        cout<<"enter operation: "<<endl;
        cin>>operation;
        cout<<"enter your second number: "<<endl;
        cin>>num2;

        switch ( operation){
            case '+':
            result = num1 + num2;
            break;
            case '-':
            result = num1 - num2;
            break;
            case '*':
            result = num1 * num2;
            break;
            case '/':
            if(num2 != 0){
                result = num1 / num2;
            }
            else{
                cout<<"error: division by zero is not allowed!"<<endl;
            }
            break;
            default:
            cout<<"invalid operation : please try again!"<<endl;
            continue;
        }
        displaycalculator(result);
        cout<<"Do you want to perform another claculation ? (y/n)"<<endl;
        cin>>choice;
        
        if(choice != 'y' && choice != 'Y'){
            isrunning = false;
            cout<<"thankyou for using calculator see you next time!\n";
        }   
    }
    
    return 0;
}