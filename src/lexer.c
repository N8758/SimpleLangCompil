#include "utils.h"

void getNextToken(FILE* file, Token* token) {
    int ch = fgetc(file);
    if (ch == EOF) {
        token->type = TOKEN_EOF;
        strcpy(token->text, "EOF");
    } else {
        token->type = ch;  // Use ASCII value as a placeholder
        sprintf(token->text, "%c", ch);
    }
}
