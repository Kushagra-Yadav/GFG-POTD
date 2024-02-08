/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
     int maxHeight(Node *r)
     {
         if(r==NULL)
         return INT_MIN;
         if(r->left==NULL && r->right==NULL)
         return 1;
         return 1+max(maxHeight(r->left),maxHeight(r->right));
     }
     int minHeight(Node *r)
     {
         if(r==NULL)
         return INT_MAX;
         if(r->left==NULL && r->right==NULL)
         return 1;
         return 1+min(minHeight(r->left),minHeight(r->right));
     }/*You are required to complete this method*/
    bool check(Node *root)
    {
        int max_height=maxHeight(root);
        int min_height=minHeight(root);
        return min_height==max_height;//Your code here
    }
};
