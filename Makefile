SRCFILES  = main.c \
	    events.c \
	    events/close.c \
	    game.c \
	    sprites.c \
	    tacos.c \
	    window.c

SRCDIR   := src

OBJDIR   := obj

OUTDIR   := .

NAME     := TacosDrums

CFLAGS   += -Wextra -Wall -pedantic

CPPFLAGS += -I include

LDFLAGS  += -Llib -lllist -lc_graph_prog


OBJ       = $(addprefix $(OBJDIR)/, $(SRCFILES:.c=.o))
SRC       = $(addprefix $(SRCDIR)/, $(SRCFILES))
OUT       = $(OUTDIR)/$(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

all: libs $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(OUT) $(OBJ) $(LDFLAGS)
#	$(AR) rc $(OUT) $(OBJ) $(LDFLAGS)

clean: libsclean
	$(RM) $(OUT) $(OBJ)

re: clean all

libs:
	$(MAKE) -C lib/llist OUTDIR=..

libsclean:
	$(MAKE) fclean -C lib/llist OUTDIR=..

.PHONY: all clean re
