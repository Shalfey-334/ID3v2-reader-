
#include <iostream>

#include "File_object.h"
#include "ID3_reader.h"


int main()
{
	File_object s("Adress");
	ID3_reader der(&s);
	der.say_all_frames();
	system("PAUSE");
	return 0;
}

