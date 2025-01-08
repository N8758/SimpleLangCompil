#include "utils.h"

void generateAssembly(ASTNode* root, FILE* outputFile) {
    if (!root) return;

    // Example assembly code generation
    generateAssembly(root->left, outputFile);
    fprintf(outputFile, "PUSH %s\n", root->value);
    generateAssembly(root->right, outputFile);
}
