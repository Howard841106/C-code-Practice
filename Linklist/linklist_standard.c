#include "linklist_standard.h"


struct head* first = NULL;
struct node *new_node;

static void node_initial(void);
static bool isNodeEmpty(struct node *head);
static bool isNodeLast(struct node *p);
static node* search_list_for(struct node *head , int target);
static node* search_list_w(struct node *head , int target);

int main()
{
    node_initial();
}
/**
 * @brief intial nodes
 * 
 */
static void node_initial(void)
{
    new_node = malloc(sizeof(node) * 1);
    new_node->value = 10;
    new_node->next = NULL;
}

/**
 * @brief detect if is the link Empty
 * 
 * @param head 
 * @return Boolin
 */
static bool isNodeEmpty(struct node *head)
{
    return (head->next == NULL);
}

/**
 * @brief detect the last node
 * 
 * @param p 
 * @return Boolin
 */
static bool isNodeLast(struct node *p)
{
    return (p->next == NULL);
}

/**
 * @brief find the linklist from value(target) 
 * 
 * @param head first list input 
 * @param target target value for searching 
 * @return node* 
 */
static node* search_list_for(struct node *head , int target)
{
    struct node *p;
    for(p = head; p!= NULL ; p = p->next)
    {
        if( p->value == target)
        {
            return p;
        }
    }
    
}

/**
 * @brief find the linklist from value(target) 
 * 
 * @param head first list input 
 * @param target target value for searching 
 * @return node* 
 */
static node* search_list_w(struct node *head , int target)
{
    struct node *p;
    while ( p!= NULL && p->value != target)
    {
        p = p->next;
    }
    return p;
}