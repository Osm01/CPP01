#include "FileManager.h"

int main(int argc , char *argv[])
{
	std::string	data;
	std::string	data_to_replace;

	if (argc != 4)
	{
		std::cout << RED << "Number of arg not accepted !!!" << RESET << std::endl;
		return (0);
	}
	FileManager	fileManager(argv[1], argv[2], argv[3]);
	data = fileManager.read_data();
	data_to_replace = fileManager.replace_data(data);
	fileManager.out_file(data_to_replace);
	return (0);
}