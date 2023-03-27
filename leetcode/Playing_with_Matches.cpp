#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i = 1;i<=T;i++){
        int A,B;
        cin>>A>>B;
        int C = A + B;
        int arr [10] ={6,2,5,5,4,5,6,3,7,6} ;
        int num;
        int loc;
        int sum =0;
        while(C != 0){
            num = C % 10;
            loc = C / 10;
            sum = sum + arr[num];
            C = loc;
        }
        cout<<sum<<endl;
    }
}