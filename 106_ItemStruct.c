#include <stdio.h>
#include <string.h>
struct item{
    char item_name[50];
    int qty;
    float price;
    float amount;
};
int main()
{
    struct item i1;
    printf("Enter item name: ");
    fgets(i1.item_name,50,stdin);
    i1.item_name[strcspn(i1.item_name,"\n")] = '\0';
    printf("Enter quantity: ");
    scanf("%d",&i1.qty);
    printf("Enter price: ");
    scanf("%f",&i1.price);
    i1.amount = i1.qty * i1.price;
    printf("Item Details::::\n");
    struct item *ptr = &i1;
    printf("Item name: %s\n",ptr->item_name);
    printf("quantity: %d\n",ptr->qty);
    printf("price: %.2f\n",ptr->price);
    printf("total amount: %d * %.2f= %.2f\n",i1.qty,i1.price,ptr->amount);
    return 0;

}