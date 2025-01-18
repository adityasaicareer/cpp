#include <iostream>

using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"the age of the person was more than 18 and you are the adult"<<endl;
    }
    else{
        cout<<"your age is less than 18 and you are not an adult"<<endl;
    }
    return 0;
}