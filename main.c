#include "library.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
  libraryitem_t *Book1 = new_book("Harry Potter", "J.K.Rowling", 2008, 111, true, FICTION);
  libraryitem_t *CD1 = new_cd("Audio Book", "Kanye", 2026, 100, true,LARGE);
  libraryitem_t *Magazine1 = new_magazine("Harry Potter",2008, 111, true);

  printf("%d\n", Book1->data.book.year); // test for checking out the year of the book
  printf("%d\n", CD1->data.cd.capacity); 
  printf("%s\n", Magazine1->data.magazine.title); 
}
