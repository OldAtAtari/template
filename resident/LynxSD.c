#include "LynxSD.h"

////////////////////////////////////////////////////////////////////////////////
//
// Microcontroller communication constants
//
////////////////////////////////////////////////////////////////////////////////

    { 
0, 



} ECommandByte;

#define IO_TIMEOUT 30000
    
////////////////////////////////////////////////////////////////////////////////
//
// Lynx registers
//
////////////////////////////////////////////////////////////////////////////////


#define IODAT ((volatile unsigned char *) 0xFD8B)
#define IODIR ((volatile unsigned char *) 0xFD8A)
#define CART1 ((volatile unsigned char *) 0xFCB3)
#define CART0 ((volatile unsigned char *) 0xFCB2)
    
////////////////////////////////////////////////////////////////////////////////
//
// Support functions to read and write bytes to the cartridge microcontroller
//
////////////////////////////////////////////////////////////////////////////////

	*CART1 = byte;


				       unsigned int nSize) 
		
		  
		  

		  
		  { 
		  
		  
		  

		  return *CART0;	// read byte
		  }
		  
							unsigned int size) 
		  
				     
				     
				     { 
				     
				     
				     
				     WriteString(const char *pStr) 
				     
				     do
				     
				     
////////////////////////////////////////////////////////////////////////////////
//
// Microcontroller commands
//
////////////////////////////////////////////////////////////////////////////////
				     
				     *CART1 = 0xaa;	// initialise cart comms
				     } 
				     } 
				     WriteString(pDir); 
				     }
				     
				     LynxSD_ReadDir(SFileInfo *
						    pInfo) 
				     
				     
				     
					  FR_OK) 
								 *)pInfo,
								sizeof
								(SFileInfo)); 
				     
				     
				     WriteString(pFile); 
				     }
				     
				     }
				     
				     }
				     
				     }
				     
				     }
				     
				     }
				     
				     LynxSD_ProgramROMFromFile(unsigned int
							       nStartBlock,
							       unsigned char
							       nBlockSize,
							       unsigned int
							       nBlockCount,
							       unsigned char
							       b512BlockCard) 
				     { 
							      0x10; 
							      
							      WriteByte(nBlockSize);	// or with 0x10 for 512 block card (a19 controlled by aux pin)
							      WriteWord(nBlockCount);	// blocks to write
							      return (FRESULT) ReadByte();	// waits for programming to end and gets result
							      }
							      
							      __fastcall__
							      LynxSD_ClearROMBlocks
							      (unsigned int
							       nStartBlock,
							       unsigned int
							       nBlocks,
							       unsigned char
							       b512BlockCard) 
							      {
							      
							      (b512BlockCard) 
							      {
							       0x8000; 
							       
							       WriteWord(nBlocks);	// or with 0x8000 for 512 block card (a19 controlled by aux pin)
							       return (FRESULT) ReadByte();	// waits for clearing to end and gets result
							       }
							       
							       if (count <
								   IO_TIMEOUT) 
							       { 
							       
							       
							       else
							       
							       FR_DISK_ERR; 
							       