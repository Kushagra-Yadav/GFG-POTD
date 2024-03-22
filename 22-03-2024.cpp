/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/

class Solution
{
    public:
    vector <int> diagonalSum(Node* root) {
       queue<Node*>q;
       q.push(root);vector <int>r;
       while(!q.empty())
       {
           int n=q.size(); int s=0;
           while(n--)
           {
              
               Node * f=q.front();
               q.pop();
               while(f!=NULL)
               {
                   s+=f->data;
                   if(f->left!=NULL)
                   q.push(f->left);
                   f=f->right;
               }
           }
           r.push_back(s);
       }
       return r;
       // Add your code here
    }
};
