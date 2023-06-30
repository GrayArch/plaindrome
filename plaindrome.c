#include <stdio.h>
#include <string.h>

int isPlaindrome(const char* str) {
    int len = strlen(str);
    int i, j;
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a plaindrome
        }
    }
    
    return 1; // It's a plaindrome
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    if (isPlaindrome(str)) {
        printf("It's a plaindrome.\n");
    } else {
        printf("It's not a plaindrome.\n");
    }
    
    return 0;
}

