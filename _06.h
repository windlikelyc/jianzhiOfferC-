//
// Created by Lenovo on 2018/4/1.
//

#ifndef JIANZHIOFFERC_06_H
#define JIANZHIOFFERC_06_H
struct BinaryTreeNode{
    int m_nValue;
    BinaryTreeNode *m_pLeft;
    BinaryTreeNode *m_pRight;
};

class _06 {
public:
    BinaryTreeNode *Construct(int *preOrder, int *inOrder, int length);

private:
    BinaryTreeNode *ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder);

};


#endif //JIANZHIOFFERC_06_H
