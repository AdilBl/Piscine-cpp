# include <iostream>

int main (int argc, char **argv)
{
    int i = 1;
    int j = 0;
    char temp;

    if (!argv[i])
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            temp = std::toupper(argv[i][j]);
            std::cout << temp;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}