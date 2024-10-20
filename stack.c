#include "stack.h"

void initialize(stack *s) {
  s->head = NULL; //Sætter head til at være NULL/tom i vores stack, sådan vores stack er empty.
}

void push(int x, stack *s) { //Her starter vores push funktion
  node* newNode = (node*)malloc(sizeof(node)); //Tilføjer en tom lokation for vores stack
    if (newNode == NULL){ //Her tjekker vi om det lykkedes at tilføje en ny lokation.
      printf("Memory allocation failed\n"); //Hvis ikke printes er fejlud.
      exit(1); //Afslutter hvis det ikke lykkedes at tilføje lokaton.
    }
    newNode->data = x; //Her sættes data-feltet i den nye node til at være den givne værdi.
    newNode->next = s->head; //Så sætter vi vores next-felt til at pege på den nye head
    s->head = newNode; // Her opdateres head til at være den nye node
}

int pop(stack *s) { //Her starter vores pop funktion, som popper et element i vores stack.
  if(empty(s)){ //tjekker om vores funktion er tom, hvis den er printer den statement under.
  
    printf("Stack underflow\n");
    exit(1);
  }
  node* temp = s->head; //Gemmer top-noden i en midlertidlig variabel
  int poppedValue = temp->data; //Gemmer værdien fra noden, som blev poppet
  s->head = temp->next; //Opdaterer head til at pege på den næste node i stakken.
  free(temp); //Her frigiver vi hukkomelsen for den poppede node.
  return poppedValue; //Returnerer den poppede værdi.
}

bool empty(stack *s) { //funktion til at tjekke om vores stack er tom.
  return s->head == NULL; //Returnerer sandt, hvis stakken er tom.
}

bool full(stack *s) { //funktion til at tjekke om vores stack er fuld
  return false; 
}
