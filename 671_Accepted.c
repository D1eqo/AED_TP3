int findSecondMinimumValue(struct TreeNode* root){
    int smallest = root->val;
    int secSmallest = -1;

    if(root==NULL) return secSmallest;
    if(root->left == NULL && root->right == NULL) return secSmallest;

    /* searching_for_secSmallest will search for the second smallest number, which is always greater than the 
    root's val (smallest), while also never surpassing the first second smallest (secSmallest). 
    --------- smallest < secSmallest = root->val < previous secSmallest (third smallest) ---------
    */
    void searching_for_secSmallest(struct TreeNode* root){
        if(root == NULL) return;
        if(secSmallest == -1 && root->val !=smallest) secSmallest = root->val;
        if(secSmallest > root->val && root->val > smallest) secSmallest = root->val;

        searching_for_secSmallest(root->left);
        searching_for_secSmallest(root->right);
    }

    searching_for_secSmallest(root);

    return secSmallest;
}
