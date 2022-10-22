#include "main.hpp"




int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "4 parametre AUB!!" << std::endl;
        return 0;
    }
    std::string filename;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::fstream my_file; 
    std::string file_name = argv[1];
    std::fstream new_file;
    //ios in => read
    //ios out => write
	my_file.open(file_name, std::ios::in);
	if (!my_file) {
		std::cout << "File not opened!";
	}
	else {
        new_file.open( file_name + ".replace", std::ios::out);
        if (!new_file)
        {
            my_file.close();
            std::cout << "File not created!"<<std::endl;
            return 0;
        }
        std::string str;
	    while (getline (my_file, str))
        {
            for (unsigned int i = 0; str[i]; i++)
            {
                if (str.compare(i,s1.size(),s1) == 0)
                {
                    new_file << s2;
                    if (s1.size() != 0 && s2.size() != 0)
                        i += s1.size() - 1;
                }
                else
                    new_file << str[i];
            }
            new_file << std::endl;
	    	if (my_file.eof())
	    		break;
	    }
        new_file.close();
        my_file.close();
	}

}

// TODO ./replace Makefile "" ""