int main()
{
    int number;
    printf("Please enter an integer: ");
    scanf("%i", &number);
    for(int i = 1; i < number + 1; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
    printf("\n");
    }
}
