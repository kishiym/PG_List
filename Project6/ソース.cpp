#include <stdio.h>
#include <stdlib.h>

//[�菇1] �P�������X�g�̍\���̂̒�`
typedef struct cell
{
    int val;
    cell* next;

} CELL;


void create(CELL *p,int val); //�v���g�^�C�v�錾 �����ō���Ă�
void index();  //�v���g�^�C�v�錾 �����ō���Ă�

int main() {
    int val;
    //[�菇2] �擪�̃Z���̐錾
    CELL head;
    head.next = nullptr; //Visual Studio�ł�next�ɉ��炩�̒l����������Ԃŏ����������̂ŁAnullptr��������

    while (1) {
        scanf_s("%d", &val);

        //[�菇3] �Ō���ɃZ����ǉ�
        create(&head, val);

        //[�菇4] ���X�g�ꗗ�̕\��
        index(&head);

    }
    return 0;
}

//��O�̃u�����`
void create(CELL* endCell, int val)
{
    CELL* newCell;
    newCell = (CELL*)malloc(sizeof(CELL));

    newCell->val = val;
    newCell->next = NULL;

    while (endCell->next != NULL)
    {
        endCell = endCell->next;
    }
    endCell->next = newCell;
}

void index(CELL* endCell)
{
    while (endCell->next != NULL) 
    {
        endCell = endCell->next;
        printf("%d\n", endCell->val);
    }
}
