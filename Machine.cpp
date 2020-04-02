#include "Machine.h"  
#include <Arduboy2.h>
 
 

void  Machine::Init(Arduboy2Base parduboy) {

arduboy=parduboy;
   
  int quit = 0;
    Serial.begin(9600);

    
 
    arduboy.begin(); 
   while ( !arduboy.pressed(A_BUTTON)){ 
   };

//    ZoomMode=false;
//           if (!ZoomMode) {
//                LineSkip=3;
//                BlockWd=1;
//                WindowTop=0;
//                WindowLeft=10;
//               }else{
//                LineSkip=1;
//                BlockWd=2;
//                };
//                
   
    arduboy.setFrameRate(FRAME_RATE);
    arduboy.display();  

}
 
  

unsigned char  Machine::GetRomData(unsigned short Addr) {
   
if (Addr >= 0xF5C5 && Addr < 0xF64F)  {
    return GetFontData(Addr);
  };
    
  if (Addr >= 0xF64F && Addr < 0xF800) {
  return SprData[Addr - 0xF64F];
  }
  else  {
    char xx = 0; 
  };

   

};


  unsigned char  Machine::ReadByte(unsigned short Addr) {


    


    unsigned char RetVal = 0;
    if (Addr > 0x0 && Addr < 0x80) {
      //read from tia
      return ReadTIA(Addr); 
    };

    if (Addr >=0x80 && Addr < 0x200) {
    return  RAM[Addr - 0x80];
    }
    else if (Addr > 0x8000)
    {
      return GetRomData(Addr); // ProgRom[Addr - 0xF000];
    } 
    else
    {
      char ii = 0;
    };

    if (RetVal == 0xA5) {
      char xxxx = 0;
    };

    return RetVal;
  }

  void  Machine::WriteByte(unsigned short Addr, short B) {
 

    if (Addr < 0x2c) {
      switch (Addr) {

      case 0:
        WriteVSync(B);    // Vertical sync set-clear Bit 1"
        break;
      case 1:
         WriteVBlank(B);    // Vertical blank set-clear Bit 7,6,1"
         break;
      case 2:
        WaitForWSync();    // Wait for leading edge of horizontal blank"
        break;
      case 3:
        ResetHSyncCtr();    // Reset horizontal sync counter"
        break;
      case 4 :
        SetNumSizPlrMsl(0,B);    //  number-size player-missile 0"
        break;
      case 5:
        SetNumSizPlrMsl(1,B);    //  number-size player-missile 1"
        break;
      case 6:
        SetColLumPlr(0,B);    //  color-lum player 0"
        break;
      case 7:
        SetColLumPlr(1,B);    //  color-lum player 1"
        break;
      case 8:
        SetColLumPlyFld(B);    //  color-lum playfield"
        break;
      case 9:
        SetColLumBckGrd(B);    //  color-lum background"
        break;
      case 0xA:
        SetCtlPlyFld(B);    // Control playfield ball size & collisions"
        break;
      case 0xB:
        ReflectPlayer(0,B);    // Reflect player 0 Bit 3"
        break;
      case 0xC:
        ReflectPlayer(1,B);    // Reflect player 1 Bit 3"
        break;

      case 0xD:
        SetPlayFieldRegisterBX(0,B);    //  High Nibble"
        break;
      case 0xE:
        SetPlayFieldRegisterBX(1,B);    //  "
        break;
      case 0xF:
        SetPlayFieldRegisterBX(2,B);    //  "
        break; 
      case 0x10:
        ResetPlayer(0, DurationCtr);    // reset player 0" todo cycls
        break;
      case 0x11:
        ResetPlayer(1, DurationCtr);    // reset player 1" todo cycls
        break;
//      case 0x12:
//        ResetMissle(0, DurationCtr);    //  " todo cycls
//        break;
//      case 0x13:
//        ResetMissle(1, DurationCtr);    // " todo cycls
//        break;
//      case 0x14:
//        ResetBall(DurationCtr);    // " todo cycls
//        break;
//      case 0x15:
//        WriteAudioControl(0,B); // low nibble"
//        break;
//      case 0x16:
//        WriteAudioControl(1,B); // bits 0x1F"
//        break;
//      case 0x17:
//        WriteAudioFreq(0,B); //  bits 0x1F"
//        break;
//      case 0x18:
//        WriteAudioFreq(1,B); // low nibble"
//        break;
//      case 0x19:
//        WriteAudioVol(0,B); // low nibble"
//        break;
//      case 0x1A:
//        WriteAudioVol(1,B); // low nibble"
//        break;

//      case 0x1B:
//        SetGraphicsPlayer(0,B);    //  "
//        break;
//      case 0x1C:
//        SetGraphicsPlayer(1,B);    // "
//        break;

      case 0x1D:
        EnableMissle(0,B);    // bit 1  "
        break;
      case 0x1E:
        EnableMissle(1,B);    // bit 1"
        break;
      case 0x1F:
    //    EnableBall(B);    // bit 1"
        break;

//      case 0x20:
//        SetHorzMotionPlayer(0,B); // Hi Nibble"
//        break;
//      case 0x21:
//        SetHorzMotionPlayer(1,B); // Hi Nibble
//        break;
//      case 0x22:
//        SetHorzMotionMissle(0,B); // Hi Nibble"
//        break;
//      case 0x23:
//        SetHorzMotionMissle(1,B); // Hi Nibble"
//        break;
//      case 0x24:
//        SetHorzMotionBall(B); // Hi Nibble"
//        break;
//
//      case 0x25:
//        SetVertDelayPlayer(0,B); // bit 0"
//        break;
//      case 0x26:
//        SetVertDelayPlayer(1,B); // bit 0"
//        break;
//      case 0x27:
//        SetVertDelayBall(B); // bit 0"
//        break;
      case 0x28:
        ResetMissletoPlayer(0,B); // bit 1"
        break;
        case 0x29:
        ResetMissletoPlayer(1,B); // bit 1"
        break;

        case 0x2A:
//        ApplyHorzMotion(); //  "
        break;
        case 0x2B:
//        ClearHorzMotionRegisters(); //"
        break;
        case 0x2C:
        ClearCollisionLatches(); //"
        break;

      };
    };

    if (Addr >= 0x80  && Addr < 0x100 ) {
      RAM[Addr - 0x80] = B;
    }
    else
    {

    };

  }

  unsigned short  Machine::ReadWord(unsigned short Addr) {
    unsigned char RetVal = 0;
    if (Addr > 0x80 && Addr < 0x100) {
      unsigned short LSB = RAM[Addr - 0x80];
      unsigned short MSB = RAM[Addr - 0x80 +1];

      return  (MSB << 8) | LSB;
    }
    else if (Addr > 0x8000)
    {
       
      //unsigned short Addr2 = Addr & 0x3FFF; //depending on Mapper
      unsigned short LSB = GetRomData(Addr);
      unsigned short MSB = GetRomData(Addr + 1);

      return  (MSB << 8) | LSB;

    }
    else
    {
      char ii = 0;
    };
    return RetVal;
  }


  void  Machine::WriteVBlank(unsigned char B) { 
  /*  Vblank
      This address controls vertical blankand the latchesand dumping transistors
      on the input ports by writing into bits D7, D6, and D1 of the Vblank register.
      D1 - 1: start vertical blank
      0 : stop vertical blank
      D6 - 1 : enable I4 and I5 latches
      0 : disable latches - also resets latches to logic true
      D7 - 1 : Dump I0, I1, I2, I3 ports to ground
      0 : Remove dump path to ground
      
      
      
      You must turn on VBLANK *before* you turn on VSYNC. The "Stella Programmer's Guide" suggests that you send 30 blanked lines (at the *bottom* of the screen), then 3 lines of VSYNC (which should also be blanked), then 37 more blanked lines, then 192 lines for the game screen.
 So the sequence would be as follows:
 
(1) Turn on VBLANK.
(2) Wait for 30 lines (usually by setting the timer so you can be doing other things instead of just counting scan lines).
(3) Turn on VSYNC.
(4) Wait for 3 lines.
(5) Turn off VSYNC.
(6) Wait for 37 lines (usually by setting the timer).
(6) Turn off VBLANK.
(7) Draw your game screen for 192 lines.
(8) Loop back to (1).

 */

     YCtr = 0;
    if ((B &2) == 0) {
      //Trailing edge of VBlank
      if (VBlankSignal) {
        VBlankSignal = false;  
      //  YCtr = 0;
      };
    }
    else
    { 
      //leading edge of VBlank
      if (!VBlankSignal) {
        VBlankSignal = true; 
           YCtr = 0;
         
      };
    };
  };

  
  void  Machine::WriteVSync (unsigned char B) {
    /*Vsync
      This address controls vertical sync time by writing D1 into the Vsync latch.
      D1 - 1: start vertical sync
      0 : stop vertical sync */ 
      //Trailing edge of VSync
    YCtr = 0;
    YCtrVSync = 0;
    if ((B & 2) == 0) { 
      if (VSyncSignal) {
      VSyncSignal = false; 
     // VBlankWait(); //wait for a bit.
     if (!Skip) SameFrame=false; 
    FrameCnt++;
    Skip = ((FrameCnt % FrameSkip)!= 0);
    
         //Clear sprites from frames not displayed.
         PQ0.Clear();
         PQ1.Clear();
        if (!Skip){
          Gray++; 
        };
      }


      
      if (ReadByte(0x88)==0xFF){
        if (LeftPlayer){
              arduboy.setRGBled(0x10, 0, 0);
          }else{
              arduboy.setRGBled(0, 0, 0x10);
            }; 
        
        } else{
          arduboy.setRGBled(0, 0, 0);
          NextPlayerChange=0;
        };
      };
    unsigned long CurrTime = millis();
    if (NextPlayerChange ==0  || NextPlayerChange < CurrTime){
      LeftPlayer=!LeftPlayer;
      char Rnd = CurrTime & 3;
      NextPlayerChange = CurrTime + 1000 * 12 + Rnd * 500;

      
    }
    else    
    {
      //leading edge of VSync
      if (!VSyncSignal) { 
        VSyncSignal = true; 

        if (!VBlankSignal) { 
          //if not in vblank then update  

        };
      }
    };
   

  };

 

