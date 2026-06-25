#include<iostream>
using namespace std;
int main()
{
 
    int day;
    cout<<"Enter no.that you want to display day:";
    cin>>day;

    switch(day){
        case 1:
           cout<<"Monday";
           break;

        case 2:
           cout<<"Tuesday";
           break;


        case 3:
           cout<<"Wensaday";
           break;

        case 4:
            cout<<"Thursday";
           break;

        case 5:
            cout<<"Friaday";
           break;

        case 6:
            cout<<"Saturday";
           break;

        case 7:
            cout<<"Sunday";
           break;

        default:
           cout<<"Invalid";

        
    }
    cout<<"Check";

    return 0;
    
}