NAME	=	minitalk
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f
CLIENT	=	client
SERVER	=	server


$(NAME):	$(SERVER) $(CLIENT)

all:		$(NAME)

$(SERVER):	$(SERVER).c minitalk.h
			gcc $(CFLAGS) $(SERVER).c -o $(SERVER) 

$(CLIENT):	$(CLIENT).c minitalk.h
			gcc $(CFLAGS) $(CLIENT).c -o $(CLIENT) 

bonus: 

clean:
			rm -rf $(CLIENT) $(SERVER)


fclean:		clean

re:			fclean all

.PHONY: 	all clean fclean re