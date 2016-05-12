#include <stdio.h>

void plusminus(int arr[], int n)
{
    int pos_count = 0;
    int zero_count = 0;
    int neg_count = 0;
    double ratioarr[3];

    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        if ((arr[arr_i]) > 0)
            pos_count++;
        if ((arr[arr_i]) < 0)
            neg_count++;
        if ((arr[arr_i]) == 0)
            zero_count++;
        //printf("pos: %i\n", pos_count);
        //printf("neg: %i\n", neg_count);
        //printf("zero: %i\n", zero_count);
    };

    ratioarr[0] = (float) pos_count  / (float) n;
    ratioarr[1] = (float) neg_count / (float) n;
    ratioarr[2] = (float) zero_count / (float) n;
    
    for(int i = 0; i < 3; i++)
    {
        printf("%f\n", ratioarr[i]);
    };
};

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }    
    plusminus(arr, n);   
    return 0;
}