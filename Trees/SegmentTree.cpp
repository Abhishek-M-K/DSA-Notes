#include <iostream>
#include <vector>
using namespace std;

class SegmentTree
{

private:
    struct Node
    {
        int val;
        int startInd;
        int endInd;
        Node *left;
        Node *right;

        Node(int start, int end) : startInd(start), endInd(end), val(0), left(nullptr), right(nullptr){};
    };

    Node *root;

    Node *constructTree(vector<int> &arr, int start, int end)
    {
        //leaf node
        if(start == end){
            Node *leaf = new Node(start, end);
            leaf->val = arr[start];
            return leaf;
        }

        //create new node with current index
        Node *node = new Node(start, end);
        int mid = start + (end - start) / 2;

        node->left = constructTree(arr, start, mid);
        node->right = constructTree(arr, mid+1, end);
        node->val = node->left->val + node->right->val;

        return node;
    }

    void display(Node *node)
    {
        if (node == nullptr) return ;

        string s= "";

        if(node->left != nullptr){
            s += " Interval : [" + to_string(node->left->startInd) + "," + to_string(node->left->endInd) + "] & data : " + to_string(node->left->val);
        }else{
            s += "No left child";
        }

        //current node / parent node
        s += " Interval : [" + to_string(node->startInd) + "," + to_string(node->endInd) + "] & data : " + to_string(node->val);

        if(node->right != nullptr){
            s += " Interval : [" + to_string(node->right->startInd) + "," + to_string(node->right->endInd) + "] & data : " + to_string(node->right->val);
        }else{
            s += "No right child";
        }

        cout<<s<<endl<<'\n';

        //recursion
        if(node->left != nullptr) display(node->left);
        if(node->right != nullptr) display(node->right);

    }

    int query(Node *node, int qStart, int qEnd)
    {
        // node interval is completely inside query interval
        if(node->startInd >= qStart && node->endInd <= qEnd){
            return node->val;
        }else if (node->endInd < qStart || node->startInd > qEnd){ // node interval is completely outside query interval, either left or right
            return 0;
        }else{
            return query(node->left, qStart, qEnd) + query(node->right, qStart, qEnd); // OVERLAP or   node interval is partially inside query interval
        }
    }

    int update(Node *node, int index, int val)
    {
        //base case
        if(index >= node->startInd && index <= node->endInd){
            // current node is leaf node
            if(index == node->startInd && index == node->endInd){
                node->val = val;
                return node->val;
            }else{
                int left = update(node->left, index, val);
                int right = update(node->right, index, val);
                node->val = left + right;
                return node->val;
            }
        }
        return node->val;
    }


public:
    SegmentTree(vector<int> &arr)
    {
        root = constructTree(arr, 0, arr.size() - 1);
    }

    void display()
    {
        display(root);
    }

    int query(int start, int end)
    {
        return query(root, start, end);
    }

    int update(int index, int val)
    {
        return update(root, index, val);
    }
};

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree tree(arr);

    //display the tree
    tree.display();
    
    //query the tree and get sum of elements from tree => ans : 36
    cout<<"Before: "<< tree.query(0,5)<<endl;

    //update the tree
    tree.update(0, 10);

    //after update => ans: 45
    cout<<"After: "<< tree.query(0,5)<<endl;

    return 0;
}