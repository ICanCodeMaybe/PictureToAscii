#include <cstdlib>
#include <iostream>

#include "pngAscii.h"

int main(int argc, char** argv){
	if(argc == 0){
		std::cout << "No picture was taken as input(try: ./pic_ascii ~/path/to/picture)";
		return -1;
	}

	const char* path_to_pic = argv[1];
	int scale_down = std::atoi(argv[2]);
	Picture picture(path_to_pic, scale_down);
	picture.print();

	return 0;
}


