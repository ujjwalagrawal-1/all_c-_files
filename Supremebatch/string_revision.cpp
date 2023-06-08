// first programm

/*
                #include <iostream>
                using namespace std;
                //functions
                string remove_duplicate(string &str){
                    int len = str.length();
                    string ans ="";
                    int i = 0;
                    while(i<len){
                        if(ans.size()>0){
                            if(ans[ans.size()-1] == str[i]){
                                ans.pop_back();
                            }
                            else{ 
                                ans.push_back(str[i]);
                            }
                        }
                        else{
                            ans.push_back(str[i]);
                        }
                        i++;
                    }
                    return ans;
                }

                //function can be written here
                int main(){
                string str;
                cin>>str;
                cout<<remove_duplicate(str);
                }
                */


// 2nd programm   // valid palindrome 2
            // #include "iostream"
            // using namespace std;

            // bool ans(string &str){
            //     int i = 0;
            //     int j = str.size()-1;
            //     while(i<=j){
            //         if(s[i] != s[j]){
            //             return checkpalindrome(i,j-1,str) || checkpalindrome(i+1,j,str);
            //         }
            //         else{
            //             i++;
            //             j--;
            //         }
            //         }
            //         return true;
            // }
            // bool checkpalindrome(int &k,int &l,string str){
            //     while(k<=l){
            //         if(str[k]!=str[l]){
            //             return false;
            //         }
            //         else{
            //             k++;
            //             l--;
            //         }
            //     }
            //     return true;
            // }

            // int main(){
            //     string str;
            //     cin>>str;
            //     cout<<ans(str);
            //     }


// minimum time difference (leetcode-539)
// #include "iostream"
// #include "algorithm"
// #include "vector"
// using namespace std;

// int findMinDifference(vector<string>& timePoints) {
//         vector<int>m;
//         for(int i = 0;i<timePoints.size();i++){
//             int ab = stoi(timePoints[i].substr(0,2))*60;
//             ab = ab + stoi(timePoints[i].substr(3,2));
//             m.push_back(ab);
//         }
//         // for(auto a:min){
//         //     cout<<a<<" ";
//         // }
//         sort(m.begin(),m.end());
//         int mini = INT16_MAX;
//         for(int j=0;j<m.size()-1;j++){
//             int sub = m[j+1] - m[j];
//             mini = min(mini,sub);
//         }
//         int lastDiff1 = (m[0] + 1440) - m[m.size()-1];
//         int lastDiff2 = (m[m.size() - 1] - m[0]);
//         int lastdiff = min(lastDiff1,lastDiff2);
//         mini = min(mini, lastdiff);

//         return mini;
//     }

// int main(){ 
//     vector<string>time{"23:59","00:00"};
//     cout<<findMinDifference(time)<<endl;

// }


// Another question
                    // #include <iostream>
                    // #include <string>
                    // using namespace std;
                    // int gettotal(string &str){
                    //     int total=0;
                    //     int n = str.size();
                    //     while(int center = 0;center<n;center++){
                    //         //odd
                    //         int oddcount = check(str,centre,centre);
                    //         total = total + oddcount;
                    //         //even
                    //         int evencount = check(str,centre,centre+1);
                    //         total = total + evencount;
                    //     }
                    //     return total;
                    // }
                    // int check(string &str,int &i,int &j){
                    //     int count = 0;
                    //     while(str[i] == str[j] && i>0 && j<str.size()){
                    //         count++;
                    //         i--;
                    //         j++;
                    //     }
                    //     return count;
                    // }
                    // int main(){
                    //     string str;
                    //     cin>>str;
                    //     cout<<gettotal(str);
                    // }


// Another Question
#include <iostream>
#include <vector>
using namespace std;
string ans(vector<string>&strs){
    for(int i=0;i<strs[0].size();i++){
        char ch = strs[0][i];
        bool chfound = true;
        for(int j=1;j<strs.size();j++){
            if(strs[j][i] != ch){
                chfound = false;
            }
        }
    }

}