TODOs and Thoughts

switch programm {
case 0:
	programm += cube_rot(&index, &cube, ....);
	break;
case 1:
	programm += cube_shift(&index, &cube, ....);
	break;
........
};

Selfshifting architecture!!! (see above)
Try to make a cmake project!!
All configurations should be included in one file!!
Use Doxigen write-style for comments (very important! will be used for generate a automatically documentation)
Use C-programmes instead of model-data-structure. (Not enough Space avalible!!!)
Try to use BT-connection for a PC-controled mode!!! (messaure time delay between PC <-> µC)
Programm rotated output, this means move base which is bottom to left, right, front, back and top!!!
Output functions can be controlled from animation functions, this means output functions were called over function pointer,
which were set from animations function.
All output, animation functions must have the same Parameterlist, use void pointer to access them with different data!
Try to implement a section programing interface instead of a pagewise one!
Bootloader should have a login interface too!
Optimize BT-Interface for terminal. (Maybe Login & Pwd Login)
Write a Android app for controll the actually shown programm.(programm = bt_android_code(....))
Reprogramm global time base can be accessed from any part in programm but should be not global use pointer!!!
PC-programm has to be included a serial-interface (requires a bluetooth driver that includes a serial to bluetooth interface)
Usefull options for PC-programm could be a compile option + including the resulting object file to simulate!!! (Not sure if this would work)
Move GIT repository from Cloudforge to Github.(Done!)
Maybe try to make a second version of board which includes a Cortex-M0 µC or something like this.(Problem is requires a new Programmer!)
Redesinge some layout faults from first version of board (new placement of pinheader, change all voltage regulators, ....)

 