#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    int L;
    scanf("%d", &L);

    int a = 0, b = 1, nextTerm;

    if (L >= 1) {
        printf("%d", b);
    }

    nextTerm = a + b;

    while (nextTerm <= L) {
        printf(" %d", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    printf("\n");

    return 0;
}
