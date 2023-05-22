SRCS    =   ft_printf.c ft_check_form.c ft_printf_utils.c

OBJS    =   ${SRCS:.c=.o}

NAME    =   libftprintf.a

AR    =   ar rcs

CC      =   cc

RM      = rm -f

CFLAGS  =   -Wall -Werror -Wextra

.c.o:
    $(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    $(LIBC) $(NAME) $(OBJS)

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re