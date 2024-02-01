// ตัวอย่างการใช้งานภาษา C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

int main() {
    printf("Welcome to C!\n");
    
    int *sizeArray = (int *)malloc(5 * sizeof(int));
    if (sizeArray != NULL) {
        for (int i = 0; i < 5; ++i) {
            sizeArray[i] = i * 2;
        }
        free(sizeArray);
    }

    const char *str1 = "cat";
    const char *str2 = "tiger";

    int result = compareStrings(str1, str2);
    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }
    return 0;
}

