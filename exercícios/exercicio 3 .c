#include <stdio.h>
int main(){
    int num,soma=0,i=1;
    scanf("%d",&num);
       
    for(i;i<num;i++);
    {
        if((num%i==0)){
            soma+=i;
        }
    }
    if(soma==num){
        printf("inteiro perfeito");
    }
    else{
        printf("não inteiro perfeito");
    }
    
    
    return (0);
}
