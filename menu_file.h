#ifndef menu_file_h
#define menu_file_h

#include "Arduino.h"

void fillFileMenu ( void ) ;
boolean sdStart( void ) ;  // close all find, check sd card and open currentDir on root.
uint16_t fileCnt( void ) ; // count number of file in current directory
boolean updateFilesBtn() ;    // update the buttons to be displayed; return false in case of error
boolean startPrintFile( ) ;   // open the file to be read, fileIdx gives the index of the fileName; return false if file can't be opened and fill a lastMessage
void closeFileToRead(void ) ; // close fileToRead (file used to send the data)
boolean changeDirectory() ;      // change the directory when file selected is a directory
boolean fileToReadIsDir() ;
void closeAllFiles() ;
boolean setFileToRead ( uint8_t fileIdx ) ;
boolean sdMoveUp() ;
boolean fileIsCmd() ;           // check if the file is a cmd and if so, copy it into the SPIFFS, return true if it is cmd file
boolean createFile(char * fileName) ;

#endif

