int main()
{
    int number;
    printf("Please enter an integer: ");
    scanf("%i", &number);
    for(int i = 0; i < number; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < number - 2; i++){
        printf("*");
        for(int j = 0; j < number - 2; j++){
            printf(" ");
        }
        printf("*\n");
    }
    if(number > 1){
        for(int i = 0; i < number; i++){
        printf("*");
        }
    }else{
        ;
    }
}
