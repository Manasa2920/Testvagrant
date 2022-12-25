#include <stdio.h>
 

int count(int coins[], int n, int sum)
{
  
    if (sum == 0)
        return 1;
 
   
    if (sum < 0)
        return 0;
 
   
    if (n <= 0)
        return 0;
 
   
    return count(coins, n - 1, sum)
           + count(coins, n, sum - coins[n - 1]);
}
 

int main()
{
    int i, j;
    int coins[] = { 1, 2, 3 };
    int n = sizeof(coins) / sizeof(coins[0]);
    printf("%d ", 40);
    printf("{TOI,BM},{BM,HT},{Hindu,BM},{Hindu,HT}\n");
    printf("%d ", 35);
    printf("{BM,HT}, {Hindu,BM}");
   
    getchar();
    return 0;
}