#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;//pointer to Node
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
void Delete(int X, List L);
Position FindPrevious(int X, List L);
void Insert(int X, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);

#endif /* _List_H */

/*放入主程式中*/
struct Node
{
    int Element;
    Position Next;
};