//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "date '+%A, %B %d'",				86400,  		0},
//	{" ", "/home/noah/.config/dwmblocks/scripts/cpu.sh",				    	10,		0},
	{" ", "statusbar-cpu-temp",				    10,		 10},
	{"󱡠  ", "statusbar-mem",				    	10,		 11},
	{";", "",	0,		0},
  {"󰣇 ", "statusbar-updates",           3600,  12},
  {"",   "statusbar-netcon",            10,    15},
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"",   "statusbar-clock",				    	60,		 16},
  {" ", "", 0, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char delim[] = " | ";
static char delim[] = "   ";
static unsigned int delimLen = 10;
