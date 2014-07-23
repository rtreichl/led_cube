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

Selfshifting architecture!!!
Use C-programmes instead of model-data-structure. (Not enough Space avalible!!!)
Try to use BT-connection for a PC-controled mode!!! (messaure time delay between PC <-> µC)
Programm rotated output, this means move base which is bottom to left, right, front, back and topa!!!
Optimize BT-Interface for terminal. (Maybe Login & Pwd Login)
Write a Android app for controll the actually shown programm.(programm = bt_android_code(....))
Reprogramm global time base can be accessed from any part in programm but should be not global use pointer!!!
PC-programm has to be included a serial-interface
Usefull options for PC-programm could be a compile option + including the resulting object file to simulate!!! (Not sure if this would work)
Move GIT repository from Cloudforge to Github.
Maybe try to make a second version of board which includes a Cortex-M0 µC or something like this.
Redesinge some layout faults from first version of board (new placement of pinheader, change all voltage regulators, ....)
 