//NoBkGrnd flag is because the playfield can be the bottom layer or the top layer.
  void Machine::DrawPlayField(bool NoBkGrnd) {


    unsigned char MissleY0 = ReadByte(0xA6 + 0) - 0x10;
    unsigned char MissleX0 = (TankX[2 + 0] + 3) ;
    unsigned char MissleY1 = ReadByte(0xA6 + 1) - 0x10;
    unsigned char MissleX1 = (TankX[2 + 1] + 3) ;
    unsigned char TankX0 = TankX[0];
    unsigned char TankY0 = ReadByte(0xA4 + 0) - 0x10;
    unsigned char TankX1 = TankX[1];
    unsigned char TankY1 = ReadByte(0xA4 + 1) - 0x10;
    
  

    unsigned char Data = 0;
    unsigned char Mask = 0;

    bool ScoreMode = ((ControlPlayFieldBallRegister & 6) == 2);
    bool Mirrored = false;
    bool MaskDn = true;  //bit direction
    bool NoCollision = false;
    char ColPtr = 0;

    for (int Side = 0;Side < 2;Side++) {

      if (Side == 1) {
        Mirrored = (ControlPlayFieldBallRegister & 1);
      }

      for (int i = 0;i < 20;i++) {
        if (i == 0) {
          Mask = 0x10;
          Data = PlayFieldPattern[0];  
          if (UseSplitPlayfield) {
            if (Side == 0) {
              Data = PlayFieldPatternLt[0];
            }
            else {
              Data = PlayFieldPatternRt[0]; 
            };

          };
          MaskDn = false;
        }
        else if (i == 4) {
          Mask = 0x80;
          Data = PlayFieldPattern[1];
          if (UseSplitPlayfield) {
            if (Side == 0) {
              Data = PlayFieldPatternLt[1];
            }
            else {
              Data = PlayFieldPatternRt[1];
            };

          };
          MaskDn = true;
        }
        else if (i == 12) {
          Mask = 0x1;
          Data = PlayFieldPattern[2];
          if (UseSplitPlayfield) {
            if (Side == 0) {
              Data = PlayFieldPatternLt[2];
            }
            else {
              Data = PlayFieldPatternRt[2];
            };

          };
          MaskDn = false;
        };
        char BlkSize = 4 * BlockWd;

        unsigned int Col = BackgroundColor;
        if ((Mask & Data) > 0) {

          if (ScoreMode) {
            Col = PlayerColor[Side];  
          }
          else
          {
            Col = PlayFieldColor;
          };
        };


        unsigned short col = i + (Side * 20);

        if (Mirrored) {
          col = (19 - i) + (Side * 20);
        };
 


        if (Mask & Data) {
          //We have a block of playfield here so check if we have a missile also.
          // Note using YCtr here instead of YPos, because we are comparing to values stored in game coordinates.
          if  (YCtr <= MissleY0+2 && YCtr >= MissleY0 - 2) {
            if (MissleX0 >= (col * BlkSize / BlockWd) && MissleX0 <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1))  {
            CollisionLatches[4] |= 0x80;
            };
          };
          if (YCtr <= MissleY1+2 && YCtr >= MissleY1 - 2) {
            if (MissleX1 >= (col * BlkSize / BlockWd) && MissleX1 <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1)) {
              CollisionLatches[5] |= 0x80;
            };
          };

          //We have a block of playfield here so check if we have a Tank also.  
          if (YCtr <  TankY0 && YCtr >  TankY0- 12) {
            if (TankX0 >= (col * BlkSize / BlockWd) && TankX0 <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1)) {
             
              CollisionLatches[2] |= 0x80;
            };
          };

          
          if (YCtr <  TankY0 && YCtr >  TankY0 - 12) {
            if ((TankX0+8) >= (col * BlkSize / BlockWd) && (TankX0 + 5) <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1)) {
             
              CollisionLatches[2] |= 0x80;
            };
          };

          if (YCtr == TankY1 || YCtr == TankY1 - 13) {
            if (TankX1 >= (col * BlkSize / BlockWd) && TankX1 <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1)) {
              CollisionLatches[3] |= 0x80;
            };
          };

          if (YCtr == TankY1 || YCtr == TankY1 - 13) {
            if ((TankX1 + 8) >= (col * BlkSize / BlockWd) && (TankX1 + 5) <= (col * BlkSize / BlockWd + BlkSize / BlockWd - 1)) {
              CollisionLatches[3] |= 0x80;
            };
          };

        };
 

        if (!NoBkGrnd || (Mask & Data)) {
          put_HLine(col * BlkSize, BlkSize, YPos, WHITE); 
        };
        //SDL_UpdateWindowSurface(window);

        if (MaskDn) {
          Mask = Mask >> 1;
        }
        else
        {
          Mask = Mask << 1;
        }

      }

    };

    UseSplitPlayfield = false;
  }


  



  void Machine::DrawPlayer() {
     
    for (char Qnumber = 0;Qnumber <= 1;Qnumber++) {
      unsigned char AntiQ = Qnumber ^ 1;
      unsigned char MissleY = ReadByte(0xA6 + AntiQ) - 0x10;
      unsigned char MissleX = (TankX[2 + AntiQ] + 3);
      unsigned char TnkY  = ReadByte(0xA4 + AntiQ) - 0x10;
      unsigned char TnkX  = TankX[AntiQ];

      /*  if (Qnumber >3) {
          return;
        };*/
      Queue* Q;
      Q = &PQ0;
      if (Qnumber == 1) {
        Q = &PQ1;  
      };

      if (Q->Count() == 0) continue;

      bool last = false;

      while (!last) {

        PlayerObj P = Q->Next();
        last = P.Last;

   


//if (Qnumber==0){
//  
//Serial.print("YCtr: ");
//Serial.print(YCtr,HEX);
//Serial.print("YPos: ");
//Serial.print(YPos,HEX);
//Serial.print(" last: ");
//Serial.print(last,HEX);
//Serial.print("  Pattern: ");
//Serial.println(P.Pattern,HEX);
//};



        //Missle Collision detection
        if (MissleEnabled[AntiQ] && !(ResetMissletoPlayerRegister[AntiQ] & 2)) {
          if (YCtr <= MissleY+2 && YCtr >= MissleY - 2)    {
            if (MissleX  >= P.X && MissleX  <= P.X + 8) {
              CollisionLatches[AntiQ] |= 0x80;
            };
          };
        };
        // Tank Vs Tank Collision
        if (YCtr <= TnkY && YCtr >= TnkY  - 5) {
          if (TnkX >= P.X && TnkX <= P.X + 8) {
           
           
             CollisionLatches[7] |= 0x80;
          };
          if (TnkX +8 >= P.X && TnkX +8 <= P.X + 8) { 
             CollisionLatches[7] |= 0x80;
          };
        }

        unsigned char data = P.Pattern;
        unsigned char Mask = 0x80;

        char PixelSize = BlockWd;
        char Offset = 0; //way to center large sprites

        if ((P.Size & 0x7) == 5) {
          PixelSize = BlockWd * 2;
          Offset = 0 * PixelSize;  //changedto 0 to get stairs to line up
        };
        if ((P.Size & 0x7) == 7) {
          PixelSize = BlockWd * 4; //NumSizPlrMissle[n] 
          Offset = 3 * PixelSize;  // changed to 3 to get candle light to line up.
        };

        if (data != 0) {
          char sss = 0;
        };

        if (Qnumber == 1 && ((Gray&3)==0) ) { 
          unsigned char Chk =0xAA;
            Chk=Chk>>(((YPos ^ Gray) & 1)  &1);
          data = data & Chk;
        }

        for (int i = 0;i < 8;i++) {
          if (P.Reversed) {
            //reflected
            if (data & Mask) put_HLine((P.X * BlockWd) - Offset + (7 - i) * PixelSize, PixelSize, YPos, P.Color);
          }
          else {
            if (data & Mask) put_HLine((P.X * BlockWd) - Offset + i * PixelSize, PixelSize, YPos, P.Color);

          };

          Mask = Mask >> 1;
        };

      };
    };
     
     

   
  }






  void Machine::DrawMissle() {
    //MISSLE
  //  0  One copy(X.........)
  //  1  Two copies - close(X.X.......)
  //  2  Two copies - medium(X...X.....)
  //  3  Three copies - close(X.X.X.....)
  //  4  Two copies - wide(X.......X.)
  //  5  Double sized player(XX........)
  //  6  Three copies - medium(X...X...X.)
  //  7  Quad sized player(XXXX......)
    for (int n = 0;n < 2;n++) {
      if (MissleEnabled[n]  && !(ResetMissletoPlayerRegister[n] & 2)) {

        

        char Ctr = 1;
        unsigned short Space = 16;
        unsigned char len = 8;

        char MissSize = 4 * BlockWd;
          GetNuSizeInfo(n, Ctr, Space , len, MissSize);
       


          for (int i = 0;i < Ctr;i++) {

          put_HLine((TankX[2 + n] + 3) * BlockWd + (i * Space), MissSize, YPos, PlayerColor[n]);

          };
          
    
      };
    };

  }

  void Machine::DrawBall() {
//    if (BallEnabled) {
//      unsigned char Size = (ControlPlayFieldBallRegister & 0x30) >> 4;
//      unsigned char Mask = 0x80;
//      char BlkSize = Size * BlockWd;
//      //todo what color is ball?
//      put_HLine((BallXposRegister  ), BlkSize, YPos, PlayerColor[0]);
//
//    };
  }



  void Machine::DrawScanline() {

    //Video Priority

    //  See also CTRLPF.1 (SCORE), and CTRLPF.2 (PRIORITY)

    //  Object Colors and Priorities
    //  When pixels of two or more objects overlap each other, only the pixel of the object with topmost priority is drawn to the screen.The normal priority ordering is :
    //Priority     Color    Objects
    //  1 (highest)COLUP0   P0, M0(and left side of PF in SCORE - mode)
    //  2            COLUP1   P1, M1(and right side of PF in SCORE - mode)
    //  3            COLUPF   BL, PF(only BL in SCORE - mode)
    //  4 (lowest)COLUBK   BK
    //  Optionally, the playfieldand ball may be assigned to have higher priority(by setting CTRLPF.2).The priority ordering is then :
    //Priority     Color    Objects
    //  1 (highest)COLUPF   PF, BL(always, the SCORE - bit is ignored)
    //  2            COLUP0   P0, M0
    //  3            COLUP1   P1, M1
    //  4 (lowest)COLUBK   BK
    //  Objects of the same color are having the same priority(it makes no difference which pixel is drawn topmost if both pixels are having the same color).

  
if (YCtr == 0) YPos = 0;



    if (LineSkip > 0) {
      LineSkip = 3;
      if (YCtr < 10) LineSkip = 2;
        if (YCtr % LineSkip != 1) { 
      //Don't clear because need pixels for next line
          return;
        };
       //skip some space at top of screen
      if (YCtr>13 && YCtr <17) return;
        
    };
      YPos++;

    if (YPos > 192) return;

     // B&W this is a lot different than original.
     // It doesn't matter whether we do the player above the playfield or not because they are the same color.
    // We don't have to draw the background colors because they are the same as we started.

        //Skip is for skipping the output of a frame.
      //if (!Skip)  put_HLine(0, 160 * BlockWd, YPos, BackgroundColor);
      if (!Skip)  DrawMissle();
      //if (!Skip)  DrawBall();   Don't need this.
      if (!Skip)  DrawPlayer();
      if (!Skip)  DrawPlayField(true); 
      
  


  };


  void  Machine::WaitForWSync() {
    //A cycle is 3 color clocks
    //0-67 color clocks is the retrace
    //68-227 is the visible scanline.
 

    //if (!VSyncSignal) {
      //no vsync so we can start drawing screen.  
      DrawScanline();
      YCtr += 1;
      YCtrVSync += 1;
    //};
      //if there is no vblank signal reset the yctr at 37
      if  ((YCtr == YCtrVSync) && YCtrVSync == 37) YCtr = 0;
      
  };
  void  Machine::ResetHSyncCtr() {};
  void  Machine::SetNumSizPlrMsl(char n, unsigned char B) {
    //These addresses control the numberand size of playersand missiles.
      /*Bit  Expl.
      0 - 2  Player - Missile number & Player size(See table below)
      3    Not used ? ? ?
      4 - 5  Missile Size(0..3 = 1, 2, 4, 8 pixels width)
      6 - 7  Not used
      Player - Missile number & player size(Picture shows shape, 8 pix per char)
      0  One copy(X.........)
      1  Two copies - close(X.X.......)
      2  Two copies - medium(X...X.....)
      3  Three copies - close(X.X.X.....)
      4  Two copies - wide(X.......X.)
      5  Double sized player(XX........)
      6  Three copies - medium(X...X...X.)
      7  Quad sized player(XXXX......)
      1 / 2 television line(80 clocks), 8 clocks per character*/
    NumSizPlrMissle[n] = B;
  };
  void  Machine::SetColLumPlr(char n, unsigned char B) {
    PlayerColor[n] = GetColor(B);
  };
  void  Machine::SetColLumPlyFld(unsigned char B) {
    PlayFieldColor = GetColor(B);
  };
    
  void  Machine::SetColLumBckGrd(unsigned char B) {
    BackgroundColor = GetColor(B);
  };

  void  Machine::SetCtlPlyFld(unsigned char B) {
  //CTRLPF
  /*    D0 - (REF)reflect playfield, see above
      D1 - (SCORE)left half of playfield gets color of player 0
      right half gets color of player 1
      D2 - (PFP)playfield gets priority over players so they move
      behind playfield
      D5, D4 - Ball Size       
      if 00, 1 clock wide
      if 01, 2 clocks wide
      if 10, 4 clocks wide
      if 11, 8 clocks wide*/
    ControlPlayFieldBallRegister = B;
  };
  void  Machine::ReflectPlayer(char n, unsigned char B) {

    //Bit  Expl.
    //  0 - 2  Not used
    //  3    Reflect Player Graphics(0 = Normal / MSB first, 1 = Mirror / LSB first)
    //  4 - 7  Not used
    //  Used to mirror the GRP0 and GRP1 registers.
    PlayerReflected[n] = B;
  };
  void  Machine::SetPlayFieldRegisterBX(char n,unsigned char B) {
    if (n == 0) B = B & 0xF0;
    PlayFieldPattern[n] = B;
  }; 


  void Machine::SetBit(unsigned char& Register, unsigned char Mask ) {
      
      Register |= Mask; 
  }
  void Machine::ClrBit(unsigned char& Register, unsigned char Mask) {

    Register &= (Mask^0xFF);
  }



  void Machine::HandleKeyboard() {

    LastUpPressed = UpPressed;
    LastDnPressed = DnPressed;
    LastRtPressed = RtPressed;
    LastLtPressed = LtPressed;
    LastAPressed = APressed;
    LastBPressed = BPressed;

    
    UpPressed = arduboy.pressed(UP_BUTTON);
    DnPressed = arduboy.pressed(DOWN_BUTTON);
    RtPressed = arduboy.pressed(RIGHT_BUTTON);
    LtPressed = arduboy.pressed(LEFT_BUTTON);
    APressed = arduboy.pressed(A_BUTTON);
    BPressed = arduboy.pressed(B_BUTTON);

//START
      if ( BPressed && LastBPressed && APressed  ){
       ClrBit(SwitchBRegister, 0x1); 
     }else{
       SetBit(SwitchBRegister, 0x1);
     };
     
//SELECT
      if ( BPressed && LastBPressed &&  UpPressed  ){
       ClrBit(SwitchBRegister, 0x2);  
     }else{
       SetBit(SwitchBRegister, 0x2);
     };
     
    

 //Fire
   if (  APressed){
           ClrBit(InputRegister[LeftPlayer?4:5], 0x80 ); 
   }else{
           SetBit(InputRegister[5], 0x80);
           SetBit(InputRegister[4], 0x80);
   };
   


 

    if (UpPressed){
        ClrBit(SwitchARegister, LeftPlayer?0x10:0x1); //P1 UP
    }else{
        SetBit(SwitchARegister,  0x10 );
        SetBit(SwitchARegister,  0x1);
    };
    if ( DnPressed){
        ClrBit(SwitchARegister, LeftPlayer?0x20:0x2); //P1 DN
    }else{ 
        SetBit(SwitchARegister,  0x20 );
        SetBit(SwitchARegister,  0x2);
    };
    if ( LtPressed){
        ClrBit(SwitchARegister, LeftPlayer?0x40:0x4); //P1 L
    }else{
        SetBit(SwitchARegister,  0x40 );
        SetBit(SwitchARegister,  0x4);
    };
    if ( RtPressed){
        ClrBit(SwitchARegister, LeftPlayer?0x80:0x8); //P1 R
    }else{
        SetBit(SwitchARegister,  0x80 );
        SetBit(SwitchARegister,  0x8);
    };

 
}


  void  Machine::ResetPlayer(char n, unsigned char cycles) {

return;
  
  };

