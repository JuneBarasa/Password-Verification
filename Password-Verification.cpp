#include <iostream>
using namespace std;

int main(){
    char password;

    int p;
    int length= sizeof(password);

    p=password; //typecasting char to int


    string weak="Your password is weak, ensure it has more than 8 characters";
    string medium="Your password is not strong enough, add uppercase letters and numbers";
    string strong="Your password is strong";

    cout<<"Enter Password: ";
    cin>>password;


    if (length >= 7) //checks for password length
    {
        cout << weak << endl;
    }

    else
    {
        cout<<strong<<endl;
    }

    if (islower(p)) //checks for uppercase letters
    {
        cout<<medium<<endl;
    }
    else
    {
        cout<<strong<<endl;
    }

    if (isdigit(p)) //checks for digits
    {
        cout<<medium<<endl;
    }

    else
    {
        cout<<strong<<endl;
    }

}