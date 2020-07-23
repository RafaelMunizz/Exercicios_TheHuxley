#include <stdio.h>

void main(){

    int i, valores, nums[10000], cont = 0, resultado = 0;

    scanf("%d", &valores);

    for (i=0; i < valores; i++) scanf("%d", &nums[i]);

    for (i=0; nums[i]; i++){

        if(nums[i] == nums[i+1]) cont++;

        else if (nums[i] != nums[i+1] || (i + 1) == valores){
            if (resultado < cont){
                resultado = cont;
                cont = 0;
            }
        } 
    }
    printf("%d %d", resultado, cont);
}