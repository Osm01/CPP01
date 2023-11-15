
#include "FileManager.h"

FileManager::FileManager(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

std::fstream	*FileManager::open_file(void)
{
	std::fstream	*in = new std::fstream(this->filename.c_str(), std::ios::in);
	if (!(*in))
	{
		std::cout << RED << "Error open file or permission denied !!" << std::endl;
		exit(1);
	}
	return (in);
}

std::string FileManager::read_data(void)
{
	std::string		buffer;
	std::string		data;
	std::fstream	*in;

	in = open_file();
	while (std::getline(*(in), buffer))
	{
		data += buffer;
		if (!in->eof())
			data += '\n';
	}
	in->close();
	delete in;
	return (data);
}

std::string FileManager::replace_data(std::string data)
{
	int		index;
	int		i;

	i = 0;
	while ((index = data.find(this->s1, i)) != -1 && (size_t)i < data.length())
	{
		data.erase(index, this->s1.length());
		data.insert(index, this->s2);
		i = index + this->s1.length();
	}
	return (data);
}

void FileManager::out_file(std::string data)
{
	this->filename += ".replace";
	std::fstream	out(  this->filename.c_str() , std::ios::out);
	if (!out)
	{
		std::cout << RED << "Error open file and write on it !!!!" << RESET << std::endl;
		exit(1);
	}
	out << data;
	out.close();
}