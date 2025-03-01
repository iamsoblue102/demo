#include <stdio.h>

int main()
{
    int list1[] = {1, 2, 4};
    int list2[] = {1, 3, 4};
    int list_output[6];

    int i = 0, j = 0, k = 0;

    while ((i < 3) && (j < 3)){
        if (list1[i] < list2[j]){
            list_output[k] = list1[i];
            k += 1;
            i++;
        }
        else if (list1[i] > list2[j]){
            list_output[k] = list2[j];
            k += 1;
            j += 1;
        }
        else{
            list_output[k] = list2[j];
            list_output[k+1] = list1[i];
            k += 2;
            i++;
            j++;
        }
    }

    for (int f = 0; f < 6; f++)
    {
        printf("%d\t", list_output[f]);
    }
}
