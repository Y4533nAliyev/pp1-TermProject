#include <stddef.h>

typedef enum Genre{ // Genres of books
  FICTION,
  SCIENCE,
  HISTORY,
  TECHNOLOGY
} genre_t;

typedef struct Book{
  char *title;
  char *author;
  int year;
  int id;
  bool isAvaible;
  genre_t genre;
} book_t;

typedef enum ItemType{
  BOOK,
  CD,
  MAGAZINE
} libraryitem_kind_t;

typedef union ItemData{
  book_t book;
} libraryitem_data_t;

typedef struct Libraryitem{
  libraryitem_kind_t kind;
  libraryitem_data_t data;
} libraryitem_t;


typedef struct Member{
  char *name;
  int id;
  int age;
  bool isVIP;
} member_t;

libraryitem_t *new_book(char *title, char *author, int year, int id, bool isAvaible, genre_t genre);
