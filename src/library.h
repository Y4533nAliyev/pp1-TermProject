#include <stddef.h>

typedef enum Genre{ // Genres of books
  FICTION,
  SCIENCE,
  HISTORY,
  TECHNOLOGY
} genre_t;


typedef enum Capacity{ // Capacity of the CDs
  SMALL,
  MEDIUM,
  LARGE
} capacity_t;

typedef struct Book{
  char *title;
  char *author;
  int year;
  int id;
  genre_t genre;
} book_t;


typedef struct CD{
  char *title;
  char *author;
  int year;
  int id;
  capacity_t capacity;
} cd_t;


typedef struct Magazine{
  char *title;
  int year;
  int id;
} magazine_t;


typedef enum ItemType{
  BOOK,
  CD,
  MAGAZINE
} libraryitem_kind_t;

typedef union ItemData{
  book_t book;
  cd_t cd;
  magazine_t magazine;
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

libraryitem_t *new_book(char *title, char *author, int year, int id, genre_t genre);
libraryitem_t *new_cd(char *title, char *author, int year, int id, capacity_t capacity);
libraryitem_t *new_magazine(char *title, int year, int id); 
