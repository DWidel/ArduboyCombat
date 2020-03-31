#ifndef Machine_H
#define Machine_H 
 
#include <Arduboy2.h>
#include "PlayerObj.h" 
#include "Queue.h"



class Machine
{

public: 
const unsigned char TankXposStart0=0x08;
const unsigned char TankXposStart1=0x90;

unsigned char Gray=0;
const short FRAME_RATE = 30; 
 unsigned char FrameSkip = 3;

  unsigned char PlayFieldPattern[3];
//Originally there was just one playfield register, but depending on when
//it's written lt and rt could be different, this is to handle that. 
  bool UseSplitPlayfield = false;
  unsigned char PlayFieldPatternLt[3];
  unsigned char PlayFieldPatternRt[3];

  //Tank and Missle X locations.
  unsigned char TankX[4] = { 0x0C,0x90,0,0 };
  //Variable to hold pixels to push to screen.
  Queue PQ0;
  Queue PQ1;

  //Shrink the width of the screen.
  unsigned char HorScale = 8;

bool Skip = false;
bool UpPressed = false;
bool DnPressed = false;
bool LtPressed = false;
bool RtPressed = false;
bool APressed = false;
bool BPressed = false;
bool LastUpPressed;
bool LastDnPressed;
bool LastRtPressed;
bool LastLtPressed;
bool LastAPressed;
bool LastBPressed;
unsigned char JoyRead;
unsigned char LastJoyRead;

 short WindowTop = 3;
 short WindowLeft = 6;
 short WindowWidth = 128;
 short WindowHeight = 64;

  char LineSkip = 3; 
  bool SkipThisLine = false;
  char BlockWd = 1; 
char CheatCodeCtr = 0; 

bool LeftPlayer = false;
unsigned long NextPlayerChange =0;

 unsigned short FrameCnt=0;
Arduboy2Base arduboy;
 

  unsigned char CollisionLatches[8] = { 0,0,0,0, 0,0,0,0 };
  


   
  bool VSyncSignal = false;
  bool VBlankSignal = false;
  unsigned short YCtr = 0;
  unsigned short YPos = 0;
  unsigned short YCtrVSync = 0;
  unsigned int BackgroundColor = 0;
  unsigned char ControlPlayFieldBallRegister = 0;
  unsigned int PlayFieldColor = 0;
  unsigned char PlayerPattern[2] = { 0,0 };
  unsigned char PlayerReflected[2] = { 0,0 };
  unsigned int PlayerColor[2] = { 0,0 };
 // unsigned char MisslePattern[2] = { 0,0 };
  unsigned char NumSizPlrMissle[2] = { 0,0 }; 
  unsigned int MissleColor[2] = { 0,0 };
//  unsigned char BallPattern=0;
//  unsigned int BallColor = 0;

  bool MissleEnabled[2] = { true,true };
  //bool BallEnabled =  true;

  unsigned char PlayerXposRegister[2] = { 0,0 };
  unsigned char MissleXposRegister[2] = { 0,0 };
  unsigned char BallXposRegister = 0;
  unsigned char SwitchARegister = 0xFF;
  unsigned char SwitchBRegister = 0x37;  //C0 is difficulty switches   // 8 IS COLOR
  unsigned char InputRegister[6] = { 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF };

  unsigned char HorzMotionPlayer[2] = { 0,0 };
  unsigned char HorzMotionMissle[2] = { 0,0 };
  unsigned char HorzMotionBall = 0;
  bool VertDelayPX[2] = { false,false };
  bool VertDelayBall = false;
  unsigned char ResetMissletoPlayerRegister[2] = { 0,0 };


     

  unsigned char RAM[0x80];
   



  bool SameFrame = true;
  //todo load these
  unsigned short NMIVector = 0x0000;
  unsigned short ResVector = 0xF000;
  unsigned short IRQVector = 0xF000;

  unsigned short DurationCtr = 0; // How many clock cycles since HReset



  unsigned short PC = 0xF000;
  unsigned short StkPtr = 0x1FF;
  short A;
  short X;
  short Y;
  short T;
  short T2;
  short M; //Temporary location


  // The carry flag is set if the last operation caused an overflow from bit 7 of the result or an underflow from bit 0. 
  // This condition Is Set during arithmetic, comparison And during logical shifts. It can be explicitly Set Using the 'Set Carry Flag' (SEC) instruction and cleared with 'Clear Carry Flag' (CLC).
  bool fCarry;
  // The zero flag is set if the result of the last operation as was zero.
  bool fZero;
  // The interrupt disable flag is set if the program has executed a 'Set Interrupt Disable' (SEI) instruction. While this flag is set the processor 
  // will not respond to interrupts from devices until it is cleared by a 'Clear Interrupt Disable' (CLI) instruction.
  bool fIntDis = true;
  // While the decimal mode flag is set the processor will obey the rules of Binary Coded Decimal (BCD) arithmetic during addition and subtraction. 
  // The flag can be explicitly Set Using 'Set Decimal Flag' (SED) and cleared with 'Clear Decimal Flag' (CLD).
  bool fDecMod;
  // The break command bit is set when a BRK instruction has been executed and an interrupt has been generated to process it.
  bool fBreak;
  // The overflow flag is set during arithmetic operations if the result has yielded an invalid 2's complement result (e.g. adding to positive numbers and 
  // ending up With a negative result: 64 + 64 => -128). It is determined by looking at the carry between bits 6 and 7 and between bit 7 and the carry flag.
  bool fOverflow;
  // The negative flag is set if the result of the last operation had bit 7 set to a one.
  bool fNeg; 
    
 




