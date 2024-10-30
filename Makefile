CC = cc
CFLAGS = -Wall -Wextra -Werror


compile: %.o
	$(CC) -o amyao $^

%.o: %.c
	$(CC) -c $@ -o $<
