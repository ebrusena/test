#include <stdio.h>
/*
int main() {
  
  int day = 1;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    return 0;
}
*/

int main() {
    int sayi;
    
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);
    
    if (sayi % 2 == 0) {
        printf("Girilen sayı çifttir.\n");
    } else {
        printf("Girilen sayı tektir.\n");
    }
    return 0;
}
