#include<stdio.h>

int main()
{
    int N, M;
    scanf("%d",&N);
    scanf("%d",&M);
    int Matrix[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d",&Matrix[i][j]);
        }
    }
    int Column = 0;
    for(int i = 0; i < M; i++)
    {
        int sum = 0;
        for(int j = 0; j < N; j++)
        {
            sum = sum + Matrix[j][i];
        }
        if(Column < sum)
        {
            Column = sum;
        }
    }
    printf("%d",Column);
    return 0;
}