library:
	@gcc -Wall -Wextra -lm -o library main.c library.c && ./library
book:
	@gcc -Wall -Wextra -lm -o library main.c library.c && ./library book book
cd:
	@gcc -Wall -Wextra -lm -o library main.c library.c && ./library cd cd
magazine:
	@gcc -Wall -Wextra -lm -o library main.c library.c && ./library magazine magazine
