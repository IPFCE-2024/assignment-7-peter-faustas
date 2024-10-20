#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
  long long int data;
  struct node *next;
} node;

typedef struct {
  node *head;
} stack;

void initialize(stack *s);
void push(int element, stack *s);
int pop(stack *s);
bool empty(stack *s);
bool full(stack *s);
