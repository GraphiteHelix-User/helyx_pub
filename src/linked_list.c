#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main(int argc, char * argv[]) {
    int i = 0;
    NodePtr head = NULL;

    if (argc > 1) {
        for (i = 1; i < argc; i++) {
            NodePtr newNode = createNode(atoi(argv[i]));
            if (head == NULL) {
                head = newNode;
            } else {
                addNode(head, newNode);
            }
        }

        printNodes(head);
        freeNodes(head);
    }

    return EXIT_SUCCESS;
}
