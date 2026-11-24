#include "library.h"
#include <stdlib.h>

libraryitem_t *new_book(char *title, char *author, int year, int id, genre_t genre){
  libraryitem_t *book = malloc(sizeof(libraryitem_t)); // allocate space for our library item
  if(book == NULL){ // if it is NULL, return NULL
    return NULL;
  }
  book->kind = BOOK; 
  book->data.book = (book_t){
    .title = title,
    .author = author,
    .year = year,
    .id = id,
    .genre = genre};

  return book;  
}


libraryitem_t *new_cd(char *title, char *author, int year, int id,capacity_t capacity){
  libraryitem_t *cd = malloc(sizeof(libraryitem_t));
  if(cd == NULL){
    return NULL;
  }

  cd->kind = CD;
  cd->data.cd = (cd_t){
    .title = title,
    .author = author,
    .year = year,
    .id = id,
    .capacity = capacity};

  return cd;
}

libraryitem_t *new_magazine(char *title, int year, int id){
  libraryitem_t *magazine = malloc(sizeof(libraryitem_t));
  if(magazine == NULL){
    return NULL;
  }

  magazine->kind = MAGAZINE;
  magazine->data.magazine = (magazine_t){
    .title = title,
    .year = year,
    .id = id
  };

  return magazine;
}
