#include<iostream>
#include<stdlib.h>

using namespace std;
class cls
{
    char op;
    float num1, num2;
    int i;
 public: cls()
    {
   do
    {
    cout << "Enter operator: +, -, *, /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << "Sum of "<<num1<< " and " <<num2<< " is "<<num1 + num2;
            break;

        case '-':
            cout <<"Difference of "<<num1<< " and " <<num2<< " is " <<num1 - num2;
            break;

        case '*':
            cout <<"Product of "<<num1<< " and " <<num2<< " is " <<num1 * num2;
            break;

        case '/':
            cout << "Division of "<<num1<< " and " <<num2<< " is " <<num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }
    cout<<"\nDo you want to perform another operation? Type 1 for yes and 0 for no!\n";
    cin>>i;
    }
    while(i!=0);
    }

~cls()
{
    cout<<"\nDestructor called!\n";
}
};

int main()
{
    cls obj;

    return 0;
}



