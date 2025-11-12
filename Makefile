# ----------------------------- #
#           SETTINGS            #
# ----------------------------- #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

# ----------------------------- #
#             FILES             #
# ----------------------------- #

FILES = ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_printfhex.c \
	ft_printfptr.c \
	ft_printfdecimal.c \
	ft_printf.c \

OBJS = $(FILES:.c=.o)

# ----------------------------- #
#            RULES              #
# ----------------------------- #

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re