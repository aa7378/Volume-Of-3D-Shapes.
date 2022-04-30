#include <stdio.h>
int main(){
    int ch;
    float a,l,b,h,r,V;
    printf("** MAIN MENU ***\n");
    printf("Press 1 for select CUBE\n");
    printf("Press 2 for select CUBOID\n");
    printf("Press 3 for select CYLINDER\n");
    printf("Press 4 for select SPHERE\n");
    printf("Press 5 for select CONE\n");
    printf("Enter the number for the option you want to use =");
    scanf("%d",&ch);
    switch (ch){
        case 1:
            printf("Enter value of side\n");
            scanf("%f",&a);
            V=a*a*a;
            printf("The volume is %f",V);
            break;
        case 2:
            printf("Enter length,breadth & hight of cuboid\n");
            scanf("%f%f%f",&l,&b,&h);
            V=l*b*h;
            printf("The volume is %f",V);
            break;
        case 3:
            printf("Enter radius & hight of cylender\n");
            scanf("%f%f",&r,&h);
            V=3.14*r*r*h;
            printf("The volume is %f",V);
            break;
        case 4:
            printf("Enter radius of sphere\n");
            scanf("%f",&r);
            V=(4*3.14*r*r*r)/3;
            printf("The volume is %f",V);
            break;
        case 5:
            printf("Enter radius & hight of cone\n");
            scanf("%f%f",&r,&h);
            V=(3.14*r*r*h)/3;
            printf("The volume is %f",V);
            break;
        default:
        printf("Error You Have Enter Wrong Number");
        break;
    }
    return 0;
    
}