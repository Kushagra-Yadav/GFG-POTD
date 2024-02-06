//Node Structure
/*struct Node
{
	int k;
	Node *left, *right;
};*/

class Solution
{
    public:
      void help(Node* r,int k,unordered_set<Node*>&s,vector<Node*>&v)
      {
          if(r==NULL)
          return;
          if(r->left==NULL && r->right==NULL)
          {
               v.push_back(r);
              if(k<v.size())
              {
                  s.insert(v[v.size()-k-1]);
              }
               v.pop_back();
              return;
          }
          
          v.push_back(r);
          help(r->left,k,s,v);
          help(r->right,k,s,v);
          v.pop_back();
          
          
      }//Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node* root, int k)
    {
        unordered_set<Node*>s;vector<Node*>v;
        help(root,k,s,v);
        return s.size();//Add your code here. 
    }
};
