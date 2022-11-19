#include "ftFile.hpp"

int main()
{
	ftFile			kek;
	std::fstream	fileStream;

	kek.setOutfileName("outfile");
	kek.setFlagTruncOrApp(std::fstream::trunc);
	kek.replace("tests/file_1", "what", "1234");
	kek.replace("tests/file_1", "what", "");
//	kek.replace("tests/file_1", "what", "1234");
}
