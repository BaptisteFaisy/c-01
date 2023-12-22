NAME = zombie
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
# SRCS = $(addprefix $(DIR)/,$(SRCS_RAW))
OBJS = $(SRCS:c=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)
re: clean all