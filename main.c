#include<stdio.h>
int main(){
    char guess;
    int size, scoure=0;
    char question[][100] = {
                            "1. Which of the following is not a valid C variable name?",
                            "2. Who is the father of C language?",
                            "5. Which is valid C expression?"};
    char option[][100] = {
                            "a) int number;","b) float rate;","c) int variable_count;","d) int $main;",
                            "a) Steve Jobs","b) James Gosling","c) Dennis Ritchie","d) Rasmus Lerdorf",
                            "a) int my_num = 100,000;","b) int my_num = 100000;","c) int my num = 1000;","d) int $my_num = 100;"};
    char answer[3] = {'d', 'c', 'b'};

    size = sizeof(question)/ sizeof(question[1]);

    printf("-----------------QUIz Game-------------------- \n");
    for(int i=0; i< size; i++){
        printf("\n%s\n",question[i]);

        for(int j=(i*4); j< (i*4)+4; j++){
            printf("%s", option[j]);
            printf("\n");
        }
        printf("answer: ");
        guess = getchar();
        scanf("%c");  // clear \n from input buffar

        if(guess == answer[i]){
            printf("\nCORRECT!\n");
            scoure++;
        }else{
            printf("\nWORNG!\n");
        }

    }
    printf("Your scoure is: %d", scoure);

}
