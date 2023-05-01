// WAP in C++ to check whether a character is a vowel or Consonant.
#include<iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    char c;
    cout<<"Enter your character";
    cin>>c;
    if ((c==65)||(c==69)||(c==79)||(c==73)||(c==85)||(c==97)||(c==101)||(c==105)||(c==111)||(c==117))
    {
        cout<<"Given character is vowel";
    }
    else{
        cout<<"Given character is consonant";
    }
}