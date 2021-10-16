Second Largest Element In Tree
Send Feedback
Given a generic tree, find and return the node with second largest value in given tree.
Note: Return NULL if no node with required value is present.
Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.
Output Format :
The first and only line of output contains data of the node with second largest data.
Constraints:
Time Limit: 1 sec
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40
  /************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

class helper {
  public :
    TreeNode<int>*  m;
    TreeNode<int>* sm;
    
    helper (TreeNode<int>* m, TreeNode<int>* sm) {
        this->m = m;
        this->sm = sm;
    }
};

helper help (TreeNode<int>* root) {
    if(root==NULL){
        helper r(NULL,NULL);
        return r;
    }
    helper ans(root, NULL);
    for (int i = 0; i < root->children.size(); i++) {
            helper child = help (root -> children[i]);  
            if(child.m->data > ans.m->data){
                if(child.sm==NULL){
                    ans.sm=ans.m;
                    ans.m=child.m;
                }
                else{
                    if(child.sm->data > ans.m->data){
                        ans.sm=child.sm;
                        ans.m=child.m;
                    }
                    else{
                       ans.sm=ans.m;
                        ans.m=child.m; 
                    }
                }
            }
        else {
            if(ans.m->data!=child.m->data && (ans.sm==NULL || child.m->data > ans.sm->data)){
                ans.sm=child.m;
            }
        }
        }
    return ans;
}

TreeNode <int>* getSecondLargestNode(TreeNode<int> *root) {
    
    if (root == NULL) return NULL;
    helper ans = help (root);
    return ans.sm;
}


#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}
