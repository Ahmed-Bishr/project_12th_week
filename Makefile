CC = gcc
CFLAGS = -Wall -g
SRC = src/main.c src/ui.c src/sales.c src/utils.c
OBJ = $(SRC:.c=.o)
EXEC = sales_analysis

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)