CC = g++-6
CFLAGS = -std=c++14 -Wall -Wextra	-Wshadow -Wnon-virtual-dtor	-pedantic -Werror
DIRS = memory/*.cc cpu/*.cc tokenizer/*.cc 

all: $(DIRS)
	$(CC) main.cc $(CFLAGS) $(DIRS)

