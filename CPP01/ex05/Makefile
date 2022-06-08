SOURCES_FILES    =	main.cpp\
					Harl.cpp\

HEADER            =    header.hpp

SOURCES            =    $(addprefix ./, $(SOURCES_FILES))

OBJECTS            =     $(SOURCES:.cpp=.o)

NAME            =    ex05

CC                =    g++
RM                =    rm -f

CFLAGS            =    -Wall -Wextra -Werror -std=c++98

.c.o:
		$(CC) $(CFLAGS) -cpp $< -o $(<:.cpp=.o)

all:            $(NAME)

$(NAME):        $(OBJECTS) $(HEADER)
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
		$(RM) $(OBJECTS)

fclean:            clean
		$(RM) $(NAME)

re:                fclean all

.PHONY:            all clean fclean re