#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//
struct treenode{
    char val;
    treenode *left;
    treenode *right;
};//二叉树的基本数据结构

//创建二叉树
void createBitTree(treenode*& everytreenode)
{
    char c;
    cin >> c;
    if(c == '#')
    {
        everytreenode = NULL;
    }

    else
    {
        everytreenode = new treenode;
        everytreenode ->val = c;
        createBitTree(everytreenode->left);
        createBitTree(everytreenode->right);
    }

}

int main() {

    //先序建立一个二叉树



    //访问二叉树
    return 0;
}
