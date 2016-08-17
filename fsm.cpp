#include "fsm.h"

void
FEEDER::
feeder_thread( void ) 
{
	 sc_uint<24> i=0x900000;
	while (true)
	{
		wait();
		instr.write(i);
		state.write(nextstate.read());
		
	}


}
