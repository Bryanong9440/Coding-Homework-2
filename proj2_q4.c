int main()
{
    int array[2][3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Please enter an integer: \n");
            scanf("%i", &array[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", array[i][j]);
            }
        printf("\n");
        }
    int array2[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Please enter an integer: \n");
            scanf("%i", &array2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%i ", array2[i][j]);
            }
        printf("\n");
        }
    int sum;
    sum = array[0][0] * array2[0][0] + array[0][1] * array2[1][0] + array[0][2] * array2[2][0];
    printf("Result: \n");
    printf("%i ", sum);
    sum = array[0][0] * array2[0][1] + array[0][1] * array2[1][1] + array[0][2] * array2[2][1];
    printf("%i \n", sum);
    sum = array[1][0] * array2[0][0] + array[1][1] * array2[1][0] + array[1][2] * array2[2][0];
    printf("%i ", sum);
    sum = array[1][0] * array2[0][1] + array[1][1] * array2[1][1] + array[1][2] * array2[2][1];
    printf("%i ", sum);
}
