//Thirza Alyaa Shoffiyah Salsabila. A
//D121251065

#include <stdio.h>

int main() 
{
    char letter = 'A'; 
    int sum = 0;
    int valid_flag = 0;

    printf("masukkan letter: ");
    scanf("%c", &letter);

    switch (letter) 
    {
        case 'X':
            sum = 0;
            printf("Nilai sum: %d\n", sum);
            break;
        case 'Z':
            valid_flag = 1;
            printf("Nilai valid_flag: %d\n", valid_flag);
            break;
        case 'A':
            sum = 1;
            printf("Nilai sum: %d\n", sum);
            break;
        default:
            printf("Unknown letter -->%c\n", letter);
            break;
    }
    return 0;
}