void Machine::opcPHP(){ 
    T = 0x80 * fNeg;
    T = T | 0x40 * fOverflow;
    T = T | 0x20;  //unused
    //10 is break flag;
    T = T | 8 * fDecMod;
    T = T | 4 * fIntDis;
    T = T | 2 * fZero;
    T = T | fCarry;
    WriteByte(StkPtr, T);
    StkPtr--; 
}



//n1 is always A
 void Machine::opcADC( short n2) {
    //if we have a carry add 1
    if (fCarry) A += 1;

    fCarry = false;
    if (fDecMod) {
      T = (A & 0x0F) + (n2 & 0x0F);
      if (T > 9) T = (T - 10) + 0x10;
      A = T + (A & 0xF0) + (n2 & 0xF0);
      if (A > 0x99) {
        A -= 100;
        fCarry = true;
      };
    }
    else {
      A = A + n2;
      if (A > 0xFF) {
        A = A & 0xFF;
        fCarry = true;
      };
    }; 
  };

  
void Machine::opcSBC(short n2) {

    if (!fCarry) A -= 1;

    short Total = A - n2;

    fNeg = (Total & 0x80);
    fOverflow = (A ^ n2) & (A ^ Total) & 0x80;
    fZero = (Total == 0);

    if (fDecMod)
    {

      short LowDigit = (A & 0x0f) - (n2 & 0x0f);
      short HighDigit = (A & 0xf0) - (n2 & 0xf0);
      if (LowDigit & 0x10)
      {
        LowDigit -= 6;
        HighDigit--;
      }
      if (HighDigit & 0x0100)
        HighDigit -= 0x60;

      T = (LowDigit & 0x0f) | (HighDigit & 0xf0);

      fCarry = (Total & 0xff00) == 0;
      A=T;
    }
    else
    {
      fCarry = (Total & 0xff00) == 0;
     A = (Total & 0xFF);
    };
  }



  void Machine::AddPlayFieldToList(char n, unsigned char Pattern,  bool Left) {
    UseSplitPlayfield = true;

      if (Left) {
        PlayFieldPatternLt[n] = Pattern;
      }
      else {
        PlayFieldPatternRt[n] = Pattern;

      };

  };




  //this adds a player to the list to be displayed.
  void Machine::AddPlayerToList(char n, unsigned char Pattern, unsigned char XPos, short Size     ) {
 

      char Ctr = 1;
      unsigned short Space = 16;
      unsigned char len = 8;
      char MissSize = 1;
      if (Size < 0) { 
          GetNuSizeInfo(n, Ctr, Space, len, MissSize);
      }
   

    for (int i = 0;i < Ctr;i++) {

      PlayerObj P;
      P.Last = (i == Ctr - 1);
      P.Pattern = Pattern;
      P.Color = PlayerColor[n];
      short TXPos = XPos + (i * Space);
      if (TXPos > 0xA0) TXPos -= 0xA0;
      P.X = TXPos;
      P.P0 = (n == 0);
      P.Reversed = (PlayerReflected[n] & 0x08);
      if (Size < 0) {
        P.Size = NumSizPlrMissle[n];
      }
      else {
        P.Size = Size;
      }; 

      //The idea here is we can push pixels into the queue in chunks and they come out one at a time.
      //The original game pushed every other line and the second line just duplicated.
      //Using the Q system we can work at full scale with 2 or even change to 3 so we have 50% larger sprites
      //like we do at small scale.  We can push pixels on lines that don't display and they will hang around
      //until we hit a line that does display.
      if (P.Pattern != 0) {
          if (n == 0) {
          PQ0.Add(P);
         // if (LineSkip<2)   PQ0.Add(P);
         // if (LineSkip < 3)     PQ0.Add(P);
          } 
        else 
          {
          PQ1.Add(P);
         // if (LineSkip < 2)   PQ1.Add(P);
         // if (LineSkip < 3)   PQ1.Add(P);
          };
      };
  
    };
 

  }



