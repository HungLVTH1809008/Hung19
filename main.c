#include <stdio.h>
#include <stdlib.h>

int tinhnuachuvi(int a, int b, int c){
    return (float)(a+b+c)/3;
}
int main() {
    int a,b,c;
    printf(" \n nhap canh a cho ta giac:");
    scanf("%d",&a);
    printf(" \n nhap canh b cho ta giac:");
    scanf("%d",&b);
    printf(" \n nhap canh c cho ta giac:");
    scanf("%d",&c);
    if(a<=0 , b<=0 , c<=0) {
        printf("\n do dai mot canh cua tam giac khong the nho hon hoac bang 0");
        exit;
    } else if (a+b <= c , a+c <= b, b+c <= a) {
        printf("\n tong hai canh cua tam giac lon hon hoac bang canh con lai ");
        exit;
    } else{
        printf("\n nua chu vi cua tam giac la: %.2f",tinhnuachuvi(a, b, c));


    }

    return 0;
}
