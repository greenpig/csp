#include <iostream>

int main() {
    int c;
    bool q=true;
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            printf("%s", q ? "``" : "''");
            q = !q;
        } else
            printf("%c", c);
    }
    return 0;
}