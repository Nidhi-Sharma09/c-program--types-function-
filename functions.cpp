#include <stdio.h>
char* great(){
    return "hello everyone, welcome to another bright day in your yard";
}
int main() {
    printf("%s",great());
    return 0;
}



#include <stdio.h>
int get_num(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    return num;
}
int main(){
    int x=get_num();
    printf("The number is: %d",x);
    return 0;
}



#include <stdio.h>
float get_num(){
    float num;
    printf("Enter the num: ");
    scanf("%f",&num);
    return num;
}
int main(){
    float x=get_num();
    printf("The number is: %f",x);
    return 0;
}



