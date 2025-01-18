#include <iostream>
using namespace std;
int main(){
    // take the day number and print the corresponding the day
    // 1.monday
    // 2.tuesday
    // etc...

    int option;
    cin>>option;
    switch(option)
    {
        case 1:
                cout<<"monday"<<endl;
                break;
        case 2:
                cout<<"tuesday"<<endl;
                break;
        case 3:
                cout<<"wednesday"<<endl;
                break;
        case 4:
                cout<<"thursday"<<endl;
                break;
        case 5:
                cout<<"friday"<<endl;
                break;
        case 6:
                cout<<"saturday"<<endl;
                break;
        case 7:
                cout<<"Sunday"<<endl;
                break;
        default:
            cout<<"invalid input"<<endl;
    }
}