void Machine::GetNuSizeInfo(char n, char &Count, unsigned short &Space, unsigned char &Len, char& MissSize) {
     Count = 1;
    Space = 16;
    Len = 8;
      switch (NumSizPlrMissle[n]) {
      case 0:
        Count = 1;
        break;
      case 1:
        Count = 2;
        break;
      case 2:
        Count = 2;
        Space = 32;
        break;
      case 3:
        Count = 3;
        break;
      case 4:
        Count = 2;
        Space = 64;
        break;
      case 5:
        Len = 0x10;
        break;
      case 6:
        Count = 3;
        Space = 32;
        break;
      case 7:
        Len = 0x20;
        break;
      };

      switch (NumSizPlrMissle[n] & 0x30) {
      case 0:
        MissSize = 1 * BlockWd;
        break;
      case 0x8:
        MissSize = 2 * BlockWd;
        break;
      case 0x10:
        MissSize = 4 * BlockWd;
        break;
      case 0x18:
        MissSize = 8 * BlockWd;
        break;
      }

  };



  void  Machine::WriteAudioControl(char n, unsigned char B) {};
  void  Machine::WriteAudioFreq(char n, unsigned char B) {};
  void  Machine::WriteAudioVol(char n, unsigned char B) {};
  void  Machine::SetGraphicsPlayer(char n, unsigned char B) {
 

    PlayerPattern[n] = B;
  };
  void  Machine::EnableMissle(char n, unsigned char B) { 
    MissleEnabled[n] = (B & 0x2);
  };
