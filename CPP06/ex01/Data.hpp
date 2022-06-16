#pragma once
#ifndef DATA_HPP
# define DATA_HPP

class Data
{
    private:
        int         _nombre;
        std::string _str;
    public:
        Data(void);
        virtual ~Data();
        void printdata(void)const;
};
#endif