#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++) {
        swap((str + start), (str + i));
        permute(str, start + 1, end);
        swap((str + start), (str + i)); // backtrack
    }
}

int main() {
    char input[] = "Alyani"; // Change this to your desired input string
    int n = strlen(input);
    permute(input, 0, n - 1);
    return 0;
}
