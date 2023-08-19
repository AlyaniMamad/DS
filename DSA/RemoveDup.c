// Approch - 1

// #include <stdio.h>

// int main()
// {
//     int n, cnt = 0;
//     printf("\nEnter N : ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("\nEnter %d Elements : ", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     for (int i = 0; i < n; i++) {
//         if (arr[i] != -1) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[i] == arr[j]) {
//                     arr[j] = -1;
//                     cnt++;
//                 }
//             }
//         }
//     }
//     int newsz = n - cnt, j = 0;
//     int newarr[newsz];
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != -1) {
//             newarr[j] = arr[i];
//             j++;
//         }
//     }
//     for (int i = 0; i < newsz; i++)
//         printf("%d ", newarr[i]);

//     return 0;
// }

// Approch - 2

#include <stdio.h>

int main()
{
    int n, cnt = 0;
    printf("\nEnter N : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d Elements : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }else{
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
