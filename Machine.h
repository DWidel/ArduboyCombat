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

  bool fCarry; 
  bool fZero;
  bool fIntDis = true;
   bool fDecMod;
   bool fBreak;
    bool fOverflow;
   bool fNeg; 
    
 

 
 
 
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
