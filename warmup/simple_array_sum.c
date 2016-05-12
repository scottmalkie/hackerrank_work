#include <stdio.h>

int main(void) 
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    long long llSum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d", &arr[arr_i]);
       llSum += arr[arr_i];
    }
    printf("%lld", llSum);
    
    return 0;
}
