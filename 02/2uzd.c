#include <stdio.h>

void binary_calculation(int num)
{
    if(num==0) printf("0");

    int binary_num[12];
    int i = 0;

    while(num>0)
    {
        binary_num[i++] = num % 2;
        num /= 2;
    }

    for(int j=i-1; j>=0; j--)
    {
        printf("%d", binary_num[j]);
    }
    printf(" ");
}
int main()
{
    int a_skaicius1 = 0b11011, a_skaicius2 = 0b10010100, a_skaicius3 = 0b11001011010101;
    int b_skaicius1 = 37, b_skaicius2 = 241, b_skaicius3 = 2487;
    int c_skaicius1 = 0x6E2, c_skaicius2 = 0xED33, c_skaicius3 = 0x123456;
    int d_skaicius1 = 243, d_skaicius2 = 2483, d_skaicius3 = 4612;


    printf("%d %d %d\n", a_skaicius1, a_skaicius2, a_skaicius3);
    binary_calculation(b_skaicius1);
    binary_calculation(b_skaicius2);
    binary_calculation(b_skaicius3);
    printf("\n");
    printf("%d %d %d\n", c_skaicius1, c_skaicius2, c_skaicius3);
    printf("0x%X 0x%X 0x%X\n", d_skaicius1, d_skaicius2, d_skaicius3);
    return 0;
}