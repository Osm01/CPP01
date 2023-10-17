
#ifndef CPP01_FILEMANAGER_H
#define CPP01_FILEMANAGER_H

#include <iostream>
#include <fstream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

class FileManager {
private:
	std::string		s1;
	std::string		s2;
	std::string		filename;
public:
	FileManager(std::string filename, std::string s1, std::string s2);
	std::fstream	*open_file(void);
	std::string		read_data(void);
	std::string		replace_data(std::string data);
	void			out_file(std::string data);
};


#endif //CPP01_FILEMANAGER_H
