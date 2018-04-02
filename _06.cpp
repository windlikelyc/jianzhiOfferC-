//
// Created by Lenovo on 2018/4/1.
//

#include <exception>
#include "_06.h"

BinaryTreeNode *_06::Construct(int *preOrder, int *inOrder, int length) {
    {
        if (preOrder == nullptr || inOrder == nullptr || length <= 0) {
            return nullptr;
        }

        return ConstructCore(preOrder, preOrder + length - 1, inOrder, inOrder + length - 1);
    }
}

BinaryTreeNode *_06::ConstructCore
        (
                int *startPreorder, int *endPreorder, int *startInorder, int *endInorder
        )
{
    int rootValue = startPreorder[0];
    BinaryTreeNode *root = new BinaryTreeNode();
    root->m_nValue = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;

    if(startPreorder == endPreorder)
    {
        if(startInorder == endInorder && *startPreorder == *startInorder)
            return root;
        else
            throw std::exception();
    }

    int *rootInorder = startInorder;
    while (rootInorder<=endInorder && *rootInorder!= rootValue)
        ++rootInorder;

    if (rootInorder == endInorder && *rootInorder != rootValue)
        throw std::exception();
    int leftLength = rootInorder - startInorder;
    int *leftPreorderEnt = startPreorder + leftLength;
    if (leftLength > 0) {
        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnt, startInorder, rootInorder - 1);
    }

    if (leftLength < endPreorder - startPreorder) {
        root->m_pRight = ConstructCore(leftPreorderEnt + 1, endPreorder, rootInorder + 1, endInorder);
    }
    return root;

}
