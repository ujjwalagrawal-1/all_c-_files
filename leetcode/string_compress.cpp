#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> s) {
        char prev = s[0];
        int count = 1;
        int index = 0; 
        for(int i = 0;i<s.size();i++){
            if(s[i] == prev){
                count++;
                prev = s[i];
            }
            else{
                s[index++] = prev;
                if(count > 1){
                    while(count != 0)
                    s[index++] = (count%10) + '0';
                    count/=10;
                }
                prev = s[i];
                count = 1;
            }
        }
        s[index++] = prev;
        if(count > 1){
            while(count != 0)
                    s[index++] = (count%10) + '0';
                    count/=10;
        }
        return index;
        
    }

int main() {
  vector<char> ujjwal{'a','b','b','b','b','b','b','b','b','b','b','b','b'};
  cout<<compress(ujjwal);

  
}