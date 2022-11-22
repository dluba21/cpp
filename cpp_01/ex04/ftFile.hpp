#ifndef FTFILE_HPP
#define FTFILE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

class	ftFile
{
public:
	ftFile();
	~ftFile();
	void		setFilename(std::string filename);
	void		setOutfileName(std::string filename);
	void		setFlagTruncOrApp(int flag);
	std::string	getFilename(std::string filename);
	int			replace(std::string filename, std::string s1, std::string s2);
	int			printError(std::string err);

	
	
private:
	std::string	_outfile;
	int			_open_flag;
};



#endif
