#include <stdio.h>
int main() {
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int num = 100; num <= 999; num++) {
      
        int unit = num % 10;             
        int dozens = (num / 10) % 10;        
        int hundred = num / 100;               
        int sum = hundred * hundred * hundred + dozens * dozens * dozens + unit * unit * unit;
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