  unsigned char SprData[0x211]{
   
                                                                                                0x00,  // 0640
    0xFC, 0xFC, 0x38, 0x3F, 0x38, 0xFC, 0xFC, 0x1C,   0x78, 0xFB, 0x7C, 0x1C, 0x1F, 0x3E, 0x18, 0x19,  // 0650
    0x3A, 0x7C, 0xFF, 0xDF, 0x0E, 0x1C, 0x18, 0x24,   0x64, 0x79, 0xFF, 0xFF, 0x4E, 0x0E, 0x04, 0x08,  // 0660
    0x08, 0x6B, 0x7F, 0x7F, 0x7F, 0x63, 0x63, 0x24,   0x26, 0x9E, 0xFF, 0xFF, 0x72, 0x70, 0x20, 0x98,  // 0670
    0x5C, 0x3E, 0xFF, 0xFB, 0x70, 0x38, 0x18, 0x38,   0x1E, 0xDF, 0x3E, 0x38, 0xF8, 0x7C, 0x18, 0x60,  // 0680
    0x70, 0x78, 0xFF, 0x78, 0x70, 0x60, 0x00, 0x00,   0xC1, 0xFE, 0x7C, 0x78, 0x30, 0x30, 0x30, 0x00,  // 0690
    0x03, 0x06, 0xFC, 0xFC, 0x3C, 0x0C, 0x0C, 0x02,   0x04, 0x0C, 0x1C, 0xFC, 0xFC, 0x1E, 0x06, 0x10,  // 06A0
    0x10, 0x10, 0x38, 0x7C, 0xFE, 0xFE, 0x10, 0x40,   0x20, 0x30, 0x38, 0x3F, 0x3F, 0x78, 0x60, 0x40,  // 06B0
    0x60, 0x3F, 0x1F, 0x1E, 0x1E, 0x18, 0x18, 0x00,   0x83, 0x7F, 0x3E, 0x1E, 0x0C, 0x0C, 0x0C, 0x00,  // 06C0
    0x8E, 0x84, 0xFF, 0xFF, 0x04, 0x0E, 0x00, 0x00,   0x0E, 0x04, 0x8F, 0x7F, 0x72, 0x07, 0x00, 0x10,  // 06D0
    0x36, 0x2E, 0x0C, 0x1F, 0xB2, 0xE0, 0x40, 0x24,   0x2C, 0x5D, 0x1A, 0x1A, 0x30, 0xF0, 0x60, 0x18,  // 06E0
    0x5A, 0x7E, 0x5A, 0x18, 0x18, 0x18, 0x78, 0x34,   0x36, 0x5A, 0x78, 0x2C, 0x0C, 0x06, 0x0C, 0x08,  // 06F0
    0x6C, 0x70, 0xB8, 0xDC, 0x4E, 0x07, 0x06, 0x38,   0x10, 0xF0, 0x7C, 0x4F, 0xE3, 0x02, 0x00, 0x00,  // 0700
    0x0B, 0x16, 0x00, 0x10, 0x00, 0xFF, 0x01, 0x11,   0x01, 0xFF, 0x0F, 0x1F, 0x0F, 0x50, 0x5F, 0x51,  // 0710
    0xFF, 0x30, 0x3F, 0x31, 0xFF, 0x70, 0x7F, 0x71,   0x90, 0xB0, 0x70, 0xFF, 0x91, 0xB1, 0x71, 0xFF,  // 0720
    0x9F, 0xBF, 0x7F, 0x08, 0x02, 0x02, 0x02, 0x03,   0x08, 0x1D, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,  // 0730
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D,   0x1D, 0x16, 0x16, 0x0F, 0x0F, 0x00, 0x00, 0x00,  // 0740
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x10,   0x10, 0x0C, 0x0C, 0x07, 0x07, 0x00, 0x00, 0x01,  // 0750
    0x01, 0x00, 0x03, 0x27, 0x03, 0xEA, 0x3C, 0x82,   0x44, 0x03, 0x02, 0x04, 0x00, 0x03, 0x02, 0x04,  // 0760   Color table has been modified.
    0x00, 0x03, 0x02, 0x04, 0x00, 0x00, 0x01, 0x02,   0x03, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,  // 0770
    0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x00, 0x00,   0x00, 0x38, 0x00, 0x00, 0x00, 0x60, 0x20, 0x20,  // 0780
    0x23, 0xFF, 0x80, 0x80, 0x00, 0x00, 0x00, 0x1C,   0x04, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,  // 0790
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   0x00, 0x00, 0x07, 0x1F, 0x3F, 0x7F, 0xFF, 0x00,  // 07A0
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,   0x20, 0x21, 0xFF, 0x00, 0x00, 0x00, 0x80, 0x80,  // 07B0
    0x80, 0x80, 0x00, 0x00, 0x00, 0x07, 0x4F, 0xCF,   0x8F, 0xF6, 0xF6, 0xF6, 0x75, 0x75, 0x75, 0x9A,  // 07C0
    0x81, 0x99, 0xAA, 0x9D, 0x8D, 0x99, 0xB6, 0x9D,   0x24, 0x28, 0x08, 0x20, 0x00, 0x48, 0x40, 0x54,  // 07D0
    0x58, 0x25, 0x29, 0x49, 0x55, 0x59, 0xA8, 0x88,   0x98, 0x90, 0xA1, 0x83, 0xE8, 0xC8, 0xE0, 0xC0,  // 07E0
    0xE9, 0xE2, 0xC1, 0xFF, 0x00, 0x00, 0x00, 0x00,   0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x11 // 07F0
  };


 
 
