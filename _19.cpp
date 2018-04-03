//
// Created by Lenovo on 2018/4/3.
//

#include "_19.h"

void _19::MirrorRecursively(BinaryTreeNode *pNode) {
    if ((pNode) == nullptr || (pNode->m_Rigth == nullptr && pNode->m_pLeft == nullptr)) {
        return;
    }

    BinaryTreeNode *tmp = pNode->m_pLeft ;
    pNode->m_pLeft = pNode->m_Rigth;
    pNode->m_Rigth = tmp;

    MirrorRecursively(pNode->m_Rigth);
    MirrorRecursively(pNode->m_pLeft);


}
