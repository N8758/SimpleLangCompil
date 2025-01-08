#include "utils.h"

ASTNode* createNode(const char* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(node->value, value);
    node->left = NULL;
    node->right = NULL;
    return node;
}
