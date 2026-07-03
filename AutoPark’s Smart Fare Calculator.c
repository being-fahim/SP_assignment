#include <stdio.h>

int main(){

    /*As my id is 262-16-115 so M = 1 & N = 5*/
    int M = 1;
    int N = 5;

    int H1 = M + 3;
    int H2 = N + 4;

    int motorcycle_bill, car_bill;

    motorcycle_bill = H1 * 15;
    car_bill = H2 * 40;

    int total_bill;

    total_bill = motorcycle_bill + car_bill;

    int discount_amount, payable_amount;

    if( total_bill > 500 ){
        discount_amount = total_bill * 0.20;
        payable_amount = total_bill - discount_amount;
    }else if( total_bill >= 250 ){
        discount_amount = total_bill * 0.10;
        payable_amount = total_bill - discount_amount;
    }else{
        discount_amount = total_bill * 0.05;
        payable_amount = total_bill - discount_amount;
    }

    printf("Total bill is: %d\n", total_bill);
    printf("The discount amount is: %d\n", discount_amount);
    printf("The payable amount is: %d", payable_amount);




}
