#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("================\n");
    printf("=   Quiz ASD   =\n");
    printf("=     menu     =\n");
    printf("================\n");
    printf("=1. Level :1   =\n");
    printf("=2. Level :2   =\n");
    printf("=3. Level :3   =\n");
    printf("================\n");
    scanf("%d",&n);
    switch(n){
    case 1:
        system("cls");
        printf("Input angka :");
        scanf("%d",&n);
        for(i=0; i<=n; i++){
            for(j=0; j<=i; j++){
                printf("%d",i+j);
            } printf("\n");
        }
        break;
    case 2:
        system("cls");
        printf("Input angka :");
        scanf("%d",&n);
        for(i=0; i<=n; i++){
            for(j=0; j<=i; j++){
                int z=i*(1+j);
                if (z<10){
                    printf("%d  ",z);

                }else{printf("%d ",z);
                }

            } printf("\n");
        }
        break;
    case 3:
        system("cls");
        printf("Input angka :");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                printf(" ");
            }
            for(j=0;j<=i;j++){
                printf("%d",j+1);
            }
            for(j=i;j>0;j--){
                 printf("%d",j);
            }
            printf("\n");
        }

        for(i=n-1;i>0;i--){
            for(j=i;j<=n;j++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%d", j);
            }
            for (j=i-1;j>=1;j--){
                 printf("%d",j);
            }
            printf("\n");
        }
     break;
    }

}
