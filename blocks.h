//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "date '+%A, %B %d'",				86400,  		0},
	{" ", "/home/noah/.config/dwmblocks/scripts/cpu.sh",				    	10,		0},
	{"", "/home/noah/.config/dwmblocks/scripts/cpu-temp.sh",				    	10,		0},
	{"󱡠  ", "/home/noah/.config/dwmblocks/scripts/mem.sh",				    	10,		0},
	{";", "",	0,		0},
  {"", "/home/noah/.config/dwmblocks/scripts/netcon.sh",  10, 0},
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "/home/noah/.config/dwmblocks/scripts/clock.sh",				    	60,		0},
  {"  ", "", 0, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = " | ";
static char delim[] = "   ";
static unsigned int delimLen = 10;
