
As I say, this repository contains code, which was written to read ID3v2 tags from mp3 files. More about ID3v2 tags you can read in Internet (but I think, that if you read it, you don`t  need to learn about ID3 tags). 
Archive (Includes.rar) contains all code, so when you will unpack it and put address of mp3 file instead of  “Address” in example file, it will works. I will upload to the repository image with result of example file. 
The architecture of the project is very simple and hardly requires further explanation. All information about content of frames you can read here : http://id3.org/id3v2.3.0. 
This code was written for Arduino, so it has realization of doubly linked list and class string. Arduino has some restrictions and some frames are useless, I think, so I limited to the formal designation of their presence. If you need to use them, you can easily fix my flaws. 
