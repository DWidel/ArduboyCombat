#pragma once
class PlayerObj
{
public:
	unsigned char X;
	unsigned int Color;
	unsigned char Pattern;
	bool P0; //keep track if each player has been drawn at least once.
	bool Reversed; 
	unsigned char Size;
 bool Last = true;
};
