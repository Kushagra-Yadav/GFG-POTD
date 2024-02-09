/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    bool help(Node *root)
    {
        if(root==NULL)
        return 1;
        if(root->left==NULL && root->right==NULL)
        return 1;
        int lt=0;
        if(root->left!=NULL)
        lt=root->left->data;
        int rt=0;
        if(root->right!=NULL)
        rt=root->right->data;
        if(root->data==lt+rt)
        return help(root->left) and help(root->right);
        else
        return 0;
    }//Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
      return help(root);// Add your code here
    }
};
