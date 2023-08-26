# AED_TP3
Diego Aquino Montero, turma M1


This repository contains 2 files (excluding this md):
671_class_attempt.c contains the initial unfinished version of the code
671_Accepted.c contain the finished version of the code


Description of the problem:

Given a non-empty special binary tree consisting of nodes with the non-negative value, where each node in this tree has exactly two or zero sub-node. If the node has two sub-nodes, then this node's value is the smaller value among its two sub-nodes. More formally, the property root.val = min(root.left.val, root.right.val) always holds.

Given such a binary tree, you need to output the second minimum value in the set made of all the nodes' value in the whole tree.

If no such second minimum value exists, output -1 instead.


Solution:

I implemented a recursive function called searching_for_secSmallest which scans the entire binary tree comparing an integer named secSmallest to the values stored in each node.
If the value found in one of the nodes is lesser than secSmallest, while also being greater than the smallest value (root->val), then secSmallest = current node's value.
The searching_for_secSmallest function is a void type so it doesn't return any value.

The findSecondMinimumValue is the problems' given function, it receives secSmallest as the resulting integer.
