#include "header.hpp"

int checkopenfile(std::string fd)
{
    std::ifstream myfile;

    myfile.open(fd);
    if (!myfile)
    {
        std::cout << "File doesnt existe" << std::endl;
        return (0);
    }
    myfile.close();
    return (1);
}

std::string getfilestr(std::string fd)
{
    std::string line;
    std::string linetosend;
    std::ifstream myfile;

    myfile.open(fd);
    while (getline(myfile, line))
    {
        linetosend.append(line);
        linetosend.append("\n");
    }
    linetosend.erase(linetosend.length() - 1, 1);
    myfile.close();
    return(linetosend);
}

std::string     replacel(std::string linereplace, std::string s1, std::string s2)
{
    if (s1 == "" || s2 == "")
    {
        std::cout << "string empty !" << std::endl;
    }
    else
        for (size_t i = 0; i < linereplace.length(); i++)
        {
            if (linereplace.compare(i, s1.length(), s1) == 0)
            {
                linereplace.erase(i, s1.length());
                linereplace.insert(i, s2);
            }
        }
    return(linereplace);
}

void    outfile(std::string fd, std::string linereplace)
{
    std::ofstream   outfile;
    std::string     fdout;

    fdout = fd;
    fdout.append (".replace");
    outfile.open(fdout);
    outfile << linereplace;
    outfile.close();
}

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Nombre d'argument invalide" << std::endl;
        return (1);
    }
    if  (!checkopenfile(argv[1]))
        return(1);
    outfile(argv[1], replacel(getfilestr(argv[1]), argv[2], argv[3]));
    return (0);
}