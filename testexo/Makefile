SOURCES_FILES    =    test.cpp\
						witch.class.cpp

HEADER            =    header.hpp

SOURCES            =    $(addprefix ./, $(SOURCES_FILES))

OBJECTS            =     $(SOURCES:.cpp=.o)

NAME            =    phoneBook

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