#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc, char **argv) {
  NodePtr headPtr = NULL;
  NodePtr tailPtr = NULL;
  /* For struct Queue */
    Queue  q;
     q.headPtr=NULL;
     q.tailPtr=NULL;
     q.size=0;
  int i,x,c;
  
  for (i = 1; i < argc; i++) {
    if (strcmp(argv[i], "x") == 0) {
      x = dequeue_struct(&q);

      if (x > 0) {
        printf("You have to pay %d\n", x);
        do {
          printf("Cash: \n");
          scanf("%d", &c);
        } while (c < x);
        printf("Thank you\n");
        if (c > x)
          printf("Change is: %d\n", c - x);
        printf("===============================\n");
      }
      }
      else {
        enqueue_struct(&q, atoi(argv[i]), atoi(argv[i + 1]));
        i++;
      }
    }
      if (q.size > 1)
        printf("There are %d ppl left in the queue\n", q.size);
      else if(q.size == 1)
        printf("There is %d ppl left in the queue\n", q.size);
      else
        printf("There is %d ppl left in the queue\n", q.size);
    return 0;
  }