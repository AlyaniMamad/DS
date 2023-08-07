#include <stdio.h>

int main() {
    int arr[] = {10, 10, 20, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int unvisited[n];
    
    for (int i = 0; i < n; i++) {
        unvisited[i] = 0; // Initialize the unvisited array to zero
    }
    
    for (int i = 0; i < n; i++) {
        if (unvisited[i] == 0) {
            int cnt = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    cnt++;
                    unvisited[j]++;
                }
            }
            if (cnt > 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
