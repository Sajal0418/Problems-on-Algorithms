#include <stdio.h>
#include <stdlib.h>


// structure to hold information about items in the house
struct item {
    int weight;
    int value;
};

// function to compare items by their value-to-weight ratio that is to be passed to the qsort function
int compare(const void *a, const void *b) {
//Your code here
struct item *first=(struct item *)a;
struct item *second=(struct item *)b;
float ratio1=(float)first->value/first->weight;
float ratio2=(float)second->value/second->weight;
if(ratio1>ratio2)
{
    return -1;
}
else if(ratio1<ratio2)
{
    return 1;
}
else
{
    return 0;
}
   }
int main() {
    // initialize variables
    int num_items, weight_limit, total_weight = 0, total_value = 0;

    // get input from user
    scanf("%d", &num_items);
    struct item items[num_items];
    for (int i = 0; i < num_items; i++) {
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    scanf("%d", &weight_limit);

    // sort items by their value-to-weight ratio in descending order
    //Your code here
    qsort(items,num_items,sizeof(struct item),compare);

    // loop through items and add them to the thief's bag until weight limit is reached
   //Your code here
   for(int i=0;i<num_items;i++)
   {
       if(total_weight+ items[i].weight<=weight_limit)
       {
           total_weight+=items[i].weight;
           total_value+=items[i].value;
       }
   }

    // print total value of stolen items
    printf("%d", total_value);

    return 0;
}
