#include <stdio.h>
#include <stdlib.h>

int main(){

int limit;

double num1,num2;

char op;

double *history;

printf("How many calculations you want to store ..");
scanf("%d",&limit);


history= (double *) malloc(limit * sizeof(double));

if(history == NULL){

printf("Memory Allocation is failed ..");

return 1;
}


for( int i=0 ;i< limit ; i++){
printf("\n Enter calculaion(eg 10 + 8)");

scanf(" %lf%c                          %lf",&num1,&op,&num2);


switch(op){
case '+' : history[i] =num1+num2; break;

case '-': history[i]=num1-num2; break;

case '*' : history[i]=num1* num2; break;

case '/' : history[i]=num1/num2; break;


 default: history[i]=0; printf("Invalid operator");


}

printf("Result will be saved in index %d: %.2f\n",i,history[i]);

}
// Displaying the heap-stored data
    printf("\n--- Full History Report ---\n");
    for (int i = 0; i < limit; i++) {
        printf("Record %d: %.2f\n", i + 1, history[i]);
    }

    // CRITICAL: Free the memory when done to prevent memory leaks
    free(history);
    printf("\n Memory freed. Goodbye!\n");

    return 0;

}//main