//  void  Machine::EnableBall(unsigned char B) {
//    BallEnabled = (B & 0x2);
//  };
//  void  Machine::SetHorzMotionPlayer(char n, unsigned char B) {
//    if (HorzMotionPlayer[1] == 0xe0) {
//      char sss = 1;
//    };
//
//    HorzMotionPlayer[n] = B;
//  };
//  void  Machine::SetHorzMotionMissle(char n, unsigned char B) {
//    HorzMotionMissle[n] = B;
//  };
//  void  Machine::SetHorzMotionBall(unsigned char B) {
//    HorzMotionBall = B; 
//  };
//  void  Machine::SetVertDelayPlayer(char n, unsigned char B) {
//    if (n == 0) {
//      VertDelayPX[1] = (B & 1);
//    }
//    else
//    {
//      VertDelayPX[0] = (B & 1);
//    };
//   
//
//  };
//  void  Machine::SetVertDelayBall(unsigned char B) {
//    VertDelayBall = (B & 1);
//  };

  //
  void  Machine::ResetMissletoPlayer(char n, unsigned char B) {
    ResetMissletoPlayerRegister[n] = B;
  };
//  void  Machine::ApplyHorzMotion() {
//    for (int n = 0;n < 2;n++) {
//
//
//      if (n == 1) {
//        char sss = 1;
//        return;
//      };
//
//      //PlayerXposRegister[n]  -= convertHorzMovement(HorzMotionPlayer[n]);
//      //PlayerXposRegister[n] &= 0x7F; //todo?
//      //
//      //MissleXposRegister[n] -= convertHorzMovement(HorzMotionMissle[n]);
//      //MissleXposRegister[n] &= 0xFF;
//
//      if (PlayerXposRegister[1] == 0x3B) {
//        char sss = 1;
//      };
//    }
//    BallXposRegister  -= convertHorzMovement(HorzMotionBall ) + 4;
//    BallXposRegister &= 0xFF;
//       
//  
//  };
//
//  char Machine::convertHorzMovement(unsigned char B) {
//    char RetVal = 0;
//    if (B == 0) return 0;
//
//    if (B < 0x80) {
//      RetVal = B >> 4;
//      return RetVal;
//    };
//    RetVal = (B >> 4);
//      RetVal = RetVal | 0xF0;
//    return RetVal;
//  };
//
//  void  Machine::ClearHorzMotionRegisters() {
//    HorzMotionPlayer[0] = 0;
//    HorzMotionPlayer[1] = 0;
//    HorzMotionMissle[0] = 0;
//    HorzMotionMissle[1] = 0;
//      HorzMotionBall = 0;  
//  };

  void Machine::SetCollisionLatches(char n) {
     

  }


  void Machine::ClearCollisionLatches() {
    for (int n = 0;n < 8;n++) {
      CollisionLatches[n] = 0;
    };
 

  };

  unsigned char   Machine::ReadCollisionMissleX2Player(char n) {
    return CollisionLatches[n];
  };
  unsigned char   Machine::ReadCollisionPlayerX2PFBall(char n) {
    return CollisionLatches[2+n];
  };
  unsigned char  Machine::ReadCollisionMissleX2PFBall(char n) {
    return CollisionLatches[4+n];
  };
  unsigned char   Machine::ReadCollisionPF2Ball() {
    return CollisionLatches[6];
  };
  unsigned char  Machine::ReadCollisionMissle2MPlayer2P() { 
    return CollisionLatches[7];
  };
  unsigned char   Machine::ReadInput(char n) {

    return InputRegister[n];

  };
  unsigned char   Machine::ReadJoystick(char n) {
    return 0;
  };


  unsigned char Machine::ReadTIA(unsigned short Addr) {
    switch (Addr & 0x0F) {
    case 0:
      return ReadCollisionMissleX2Player(0);
      break;
    case 1:
      return ReadCollisionMissleX2Player(1);
      break;
    case 2:
      return ReadCollisionPlayerX2PFBall(0);
      break;
    case 3:
      return ReadCollisionPlayerX2PFBall(1);
      break;
    case 4:
      return ReadCollisionMissleX2PFBall(0);
      break;
    case 5:
      return ReadCollisionMissleX2PFBall(1);
      break;
    case 6:
      return ReadCollisionPF2Ball();
      break;
    case 7:
      //SetCollisionLatches(7); //not sure if this is good place
      return ReadCollisionMissle2MPlayer2P();
      break;
    case 8:
      return ReadInput(0);
      break;
    case 9:
      return ReadInput(1);
      break;
    case 0xa:
      return ReadInput(2);
      break;
    case 0xb:
      return ReadInput(3);
      break;
    case 0xc:
      return ReadInput(4);
      break;
    case 0xd:
      return ReadInput(5);
      break;
    default:
      //Stella says   return (result & 0xC0) | (lastDataBusValue & 0x3F);
      return 0x0f;//TODO  0F??

    }
  /*  30      CXM0P   11......read collision M0 - P1, M0 - P0(Bit 7, 6)
      31      CXM1P   11......read collision M1 - P0, M1 - P1
      32      CXP0FB  11......read collision P0 - PF, P0 - BL
      33      CXP1FB  11......read collision P1 - PF, P1 - BL
      34      CXM0FB  11......read collision M0 - PF, M0 - BL
      35      CXM1FB  11......read collision M1 - PF, M1 - BL
      36      CXBLPF  1.......  read collision BL - PF, unused
      37      CXPPMM  11......read collision P0 - P1, M0 - M1
      38      INPT0   1.......  read pot port
      39      INPT1   1.......  read pot port
      3A      INPT2   1.......  read pot port
      3B      INPT3   1.......  read pot port
      3C      INPT4   1.......  read input
      3D      INPT5   1.......  read input*/


    return 0; 

  };
  unsigned char Machine::ReadPIA(unsigned short Addr) {
    switch (Addr) {
    case 0x280:
      //SWCHA
      return SwitchARegister;
      break;
    case 0x281:
      //SWACNT
      break;

    case 0x282:
      return SwitchBRegister;
      //SWCHB
  /*      D7: P1 difficulty(0 = amateur, 1 = pro)
        D6 : P0 difficulty(0 = amateur, 1 = pro)
        D5 : not used
        D4 : not used
        D3 : color or B / W(0 = B / W, 1 = color)
        D2 : not used
        D1 : game select(0 = pressed)
        D0 : game reset(0 = pressed)*/
      break;
    case 0x284:
      //INTIM - PIA Current Timer Value (Read only)
      //We don't really want a timer if they are counting for vblanks.  So move really fast.
      //On the other hand, some games need it.
      return 0; 
      break;

     }
    return 0xFF;
  };
  void Machine::WriteTIA(unsigned short Addr, unsigned char B) {
  /*  00      VSYNC   ......1.  vertical sync set - clear
      01      VBLANK  11....1.  vertical blank set - clear
      02      WSYNC   <strobe>  wait for leading edge of horizontal blank
      03      RSYNC   <strobe>  reset horizontal sync counter
      04      NUSIZ0  ..111111  number - size player - missile 0
      05      NUSIZ1  ..111111  number - size player - missile 1
      06      COLUP0  1111111.  color - lum player 0 and missile 0
      07      COLUP1  1111111.  color - lum player 1 and missile 1
      08      COLUPF  1111111.  color - lum playfield and ball
      09      COLUBK  1111111.  color - lum background
      0A      CTRLPF  ..11.111  control playfield ball size & collisions
      0B      REFP0   ....1...  reflect player 0
      0C      REFP1   ....1...  reflect player 1
      0D      PF0     1111....  playfield register byte 0
      0E      PF1     11111111  playfield register byte 1
      0F      PF2     11111111  playfield register byte 2
      10      RESP0   <strobe>  reset player 0
      11      RESP1   <strobe>  reset player 1
      12      RESM0   <strobe>  reset missile 0
      13      RESM1   <strobe>  reset missile 1
      14      RESBL   <strobe>  reset ball
      15      AUDC0   ....1111  audio control 0
      16      AUDC1   ....1111  audio control 1
      17      AUDF0   ...11111  audio frequency 0
      18      AUDF1   ...11111  audio frequency 1
      19      AUDV0   ....1111  audio volume 0
      1A      AUDV1   ....1111  audio volume 1
      1B      GRP0    11111111  graphics player 0
      1C      GRP1    11111111  graphics player 1
      1D      ENAM0   ......1.  graphics(enable) missile 0
      1E      ENAM1   ......1.  graphics(enable) missile 1
      1F      ENABL   ......1.  graphics(enable) ball
      20      HMP0    1111....  horizontal motion player 0
      21      HMP1    1111....  horizontal motion player 1
      22      HMM0    1111....  horizontal motion missile 0
      23      HMM1    1111....  horizontal motion missile 1
      24      HMBL    1111....  horizontal motion ball
      25      VDELP0  .......1  vertical delay player 0
      26      VDELP1  .......1  vertical delay player 1
      27      VDELBL  .......1  vertical delay ball
      28      RESMP0  ......1.  reset missile 0 to player 0
      29      RESMP1  ......1.  reset missile 1 to player 1
      2A      HMOVE   <strobe>  apply horizontal motion
      2B      HMCLR   <strobe>  clear horizontal motion registers
      2C      CXCLR   <strobe>  clear collision latches*/
  };
   


   
  void  Machine::WriteStackWord(unsigned short W) {
    short B = W & 0xFF;
    WriteByte(StkPtr  , B);
    StkPtr--;
    B = W >> 8;
    B = B & 0xFF;
    WriteByte(StkPtr  , B);
    StkPtr--;  
  }

  void  Machine::WriteStackByte(short B) {
    WriteByte(StkPtr  , B);
    StkPtr--;
  }
  unsigned short  Machine::ReadStackWord() {
    StkPtr++;
    unsigned short MSB = ReadByte(StkPtr  );
    StkPtr++;
    unsigned short LSB = ReadByte(StkPtr  );
    return MSB << 8 | LSB;
  }

  unsigned char  Machine::ReadStackByte() {
    StkPtr++;
    return ReadByte(StkPtr  );
  }

  //Set the flags from a word.
  void  Machine::SetProcStatWord(unsigned short W) {

  }


  unsigned int  Machine::GetColor(unsigned char col ) {
          switch (col){ 
            case 0x0: 
            return BLACK;
            break;
            default:
            return WHITE;
          }; 
  }
 

  void Machine::put_pixel32(short x, short y, unsigned short PixelColor)
  {

  x=x- (x/HorScale);
    
    if (x < WindowLeft) return;
    if (y < WindowTop) return;
    if (x >= (WindowLeft + WindowWidth)) return;
    if (y >= (WindowTop + WindowHeight)) return;

    x-=WindowLeft;
    y-=WindowTop;

    
    
         arduboy.drawPixel(x  , y, PixelColor);
    
  }

  void  Machine::put_HLine(short x, short len, short y, unsigned int PixelColor)
  {

  //Tighten up the field horrizonally.
  x=x-(x/HorScale);

  //Select a window of the emulated screen
  if ((x + len) < WindowLeft) return;
    if (x > (WindowLeft + WindowWidth)) return;

    if (x + len >= WindowLeft + WindowWidth) len = len-  ((x + len) - (WindowLeft + WindowWidth) );
    if (x < WindowLeft) {
      len = len- (WindowLeft - x);
      x = WindowLeft;
      };
    if (len <= 0) return;
    if (y < WindowTop) return;
    if (y >= WindowTop + WindowHeight) return;
 
    
    x-=WindowLeft;
    y-=WindowTop;
    

    for (int XIndex =0;XIndex < len;XIndex ++){ 
                            arduboy.drawPixel(x + XIndex, y, PixelColor);
    };
     
  };



  
  void  Machine::VBlankWait() {

//    unsigned long TickCtr = SDL_GetTicks(); 
//      while (TickCtr - LastVBlank < FrameTime) {
//        TickCtr = SDL_GetTicks();
//      };
//
//      LastVBlank = TickCtr;

    //if (LastVBlank == 0) LastVBlank = SDL_GetTicks();

    //unsigned long TickCtr = (SDL_GetTicks() - LastVBlank) / 2;
    //if (TickCtr > 1) {
    //  SDL_Delay(TickCtr);
    //  LastVBlank = SDL_GetTicks();
    //};

  };
 

  void  Machine::DisplayScreen() {

 




 

 

//    unsigned long TickCtr = SDL_GetTicks();
//    if (TickCtr- LastVBlank < FrameTime) return;
     //Display screen
     //DisplayNameTable(0);
     
     
    if (!fIntDis) {
    /* BackgroundDisplay();
     DrawSprite();*/  
      WriteStackWord(00); //todo write flags.
      WriteStackWord(PC);
        PC = NMIVector;
    };


  }



  void  Machine::Run() {

    //Set this to true, run until we hit the vsync.
    //Then exit this loop back to outer loop.
    SameFrame=true;

    while (SameFrame) {
 
      HandleKeyboard();

      DisplayScreen();



      //BEGIN SWITCH
 

 






//END SWITCH









    };//End While Loop

     
  }

 
