//Thirza Alyaa Shoffiyah Salsabila. A
//D121251065

#include <stdio.h> 
int main(){
    int n;
    int sum = 0;

    printf("masukkan nilai: ");
    scanf("%d", &n);

    if(n < 1){
        printf("input bilangan positif pls (>= 1)\n");
        return 1;
    }
        printf("%d");
        sum += n;

        for(int b = n - 1; b >= 1; b--){
            printf(" + %d", b);
            sum += b;
    }   printf(" = %d\n", sum);
        printf("\nbilangan triangular dari %d adalah: %d\n", n, sum);
        return 0;
    
}