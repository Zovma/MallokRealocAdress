#include <stdio.h>
#include <stdlib.h>

void input(int **arr, int *length);
void output(int *arr, int length);
void expand(int **arr, int length);


int main (){
    int *arr, length;
    input(&arr, &length);
    expand(&arr, length);
    output(arr, length);
    return 0;
}

void input(int **arr, int *length){
    scanf("%d", length);
    *arr = malloc(*length * sizeof(int));

    for(int *p = *arr; p - *arr < *length; p++){
        scanf("%d", p);
    }
}

void expand(int **arr, int length){
    *arr = realloc(*arr, (length * 2) * sizeof(int));
    for(int *p = *arr + length; p - *arr < length*2; p++){
        scanf("%d", p);
    }
}



void output(int *arr, int length){
    for(int *p = arr; p - arr < length*2; p++){
        printf("%d ", *p);
    }
}
