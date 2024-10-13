int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    printf("Please enter an integer: \n");
    scanf("%f", &a);
    printf("Please enter an integer: \n");
    scanf("%f", &b);
    printf("Please enter an integer: \n");
    scanf("%f", &c);
    printf("Please enter an integer: \n");
    scanf("%f", &d);
    printf("Please enter an integer: \n");
    scanf("%f", &e);
    for(int i = 0; i < 10; i++){
        int temp;
        if (a > b){
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c){
            temp = b;
            b = c;
            c = temp;
        }
        if (c > d){
            temp = c;
            c = d;
            d = temp;
        }
        if (d > e){
            temp = d;
            d = e;
            e = temp;
        }
    }
    printf("Median: %.0f\n", c);
    a = a + b + c + d + e;
    a = a / 5;
    printf("Mean: %.1f", a);
}
