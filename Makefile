NAME			:=	push_swap

SRCS_DIR		:=	./S/

FILES		:=	swap.c \
				push.c \
				rotate.c \
				rrotate.c \

SRCS			:=	$(addprefix $(SRCS_DIR), $(FILES))

OBJS			:=	$(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CC				:=	gcc

FLAGS			:=	-Wall -Wextra -Werror -g

CLR_RMV			:=	\033[0m
RED				:=	\033[1;31m
GREEN			:=	\033[1;32m
YELLOW			:=	\033[1;33m
BLUE			:=	\033[1;34m
CYAN			:=	\033[1;36m

RM				:=	rm -f

LIBFT			:=	libft/libft.a
LIBFTMAKE		:=	make -sC libft

$(NAME):		$(NAME)
			@$(LIBFTMAKE)
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(SE_NAME) ${CLR_RMV}..."
			@$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
			@echo "$(GREEN)$(SE_NAME) created ✔️ ${CLR_RMV}"

all:			$(NAME)

clean:
				@ make -sC ./libft clean
				@ ${RM} *.o */*.o */*/*.o
				@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:			clean
				@ $(RM) $(SE_NAME) $(CL_NAME) $(LIBFT)
				@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binaries ✔️"

re:				fclean all

.PHONY:			all clean fclean re
