#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int coeff;
  int pow;
  struct node *link;
} poly;

void createPoly(poly **);
void displayPoly(poly *);
void addPoly(poly **, poly *, poly *);

int main(void) {
    poly *poly1, *poly2, *poly3;

    printf("\nCreate 1st expression\n");
    createPoly(&poly1);
    printf("\nStored the 1st expression");
    displayPoly(poly1);

    printf("\nCreate 2nd expression\n");
    createPoly(&poly2);
    printf("\nStored the 2nd expression");
    displayPoly(poly2);

    addPoly(&poly3, poly1, poly2);
    displayPoly(poly3);
    printf("\n");

  return 0;
}

void createPoly(poly **node) {
  int flag;
  int coeff, pow;
  poly *tmp_node;
  tmp_node = (poly *)malloc(sizeof(poly));
  *node = tmp_node;

  do {
    printf("Enter Coeff: ");
    scanf("%d", &coeff);
    tmp_node->coeff = coeff;
    printf("Enter Pow: ");
    scanf("%d", &pow);
    tmp_node->pow = pow;
    tmp_node->link = NULL;
    printf("\nContinue adding more terms?(Y = 1/N = 0): ");
    scanf("%d", &flag);

    if (flag) {
      tmp_node->link = (poly *)malloc(sizeof(poly));
      tmp_node = tmp_node->link;
      tmp_node->link = NULL;
    }
  } while (flag);
}

void displayPoly(poly *node) {

  printf("\nThe polynomial expression is:\n");
  while (node != NULL) {
    printf("%dx^%d", node->coeff, node->pow);
    node = node->link;
    if (node != NULL)
      printf(" + ");
  }
}

void addPoly(poly **result, poly *poly1, poly *poly2) {
  poly *tmp_node;
  tmp_node = (poly *)malloc(sizeof(poly));
  tmp_node->link = NULL;
  *result = tmp_node;

  while (poly1 && poly2) {

    if (poly1->pow > poly2->pow) {
      tmp_node->pow = poly1->pow;
      tmp_node->coeff = poly1->coeff;
      poly1 = poly1->link;
    }
    else if (poly1->pow < poly2->pow) {
      tmp_node->pow = poly2->pow;
      tmp_node->coeff = poly2->coeff;
      poly2 = poly2->link;
    }
    else {
      tmp_node->pow = poly1->pow;
      tmp_node->coeff = poly1->coeff + poly2->coeff;
      poly1 = poly1->link;
      poly2 = poly2->link;
    }

    if (poly1 && poly2) {
      tmp_node->link = (poly *)malloc(sizeof(poly));
      tmp_node = tmp_node->link;
      tmp_node->link = NULL;
    }
  }

  while (poly1 || poly2) {

    tmp_node->link = (poly *)malloc(sizeof(poly));
    tmp_node = tmp_node->link;
    tmp_node->link = NULL;

    if (poly1) {
      tmp_node->pow = poly1->pow;
      tmp_node->coeff = poly1->coeff;
      poly1 = poly1->link;
    }
    if (poly2) {
      tmp_node->pow = poly2->pow;
      tmp_node->coeff = poly2->coeff;
      poly2 = poly2->link;
    }
  }

  printf("\nAddition Complete");
}
