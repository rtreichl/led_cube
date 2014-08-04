/*
 * animaiton.c
 *
 * Created: 27.07.2014 15:17:38
 *  Author: Richi
 *
 * 31.07.2014 - cube_rotate - Cube mit richtungsvorgabe rotieren lassen
 *
 */ 

#include <avr/io.h>
#include <include/tlc.h>
#include <include/animation.h>


uint8_t cube_rotate(cube *data, uint8_t steps, uint8_t direction, uint8_t axis, uint8_t *time)
/*
 * cube_rotate
 *
 * Created: 31.07.2014 xx:xx:xx
 *  Author: Ralf
 *  steps - steps*90°=rotation
 *	direction - 0=clockwise 1=counterclockwise
 *	axis - 0=top-view-axis, 1=side-view-axis, 2=front-view-axis
 *	time - 
 *	
 */ 
{
	uint8_t i = 0;
	uint16_t temp = 0;
	uint16_t safe[3] = {0};

	//saving 
	for (i=0;i<3;i++)
	{
		safe[i] = data->layer_d[0].tlc[i];
	}
	
	//shift nr.1
	for (i=0;i<3;i++)
	{
		temp = data->layer_d[0].row[i] & 0x10;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp >>=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	for (i=4;i<7;i++)
	{
		temp = data->layer_d[0].row[i] & 0x8;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp <<=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	tlc_put(&data);

	//shift nr.2
	for (i=0;i<2;i++)
	{
		temp = data->layer_d[0].row[i] & 0x20;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp >>=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	for (i=5;i<7;i++)
	{
		temp = data->layer_d[0].row[i] & 0x4;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp <<=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	tlc_put(&data);

	//shift nr.3
	for (i=0;i<1;i++)
	{
		temp = data->layer_d[0].row[i] & 0x40;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp >>=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	for (i=6;i<7;i++)
	{
		temp = data->layer_d[0].row[i] & 0x2;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp <<=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	}
	tlc_put(&data);

	//shift nr.4	
		temp = data->layer_d[0].row[0] & 0x80;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp >>=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit

		temp = data->layer_d[0].row[7] & 0x1;		//überprüfe zu verschiebenes Bit
		data->layer_d[0].row[i] &= ~temp;			//lösche altes Bit
		temp <<=temp;								//verschiebe Bit
		data->layer_d[0].row[i] |= temp;			//setze verschobenes Bit
	tlc_put(&data);
}

uint8_t cube_expand(cube *data, uint8_t index, uint8_t *time)
{
	unsigned char i = 0;
	unsigned char model = 0x80;

	cube_clear(data);

	model = 0x80;
	model >>= index;
	model |= 0x80;

	for (i = 1; i < index; i++)
	{
		data->layer_d[0].row[i] = model;
		data->layer_d[index].row[i] = model;
		data->layer_d[i].row[0] = model;
		data->layer_d[i].row[index] = model;
	}

	model = 0xFF;
	model -= ((1 << (7 - index)) - 1);
	
	data->layer_d[index].row[0] = model;
	data->layer_d[index].row[index] = model;
	data->layer_d[0].row[0] = model;
	data->layer_d[0].row[index] = model;

	if (index == 0)
	{
		//if animation is done give one back for a step to the next animation (see readme.txt main folder!!!)
		return 1;
	}
	else
	{
		return 0;
	}
}

uint8_t cube_clear(cube *data)
{
	uint8_t i;
	for (i = 0; i < 8; i++)
	{
		data->layer_f[i] = 0;
	}
	return 1;
}

uint8_t cube_lift(cube *data, uint8_t upordown)
{
	//upordown == 1 up , == 0 down
	uint64_t templayer=0;
	
	if(upordown==1) {
		templayer = data->layer_f[0];
		data->layer_f[0] = data->layer_f[1];
		data->layer_f[1] = data->layer_f[2];
		data->layer_f[2] = data->layer_f[3];
		data->layer_f[3] = data->layer_f[4];
		data->layer_f[4] = data->layer_f[5];
		data->layer_f[5] = data->layer_f[6];
		data->layer_f[6] = data->layer_f[7];
		data->layer_f[7] = templayer;
	}
	else {
		templayer = data->layer_f[7];
		data->layer_f[7] = data->layer_f[6];
		data->layer_f[6] = data->layer_f[5];
		data->layer_f[5] = data->layer_f[4];
		data->layer_f[4] = data->layer_f[3];
		data->layer_f[3] = data->layer_f[2];
		data->layer_f[2] = data->layer_f[1];
		data->layer_f[1] = data->layer_f[0];
		data->layer_f[0] = templayer;
	}
	return 1;	
}



uint8_t cube_slidesidewards(cube *data,  uint8_t leftorright)
{
	//leftorright == 1 left , == 0 right
	uint8_t i = 0, j = 0;
	
	if(leftorright==1) {
		for (i = 0; i <= 7; i++) {
			for (j = 0; j <= 7; j++) {
				
				if (data->layer_d[i].row[j] & 0x01) {
					data->layer_d[i].row[j] = data->layer_d[i].row[j] >> 1;
					data->layer_d[i].row[j] = data->layer_d[i].row[j] | 0x80;
					
				}
				else {
					data->layer_d[i].row[j] = data->layer_d[i].row[j] >> 1;
				}
			}
		}
	}
	
	else {
		for (i = 0; i <= 7; i++) {
			for (j = 0; j <= 7; j++) {
				if (data->layer_d[i].row[j] & 0x80) {
					data->layer_d[i].row[j] = data->layer_d[i].row[j] << 1;
					data->layer_d[i].row[j] = data->layer_d[i].row[j] | 0x01;

				}
				else {
					data->layer_d[i].row[j] = data->layer_d[i].row[j] << 1;
				}
			}
		}
	}
	
	return 1;
}

uint8_t cube_slidebackwards(cube *data,  uint8_t frontorback)
{
	//frontorback == 1 front , == 0 back
	uint8_t i = 0;
	uint8_t temprow=0;
	
	if(frontorback==1) {
		for (i = 0; i <= 7; i++) {
			temprow = data->layer_d[i].row[7];
			data->layer_d[i].row[7] = data->layer_d[i].row[6];
			data->layer_d[i].row[6] = data->layer_d[i].row[5];
			data->layer_d[i].row[5] = data->layer_d[i].row[4];
			data->layer_d[i].row[4] = data->layer_d[i].row[3];
			data->layer_d[i].row[3] = data->layer_d[i].row[2];
			data->layer_d[i].row[2] = data->layer_d[i].row[1];
			data->layer_d[i].row[1] = data->layer_d[i].row[0];
			data->layer_d[i].row[0] = temprow;
		}
	}
	else {
		for (i = 0; i <= 7; i++) {
			temprow = data->layer_d[i].row[0];
			data->layer_d[i].row[0] = data->layer_d[i].row[1];
			data->layer_d[i].row[1] = data->layer_d[i].row[2];
			data->layer_d[i].row[2] = data->layer_d[i].row[3];
			data->layer_d[i].row[3] = data->layer_d[i].row[4];
			data->layer_d[i].row[4] = data->layer_d[i].row[5];
			data->layer_d[i].row[5] = data->layer_d[i].row[6];
			data->layer_d[i].row[6] = data->layer_d[i].row[7];
			data->layer_d[i].row[7] = temprow;
		}
	}
	return 1;
}


