#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
void insertSorted(vector<int>& arr,stack<int>& s, int target) {
        //base case
        if(s.empty()) {
                s.push(target);
                return;
        }
        if(arr[s.top()] <= arr[target]) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        insertSorted(arr,s, target);

        //BT
        s.push(topElement);
}

void sortStack(vector<int>& arr,stack<int> &s) {
        //base case
        if(s.empty()) {
                return;
        }

        int topElement = s.top();
        s.pop();

        sortStack(arr,s);

        insertSorted(arr,s,topElement);
}
void insertAtBottom(stack<int> &s, int target) {
        
         //base case
        if(s.empty()) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        //rec cal
        insertAtBottom(s, target);
        //BT
        s.push(topElement);
        
}


void reverseStack(stack<int> &s) {
        //base case 
        if(s.empty()) {
                return;
        }

        int target = s.top();
        s.pop();

        //reverse stack
        reverseStack(s);
        //insert at bottom target ko
        insertAtBottom(s, target);
}
void simillarele(stack<int>& s,int& val){
    unordered_map<int,int>hash;
    while(!s.empty()){
        hash[s.top()]++;
        s.pop();
    }
    stack<int>st;
    for(auto itr:hash){
        st.push(itr.first);
    }
    int plus = 0;
    for(auto itr:hash){
        plus = plus + itr.second;
    }
    val = val - plus;
    reverseStack(st);
    s = st;
}
int getsec(stack<int>& s){
        int val = s.top();
        s.pop();
        int x = s.top();
        s.push(val);
        return x;
    }

int main(){
    vector<int>height{1,8,6,2,5,4,8,3,7};
    stack<int>ans;
    for(int i = 0;i<height.size();i++){
            ans.push(i);
        }
        sortStack(height,ans);
        int x = height.size();
        simillarele(ans,x);
        int length = height[getsec(ans)];
        cout<<length<<endl;
        int width = ans.top();
        ans.pop();
        width = abs(width - ans.top()) + 1+ x;
        cout<<width<<endl;
        int an = length*width;
        cout<<an<<endl;

}