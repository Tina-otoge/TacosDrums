##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Make the lib ojama
##

SRCFILES = add.c \
	   remove.c \
	   free.c \
	   remove.c \
	   new.c
SRCDIR    = src
OBJDIR    = obj

NAME      = libllist.a
CFLAGS   += -Wall -Werror -Wextra
CPPFLAGS += -I include
LDFLAGS  +=
OUTDIR   := .

OBJ       = $(addprefix $(OBJDIR)/, $(SRCFILES:.c=.o))
SRC       = $(addprefix $(SRCDIR)/, $(SRCFILES))
OUT       = $(OUTDIR)/$(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(OUT) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OUT)

re: fclean all

rc: re
	$(MAKE) clean

.PHONY: all clean fclean re rc
