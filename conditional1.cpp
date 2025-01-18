#include <iostream>

using namespace std;
int main(){
    // take the marks as the input and give out the grades
    int marks;
    cin>>marks;
    if(marks>=80 && marks <=100){
        cout<<"grade A";
    }
    else if(marks>=60 && marks<=79){
        cout<<"B"<<endl;
    }
    else if(marks>=50 && marks<=59){
        cout<<"c"<<endl;
    }
    else if(marks>=45 && marks<=49){
        cout<<"D"<<endl;
    }
    else if(marks>=25 && marks<=44){
        cout<<"E"<<endl;

    }
    else if(marks>=0){
        cout<<"F"<<endl;
    }

}