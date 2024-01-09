 void dfs(TreeNode*root,vector<int>&v)
    {
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL)
        {
            v.push_back(root->val);
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>v1;
      vector<int>v2;
      dfs(root1,v1);
      dfs(root2,v2);
      if(v1==v2)return true;
      else return false;

    }
