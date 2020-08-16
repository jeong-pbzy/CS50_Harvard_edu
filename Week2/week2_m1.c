//manage of Stock
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int exitStock = 5;
    int remainStock = 5;
    int unitPrice = 10000;
    int tax = unitPrice * 0.1;
    int price = 0;
    int totalPrice = 0; 

    while (exitStock !=0){
        int orderCount = get_int("Input number of order.\n");

    if (orderCount > exitStock ) {
        printf("Order is over of stock. retry please\n");
    } else {
        remainStock = exitStock - orderCount;
        price = unitPrice + tax;
        totalPrice = orderCount * price;
        printf("NewOder : %i\n", orderCount);
        printf("ExitStock : %iea\n", exitStock);
        printf("Stock : %iea\n", remainStock);
        printf("Sales(include VAT) : %i\n", totalPrice);

    }
    }

}
