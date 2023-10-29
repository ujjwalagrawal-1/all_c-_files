#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Implementation of the tree
Node* Buildtree() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    Node* root = new Node(data);
    root->left = Buildtree();
    root->right = Buildtree();
    return root;
}

void longest_blood_line_sum(Node* &root, vector<pair<int, int>>& vec, int &pathsum, int &pathlen) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL && root->right == NULL) {
        pathlen += 1;
        pathsum += root->data;
        vec.push_back({pathlen, pathsum});
        pathlen -= 1;
        pathsum -= root->data;
    }

    pathlen += 1;
    pathsum += root->data;
    longest_blood_line_sum(root->left, vec, pathsum, pathlen);
    longest_blood_line_sum(root->right, vec, pathsum, pathlen);
    pathlen -= 1;
    pathsum -= root->data;
}

int main() {
    Node* Tree = Buildtree();
    vector<pair<int, int>> vec;
    int pathsum = 0;
    int pathlen = 0;
    longest_blood_line_sum(Tree, vec, pathsum, pathlen);
    
    sort(vec.begin(), vec.end(), greater<pair<int, int>>()); // Sort in descending order based on the first element

    cout << vec[0].second << endl; // Access the second element of the first pair

    return 0;
}
