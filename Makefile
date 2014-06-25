CFLAGS += -Wall
BASEDIR = $(CURDIR)
CHAPTER1 = "$(BASEDIR)/Chapter 1"

help:
	@echo 'Usage: '
	@echo ' make clean: remove the generated files '

clean:
	@cd $(CHAPTER1)
	@ls
