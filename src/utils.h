#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Token structure
typedef struct {
    int type;
    char text[256];
} Token;

#define TOKEN_EOF -1
#define MAX_TOKEN_LEN 256

// ASTNode structure
typedef struct ASTNode {
    char value[MAX_TOKEN_LEN];
    struct ASTNode* left;
    struct ASTNode* right;
} ASTNode;

// Function declarations
ASTNode* createNode(const char* value);
void generateAssembly(ASTNode* root, FILE* outputFile);
void getNextToken(FILE* file, Token* token);

#endif // UTILS_H
