#include <iostream>
using namespace std;

int main() {
  class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int  num = 0;
        int i = 0;
        while(i<s.size() && s[i] == ' '){
                i++;
        }
        if(i<s.size() && (s[i] == '+' || s[i] == '-')){
                sign = s[i] == '+' ? 1 : -1;
                i++;
            }
        while(i<s.length() && isdigit(s[i])){
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
                return sign == -1 ? INT_MIN : INT_MAX ; 
            }
            num = num * 10 + (s[i] - '0');
            i++;
        }
        return num*sign;
    }
};
}