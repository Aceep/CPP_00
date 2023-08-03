
#!/bin/bash
echo -e "\033[32mWelcome to the Phonebook\033[0m"
echo -e "Let's check it !"
echo -e "\033[31mCompiling...\033[0m"
make re
echo -e "\033[32mCompiling done\033[0m"
echo -e "\033[31mRunning...\033[0m"
./interact.sh

