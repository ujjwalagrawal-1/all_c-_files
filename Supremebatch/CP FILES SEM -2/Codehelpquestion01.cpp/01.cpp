#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool trorfa(string& str,string& stt){
    if(str.size() != stt.size())return false;
    for(int i = 0;i<str.size();i++){
        if(str[i] != stt[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    string stt;
    getline(cin,stt);
    sort(str.begin(),str.end());
    sort(stt.begin(),stt.end());
    if(str.compare(stt)){
        cout<<"True"<<endl;
    }
    else{cout<<"False"<<endl;}

}