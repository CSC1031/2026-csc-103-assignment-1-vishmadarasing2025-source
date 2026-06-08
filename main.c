#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,Tm;
    double Av;

    printf("Mathematics mark(out of 100): ");
    scanf("%f",&m1);
    printf("Science mark(out of 100): ");
    scanf("%f",&m2);
    printf("English mark(out of 100): ");
    scanf("%f",&m3);

    Tm=m1+m2+m3;
    printf("Total: %.2f\n",Tm);

    Av=Tm/3.0;
    printf("Average: %.2lf\n",Tm);

    if(Tm>=80){
        printf("Grade: A\n");
    }
    else if(Tm>=70){

        printf("Grade: B\n");
    }
    else if(Tm>=60){
        printf("Grade: C\n");
    }
    else if(Tm>=50){
        printf("Grade: D\n");
    }
    else{printf("Grade: F\n");}

    if (Av>=40){
        printf("Result: PASS\n");
    }
    else{ printf("Result: FAIL\n");}
    return 0;
}
