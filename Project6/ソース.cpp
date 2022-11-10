#include <stdio.h>
#include <stdlib.h>

//[手順1] 単方向リストの構造体の定義
typedef struct cell
{
    int val;
    cell* next;

} CELL;


void create(CELL *p,int val); //プロトタイプ宣言 自分で作ってね
void index();  //プロトタイプ宣言 自分で作ってね

int main() {
    int val;
    //[手順2] 先頭のセルの宣言
    CELL head;
    head.next = nullptr; //Visual Studioではnextに何らかの値が入った状態で初期化されるので、nullptrを代入する

    while (1) {
        scanf_s("%d", &val);

        //[手順3] 最後尾にセルを追加
        create(&head, val);

        //[手順4] リスト一覧の表示
        index(&head);

    }
    return 0;
}

//第三のブランチ
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
