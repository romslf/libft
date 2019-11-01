SRCS	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_isws.c \
		  ft_memmove.c \
		  ft_memccpy.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memchr.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_substr.c \
		  ft_split.c \
		  ft_strtrim.c \
		  ft_strjoin.c \
		  ft_strmapi.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strcpy.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strrchr.c \
		  ft_strstr.c \
		  ft_strcmp.c \
		  ft_strnstr.c \
		  ft_strncmp.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_itoa.c

OBJS	= ${SRCS:.c=.o}

BSRCS	= ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstadd_back_bonus.c \
		  ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstiter.c

BOBJS	= ${BSRCS:.c=.o}


NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -c ${SRCS}
			ar rc ${NAME} ${OBJS} libft.h

all:		${NAME}

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BOBJS}
			${CC} ${CFLAGS} -c ${BSRCS}
			ar rc ${NAME} ${BOBJS} libft.h

.PHONY:		all clean fclean re
