#define PRICE_1 100
#define PRICE_2 20
#define PRICE_3 50

typedef struct {
  NodePtr headPtr, tailPtr;
  int size;
} Queue;

void enqueue_struct(Queue *q, int x,int y) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node) {
    
    new_node->order_number = x;
    new_node->qty = x;
    new_node->nextPtr = NULL;
    
    if (q->headPtr == NULL);
    q->headPtr = new_node;
    }
    else
    q->tailPtr->nextPtr = new_node;
    q->tailPtr = new_node;
    q->size++;
    /*Finish enqueue */
    }  

int dequeue_struct(Queue *q) {
  NodePtr t = q->headPtr;
  int price,i;
  printf("Customer no: %d\n",i++);
  if (q->size > 0) {
    switch (t->order_number) {
    case 1:
      printf("Ramen");
      price = PRICE_1 * t->qty;
      break;
    case 2:
      printf("Somtum");
      price = PRICE_2 * t->qty;
      break;
    case 3:
      printf("Fired Chicken");
      price = PRICE_3 * t->qty;
      break;
    default:
      printf("No food");
      break;
    }

    // int value= t->data;
    q->headPtr == NULL;
    if (q->headPtr == NULL)
      q->tailPtr = NULL;
    q->size--;
    free(t);
    /*Finish dequeue */
    return price;
  }
  printf("Empty queue");
  return 0;
}
