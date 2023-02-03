#include <string>
#include <iostream>

class Bird
{
  public:
    virtual std::string Name() const    & = 0;
    virtual std::string Species() const & = 0;
    virtual int         Age() const & = 0;
};

class Chicken : public Bird
{
  private:
    std::string _name;
    int         _age;
    std::string _fly;
    std::string _specie;

  public:
    virtual std::string Name() const &
    {
        return this->_name;
    }

    virtual std::string Species() const &
    {
        return this->_specie;
    }

    virtual int Age() const &
    {
        return this->_age;
    }

    Chicken(std::string name, int age)
    {
        this->_age    = age;
        this->_name   = name;
        this->_fly    = "Não";
        this->_specie = "Chicken";
    }
};

class Seagull : public Bird
{
  public:
    std::string _name;
    int         _age;
    bool        _fly;
    std::string _specie;

    virtual std::string Name() const &
    {
        return this->_name;
    }
    virtual std::string Species() const &
    {
        return this->_specie;
    }

    virtual int Age() const &
    {
        return this->_age;
    }

    Seagull(std::string name, int age)
    {
        this->_age    = age;
        this->_name   = name;
        this->_fly    = "Sim";
        this->_specie = "Seagull";
    }
};