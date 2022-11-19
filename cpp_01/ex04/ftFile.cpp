#include "ftFile.hpp"

ftFile::ftFile(void)
{
	_outfile = "outfile";
	_open_flag = std::fstream::app;
}

ftFile::~ftFile()
{
	std::cout << "Destructor is called" << std::endl;
}

int	ftFile::printError(std::string err)
{
	std::cerr << err << std::endl;
	return (-1);
}

void	ftFile::setOutfileName(std::string name)
{
	_outfile = name;
}

void	ftFile::setFlagTruncOrApp(int flag = std::fstream::trunc)
{
	_open_flag = flag;
}

int	ftFile::replace(std::string filename, std::string s1, std::string s2)
{
	std::fstream	fileStream;
	std::fstream	file_outStream;
	std::string		buffer("");
	std::string		buffer_to_file("");
	char			c;
	unsigned long	i;

	fileStream.open(filename, std::fstream::in | std::fstream::out);
	if (_open_flag != std::fstream::trunc && _open_flag != std::fstream::app)
		return (printError("Error: open_flag is incorrect\n"));
	if (!fileStream.is_open())
		return (printError("Error: can't open file"));
	if (s1.std::string::length() == 0)
		return ((printError("Error: s1 is empty")));
	file_outStream.open(_outfile, std::fstream::in | std::fstream::out | _open_flag);
	if (!file_outStream.is_open())
		return(printError("Error: can't open outfile"));
	while (fileStream.get(c))
	{
		
			if (c == s1[0])
			{
				i = 0;
				buffer.push_back(c);
				while (fileStream.get(c) && c == s1[++i])
					buffer.push_back(c);
				if (i != s1.length())
					buffer_to_file += buffer;
				else
					buffer_to_file += s2;
				buffer_to_file.push_back(c);
				buffer.clear();
			}
			else
				buffer_to_file.push_back(c);
	}
	fileStream.close();
	file_outStream << buffer_to_file;
	file_outStream.close();
	return (0);
}
