// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>arr{0,1,0,1,2,1,0,2,2};
    
//     //sorting 0,1,2 using 3 pointer approch
//     int l = 0,m = 0,n = arr.size()-1;
//     while(m<=n){
//         if(arr[m] == 0){
//             swap(arr[m],arr[l]);
//             m++;l++;
//         }
//         else if(arr[m] == 1){
//             m++;
//         }
//         else{
//             swap(arr[m],arr[n]);
//             n--;
//         }
//     }
//     for(auto i:arr){
//         cout<<i<<"  ";
//     }
// }




 // NEW PROGRAMM LONGEST COMMON PREFIX
 #include "iostream"
 #include <vector>
 using namespace std;
 int main(){
    vector<string>str{"flower","flow","flight"};
    string ans = "";
    for(int i =0;i<str[0].size();i++){
        char ch = str[0][i];
        bool chfound = true;
        for(int j = 1;j<str.size();j++){
            if(str[j][i] != ch){
                chfound = false;
                break;
            }
            
        }
        if(chfound == false){
            break;
        }
        else{
            ans += ch;
        }
    }
    cout<<ans;
 }