#include<stdio.h>

int main()

{
    int N,i;
    printf("Entrer une valeur pour N: ");
    scanf("%d", &N);
    
    for (i=1;i<=N;i++)
    {
        if(i%2== 0)
        {
        printf("%d \n", i);
        }
    
    }
    
    return(0);
    
}
