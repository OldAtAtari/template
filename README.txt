# Atari Lynx Template (This version is working as of January 2023.)

The old template, created by karri and modified by Nop90, needed an update to be useable in 2023. There are some other changes as well. See change list below.

****
Instructions:

In the Linux directory of your choice, do this:

git clone https://github.com/oldatatari/template/

Once you have this directory in place, you can use this template as follows:

1) Change the template directory name to be the name of your game
2) Make any changes you need to in the main game code, which is the file game.c in the "game" subdirectory. You might want to change this file name to reflect your game name.
3) Edit the sounds in the "tunes" directory
4) Edit the intro sequence in the "intro" directory
5) You might want to make changes in the resident.c file in the "resident" directory
6) Make any adjustments necessary in the "Makefile" found in the "game", "tunes", "resident", and "intro" directories
7) Edit the "Makefile" in the "cart" directory to point it to your final game output file name
8) Go back to your template directory (now renamed) and type "make". Debug as necessary.

I've probably missed some steps. Let me know if you see a problem.

	-OldAtAtari

****
Change List:

January 11, 2023
1) A change in the directory.s file to make this template work with the most recent cc65
2) A change in the resident.s file to get rid of a line of colored garbage pixels at the bottom of the title screen
3) A change (thank you karri) to allow the entire game to fit in RAM all at once. This allows the creation of *.o and *.LYX files, along with the usual *.LNX. The "make" routine creates these automatically now. This set up is a requirement for the LYNX development Jams and competitions.
