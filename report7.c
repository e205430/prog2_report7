#include<stdio.h>

void sort(int array[SIZE], int size){
    for (int k=0; k<SIZE; ++k) {
        for (int l=k+1; l<SIZE; ++l) {
            if (array[k] < array[l]) {
                int tmp =  array[k];
                array[k] = array[l];
                array[l] = tmp;
            }
        }
    }
}
int main(void){
    int i,j;
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printf("socores = ");
    for (i=0; i<SIZE; ++i){
        printf("%d ", scores[i]);
    }
    printf("\n");
    

    //処理コード
    sort(scores,SIZE);

    printf("results = ");
    for (j=0; j<SIZE; ++j){
        printf("%d ", scores[j]);
    }
    printf("\n");

    return 0;
}