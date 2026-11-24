#include "library.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
  libraryitem_t *Book1 = new_book("Harry Potter", "J.K.Rowling", 2008, 111, true, FICTION);

  printf("%d\n", Book1->data.book.year); // test for checking out the year of the book
}
