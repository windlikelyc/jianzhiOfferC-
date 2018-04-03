//
// Created by Lenovo on 2018/4/3.
//

#include "_18.h"

bool _18::HasSubtree(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    bool result = false;
    if (pRoot1 != nullptr && pRoot2 != nullptr) {
        if (pRoot1->m_nValue == pRoot2->m_nValue) {
            result = DoesTree1HaveTree2(pRoot1, pRoot2);
        }
        if (!result) {
            result = HasSubtree(pRoot1->m_pLeft, pRoot2);
        }
        if (!result) {
            result = HasSubtree(pRoot1->m_Rigth, pRoot2);
        }
    }
    return result;

}

bool _18::DoesTree1HaveTree2(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    if (pRoot2 == nullptr) {
        return true;
    }

    if (pRoot1 == nullptr) {
        return false;
    }

    if (pRoot1->m_nValue != pRoot2->m_nValue) {
        return false;
    }

    return DoesTree1HaveTree2(pRoot1->m_pLeft, pRoot2->m_pLeft)
           && DoesTree1HaveTree2(pRoot1->m_Rigth, pRoot2->m_Rigth);
}
