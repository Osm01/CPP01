
#include "FileManager.h"

FileManager::FileManager(std::string filename, std::string s1, std::string s2)
{
	this->filename = filename;
	this->s1 = s1;
	this->s2 = s2;
}

std::fstream	*FileManager::open_file(void)
{
	std::fstream	*in = new std::fstream(this->filename, std::ios::in);

	if (!(*in))
	{
		std::cout << RED << "Error open file or permission denied !!" << std::endl;
		exit(EXIT_FAILURE);
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
	std::string new_buffer;
	int 		ln_data;
	int 		ln_s1;
	int 		i;

	ln_s1 = this->s1.length();
	ln_data = data.length();
	i = 0;
	while (i < ln_data)
	{
		if (data[i] == this->s1[0])
		{
			if (data.substr(i, ln_s1) == s1)
				new_buffer += this->s2;
			else
				new_buffer += data.substr(i, ln_s1);
			i += ln_s1;
		}
		else
		{
			new_buffer += data[i];
			i ++;
		}
	}
	return (new_buffer);
}

void FileManager::out_file(std::string data)
{
	std::fstream	out(this->filename + ".replace", std::ios::out);

	if (!out)
	{
		std::cout << RED << "Error open file and write on it !!!!" << RESET << std::endl;
		exit(EXIT_FAILURE);
	}
	out << data;
	out.close();
}