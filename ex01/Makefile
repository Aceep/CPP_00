NAME = phone

CC = c++
FLAGS = -Wall -Wextra -werror -std=c++98
RM = rm -rf

SRCS += PhoneBook.cpp
SRCS += Contact.cpp
SRCS += main.cpp

all : $(NAME)

$(NAME) :
	$(CC) $(SRCS) -o $(NAME)

clean :
	$(RM) $(NAME)

re : clean all