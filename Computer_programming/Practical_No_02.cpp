#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    switch(n){
        case 1:cout<<"Today is Monday";break;
        case 2:cout<<"Today is tuesday";break;
        case 3:cout<<"Today is wednesday";break;
        case 4:cout<<"Today is thu";break;
        case 5:cout<<"Today is fri";break;
        case 6:cout<<"Today is sat";break;
        default :cout<<"Today is Sunday";break;
    }
}
