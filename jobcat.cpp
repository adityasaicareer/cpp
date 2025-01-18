#include <iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;
    if(age<18){

        cout<<"Not eligible for the work";

    }
    else if(age>=18&& age <=54){
        cout<<"you are eligibel for work"<<endl;
    }
    else if(age>=55 && age<=57){
        cout<<"Your are eligible for work but retire soon"<<endl;
    }
    else if(age>57){
        cout<<"Retired"<<endl;
    }
}