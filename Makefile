# ----------------------------- #
#           SETTINGS            #
# ----------------------------- #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

# ----------------------------- #
#             FILES             #
# ----------------------------- #

FILES = ft_putchar \
	ft_putstr \
	ft_putnbr \
	ft_printfhex \
	ft_printfptr \
	ft_printfdecimal \
	ft_printf \

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