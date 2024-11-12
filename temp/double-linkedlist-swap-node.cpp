#include <stdio.h>

struct Node {
   int data ;
   struct Node *next, *back ;
} typedef N ;

N *AddNode( N **, int ) ;
void SwapNode( N **, int, int ) ;
void ShowAll( N * ) ;

int main() {
    N *start, *now, *last ;
    start = now = last = NULL ;
    now = AddNode( &start, 55 ) ;
    now = AddNode( &start, 33 ) ;
    now = AddNode( &start, 11 ) ;
    now = AddNode( &start, 66 ) ;
    now = AddNode( &start, 77 ) ;
    now = AddNode( &start, 22 ) ;
    now = AddNode( &start, 44 ) ;
    last = now ;
    ShowAll( start ) ;
    SwapNode( &start, 33, 22 ) ; ShowAll( start ) ;
    SwapNode( &start, 44, 55 ) ; ShowAll( start ) ;
    return 0 ;
}//end function

void SwapNode(N **start, int A, int B) {
    printf( "    --> swap %d <> %d\n", A, B ) ;
    if( *start == NULL || A == B ) {
        printf("Invalid swap\n") ;
        return ;
    }//end if

    N *NodeA = NULL, *NodeB = NULL;
    N *walk = *start;

    // Find NodeA and NodeB
    while (walk != NULL) {
        if (walk->data == A) NodeA = walk;
        else if (walk->data == B) NodeB = walk;
        walk = walk->next;
    }//end while

    // Check if both nodes are found
    if (NodeA == NULL || NodeB == NULL) {
        printf("One or both nodes not found\n");
        return ;
    }//end if

    // Check if nodes are adjacent
    if (NodeA->next == NodeB || NodeB->next == NodeA) {
        // If nodes are adjacent, adjust next pointers only
        N *temp = NodeA->next;
        NodeA->next = NodeB->next;
        NodeB->next = temp;

        if (NodeA->next != NULL) NodeA->next->back = NodeA ;
        if (NodeB->next != NULL) NodeB->next->back = NodeB ;

        temp = NodeA->back;
        NodeA->back = NodeB;
        NodeB->back = temp;
    } else {
        // Nodes are not adjacent, adjust pointers accordingly
        if (NodeA->back != NULL) NodeA->back->next = NodeB;
        else *start = NodeB ;
        
        if (NodeB->back != NULL) NodeB->back->next = NodeA;
        else *start = NodeA ;

        if (NodeA->next != NULL) NodeA->next->back = NodeB ;
        if (NodeB->next != NULL) NodeB->next->back = NodeA ;

        N *temp = NodeA->next;
        NodeA->next = NodeB->next;
        NodeB->next = temp;

        temp = NodeA->back;
        NodeA->back = NodeB->back;
        NodeB->back = temp;
    }//end if else
}//end function

void ShowAll( N *walk ) {
    printf( "D.L. : " ) ;
    while( walk != NULL ) {
        printf( "%d ", walk->data ) ;
        walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function

N *AddNode( N **walk, int data ) {
    N *temp = NULL ;
    while( *walk != NULL ) {
        temp = *walk ;
        walk = &(*walk)->next ;
    }//end while
    *walk = new N ;
    (*walk)->data = data ;
    (*walk)->next = NULL ;
    (*walk)->back = temp ;
    return *walk ;
}//end function
