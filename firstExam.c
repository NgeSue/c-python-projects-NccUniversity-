#include <stdio.h>

int main() {
    int x=0;
    int c=3;
    char pic;

    welcomeToc(c);
    while(c!=1){
        printf("\nWhat do you wanna draw? Enter c or d => 'd' to get a free DIAMOND and 'c' to bake a CAKE :");
        scanf(" %c",&pic);
        switch(pic){
            case 'd':diamondOutput(x);break;
            case 'c':cakeOutput();break;
            default:printf("\nWarning:Please enter a valid input.\n");
               }


    }



    return 0;
}

// fun for C text
int welcomeToc(int c){
    printf("WELCOME TO MY :\n");

    for(int i=0;i<c;i++){
            for(int j=0;j<c-i;j++){
                printf(" ");
            }
            printf("*");
            if(i==0){
                for(int a=0;a<c+2;a++){
                printf("*");
                }
            }
            printf("\n");
    }


     //under c
    for(int z=0;z<c+1;z++){
        for(int k=0;k<z;k++){

        printf(" ");

    }
    printf("*");
    if(z==c){
                for(int a=0;a<c+2;a++){
                printf("*");
                }
            }
    printf("\n");
    }
    printf("   PROGRAM\n");

    return 0;
}

// fun for diamond output

int diamondOutput(int x){
    while(x<2){
    printf("\nEnter length of diamond:");
    scanf(" %d",&x);

    if(x==0 || x==1){

            printf("You must put at least two for length. Try Again!");

    }
    else{
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i;j++){
            printf(" ");
        }
        printf("*");


        //space
        for(int k=0;k<(i-1)+i;k++){
            printf(" ");
        }
        if(i!=0){
      printf("*");
        }
        printf("\n");
    }

    // under part
    for(int i=0;i<=x;i++){
        for(int j=0;j<(i+i)-i;j++){

                printf(" ");



        }
        if(i!=x){

        printf("*");
        }

        //space
        for(int k=0;k<(x*2)-((i*2)+1);k++){
            printf(" ");
        }
        printf("*");

        printf("\n");

    }
    }
    }
}

// cake
int cakeOutput(){
    int age=0;
    while(age!=1){
    printf("Enter your age:");
    scanf("%d",&age);

    if(age<=0 || age>100){

            printf("Invalid Age! Try Again!");

    }

    else{

     for(int a=0;a<4;a++){
        printf(" ");
    }
    printf("!!\n");

    for(int a=0;a<4;a++){
        printf(" ");
    }
    printf("00\n");

    /////
    for(int b=0;b<2;b++){
        for(int c=0;c<=2;c++){
        printf(" ");
        }
        printf("0000\n");
    }

    ///
    for(int d=0;d<2;d++){
        for(int e=0;e<1;e++){
        printf(" ");
        }
        printf("00000000\n");
    }

    printf("\nYay!! Happy %dth Birthday!!!",age);age=1;
    }
    }

}
