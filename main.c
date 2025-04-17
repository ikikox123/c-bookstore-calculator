//
//  main.c
//  bookstore calculator
//
//  Created by 高郁芳 on 2025/4/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float price;
    float total;
    int qty;
    printf("輸入書的價格：");
    scanf("%f",&price);
    if (price<0) {
        printf("價格不能為負數");
        return 0;
    }
    printf("輸入書的數量：");
    scanf("%d",&qty);
    //價格或數量不能是負數
    if (qty<0) {
        printf("數量不能為負數");
        return 0;
    }
    //計算總價
    total=price*qty;
    if (total>=1000) {
        total=total*0.9;
        printf("總價：%.2f (10%%折扣)\n",total);
    }
    else
    {
        printf("總價：%.2f\n",total);
    }
    return 0;
}
