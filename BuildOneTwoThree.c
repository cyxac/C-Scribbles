#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void traverse(struct lnode *head);

int main(int argc, char *argv) {
	struct lnode *head = NULL;
	struct lnode *second = NULL;
	struct lnode *third = NULL;
	
	third = push(NULL, 3);
	second = push(third, 2);
	head = push(second, 1);
	
	traverse(head);
	
	printf("%s%d\n", "Length is ", length(head));

        struct lnode *last = append(head, 4);
        printf("After appending\n");
        traverse(head);
       
        pushp(&head, 5);
        printf("After appending using push p2p\n");
        traverse(head);

}

void traverse(struct lnode *head) {
    struct lnode *lp;
	
	for(lp = head;lp != NULL;lp = lp->next) {
	    printf("%d\n", lp->data);
	}

}
