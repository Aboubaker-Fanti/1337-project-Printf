NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_unsignedec.c\
	ft_hexalower.c\
	ft_hexaupper.c\
	ft_pointerp.c\

OBJS = $(SRC:.c=.o)

all : $(NAME)
 
$(NAME) : $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
