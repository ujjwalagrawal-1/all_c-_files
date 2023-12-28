#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

void insertsort(vector<int>& arr, stack<int>& s, int target) {
    if (s.empty())
        return;

    if (arr[s.top()] <= arr[target]) {
        s.push(target);
        return;
    }

    int val = s.top();
    s.pop();
    insertsort(arr, s, val);
    s.push(val);
}

void sortstack(vector<int>& arr, stack<int>& s) {
    if (s.empty())
        return;

    int targ = s.top();
    s.pop();
    sortstack(arr, s);
    insertsort(arr, s, targ);
}

void remove_Duplicates(stack<int>& s) {
    stack<int> s2;

    while (!s.empty()) {
        if (s2.empty()) {
            s2.push(s.top());
            s.pop();
        }

        if (s2.top() == s.top())
            s.pop();
        else {
            s2.push(s.top());
            s.pop();
        }
    }

    stack<int> s3;

    while (!s2.empty()) {
        s3.push(s2.top());
        s2.pop();
    }

    s = s3;
}

int getsec(stack<int>& s) {
    int val = s.top();
    s.pop();
    int x = s.top();
    s.push(val);
    return x;
}

int maxArea(vector<int>& height) {
    stack<int> ans;

    for (int i = 0; i < height.size(); i++) {
        ans.push(i);
    }

    sortstack(height, ans);
    remove_Duplicates(ans);
    int length = height[getsec(ans)];
    int width = ans.top();
    ans.pop();
    width = abs(width - ans.top()) + 1;
    int an = length * width;
    return an;
}

int main() {
    vector<int> height = { 2, 1, 5, 6, 2, 3 };
    int result = maxArea(height);
    cout << "Max Area: " << result << endl;

    return 0;
}