  void  DisplayScreen();
  void Init(Arduboy2Base arduboy);
  void Run(); 
  void put_pixel32(short x, short y, unsigned short PixelColor);
  void put_HLine(short x, short len, short y, unsigned int PixelColor);


  //TIA
  void WriteVSync(unsigned char B);
  void WriteVBlank(unsigned char B);
  void WaitForWSync();
  void ResetHSyncCtr();
  void SetNumSizPlrMsl(char n, unsigned char B);
  void SetColLumPlr(char n, unsigned char B);
  void SetColLumPlyFld(  unsigned char B);
  void SetColLumBckGrd(unsigned char B);

  void SetCtlPlyFld(unsigned char B);
  void ReflectPlayer(char n, unsigned char B);
  void SetPlayFieldRegisterBX(char n, unsigned char B);
  void ResetPlayer(char n, unsigned char cycles);
  void ResetMissle(char n, unsigned char cycles);
  void ResetBall( unsigned char cycles);

  void WriteAudioControl(char n, unsigned char B);
  void WriteAudioFreq(char n, unsigned char B);
  void WriteAudioVol(char n, unsigned char B);
  void SetGraphicsPlayer(char n, unsigned char B);
  void EnableMissle(char n, unsigned char B);
 // void EnableBall( unsigned char B);
//  void SetHorzMotionPlayer(char n, unsigned char B);
//  void SetHorzMotionMissle(char n, unsigned char B); 
//  void SetHorzMotionBall(unsigned char B);
//  void SetVertDelayPlayer(char n, unsigned char B);
//  void SetVertDelayBall(unsigned char B);

  void ResetMissletoPlayer(char n, unsigned char B);
//  void ApplyHorzMotion();
//  void ClearHorzMotionRegisters();
  void ClearCollisionLatches();

  unsigned char  ReadCollisionMissleX2Player(char n);
    unsigned char  ReadCollisionPlayerX2PFBall(char n);
  unsigned char  ReadCollisionMissleX2PFBall(char n);
  unsigned char  ReadCollisionPF2Ball( );
  unsigned char  ReadCollisionMissle2MPlayer2P();
  unsigned char  ReadInput(char n);
    unsigned char  ReadJoystick(char n);
     // unsigned char CheckPlayerCollision(char n);



      unsigned char ReadByte(unsigned short Addr);
      void WriteByte(unsigned short Addr, short B);

      unsigned short ReadWord(unsigned short Addr);

      unsigned char ReadTIA(unsigned short Addr);
      unsigned char ReadPIA(unsigned short Addr);
      void WriteTIA(unsigned short Addr,unsigned char B);
      void WritePIA(unsigned short Addr, unsigned char B);

      void WriteStackWord(unsigned short W);
      void WriteStackByte(short B);
      unsigned short ReadStackWord();
      unsigned char ReadStackByte();

      //Set the flags from a word.
      void SetProcStatWord(unsigned short W);

      unsigned int   GetColor(unsigned char col );
      void VBlankWait();

      void  DrawPlayField(bool NoBkGrnd);
      void  DrawPlayer();
      void  DrawMissle();
      void  DrawBall();

      void DrawScanline();
      void HandleKeyboard();

      void  SetBit(unsigned char& Register, unsigned char Mask );
      void  ClrBit(unsigned char& Register, unsigned char Mask);

     // char convertHorzMovement(unsigned char B);
      void AddPlayerToList(char n, unsigned char Pattern, unsigned char X, short Size );

      void SetCollisionLatches(char n);

      unsigned char GetRomData(unsigned short Addr);

      //Moved some long opcodes to function calls.
      void opcADC(short n2);
      void opcSBC(short n2);
      void opcPHP();

    //  void PrintRamWatch();

      void AddPlayFieldToList(char n, unsigned char Pattern, bool Left);


      void GetNuSizeInfo(char n, char& Count, unsigned short& Space, unsigned char& Len, char& MissSize);
    


};

#endif
