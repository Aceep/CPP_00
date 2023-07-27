#ifndef CONTACT_H
# define CONTACT_H

# include 

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        int index;
    
    public:
        void    create_contact();
};

#endif