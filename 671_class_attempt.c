/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int goesLeft(struct TreeNode* ptr, int secSmallest){
    int res;
    res=ptr->left->val;
    if(res<secSmallest) return res;
    if(res>=secSmallest) return secSmallest;
}
int goesRight(struct TreeNode* ptr, int secSmallest){
    int res;
    res=ptr->right->val;
    if(res<secSmallest) return res;
    if(res>=secSmallest) return secSmallest;
}

int findSecondMinimumValue(struct TreeNode* root){
    if(root->left == NULL && root->right==NULL) return -1;
    if(root->left->val == root->val && root->right->val==root->val) return -1;
    int smallest=root->val;
    int secSmallest;
    if(root->left->val != root->val && root->right->val != root->val){
    secSmallest=fmin(root->left->val,root->right->val);
    }
    if(root->left->val != root->val){
        secSmallest=root->left->val;
    }
    if(root->right->val != root->val){
        secSmallest=root->right->val;
    }
    
    struct TreeNode* ptr = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    ptr=root->left;
    int valL = goesLeft(ptr, secSmallest);
    int valR = goesRight(ptr, secSmallest);

    free(ptr);

    return secSmallest;
}
