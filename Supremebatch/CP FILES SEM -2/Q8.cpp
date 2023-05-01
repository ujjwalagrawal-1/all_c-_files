/* WAP to print entered number in reverse order.
Ex. Enter number: 36745
Output:54763 */
#include <iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    int n,temp,rev=0;
    cout<<"Enter your number";
    cin>>n;
    for(int j=0; n!=0 ; j++ )
    {
        temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    cout<<rev;
    return 0;
}