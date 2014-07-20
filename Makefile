CFLAGS += -Wall
CC = clang

all:
	for dir in "$$(find * -type f -name *.c)"; do \
		$(CC) $(CFLAGS) "$${dir}"; \
	done

.PHONY: clean

clean:
	@cd $(CHAPTER1)
	@ls
