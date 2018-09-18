#include <iostream>
#include <array>

using namespace std;

/**
 * Given a sorted  array with unique integer elements, create a BST with minimal height
 * Idea: find the middle of array as root, then insert the left and right subarray. While
 * this can take O(n logn) running time due to the travseral for each insertion
 **/
class TreeNode{
public:
    int value;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int num){
        value = value;
    }

};

class MinimalTree{
public: 
    TreeNode createMinimalTree(int array[]){
        return createMinimalTree(array, 0, array.length() - 1);
    }

    TreeNode createMinimalTree(int array[], int start, int end){
        //base case - leaf node
        if(end < start)
            return NULL;

        int mid = (start + end) / 2;
        TreeNode n(array[mid]);
        n.left = createMinimalTree(array, start, mid - 1);
        n.right = createMinimalTree(array, mid + 1, end);
        return n;
    }
};