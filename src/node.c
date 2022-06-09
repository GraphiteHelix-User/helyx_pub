#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "node.h"

typedef struct _node {
    struct _node * next;
    int value;
} node;

void printNodes(NodePtr head) {
    NodePtr curr = NULL;
    for(curr = head; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->value);
    }
    printf("X\n");
}

NodePtr createNode(int value) {
    NodePtr newNode = malloc(sizeof(struct _node));
    assert(newNode != NULL);
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void freeNode(NodePtr node) {
    assert(node != NULL);
    free(node);
}

void freeNodes(NodePtr head) {
    assert(head != NULL);
    NodePtr curr = NULL;
    NodePtr next = NULL;
    
    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
}

int numNodes(NodePtr head) {
    int nodes = 0;
    NodePtr curr = NULL;
    for (curr = head; curr != NULL; curr = curr->next) {
        nodes++;
    }
    return nodes;
}

void addNode(NodePtr head, NodePtr node) {
    assert(head != NULL);
    assert(node != NULL);
    NodePtr curr = NULL;
    for(curr = head; curr->next != NULL; curr = curr->next) {}
    curr->next = node;
}
