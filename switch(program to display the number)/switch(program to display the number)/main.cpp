//
//  main.cpp
//  switch(program to display the number)
//
//  Created by Nisha Ramprasath on 27/10/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int day;
    cout<<"enter day number e.g mon:1 tue :2";
    cin>>day;
    switch(day){
        case 1:cout<<"mon\n";
            break;
        case 2:cout<<"tue\n";
            break;

        case 3:cout<<"wed\n";
            break;

        case 4:cout<<"thur\n";
            break;

        case 5:cout<<"fri\n";
            break;

        case 6:cout<<"sat\n";
            break;

        case 7:cout<<"sun\n";
            break;
        default:cout<<"invalid number";

    }

    return 0;
}
