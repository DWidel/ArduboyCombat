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

 
//Traded some program space for Ram space.
//Originally just the font but had to keep adding to it.
unsigned char GetFontData(unsigned short Addr) {
 


       switch (Addr) {
        case 0xF5C5:
        case 0xF5C9:
          return 0xE;
          break;
        case 0xF5C6:
        case 0xF5C7:
        case 0xF5C8:
        case 0xF602:
        case 0xF603:
        case 0xF604:
        case 0xF613:
          return 0xA;
          break;
        case 0xF5CA:
        case 0xF5CB:
        case 0xF5CC:
        case 0xF5CD:
        case 0xF5CE:
        case 0xF5D0:
        case 0xF5D5:
        case 0xF5D7:
        case 0xF5DC:
        case 0xF5DD:
        case 0xF5E1:
        case 0xF5E9:
        case 0xF5EA:
        case 0xF5EB:
        case 0xF5EC:
        case 0xF5F5:
          return 0x22;
          break;
        case 0xF5D2:
        case 0xF5DF:
        case 0xF5E4:
        case 0xF63D:
        case 0xF63E:
          return 0x88;
          break;
        case 0xF5D6:
          return 0x66;
          break;
        case 0xF5D9:
        case 0xF5DA:
        case 0xF5E6:
        case 0xF5EE:
        case 0xF5F0:
        case 0xF5F3:
        case 0xF645:
        case 0xF646:
        case 0xF648:
          return 0xAA;
          break;
        case 0xF5F7:
        case 0xF607:
          return 0xF8;
          break;
        case 0xF5F8:
        case 0xF608:
          return 0xF7;
          break;
        case 0xF5F9:
        case 0xF609:
        case 0xF60A:
          return 0xF6;
          break;
        case 0xF5FA:
        case 0xF5FB:
        case 0xF5FC:
        case 0xF60B:
          return 0x6;
          break;
        case 0xF5FD:
        case 0xF60C:
        case 0xF60D:
          return 0x16;
          break;
        case 0xF5FE:
        case 0xF60E:
          return 0x17;
          break;
        case 0xF5FF:
        case 0xF60F:
          return 0x18;
          break;
        case 0xF600:
        case 0xF610:
          return 0x19;
          break;
        case 0xF601:
        case 0xF611:
        case 0xF612:
          return 0x1A;
          break;
        case 0xF605:
        case 0xF614:
        case 0xF615:
          return 0xFA;
          break;
        case 0xF606:
        case 0xF616:
          return 0xF9;
          break;
        case 0xF617:
          return 0xE8;
          break;
        case 0xF618:
          return 0xE6;
          break;
        case 0xF619:
          return 0xE4;
          break;
        case 0xF61A:
          return 0xF4;
          break;
        case 0xF61B:
          return 0x4;
          break;
        case 0xF61C:
          return 0x14;
          break;
        case 0xF61D:
          return 0x24;
          break;
        case 0xF61E:
          return 0x26;
          break;
        case 0xF61F:
          return 0x28;
          break;
        case 0xF620:
          return 0x2A;
          break;
        case 0xF621:
          return 0x2C;
          break;
        case 0xF622:
          return 0x1C;
          break;
        case 0xF623:
          return 0xC;
          break;
        case 0xF624:
          return 0xFC;
          break;
        case 0xF625:
          return 0xEC;
          break;
        case 0xF626:
          return 0xEA;
          break;
        case 0xF627:
          return 0xC8;
          break;
        case 0xF628:
          return 0xC4;
          break;
        case 0xF629:
          return 0xC0;
          break;
        case 0xF62A:
          return 0xE0;
          break;
        case 0xF62B:
        case 0xF637:
        case 0xF638:
          return 0x0;
          break;
        case 0xF62C:
        case 0xF63C:
          return 0x20;
          break;
        case 0xF62D:
          return 0x40;
          break;
        case 0xF62E:
          return 0x44;
          break;
        case 0xF62F:
        case 0xF640:
          return 0x48;
          break;
        case 0xF630:
          return 0x4C;
          break;
        case 0xF631:
          return 0x4F;
          break;
        case 0xF632:
          return 0x2F;
          break;
        case 0xF633:
          return 0xF;
          break;
        case 0xF634:
          return 0xEF;
          break;
        case 0xF635:
          return 0xCF;
          break;
        case 0xF636:
          return 0xCC;
          break;
        case 0xF639:
        case 0xF63A:
          return 0x80;
          break;
        case 0xF63B:
          return 0x84;
          break;
        case 0xF63F:
          return 0x92;
          break;
        case 0xF641:
        case 0xF642:
          return 0xA4;
          break;
        case 0xF643:
          return 0xA9;
          break;
        case 0xF644:
          return 0x52;
          break;
        case 0xF647:
          return 0xD5;
          break;
        case 0xF649:
        case 0xF64A:
          return 0xDA;
          break;
        case 0xF64B:
          return 0xDB;
          break;
        case 0xF64C:
          return 0x6D;
          break;
        default:
          return 0xEE;
        };

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
 







switch (PC) {
  case 0xF000:  //RstVector, 
    //F000: SEI   ; 2  ;78 

    fIntDis=true;
    //F001: CLD   ; 2  ;D8 

    fDecMod=false;
    //F002: LDX #$FF    ; 2  ;A2 FF 

    X=0xFF;
    //F004: TXS   ; 2  ;9A 

    StkPtr=X;
    //F005: LDX #$5D    ; 2  ;A2 5D 

    X=0x5D;
    //F007: JSR $F5BD   ; 6  ;20 BD F5 

    WriteStackWord(0xF00A);
    PC=0xF5BD;
    break;
  case 0xF00A:  //0xF007, 
    //F00A: LDA #$10    ; 2  ;A9 10 

    A=0x10;
    //F00C: STA $0283   ; 4  ;8D 83 02 

   // WritePIA(0x0283,A);    //SWBCNT - PIA Port B DDR Data Direction Register
    //F00F: STA $88    ; 3  ;85 88 

    WriteByte(0x88,A);   //GameOn
    //F011: JSR $F1A3   ; 6  ;20 A3 F1 

    WriteStackWord(0xF014);
    PC=0xF1A3;
    break;
  case 0xF014:  //0xF011, 0xF02F, 
    //F014: JSR $F032   ; 6  ;20 32 F0 

    WriteStackWord(0xF017);
    PC=0xF032;
    break;
  case 0xF017:  //0xF014, 
    //F017: JSR $F157   ; 6  ;20 57 F1 

    WriteStackWord(0xF01A);
    PC=0xF157;
    break;
  case 0xF01A:  //0xF017, 
    //F01A: JSR $F572   ; 6  ;20 72 F5 

    WriteStackWord(0xF01D);
    PC=0xF572;
    break;
  case 0xF01D:  //0xF01A, 
    //F01D: JSR $F2DA   ; 6  ;20 DA F2 

    WriteStackWord(0xF020);
    PC=0xF2DA;
    break;
  case 0xF020:  //0xF01D, 
    //F020: JSR $F444   ; 6  ;20 44 F4             Check Joystick Switches

    WriteStackWord(0xF023);
    PC=0xF444;
    break;
  case 0xF023:  //0xF020, 
    //F023: JSR $F214   ; 6  ;20 14 F2            CHECK COLLSIONS

    WriteStackWord(0xF026);
    PC=0xF214;
    break;
  case 0xF026:  //0xF023, 
    //F026: JSR $F2A9   ; 6  ;20 A9 F2            Setup Player, Missile Motion

    WriteStackWord(0xF029);
    PC=0xF2A9;
    break;
  case 0xF029:  //0xF026,                 Rotate Sprites
    //F029: JSR $F1F2   ; 6  ;20 F2 F1 

    WriteStackWord(0xF02C);
    PC=0xF1F2;
    break;
  case 0xF02C:  //0xF029, 
    //F02C: JSR $F054   ; 6  ;20 54 F0 

    WriteStackWord(0xF02F);
    PC=0xF054;
    break;
  case 0xF02F:  //0xF02C, 
    //F02F: JMP $F014   ; 3  ;4C 14 F0 

    PC=0xF014;
    break;
  case 0xF032:  //0xF014, 
    //F032: INC $86    ; 5  ;E6 86 

    M=ReadByte(0x86);   //CLOCK
    M++;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x86,M);
    //F034: STA $2B    ; 3  ;85 2B 

//    ClearHorzMotionRegisters(); //
    //F036: LDA #$02    ; 2  ;A9 02 

    A=0x02;
    //F038: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F03A: STA $01    ; 3  ;85 01 

    WriteVBlank(A);    // Vertical blank set-clear Bit 7,6,1
    //F03C: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F03E: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F040: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F042: STA $00    ; 3  ;85 00 

    WriteVSync(A);    // Vertical sync set-clear Bit 1
    //F044: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F046: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F048: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    //F04A: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F04C: STA $00    ; 3  ;85 00 

    WriteVSync(A);    // Vertical sync set-clear Bit 1
    //F04E: LDA #$2B    ; 2  ;A9 2B 

    A=0x2B;
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F050: STA $0296   ; 4  ;8D 96 02 

   // WritePIA(0x0296,A);    //TIM64T - set 64 clock interval
    //F053: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF054:  //0xF02C, 
    //F054: LDA #$20    ; 2  ;A9 20 

    A=0x20;
    //F056: STA $B4    ; 3  ;85 B4 

    WriteByte(0xB4,A);   //ScanLine
    //F058: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F05A: STA $2A    ; 3  ;85 2A 

  //  ApplyHorzMotion(); //
  case 0xF05C:  //0xF05A, 0xF05F, 
    //F05C: LDA $0284    ; 4  ;AD 84 02 

    A=ReadPIA(0x0284);    //INTIM - PIA Current Timer Value ;
    fZero = (A == 0);
    //F05F: BNE $F05C   ; 3  ;D0 FB 

    if (!fZero) {PC=0XF05C;break;};
    //F061: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F063: STA $2C    ; 3  ;85 2C 

    ClearCollisionLatches(); //
    //F065: STA $01    ; 3  ;85 01 

    WriteVBlank(A);    // Vertical blank set-clear Bit 7,6,1
    //F067: TSX   ; 2  ;BA 

    X=StkPtr;
    //F068: STX $D3    ; 3  ;86 D3 

    WriteByte(0xD3,X);   //TMPSTK
    //F06A: LDA #$02    ; 2  ;A9 02 

    A=0x02;
    //F06C: STA $0A    ; 3  ;85 0A 

    SetCtlPlyFld(A);    // Control playfield ball size & collisions
    //F06E: LDX $DC    ; 3  ;A6 DC 


    X=ReadByte(0xDC);   //SkipDrawScore    

    // This does a loop of scanlines.  2 for draw score, 0xE for skip score.
  case 0xF070:  //0xF06E, 0xF073, 
    //F070: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F072: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    //F073: BNE $F070   ; 3  ;D0 FB 

    if (!fZero) {PC=0XF070;
          break;};

    //F075: LDA $DC    ; 3  ;A5 DC 

    A=ReadByte(0xDC);   //SkipDrawScore         // This tells us to draw score or skip score (blinking score)
    //F077: CMP #$0E     ; 2  ;C9 0E 

    M=0x0E;
      fZero = (M == A);
    //F079: BEQ $F0CD   ; 3  ;F0 52 

    if (fZero) {PC=0XF0CD;    //GOTO VMAIN
          break;};



    ///////////////////////////////////////////////////////////////////////////   SCORE KERNEL  Init
    //F07B: LDX #$05    ; 2  ;A2 05  
    X=0x05;                 //there is 5 rows of pixels
    //F07D: LDA #$00    ; 2  ;A9 00  
    A=0x00;
    //F07F: STA $DE    ; 3  ;85 DE  
    WriteByte(0xDE,A);   //PixelsScore0    CLEAR
    //F081: STA $DF    ; 3  ;85 DF  
    WriteByte(0xDF,A);   //PixelsScore1   CLEAR

  
    /////////////////////////////////////////////////////////     Score Kernel Loop
  case 0xF083:  //0xF081, 0xF0CA, 
    //F083: STA $02    ; 3  ;85 02  
    WaitForWSync();    // Wait for leading edge of horizontal blank ///////////////////////////
    //F085: LDA $DE    ; 3  ;A5 DE  
    A=ReadByte(0xDE);   //PixelsScore0      This is the pixels we want to show.   First time through = 0;
    //F087: STA $0E    ; 3  ;85 0E  

    AddPlayFieldToList(1, A, true);         //LEFT PLAYER score fix
    //SetPlayFieldRegisterBX(1,A);    //
    //F089: LDY $E2    ; 3  ;A4 E2    // THis is index to pixels 
    Y=ReadByte(0xE2); //Tens digit pixel ptr
    //F08B: LDA $F5C5,Y    ; 4  ;B9 C5 F5   // Get Pixels for this digit (L & R)
    A=ReadByte(0xF5C5+Y);
    //F08E: AND #$F0    ; 2  ;29 F0  
    A=A & 0xF0;                 //Only keep the Left digit Pixels
    //F090: STA $DE    ; 3  ;85 DE  
    WriteByte(0xDE,A);   //PixelsScore0     //Temp keep pixels.
    //F092: LDY $E0    ; 3  ;A4 E0   //Ones digit pixel ptr
    Y=ReadByte(0xE0);   //SCROFF0       //Get Index into pixels
    //F094: LDA $F5C5,Y    ; 4  ;B9 C5 F5   // Get Pixels for this digit (L & R)  
    A=ReadByte(0xF5C5+Y);
    //F097: AND #$0F    ; 2  ;29 0F  
    A=A & 0x0F;                 //Only keep the Right digit Pixels
    //F099: ORA  $DE    ; 3  ;05 DE  
    A=A | ReadByte(0xDE);   //PixelsScore0    //Combine Left and Right Pixels
    //F09B: STA $DE    ; 3  ;85 DE  
    WriteByte(0xDE,A);   //PixelsScore0     //Store Pixels Left Score
    //F09D: LDA $DF    ; 3  ;A5 DF  
    A=ReadByte(0xDF);   //PixelsScore1
    //F09F: STA $0E    ; 3  ;85 0E  
    AddPlayFieldToList(1, A, false);          //RIGHT PLAYER score fix
  //  SetPlayFieldRegisterBX(1,A);    //
    //F0A1: LDY $E3    ; 3  ;A4 E3  
    Y=ReadByte(0xE3);   //SCROFF1
    //F0A3: LDA $F5C5,Y    ; 4  ;B9 C5 F5  
    A=ReadByte(0xF5C5+Y);
    //F0A6: AND #$F0    ; 2  ;29 F0  
    A=A & 0xF0;
    //F0A8: STA $DF    ; 3  ;85 DF  
    WriteByte(0xDF,A);   //PixelsScore1
    //F0AA: LDY $E1    ; 3  ;A4 E1  
    Y=ReadByte(0xE1);
    //F0AC: LDA $F5C5,Y    ; 4  ;B9 C5 F5  
    A=ReadByte(0xF5C5+Y);
    //F0AF: AND  $87    ; 3  ;25 87  
    A=A & ReadByte(0x87);   //SHOWSCR
    //F0B1: STA $02    ; 3  ;85 02  
    WaitForWSync();    // Wait for leading edge of horizontal blank////////////////////////////
    //F0B3: ORA  $DF    ; 3  ;05 DF  
    A=A | ReadByte(0xDF);   //PixelsScore1
    //F0B5: STA $DF    ; 3  ;85 DF  
    WriteByte(0xDF,A);   //PixelsScore1
    //F0B7: LDA $DE    ; 3  ;A5 DE 

    A=ReadByte(0xDE);   //PixelsScore0
    //F0B9: STA $0E    ; 3  ;85 0E  

    if (X == 0) A = 0;
    AddPlayFieldToList(1, A, true);           //LEFT PLAYER score fix
    //SetPlayFieldRegisterBX(1,A);    //
    //F0BB: DEX   ; 2  ;CA  
    X--;
    X=X & 0xFF;
    fNeg=(X >= 0x80);
    //F0BC: BMI $F0CD   ; 3  ;30 0F  
    if (fNeg) {PC=0XF0CD;
          break;};            //EXIT WHEN X=0;
    //F0BE: INC $E0    ; 5  ;E6 E0  
    M=ReadByte(0xE0);   //SCROFF0
    M++;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0xE0,M);
    //F0C0: INC $E2    ; 5  ;E6 E2  
    M=ReadByte(0xE2);
    M++;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0xE2,M);
    //F0C2: INC $E1    ; 5  ;E6 E1  
    M=ReadByte(0xE1);
    M++;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0xE1,M);
    //F0C4: INC $E3    ; 5  ;E6 E3  
    M=ReadByte(0xE3);   //SCROFF1
    M++;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0xE3,M);
    //F0C6: LDA $DF    ; 3  ;A5 DF  
    A=ReadByte(0xDF);   //PixelsScore1
    //F0C8: STA $0E    ; 3  ;85 0E  
    AddPlayFieldToList(1, A, false);          //RIGHT PLAYER score fix
    //SetPlayFieldRegisterBX(1,A);    //
    //F0CA: JMP $F083   ; 3  ;4C 83 F0  
    PC=0xF083;
    break;
    //////////////////////////////////////    END OF SCORE KERNEL



/////////////////  VMAIN    Main Kernal Display loop for the game itself
  case 0xF0CD:  //0xF079, 0xF0BC, 
     

    //F0CD: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    //F0CF: STA $0E    ; 3  ;85 0E 

    AddPlayFieldToList(1, A, false);            //RIGHT PLAYER score fix  AFter we exit scoreing kernel still need to do last PF.
    //SetPlayFieldRegisterBX(1,A);    //
    //F0D1: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F0D3: LDA #$05    ; 2  ;A9 05 

    A=0x05;
    //F0D5: STA $0A    ; 3  ;85 0A 

    SetCtlPlyFld(A);    // Control playfield ball size & collisions
    //F0D7: LDA $D6    ; 3  ;A5 D6 

    A=ReadByte(0xD6);   //Color0
    //F0D9: STA $06    ; 3  ;85 06 

    SetColLumPlr(0,A);    //  color-lum player 0
    //F0DB: LDA $D7    ; 3  ;A5 D7 

    A=ReadByte(0xD7);   //Color1
    //F0DD: STA $07    ; 3  ;85 07 

    SetColLumPlr(1,A);    //  color-lum player 1
  case 0xF0DF:  //0xF0DD, 0xF141, 
    //F0DF: LDX #$1E    ; 2  ;A2 1E   

    X=0x1E;   //missle reg
    //F0E1: TXS   ; 2  ;9A 

    StkPtr=X;  //Set stack to missle registers
    //F0E2: SEC   ; 2  ;38 

    fCarry=true;


    //////////////FIGURE OUT WHAT LINE OF TANK TO DRAW.

    //F0E3: LDA $A4    ; 3  ;A5 A4 

    A=ReadByte(0xA4);   //TankY0
    //F0E5: SBC  $B4    ; 3  ;E5 B4 
    opcSBC( ReadByte(0xB4)); //ScanLine
 
    //F0E7: AND #$FE    ; 2  ;29 FE 

    A=A & 0xFE;
    //F0E9: TAX   ; 2  ;AA 

    X=A;
    //F0EA: AND #$F0    ; 2  ;29 F0 

    A=A & 0xF0;   fZero = (0 == A);
    //F0EC: BEQ $F0F2   ; 3  ;F0 04 

    if (fZero) {PC=0XF0F2;
            break;};// if hi nibble is 0 then draw the tank.
    //F0EE: LDA #$00    ; 2  ;A9 00 

    A=0x00;         // DO Not Draw Tank.
    fZero = (A == 0);
    //F0F0: BEQ $F0F4   ; 3  ;F0 02 

    if (fZero) {PC=0XF0F4;
          break;};    // Always Skip next line.
  case 0xF0F2:  //0xF0EC, 0xF0F0, 
    //F0F2: LDA $BD,X    ; 4  ;B5 BD 

    A=ReadByte(0xBD + X);   //HIRES0
  case 0xF0F4:  //0xF0F0, 0xF0F2, 
    //F0F4: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank///////////////////
    //F0F6: STA $1B    ; 3  ;85 1B 

    if (A != 0) {
      AddPlayerToList(0, A, TankX[0], -1 );                //red tank
    };
    //SetGraphicsPlayer(0,A);    //
    //F0F8: LDA $A7    ; 3  ;A5 A7 

    A=ReadByte(0xA7);   //MissileY1
    //F0FA: EOR $B4   ; 3  ;45 B4 





    A=A ^ ReadByte(0xB4);   //ScanLine
    //F0FC: AND #$FE    ; 2  ;29 FE 

    A=A & 0xFC;
     fZero = (0 == A); 
     fNeg=(A & 0x80);  
    //F0FE: PHP   ; 3  ;08 
    opcPHP();
    //F0FF: LDA $A6    ; 3  ;A5 A6 

    A=ReadByte(0xA6);   //MissileY0
    //F101: EOR $B4   ; 3  ;45 B4 

    A=A ^ ReadByte(0xB4);   //ScanLine
    //F103: AND #$FE    ; 2  ;29 FE 

    A=A & 0xFC;
    fZero = (A == 0);
    //F105: PHP   ; 3  ;08 
    opcPHP();  

    //F106: LDA $B4    ; 3  ;A5 B4 

    A=ReadByte(0xB4);   //ScanLine
    fNeg=(A >= 0x80);
    //F108: BPL $F10C   ; 3  ;10 02 

    if (!fNeg) {PC=0XF10C;break;};
    //F10A: EOR #$F8   ; 2  ;49 F8 

    A=A ^ 0xF8;
  case 0xF10C:  //0xF108, 0xF10A, 
    //F10C: CMP #$20     ; 2  ;C9 20 

    M=0x20;
      fCarry=( A >= M );
    //F10E: BCC $F114   ; 3  ;90 04 

    if (!fCarry) {PC=0XF114;break;};
    //F110: LSR A   ; 2  ;4A 

    A=A>>1;
    //F111: LSR A   ; 2  ;4A 

    A=A>>1;
    //F112: LSR A   ; 2  ;4A 

    A=A>>1;
    //F113: TAY   ; 2  ;A8 

    Y=A;

    WaitForWSync();    //////////   ADDED THIS //////////////////////////////////////////////////////

    /////////////////////////////////   VFDone
  case 0xF114:  //0xF10E, 0xF113, 
    //F114: LDA $A5    ; 3  ;A5 A5 

    A=ReadByte(0xA5);   //TankY1
    //F116: SEC   ; 2  ;38 

    fCarry=true;
    //F117: SBC  $B4    ; 3  ;E5 B4 
    opcSBC( ReadByte(0xB4)); //ScanLine
 
    //F119: INC $B4    ; 5  ;E6 B4 

    M=ReadByte(0xB4);   //ScanLine
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0xB4,M);
    //F11B: NOP   ; 2  ;EA 

    //F11C: ORA #$01    ; 2  ;09 01 

    A=A | 0x01;
    //F11E: TAX   ; 2  ;AA 

    X=A;
    //F11F: AND #$F0    ; 2  ;29 F0 

    A=A & 0xF0;   fZero = (0 == A);
    //F121: BEQ $F127   ; 3  ;F0 04 

    if (fZero) {PC=0XF127;break;};
    //F123: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    fZero = (A == 0);
    //F125: BEQ $F129   ; 3  ;F0 02 

    if (fZero) {PC=0XF129;
          break;};
  case 0xF127:  //0xF121, 0xF125, 
    //F127: LDA $BD,X    ; 4  ;B5 BD 

    A=ReadByte(0xBD + X);   //HIRES0
  case 0xF129:  //0xF125, 0xF127, 
    //F129: BIT $82   ; 3  ;24 82 

    M=ReadByte(0x82);   //PF_PONG
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F12B: STA $1C    ; 3  ;85 1C 


    AddPlayerToList(1, A, TankX[1], -1  );                      //BLUE TANK
    //SetGraphicsPlayer(1,A);    //
    //F12D: BMI $F13B   ; 3  ;30 0C 

    if (fNeg) {PC=0XF13B;break;};
    //F12F: LDA ($B5),Y   ; 5  ;B1 B5 

    A=ReadByte(ReadWord(0xB5)+Y);    //LORES0
    //F131: STA $0D    ; 3  ;85 0D 

    SetPlayFieldRegisterBX(0,A);    //  High Nibble
    //F133: LDA ($B7),Y   ; 5  ;B1 B7 

    A=ReadByte(ReadWord(0xB7)+Y);
    //F135: STA $0E    ; 3  ;85 0E 

    SetPlayFieldRegisterBX(1,A);    //
    //F137: LDA ($B9),Y   ; 5  ;B1 B9 

    A=ReadByte(ReadWord(0xB9)+Y);
    //F139: STA $0F    ; 3  ;85 0F 

    SetPlayFieldRegisterBX(2,A);    //
  case 0xF13B:  //0xF12D, 0xF139, 
    //F13B: INC $B4    ; 5  ;E6 B4 

    M=ReadByte(0xB4);   //ScanLine
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0xB4,M);
    //F13D: LDA $B4    ; 3  ;A5 B4 

    A=ReadByte(0xB4);   //ScanLine
    //F13F: EOR #$EC   ; 2  ;49 EC 

    A=A ^ 0xEC;   
    fZero = (0 == A);
    //F141: BNE $F0DF   ; 3  ;D0 9C 

    if (!fZero) {PC=0XF0DF;
            break;};
    //F143: LDX $D3    ; 3  ;A6 D3 

    X=ReadByte(0xD3);   //TMPSTK
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F145: TXS   ; 2  ;9A 

    StkPtr=X;
    //F146: STA $1D    ; 3  ;85 1D 

    EnableMissle(0,A);    // bit 1
    //F148: STA $1E    ; 3  ;85 1E 

    EnableMissle(1,A);    // bit 1
    //F14A: STA $1B    ; 3  ;85 1B 

//    AddPlayerToList(0, A, 20, -1, 0, false);  ///??
//    SetGraphicsPlayer(0,A);    //
//    //F14C: STA $1C    ; 3  ;85 1C 
//
//    AddPlayerToList(1, A, 20, -1, 0, false);   ///??
//    SetGraphicsPlayer(1,A);    //
//    //F14E: STA $1B    ; 3  ;85 1B 
//
//    AddPlayerToList(0, A, 80, -1, 0, false);  ///??
//  SetGraphicsPlayer(0,A);    //
    //F150: STA $0D    ; 3  ;85 0D 

    SetPlayFieldRegisterBX(0,A);    //  High Nibble
    //F152: STA $0E    ; 3  ;85 0E 

    SetPlayFieldRegisterBX(1,A);    //
    //F154: STA $0F    ; 3  ;85 0F 

    SetPlayFieldRegisterBX(2,A);    //
    //F156: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF157:  //0xF017, 
    //F157: LDA $0282    ; 4  ;AD 82 02 

    A=ReadPIA(0x0282);    //SWCHB - PIA Port B, Console Switches;
    //F15A: LSR A   ; 2  ;4A 

    fCarry = ((A & 0x01)>0);
    A=A>>1;
    //F15B: BCS $F170   ; 3  ;B0 13 

    if (fCarry) {PC=0XF170;break;};
    //F15D: LDA #$0F    ; 2  ;A9 0F 

    A=0x0F;
    //F15F: STA $87    ; 3  ;85 87 

    WriteByte(0x87,A);   //SHOWSCR
    //F161: LDA #$FF    ; 2  ;A9 FF 

    A=0xFF;
    //F163: STA $88    ; 3  ;85 88 

    WriteByte(0x88,A);   //GameOn
    //F165: LDA #$80    ; 2  ;A9 80 

    A = 0x80;           // Initialize Game Timer to 80.  
    //F167: STA $DD    ; 3  ;85 DD 

    WriteByte(0xDD,A);   //GameTimer
    //F169: LDX #$E6    ; 2  ;A2 E6 

    X=0xE6;
    fZero = (X == 0);
    //F16B: JSR $F5BD   ; 6  ;20 BD F5 

    WriteStackWord(0xF16E);
    PC=0xF5BD;
    break;
  case 0xF16E:  //0xF16B, 
    //F16E: BEQ $F1D0   ; 3  ;F0 60 

    if (fZero) {PC=0XF1D0;
            break;};
  case 0xF170:  //0xF15B, 0xF16E, 
    //F170: LDY #$02    ; 2  ;A0 02 

    Y=0x02;       //2 is the flag to draw the score.
    //F172: LDA $DD    ; 3  ;A5 DD 

    A=ReadByte(0xDD);   //GameTimer
    //F174: AND  $88    ; 3  ;25 88 

    A=A & ReadByte(0x88);   //GameOn
    //F176: CMP #$F0     ; 2  ;C9 F0 

    M=0xF0;
      fCarry=( A >= M );
    //F178: BCC $F182   ; 3  ;90 08 

    if (!fCarry) {PC=0XF182;
            break;};
    //F17A: LDA $86    ; 3  ;A5 86 

    A=ReadByte(0x86);   //CLOCK
    //F17C: AND #$30    ; 2  ;29 30 

    A=A & 0x30;   fZero = (0 == A);
    //F17E: BNE $F182   ; 3  ;D0 02 

    if (!fZero) {PC=0XF182;
            break;};
    //F180: LDY #$0E    ; 2  ;A0 0E 

    Y=0x0E;     //E is for skip score completely.

    /////// SAVE  SkipDrawScore
  case 0xF182:  //0xF178, 0xF17E, 0xF180, 
    //F182: STY $DC    ; 3  ;84 DC 

    WriteByte(0xDC,Y);   //SkipDrawScore
    //F184: LDA $86    ; 3  ;A5 86 

    A=ReadByte(0x86);   //CLOCK
    //F186: AND #$3F    ; 2  ;29 3F 

    A=A & 0x3F;   fZero = (0 == A);
    //F188: BNE $F192   ; 3  ;D0 08 

    if (!fZero) {PC=0XF192;break;};
    //F18A: STA $89    ; 3  ;85 89 

    WriteByte(0x89,A);   //SelDbnce
    //F18C: INC $DD    ; 5  ;E6 DD 

    M=ReadByte(0xDD);   //GameTimer
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0xDD,M);
    fZero = (M == 0);
    //F18E: BNE $F192   ; 3  ;D0 02 

    if (!fZero) {PC=0XF192;break;};
    //F190: STA $88    ; 3  ;85 88 

    WriteByte(0x88,A);   //GameOn
  case 0xF192:  //0xF188, 0xF18E, 0xF190, 
    //F192: LDA $0282    ; 4  ;AD 82 02 

    A=ReadPIA(0x0282);    //SWCHB - PIA Port B, Console Switches;
    //F195: AND #$02    ; 2  ;29 02 

    A=A & 0x02;   fZero = (0 == A);
    fNeg=(A & 0x80);
    //F197: BEQ $F19D   ; 3  ;F0 04 

    if (fZero) {PC=0XF19D;break;};
    //F199: STA $89    ; 3  ;85 89 

    WriteByte(0x89,A);   //SelDbnce
    //F19B: BNE $F1F1   ; 3  ;D0 54 

    if (!fZero) {PC=0XF1F1;break;};
  case 0xF19D:  //0xF197, 0xF19B, 
    //F19D: BIT $89   ; 3  ;24 89 

    M=ReadByte(0x89);   //SelDbnce
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    fZero = ((M & A)==0);
    //F19F: BMI $F1F1   ; 3  ;30 50 

    if (fNeg) {PC=0XF1F1;break;};
    //F1A1: INC $80    ; 5  ;E6 80 

    M=ReadByte(0x80);   //BINvar
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0x80,M);
  case 0xF1A3:  //0xF011, 0xF1A1, 
    //F1A3: LDX #$DF    ; 2  ;A2 DF 

    X=0xDF;
  case 0xF1A5:  //0xF1A3, 0xF1B9, 
    //F1A5: JSR $F5BD   ; 6  ;20 BD F5     //CLEARMEM

    WriteStackWord(0xF1A8);
    PC=0xF5BD;
    break;
  case 0xF1A8:  //0xF1A5, 
    //F1A8: LDA #$FF    ; 2  ;A9 FF 

    A=0xFF;
    //F1AA: STA $89    ; 3  ;85 89 

    WriteByte(0x89,A);   //SelDbnce
    //F1AC: LDY $80    ; 3  ;A4 80 

    Y=ReadByte(0x80);   //BINvar
    //F1AE: LDA $F7D8,Y    ; 4  ;B9 D8 F7 

    A=ReadByte(0xF7D8+Y);
    //F1B1: STA $A3    ; 3  ;85 A3 

    WriteByte(0xA3,A);   //GAMVAR
    //F1B3: EOR #$FF   ; 2  ;49 FF 

    A=A ^ 0xFF;   fZero = (0 == A);
    //F1B5: BNE $F1BB   ; 3  ;D0 04 

    if (!fZero) {PC=0XF1BB;break;};
    //F1B7: LDX #$DD    ; 2  ;A2 DD 

    X=0xDD;
    fZero = (X == 0);
    //F1B9: BNE $F1A5   ; 3  ;D0 EA 

    if (!fZero) {PC=0XF1A5;break;};
  case 0xF1BB:  //0xF1B5, 0xF1B9, 
    //F1BB: LDA $81    ; 3  ;A5 81 

    A=ReadByte(0x81);   //BCDvar
    //F1BD: SED   ; 2  ;F8 

    fDecMod=true;   // TODO: Check Math Following this.
    //F1BE: CLC   ; 2  ;18 

    fCarry=false;
    //F1BF: ADC #$01    ; 2  ;69 01 

    opcADC( 01);      //
    //F1C1: STA $81    ; 3  ;85 81 

    WriteByte(0x81,A);   //BCDvar
    //F1C3: STA $A1    ; 3  ;85 A1 

    WriteByte(0xA1,A);   //SCORE0
    //F1C5: CLD   ; 2  ;D8 

    fDecMod=false;
    //F1C6: BIT $A3   ; 3  ;24 A3 

    M=ReadByte(0xA3);   //GAMVAR
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F1C8: BPL $F1D0   ; 3  ;10 06 

    if (!fNeg) {PC=0XF1D0;
          break;};
    //F1CA: INC $85    ; 5  ;E6 85 

    M=ReadByte(0x85);   //GAMSHP
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0x85,M);
    //F1CC: BVC $F1D0   ; 3  ;50 02 

    if (!fOverflow) {PC=0XF1D0;
            break;};
    //F1CE: INC $85    ; 5  ;E6 85 

    M=ReadByte(0x85);   //GAMSHP
    M++;if (M>0xFF) M=M & 0xFF;
    WriteByte(0x85,M);


 ///////////////////////////////////////////////////////////////////////////////Reset Playfield //////////////   
  case 0xF1D0:  //0xF1C8, 0xF1CC, 0xF1CE, 0xF16E, 
    //F1D0: JSR $F525   ; 6  ;20 25 F5 

    WriteStackWord(0xF1D3);
    PC=0xF525;
    break;
  case 0xF1D3:  //0xF1D0, 
    //F1D3: LDA #$32    ; 2  ;A9 32 

    A=0x32;
    //F1D5: STA $A5    ; 3  ;85 A5 

    WriteByte(0xA5,A);   //TankY1
    //F1D7: LDA #$86    ; 2  ;A9 86 

    A=0x86;
    //F1D9: STA $A4    ; 3  ;85 A4 

    WriteByte(0xA4,A);   //TankY0
    //F1DB: BIT $A3   ; 3  ;24 A3 

    M=ReadByte(0xA3);   //GAMVAR
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    fZero = ((M & A)==0);
    //F1DD: BMI $F1F1   ; 3  ;30 12 

    if (fNeg) {PC=0XF1F1;
                  break;};

    
    //Is Tank Game. 
    //F1DF: STA $A5    ; 3  ;85 A5 
    WriteByte(0xA5,A);   //TankY1
    
    
    //F1E1: STA $11    ; 3  ;85 11 

    ResetPlayer(1,DurationCtr);    // reset player 1
     TankX[1]=TankXposStart1;
    //F1E3: LDA #$08    ; 2  ;A9 08 

    A=0x08;
    //F1E5: STA $96    ; 3  ;85 96 

    WriteByte(0x96,A);   //DIRECTN1
    //F1E7: LDA #$20    ; 2  ;A9 20 

    A=0x20;
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F1E9: STA $20    ; 3  ;85 20 

    //SetHorzMotionPlayer(0,A); // Hi Nibble
    //F1EB: STA $21    ; 3  ;85 21 

    //SetHorzMotionPlayer(1,A); // Hi Nibble
    //F1ED: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F1EF: STA $2A    ; 3  ;85 2A 

//    ApplyHorzMotion(); //
  case 0xF1F1:  //0xF1DD, 0xF1EF, 0xF19B, 0xF19F, 
    //F1F1: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF1F2:  //0xF029, 
    //F1F2: LDX #$01    ; 2  ;A2 01 

    X=0x01;
  case 0xF1F4:  //0xF1F2, 0xF211, 
    //F1F4: LDA $A1,X    ; 4  ;B5 A1 

    A=ReadByte(0xA1 + X);   //SCORE0
    //F1F6: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;
    //F1F8: STA $D2    ; 3  ;85 D2 

    WriteByte(0xD2,A);   //TEMP
    //F1FA: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F1FB: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F1FC: CLC   ; 2  ;18 

    fCarry=false;
    //F1FD: ADC  $D2    ; 3  ;65 D2 
    opcADC(ReadByte(0xD2)); 
    //F1FF: STA $E0,X   ; 4  ;95 E0 

    WriteByte(0xE0 + X,A);   //SCROFF0
    //F201: LDA $A1,X    ; 4  ;B5 A1 

    A=ReadByte(0xA1 + X);   //SCORE0
    //F203: AND #$F0    ; 2  ;29 F0 

    A=A & 0xF0;
    //F205: LSR A   ; 2  ;4A 

    A=A>>1;
    //F206: LSR A   ; 2  ;4A 

    A=A>>1;
    //F207: STA $D2    ; 3  ;85 D2 

    WriteByte(0xD2,A);   //TEMP
    //F209: LSR A   ; 2  ;4A 

    A=A>>1;
    //F20A: LSR A   ; 2  ;4A 

    A=A>>1;
    //F20B: CLC   ; 2  ;18 

    fCarry=false;
    //F20C: ADC  $D2    ; 3  ;65 D2 
  opcADC(ReadByte(0xD2) );
    
    //F20E: STA $E2,X   ; 4  ;95 E2 

    WriteByte(0xE2 + X,A);
    //F210: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F211: BPL $F1F4   ; 3  ;10 E1 

    if (!fNeg) {PC=0XF1F4;break;};
    //F213: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF214:  //0xF023, 
    //F214: BIT $83   ; 3  ;24 83 

    M=ReadByte(0x83);   //GUIDED
    fOverflow=(M & 0x40);
    //F216: BVC $F21C   ; 3  ;50 04 

    if (!fOverflow) {PC=0XF21C;break;};
    //F218: LDA #$30    ; 2  ;A9 30 

    A=0x30;
    fNeg=(A >= 0x80);
    //F21A: BPL $F21E   ; 3  ;10 02 

    if (!fNeg) {PC=0XF21E;break;};
  case 0xF21C:  //0xF216, 0xF21A, 
    //F21C: LDA #$20    ; 2  ;A9 20 

    A=0x20;
  case 0xF21E:  //0xF21A, 0xF21C, 
    //F21E: STA $B1    ; 3  ;85 B1 

    WriteByte(0xB1,A);   //XoffBase
    //F220: LDX #$03    ; 2  ;A2 03 

    X=0x03;
    //F222: JSR $F254   ; 6  ;20 54 F2 

    WriteStackWord(0xF225);
    PC=0xF254;
    break;
  case 0xF225:  //0xF222, 
    //F225: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    //F226: JSR $F254   ; 6  ;20 54 F2 

    WriteStackWord(0xF229);
    PC=0xF254;
    break;
  case 0xF229:  //0xF226, 
    //F229: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
  case 0xF22A:  //0xF229, 0xF251, 
    //F22A: LDA $8D,X    ; 4  ;B5 8D 

    A=ReadByte(0x8D + X);   //FwdTimer0
    //F22C: AND #$08    ; 2  ;29 08 

    A=A & 0x08;
    //F22E: LSR A   ; 2  ;4A 

    A=A>>1;
    //F22F: LSR A   ; 2  ;4A 

    A=A>>1;
    //F230: STX $D1    ; 3  ;86 D1 

    WriteByte(0xD1,X);   //TEMP1
    //F232: CLC   ; 2  ;18 

    fCarry=false;
    //F233: ADC  $D1    ; 3  ;65 D1 
opcADC(ReadByte(0xD1));
    
    //F235: TAY   ; 2  ;A8 

    Y=A;
    //F236: LDA $00A8,Y    ; 4  ;B9 A8 00 

    A=ReadByte(0x00A8+Y);
    fNeg=(A >= 0x80);
    //F239: SEC   ; 2  ;38 

    fCarry=true;
    //F23A: BMI $F23D   ; 3  ;30 01 

    if (fNeg) {PC=0XF23D;break;};
    //F23C: CLC   ; 2  ;18 

    fCarry=false;
  case 0xF23D:  //0xF23A, 0xF23C, 
    //F23D: ROL A99   ; 2  ;2A 

    T=A;
    A=A<<1;
    A=A&0xFF;
    if (fCarry) A=A|1;
    fCarry = ((T & 0x80)>0);
    //F23E: STA $00A8,Y    ; 5  ;99 A8 00 

    WriteByte(0x00A8 + Y,A);
    //F241: BCC $F250   ; 3  ;90 0D 

    if (!fCarry) {PC=0XF250;break;};
    //F243: LDA $AC,X    ; 4  ;B5 AC 

    A=ReadByte(0xAC + X);   //MPace0
    //F245: AND #$01    ; 2  ;29 01 

    A=A & 0x01;
    //F247: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F248: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F249: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F24A: ASL A   ; 2  ;0A 

    fCarry = ((A & 0x80)>0);
    A=A<<1;
    A=A&0xFF;
    //F24B: STA $B1    ; 3  ;85 B1 

    WriteByte(0xB1,A);   //XoffBase
    //F24D: JSR $F254   ; 6  ;20 54 F2 

    WriteStackWord(0xF250);
    PC=0xF254;
    break;
  case 0xF250:  //0xF241, 0xF24D, 
    //F250: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F251: BEQ $F22A   ; 3  ;F0 D7 

    if (fZero) {PC=0XF22A;break;};
    //F253: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;


////////////////////////////////////////////////////   move tanks and missles based on X value.   0,1 tanks,  2,3 missles.
  case 0xF254:  //0xF222, 0xF226, 0xF24D, 
   

    //F254: INC $AC,X    ; 6  ;F6 AC 
    if (X == 0) {
      char ssss = 0;
    };

    M=ReadByte(0xAC + X ) + 1;
       //MPace0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0xAC + X ,M);
    //F256: LDA $95,X    ; 4  ;B5 95 

    A=ReadByte(0x95 + X);   //DIRECTN0
    //F258: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;
    //F25A: CLC   ; 2  ;18 

    fCarry=false;
    //F25B: ADC  $B1    ; 3  ;65 B1 
opcADC(ReadByte(0xB1));
 
    //F25D: TAY   ; 2  ;A8 

    Y=A;
    //F25E: LDA $F5F7,Y    ; 4  ;B9 F7 F5 

    A=ReadByte(0xF5F7+Y);
    //F261: STA $B0    ; 3  ;85 B0 

    WriteByte(0xB0,A);   //XOFFS
    //F263: BIT $82   ; 3  ;24 82 

    M=ReadByte(0x82);   //PF_PONG
    fOverflow=(M & 0x40);
    //F265: BVS $F27A   ; 3  ;70 13 

    if (fOverflow) {PC=0XF27A;break;};
    //F267: LDA $95,X    ; 4  ;B5 95 

    A=ReadByte(0x95 + X);   //DIRECTN0
    //F269: SEC   ; 2  ;38 

    fCarry=true;
    //F26A: SBC #$02    ; 2  ;E9 02 
    opcSBC( 0x02); //
 
    //F26C: AND #$03    ; 2  ;29 03 

    A=A & 0x03;   fZero = (0 == A);
    //F26E: BNE $F27A   ; 3  ;D0 0A 

    if (!fZero) {PC=0XF27A;break;};
    //F270: LDA $AC,X    ; 4  ;B5 AC 

    A=ReadByte(0xAC + X);   //MPace0
    //F272: AND #$03    ; 2  ;29 03 

    A=A & 0x03;   fZero = (0 == A);
    //F274: BNE $F27A   ; 3  ;D0 04 

    if (!fZero) {PC=0XF27A;break;};
    //F276: LDA #$08    ; 2  ;A9 08 

    A=0x08;
    //F278: STA $B0    ; 3  ;85 B0 

    WriteByte(0xB0,A);   //XOFFS
  case 0xF27A:  //0xF265, 0xF26E, 0xF274, 0xF278, 
    //F27A: LDA $B0    ; 3  ;A5 B0 

    A=ReadByte(0xB0);   //XOFFS



////////////////////////////////////////////////    MOVE TANK OR MISSLE.  (depends on X)
  // Input X = Tank or missle number.
  //
  //
  case 0xF27C:  //0xF515, 0xF27A, 
    //F27C: STA $20,X   ; 4  ;95 20 
    if (X == 0) { 
    }; 

    WriteByte(0x20 + X,A);
        if (X == 1) {
          char ssss = 0;
        };
    // Put the X of the tank or Missile into a location where we can use it to draw the sprite later.
    if ((A & 0xF0) != 0) {
      if (A < 0x80) {
        TankX[X] -= A / 0x10;
        if (TankX[X] > 0xE0) {
          TankX[X] += 0xA0;
        };
      }
      else {
        TankX[X] += (((A ^ 0xFF)  / 0x10)+1);
        if (TankX[X] >= 0xA0) {
          TankX[X] -= 0x9c;
        };
      };
    };


    //F27E: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;
    //F280: SEC   ; 2  ;38 

    fCarry=true;
    //F281: SBC #$08    ; 2  ;E9 08 
    opcSBC( 0x08); //
 
    //F283: STA $D4    ; 3  ;85 D4    //TEMP?

    WriteByte(0xD4,A);  
    //F285: CLC   ; 2  ;18 

    fCarry=false;
    //F286: ADC  $A4,X    ; 4  ;75 A4 

    opcADC( ReadByte(0xA4 + X));
    //F288: BIT $A3   ; 3  ;24 A3 

    M=ReadByte(0xA3);   //GAMVAR
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F28A: BMI $F290   ; 3  ;30 04 

    if (fNeg) {PC=0XF290;break;};
    //F28C: CPX #$02     ; 2  ;E0 02 

    M=0x02;
      fCarry=( X >= M );
    //F28E: BCS $F2A0   ; 3  ;B0 10 

    if (fCarry) {PC=0XF2A0;break;};
  case 0xF290:  //0xF28A, 0xF28E, 
    //F290: CMP #$DB     ; 2  ;C9 DB 

    M=0xDB;
      fCarry=( A >= M );
    //F292: BCS $F298   ; 3  ;B0 04 

    if (fCarry) {PC=0XF298;break;};
    //F294: CMP #$25     ; 2  ;C9 25 

    M=0x25;
      fCarry=( A >= M );
    //F296: BCS $F2A0   ; 3  ;B0 08 

    if (fCarry) {PC=0XF2A0;break;};
  case 0xF298:  //0xF292, 0xF296, 
    //F298: LDA #$D9    ; 2  ;A9 D9 

    A=0xD9;
    //F29A: BIT $D4   ; 3  ;24 D4 

    M=ReadByte(0xD4);
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F29C: BMI $F2A0   ; 3  ;30 02 

    if (fNeg) {PC=0XF2A0;
          break;};
    //F29E: LDA #$28    ; 2  ;A9 28 

    A=0x28;
  case 0xF2A0:  //0xF28E, 0xF296, 0xF29C, 0xF29E, 
    //F2A0: STA $A4,X   ; 4  ;95 A4 

    WriteByte(0xA4 + X,A);   //TankY0
    //F2A2: CPX #$02     ; 2  ;E0 02 

    M=0x02;
      fCarry=( X >= M );
      fZero = (M == X);
      fNeg=((X-M) <0);
    //F2A4: BCS $F2A8   ; 3  ;B0 02 

    if (fCarry) {PC=0XF2A8;break;};
    //F2A6: STA $25,X   ; 4  ;95 25 

    WriteByte(0x25 + X,A);
  case 0xF2A8:  //0xF2A4, 0xF2A6, 
    //F2A8: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF2A9:  //0xF026, 
    //F2A9: LDA #$01    ; 2  ;A9 01 

    A=0x01;
    //F2AB: AND  $86    ; 3  ;25 86 

    A=A & ReadByte(0x86);   //CLOCK
    //F2AD: TAX   ; 2  ;AA 

    X=A;
    //F2AE: LDA $95,X    ; 4  ;B5 95 

    A=ReadByte(0x95 + X);   //DIRECTN0
    //F2B0: STA $0B,X   ; 4  ;95 0B 

    WriteByte(0x0B + X,A);
    //F2B2: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;
    //F2B4: TAY   ; 2  ;A8 

    Y=A;
    //F2B5: BIT $83   ; 3  ;24 83 

    M=ReadByte(0x83);   //GUIDED
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F2B7: BPL $F2BB   ; 3  ;10 02 

    if (!fNeg) {PC=0XF2BB;break;};
    //F2B9: STY $97,X   ; 4  ;94 97 

    WriteByte(0x97 + X,Y);
  case 0xF2BB:  //0xF2B7, 0xF2B9, 
    //F2BB: TXA   ; 2  ;8A 

    A=X;
    //F2BC: EOR #$0E   ; 2  ;49 0E 

    A=A ^ 0x0E;
    //F2BE: TAX   ; 2  ;AA 

    X=A;
    //F2BF: TYA   ; 2  ;98 

    A=Y;
    //F2C0: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F2C1: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F2C2: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F2C3: CMP #$3F     ; 2  ;C9 3F 

    M=0x3F;
      fNeg=((A-M) <0);
    //F2C5: CLC   ; 2  ;18 

    fCarry=false;
    //F2C6: BMI $F2CB   ; 3  ;30 03 

    if (fNeg) {PC=0XF2CB;break;};
    //F2C8: SEC   ; 2  ;38 

    fCarry=true;
    //F2C9: EOR #$47   ; 2  ;49 47 

    A=A ^ 0x47;
  case 0xF2CB:  //0xF2C6, 0xF2C9, 
    //F2CB: TAY   ; 2  ;A8 

    Y=A;
  case 0xF2CC:  //0xF2CB, 0xF2D7, 
    //F2CC: LDA ($BB),Y   ; 5  ;B1 BB 

    A=ReadByte(ReadWord(0xBB)+Y);    //SHAPES
    //F2CE: STA $BD,X   ; 4  ;95 BD 

    WriteByte(0xBD + X,A);   //HIRES0
    //F2D0: BCC $F2D4   ; 3  ;90 02 

    if (!fCarry) {PC=0XF2D4;break;};
    //F2D2: DEY   ; 2  ;88 

    Y--;
    Y=Y & 0xFF;
    //F2D3: DEY   ; 2  ;88 

    Y--;
    Y=Y & 0xFF;
  case 0xF2D4:  //0xF2D0, 0xF2D3, 
    //F2D4: INY   ; 2  ;C8 

    Y++;
    Y=Y & 0xFF;
    //F2D5: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    //F2D6: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F2D7: BPL $F2CC   ; 3  ;10 F3 

    if (!fNeg) {PC=0XF2CC;break;};
    //F2D9: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;


    /////////////////CHECK JOYSTICK SWITCHES ///////////////////////////////
  case 0xF2DA:  //0xF01D, 
    //F2DA: LDA $8A    ; 3  ;A5 8A 

    A=ReadByte(0x8A);   //StirTimer
    //F2DC: SEC   ; 2  ;38 
 
    fCarry = true;
    //F2DD: SBC #$02    ; 2  ;E9 02 
 
    opcSBC( 0x02); 
    //F2DF: BCC $F30C   ; 3  ;90 2B 

    if (!fCarry) {PC=0XF30C;
            break;};   //NO STIR
    //F2E1: STA $8A    ; 3  ;85 8A 

    WriteByte(0x8A,A);   //StirTimer
    //F2E3: CMP #$02     ; 2  ;C9 02 

    M=0x02;
      fCarry=( A >= M );
      fZero = (M == A);
      fNeg=((A-M) <0);
    //F2E5: BCC $F30B   ; 3  ;90 24 

    if (!fCarry) {PC=0XF30B;
            break;};  //RTS, We just finished exploding.

    //F2E7: AND #$01    ; 2  ;29 01    //Get the loser's tank number.

    A=A & 0x01;
    //F2E9: TAX   ; 2  ;AA 

    X=A;
    if (X == 0) {
      char sss = 0;
    };
    //F2EA: INC $95,X    ; 6  ;F6 95 

    M=ReadByte(0x95 + X ) + 1;
       //DIRECTN0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x95 + X ,M);
    //F2EC: LDA $D8,X    ; 4  ;B5 D8 

    A=ReadByte(0xD8 + X);   //XColor0
    //F2EE: STA $D6,X   ; 4  ;95 D6 

    WriteByte(0xD6 + X,A);   //Color0
    //F2F0: LDA $8A    ; 3  ;A5 8A 

    A=ReadByte(0x8A);   //StirTimer
    //F2F2: CMP #$F7     ; 2  ;C9 F7 

    M=0xF7;
      fCarry=( A >= M );

    //F2F4: BCC $F2F9   ; 3  ;90 03 
    if (!fCarry) {PC=0XF2F9;
            break;};

    //F2F6: JSR $F508   ; 6  ;20 08 F5      
    WriteStackWord(0xF2F9);
    PC=0xF508;   //              JSR TankKnockBack
    break;

// No Stir Rush
  case 0xF2F9:  //0xF2F4, 0xF2F6, 
    //F2F9: LDA $8A    ; 3  ;A5 8A 

    A=ReadByte(0x8A);   //StirTimer
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F2FB: BPL $F30B   ; 3  ;10 0E 
    if (!fNeg) {PC=0XF30B;
          break;};        //RTS
    //F2FD: LSR A   ; 2  ;4A 

    A=A>>1;
    //F2FE: LSR A   ; 2  ;4A 

    A=A>>1;
    //F2FF: LSR A   ; 2  ;4A 

    fCarry = ((A & 0x01)>0);
    A=A>>1;
  case 0xF300:  //0xF2FF, 0xF3DB, 
    //F300: STA $19,X   ; 4  ;95 19 

    WriteByte(0x19 + X,A);
    //F302: LDA #$08    ; 2  ;A9 08 

    A=0x08;
    //F304: STA $15,X   ; 4  ;95 15 

    WriteByte(0x15 + X,A);
    //F306: LDA $F7FE,X    ; 4  ;BD FE F7 

    A=ReadByte(0xF7FE + X);
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F309: STA $17,X   ; 4  ;95 17 

    WriteByte(0x17 + X,A);
  case 0xF30B:  //0xF2E5, 0xF2FB, 0xF309, 
    //F30B: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF30C:  //0xF2DF, 
    //F30C: LDX #$01    ; 2  ;A2 01 

    X=0x01;
    //F30E: LDA $0282    ; 4  ;AD 82 02 

    A=ReadPIA(0x0282);    //SWCHB - PIA Port B, Console Switches;
    //F311: STA $D5    ; 3  ;85 D5 

    WriteByte(0xD5,A);   //DIFSWCH
    //F313: LDA $0280    ; 4  ;AD 80 02 

    A=ReadPIA(0x0280);    //SWCHA - PIA Port A; input or output;
  case 0xF316:  //0xF313, 0xF378, 
    //F316: BIT $88   ; 3  ;24 88 

    M=ReadByte(0x88);   //GameOn
    fNeg=(M & 0x80);
    //F318: BMI $F31C   ; 3  ;30 02 

    if (fNeg) {PC=0XF31C;
          break;};
    //F31A: LDA #$FF    ; 2  ;A9 FF 

    A=0xFF;
  case 0xF31C:  //0xF318, 0xF31A, 
    //F31C: EOR #$FF   ; 2  ;49 FF 

    A=A ^ 0xFF;
    //F31E: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;
    //F320: STA $D2    ; 3  ;85 D2 

    WriteByte(0xD2,A);   //TEMP
    //F322: LDY $85    ; 3  ;A4 85 

    Y=ReadByte(0x85);   //GAMSHP
    //F324: LDA $F70F,Y    ; 4  ;B9 0F F7 

    A=ReadByte(0xF70F+Y);
    //F327: CLC   ; 2  ;18 

    fCarry=false;
    //F328: ADC  $D2    ; 3  ;65 D2 
opcADC(ReadByte(0xD2));
 
    //F32A: TAY   ; 2  ;A8 

    Y=A;
    //F32B: LDA $F712,Y    ; 4  ;B9 12 F7 

    A=ReadByte(0xF712+Y);
    //F32E: AND #$0F    ; 2  ;29 0F 

    A=A & 0x0F;   fZero = (0 == A);
    //F330: STA $D1    ; 3  ;85 D1 

    WriteByte(0xD1,A);   //TEMP1
    //F332: BEQ $F338   ; 3  ;F0 04 

    if (fZero) {PC=0XF338;break;};
    //F334: CMP $91,X     ; 4  ;D5 91 

    M=ReadByte(0x91 + X);   //LastTurn0
      fCarry=( A >= M );
      fZero = (M == A);
    //F336: BNE $F33C   ; 3  ;D0 04 

    if (!fZero) {PC=0XF33C;break;};
  case 0xF338:  //0xF332, 0xF336, 
    //F338: DEC $93,X    ; 6  ;D6 93 

    M=ReadByte(0x93 + X) - 1;   //TurnTimer0
    if (M<0) M=M + 0x100;
    WriteByte(0x93 + X ,M);
    fZero = (M == 0);
    //F33A: BNE $F349   ; 3  ;D0 0D 

    if (!fZero) {PC=0XF349;break;};
  case 0xF33C:  //0xF336, 0xF33A, 
    //F33C: STA $91,X   ; 4  ;95 91 

    WriteByte(0x91 + X,A);   //LastTurn0
    //F33E: LDA #$0F    ; 2  ;A9 0F 

    A=0x0F;
    //F340: STA $93,X   ; 4  ;95 93 

    WriteByte(0x93 + X,A);   //TurnTimer0
    //F342: LDA $D1    ; 3  ;A5 D1 

    A=ReadByte(0xD1);   //TEMP1
    //F344: CLC   ; 2  ;18 

    fCarry=false;
    //F345: ADC  $95,X    ; 4  ;75 95  //DIRECTN0

    opcADC( ReadByte(0x95 + X)); 
    //F347: STA $95,X   ; 4  ;95 95 

    WriteByte(0x95 + X,A);   //DIRECTN0
  case 0xF349:  //0xF33A, 0xF347, 
    //F349: INC $8D,X    ; 6  ;F6 8D 

    M=ReadByte(0x8D + X ) + 1;
       //FwdTimer0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x8D + X ,M);
    fNeg=(M >= 0x80);
    //F34B: BMI $F36B   ; 3  ;30 1E 

    if (fNeg) {PC=0XF36B;break;};
    //F34D: LDA $F712,Y    ; 4  ;B9 12 F7 

    A=ReadByte(0xF712+Y);
    //F350: LSR A   ; 2  ;4A 

    A=A>>1;
    //F351: LSR A   ; 2  ;4A 

    A=A>>1;
    //F352: LSR A   ; 2  ;4A 

    A=A>>1;
    //F353: LSR A   ; 2  ;4A 

    A=A>>1;
    //F354: BIT $D5   ; 3  ;24 D5 

    M=ReadByte(0xD5);   //DIFSWCH
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F356: BMI $F37B   ; 3  ;30 23 

    if (fNeg) {PC=0XF37B;break;};
  case 0xF358:  //0xF356, 0xF37E, 
    //F358: STA $8B,X   ; 4  ;95 8B 

    WriteByte(0x8B + X,A);   //Vtemp
    //F35A: ASL A   ; 2  ;0A 

    fCarry = ((A & 0x80)>0);
    A=A<<1;
    A=A&0xFF;
    //F35B: TAY   ; 2  ;A8 

    Y=A;
    //F35C: LDA $F637,Y    ; 4  ;B9 37 F6 

    A=ReadByte(0xF637+Y);
    //F35F: STA $A8,X   ; 4  ;95 A8 

    WriteByte(0xA8 + X,A);   //MVadjA0
    //F361: INY   ; 2  ;C8 

    Y++;
    Y=Y & 0xFF;
    //F362: LDA $F637,Y    ; 4  ;B9 37 F6 

    A=ReadByte(0xF637+Y);
    //F365: STA $AA,X   ; 4  ;95 AA 

    WriteByte(0xAA + X,A);   //MVadjB0
    //F367: LDA #$F0    ; 2  ;A9 F0 

    A=0xF0;
    //F369: STA $8D,X   ; 4  ;95 8D 

    WriteByte(0x8D + X,A);   //FwdTimer0
  case 0xF36B:  //0xF34B, 0xF369, 
    //F36B: JSR $F380   ; 6  ;20 80 F3 

    WriteStackWord(0xF36E);
    PC=0xF380;
    break;
  case 0xF36E:  //0xF36B, 
    //F36E: LDA $0280    ; 4  ;AD 80 02 

    A=ReadPIA(0x0280);    //SWCHA - PIA Port A; input or output;
    //F371: LSR A   ; 2  ;4A 

    A=A>>1;
    //F372: LSR A   ; 2  ;4A 

    A=A>>1;
    //F373: LSR A   ; 2  ;4A 

    A=A>>1;
    //F374: LSR A   ; 2  ;4A 

    A=A>>1;
    //F375: ASL $D5   ; 5  ;06 D5 

    M=ReadByte(0xD5);   //DIFSWCH
    fCarry = ((M & 0x80)>0);
    M=M<<1;
    M=M&0xFF;
    WriteByte(0xD5,M);
    //F377: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F378: BEQ $F316   ; 3  ;F0 9C 

    if (fZero) {PC=0XF316;break;};
    //F37A: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF37B:  //0xF356, 
    //F37B: SEC   ; 2  ;38 

    fCarry=true;
    //F37C: SBC  $85    ; 3  ;E5 85 
 
     opcSBC( ReadByte(0x85)); //GAMSHP
     
    //F37E: BPL $F358   ; 3  ;10 D8 

    if (!fNeg) {PC=0XF358;break;};
  case 0xF380:  //0xF36B, 0xF37E, 
    //F380: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    fNeg=(A >= 0x80);
    //F382: BMI $F38C   ; 3  ;30 08 

    if (fNeg) {PC=0XF38C;break;};
    //F384: AND #$01    ; 2  ;29 01 

    A=A & 0x01;   fZero = (0 == A);
    //F386: BEQ $F38C   ; 3  ;F0 04 

    if (fZero) {PC=0XF38C;break;};
    //F388: LDA $DB    ; 3  ;A5 DB 

    A=ReadByte(0xDB);   //ColorBK
    //F38A: STA $D6,X   ; 4  ;95 D6 

    WriteByte(0xD6 + X,A);   //Color0
  case 0xF38C:  //0xF382, 0xF386, 0xF38A, 
    //F38C: LDA $99,X    ; 4  ;B5 99 

    A=ReadByte(0x99 + X);   //MisLife0
    fZero = (A == 0);
    //F38E: BEQ $F3B7   ; 3  ;F0 27 

    if (fZero) {PC=0XF3B7;break;};
    //F390: LDA $D8,X    ; 4  ;B5 D8 

    A=ReadByte(0xD8 + X);   //XColor0
    //F392: STA $D6,X   ; 4  ;95 D6 

    WriteByte(0xD6 + X,A);   //Color0
    //F394: LDA $99,X    ; 4  ;B5 99 

    A=ReadByte(0x99 + X);   //MisLife0
    //F396: CMP #$07     ; 2  ;C9 07 

    M=0x07;
      fCarry=( A >= M );
    //F398: BCC $F3AE   ; 3  ;90 14 

    if (!fCarry) {PC=0XF3AE;break;};
    //F39A: BIT $D5   ; 3  ;24 D5 

    M=ReadByte(0xD5);   //DIFSWCH
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F39C: BPL $F3A2   ; 3  ;10 04 

    if (!fNeg) {PC=0XF3A2;break;};
    //F39E: CMP #$1C     ; 2  ;C9 1C 

    M=0x1C;
      fCarry=( A >= M );
    //F3A0: BCC $F3AE   ; 3  ;90 0C 

    if (!fCarry) {PC=0XF3AE;break;};
  case 0xF3A2:  //0xF39C, 0xF3A0, 
    //F3A2: CMP #$30     ; 2  ;C9 30 

    M=0x30;
      fCarry=( A >= M );
    //F3A4: BCC $F3C5   ; 3  ;90 1F 

    if (!fCarry) {PC=0XF3C5;break;};
    //F3A6: CMP #$37     ; 2  ;C9 37 

    M=0x37;
      fCarry=( A >= M );
    //F3A8: BCS $F3CB   ; 3  ;B0 21 

    if (fCarry) {PC=0XF3CB;break;};
    //F3AA: BIT $83   ; 3  ;24 83 

    M=ReadByte(0x83);   //GUIDED
    fOverflow=(M & 0x40);
    //F3AC: BVC $F3CB   ; 3  ;50 1D 

    if (!fOverflow) {PC=0XF3CB;break;};
  case 0xF3AE:  //0xF398, 0xF3A0, 0xF3AC, 0xF3C2, 
    //F3AE: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    //F3B0: STA $99,X   ; 4  ;95 99 

    WriteByte(0x99 + X,A);   //MisLife0
    //F3B2: LDA #$FF    ; 2  ;A9 FF 

    A=0xFF;
    fZero = (A == 0);
    fNeg=(A >= 0x80);
  case 0xF3B4:  //0xF3B2, 0xF3F4, 
    //F3B4: STA $28,X   ; 4  ;95 28 

    WriteByte(0x28 + X,A);
    //F3B6: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
  case 0xF3B7:  //0xF38E, 
    //F3B7: BIT $88   ; 3  ;24 88 

    M=ReadByte(0x88);   //GameOn
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F3B9: BPL $F3BF   ; 3  ;10 04 

    if (!fNeg) {PC=0XF3BF;break;};
    //F3BB: LDA $3C,X    ; 4  ;B5 3C 

    A=ReadByte(0x3C + X);
    fNeg=(A >= 0x80);
    //F3BD: BPL $F3F6   ; 3  ;10 37 

    if (!fNeg) {PC=0XF3F6;break;};
  case 0xF3BF:  //0xF3B9, 0xF3BD, 
    //F3BF: JSR $F410   ; 6  ;20 10 F4 

    WriteStackWord(0xF3C2);
    PC=0xF410;
    break;
  case 0xF3C2:  //0xF3BF, 
    //F3C2: JMP $F3AE   ; 3  ;4C AE F3 

    PC=0xF3AE;
    break;
  case 0xF3C5:  //0xF3A4, 
    //F3C5: JSR $F410   ; 6  ;20 10 F4 

    WriteStackWord(0xF3C8);
    PC=0xF410;
    break;
  case 0xF3C8:  //0xF3C5, 
    //F3C8: JMP $F3DE   ; 3  ;4C DE F3 

    PC=0xF3DE;
    break;
  case 0xF3CB:  //0xF3A8, 0xF3AC, 0xF40D, 
    //F3CB: LDA $9F,X    ; 4  ;B5 9F 

    A=ReadByte(0x9F + X);   //AltSnd0
    fZero = (A == 0);
    //F3CD: BEQ $F3D9   ; 3  ;F0 0A 

    if (fZero) {PC=0XF3D9;break;};
    //F3CF: JSR $F410   ; 6  ;20 10 F4 

    WriteStackWord(0xF3D2);
    PC=0xF410;
    break;
  case 0xF3D2:  //0xF3CF, 
    //F3D2: LDA #$30    ; 2  ;A9 30 

    A=0x30;
    //F3D4: STA $99,X   ; 4  ;95 99 

    WriteByte(0x99 + X,A);   //MisLife0
    //F3D6: JMP $F3DE   ; 3  ;4C DE F3 

    PC=0xF3DE;
    break;
  case 0xF3D9:  //0xF3CD, 
    //F3D9: LDA $99,X    ; 4  ;B5 99 

    A=ReadByte(0x99 + X);   //MisLife0
    //F3DB: JSR $F300   ; 6  ;20 00 F3 

    WriteStackWord(0xF3DE);
    PC=0xF300;
    break;
  case 0xF3DE:  //0xF3C8, 0xF3DB, 0xF3D6, 
    //F3DE: LDA $86    ; 3  ;A5 86 

    A=ReadByte(0x86);   //CLOCK
    //F3E0: AND #$03    ; 2  ;29 03 

    A=A & 0x03;   fZero = (0 == A);
    //F3E2: BEQ $F3F0   ; 3  ;F0 0C 

    if (fZero) {PC=0XF3F0;break;};
    //F3E4: BIT $84   ; 3  ;24 84 

    M=ReadByte(0x84);   //BILLIARD
    fOverflow=(M & 0x40);
    //F3E6: BVS $F3F2   ; 3  ;70 0A 

    if (fOverflow) {PC=0XF3F2;break;};
    //F3E8: BIT $82   ; 3  ;24 82 

    M=ReadByte(0x82);   //PF_PONG
    fOverflow=(M & 0x40);
    //F3EA: BVC $F3F0   ; 3  ;50 04 

    if (!fOverflow) {PC=0XF3F0;break;};
    //F3EC: AND #$01    ; 2  ;29 01 

    A=A & 0x01;   fZero = (0 == A);
    //F3EE: BNE $F3F2   ; 3  ;D0 02 

    if (!fZero) {PC=0XF3F2;break;};
  case 0xF3F0:  //0xF3E2, 0xF3EA, 0xF3EE, 
    //F3F0: DEC $99,X    ; 6  ;D6 99 

    M=ReadByte(0x99 + X) - 1;   //MisLife0
    if (M<0) M=M + 0x100;
    WriteByte(0x99 + X ,M);
  case 0xF3F2:  //0xF3E6, 0xF3EE, 0xF3F0, 
    //F3F2: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F3F4: BEQ $F3B4   ; 3  ;F0 BE 

    if (fZero) {PC=0XF3B4;break;};

    //////////////////////////////////////////////   LAUNCH MISSLE //////////////
  case 0xF3F6:  //0xF3BD, 0xF3F4, 

    TankX[2 + X] = TankX[X];

    //F3F6: LDA #$3F    ; 2  ;A9 3F 

    A=0x3F;
    //F3F8: STA $99,X   ; 4  ;95 99 

    WriteByte(0x99 + X,A);   //MisLife0
    //F3FA: SEC   ; 2  ;38 

    fCarry=true;
    //F3FB: LDA $A4,X    ; 4  ;B5 A4 

    A=ReadByte(0xA4 + X);   //TankY0
    //F3FD: SBC #$06    ; 2  ;E9 06 
    opcSBC( 0x06); //
 
    //F3FF: STA $A6,X   ; 4  ;95 A6 

    WriteByte(0xA6 + X,A);   //MissileY0
    //F401: LDA $95,X    ; 4  ;B5 95 

    A=ReadByte(0x95 + X);   //DIRECTN0
    //F403: STA $97,X   ; 4  ;95 97 

    WriteByte(0x97 + X,A);
    //F405: LDA #$1F    ; 2  ;A9 1F 

    A=0x1F;
    //F407: STA $9B,X   ; 4  ;95 9B 

    WriteByte(0x9B + X,A);   //BounceCount0
    //F409: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    //F40B: STA $9D,X   ; 4  ;95 9D 

    WriteByte(0x9D + X,A);   //MxPFcount0
    //F40D: JMP $F3CB   ; 3  ;4C CB F3 

    PC=0xF3CB;
    break;


    //This routine generates engine or Pong sound as appropriate.
  case 0xF410:  //0xF3BF, 0xF3C5, 0xF3CF, 
    //F410: LDA $9F,X    ; 4  ;B5 9F 

    A=ReadByte(0x9F + X);   //AltSnd0
    fZero = (A == 0);
    //F412: BEQ $F421   ; 3  ;F0 0D 

    if (fZero) {PC=0XF421;
          break;};  //Goto Engine SOund

    //Pong SOund
    //F414: LDA #$04    ; 2  ;A9 04 

    A=0x04;
    //F416: STA $15,X   ; 4  ;95 15 

    WriteByte(0x15 + X,A);
    //F418: LDA #$07    ; 2  ;A9 07 

    A=0x07;
    //F41A: STA $19,X   ; 4  ;95 19 

    WriteByte(0x19 + X,A);
    //F41C: LDA $9B,X    ; 4  ;B5 9B 

    A=ReadByte(0x9B + X);   //BounceCount0
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F41E: STA $17,X   ; 4  ;95 17 

    WriteByte(0x17 + X,A);
    //F420: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;
         

    // ENGINE SOUND
  case 0xF421:  //0xF412, 
    //F421: LDY $85    ; 3  ;A4 85 

    Y=ReadByte(0x85);   //GAMSHP
    //F423: LDA $F733,Y    ; 4  ;B9 33 F7 

    A=ReadByte(0xF733+Y);
    //F426: AND  $88    ; 3  ;25 88 

    A=A & ReadByte(0x88);   //GameOn
    //F428: STA $19,X   ; 4  ;95 19 

    WriteByte(0x19 + X,A);
    //F42A: LDA $F736,Y    ; 4  ;B9 36 F7 

    A=ReadByte(0xF736+Y);
    //F42D: STA $15,X   ; 4  ;95 15 

    WriteByte(0x15 + X,A);
    //F42F: CLC   ; 2  ;18 

    fCarry=false;
    //F430: LDA #$00    ; 2  ;A9 00 

    A=0x00;
  case 0xF432:  //0xF430, 0xF437, 
    //F432: DEY   ; 2  ;88 

    Y--;
    Y=Y & 0xFF;
    fNeg=(Y >= 0x80);
    //F433: BMI $F439   ; 3  ;30 04 

    if (fNeg) {PC=0XF439;break;};
    //F435: ADC #$0C    ; 2  ;69 0C 
    opcADC( 0xC);
     
    //F437: BPL $F432   ; 3  ;10 F9 
    if (!fNeg) {PC=0XF432;
          break;};


  case 0xF439:  //0xF433, 0xF437, 
    //F439: ADC  $8B,X    ; 4  ;75 8B 
    T = ReadByte(0x8B + X);     //Vtemp
    opcADC( T);
     
    //F43B: TAY   ; 2  ;A8  
    Y=A;
    //F43C: TXA   ; 2  ;8A  
    A=X;
    //F43D: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A & 0xFF;
    //F43E: ADC  $F739,Y      ; 4  ;79 39 F7 
    T = ReadByte(0xF739 + Y);
    opcADC( T);
       
    //F441: STA $17,X   ; 4  ;95 17 

    WriteByte(0x17 + X,A);
    //F443: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;




    //////////////////////////////////////////////////////////////   COLLISION CHECK  /////////////////////
  case 0xF444:  //0xF020, 
    //F444: LDX #$01    ; 2  ;A2 01               //For X= 1 to 0; next X

    X=0x01;



  case 0xF446:  //0xF444, 0xF504, 
    //F446: LDA $30,X    ; 4  ;B5 30 

    A = ReadByte(0x30 + X);         // CHECK TANK COLLISION WITH MISSLE  
    fNeg=(A >= 0x80);
    //F448: BPL $F476   ; 3  ;10 2C 

    if (!fNeg) {PC=0XF476;
        break;};            //Goto No Missle Collision

    //     IS MISSLE COLLISION   X=Winner.
    //F44A: BIT $84   ; 3  ;24 84 
    M=ReadByte(0x84);   //BILLIARD
    fOverflow=(M & 0x40);
    //F44C: BVC $F454   ; 3  ;50 06 

    if (!fOverflow) {PC=0XF454;break;};
    //F44E: LDA $9B,X    ; 4  ;B5 9B 

    A=ReadByte(0x9B + X);   //BounceCount0
    //F450: CMP #$1F     ; 2  ;C9 1F 

    M=0x1F;
      fCarry=( A >= M );
      fZero = (M == A);
    //F452: BEQ $F476   ; 3  ;F0 22 

    if (fZero) {PC=0XF476;break;};

    //TANK IS SHOT
  case 0xF454:  //0xF44C, 0xF452, 
    //F454: INC $95,X    ; 6  ;F6 95        //Turn Tank 0
    M=ReadByte(0x95 + X ) + 1;       //DIRECTN0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x95 + X ,M);

    //F456: INC $97,X    ; 6  ;F6 97        //Turn Tank 1
    M=ReadByte(0x97 + X ) + 1;
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x97 + X ,M);

    //F458: SED   ; 2  ;F8  
    fDecMod=true;   //  
    //F459: LDA $A1,X    ; 4  ;B5 A1  
    A=ReadByte(0xA1 + X);   //SCORE0
    //F45B: CLC   ; 2  ;18  
    fCarry=false;
    //F45C: ADC #$01    ; 2  ;69 01  
    opcADC( 1);                 //BUMP SCORE.
    //F45E: STA $A1,X   ; 4  ;95 A1  
    WriteByte(0xA1 + X,A);   //SCORE0
    //F460: CLD   ; 2  ;D8  
    fDecMod=false;
    //F461: TXA   ; 2  ;8A 

    A=X;
    //F462: CLC   ; 2  ;18 

    fCarry=false;
    //F463: ADC #$FD    ; 2  ;69 FD       //  FD + tank number.    1111 1101

    opcADC( 0xFD);
    //F465: STA $8A    ; 3  ;85 8A 

    WriteByte(0x8A,A);   //StirTimer      // Initialize StirTimer
    //F467: LDA #$FF    ; 2  ;A9 FF 

    A=0xFF;
    //F469: STA $28    ; 3  ;85 28        //Hide both Missles
    ResetMissletoPlayer(0,A); // bit 1
    //F46B: STA $29    ; 3  ;85 29  
    ResetMissletoPlayer(1,A); // bit 1
    //F46D: LDA #$00    ; 2  ;A9 00 
    A=0x00;

    //F46F: STA $19,X   ; 4  ;95 19  
    WriteByte(0x19 + X,A);

    //F471: STA $99    ; 3  ;85 99        //Kill both Missles
    WriteByte(0x99,A);   //MisLife0 
    //F473: STA $9A    ; 3  ;85 9A  
    WriteByte(0x9A,A);   //MisLife1

    //F475: RTS   ; 6  ;60 
    PC=ReadStackWord();
    break;

    //No Missle Collision   ////////////////////////////////////////////////
  case 0xF476:  //0xF448, 0xF452, 
    //F476: BIT $A3   ; 3  ;24 A3 

    M=ReadByte(0xA3);   //GAMVAR        // IS a Tank Game
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F478: BPL $F47D   ; 3  ;10 03 

    if (!fNeg) {PC=0XF47D;
            break;};          //Goto Tank Game
    //F47A: JMP $F501   ; 3  ;4C 01 F5      // Goto Plane Game
    PC=0xF501;
    break;

    //Tank Game and No Collision
  case 0xF47D:  //0xF478, 
    //F47D: LDA $9F,X    ; 4  ;B5 9F 

    A=ReadByte(0x9F + X);   //AltSnd0
    fZero = (A == 0);
    //F47F: BEQ $F48B   ; 3  ;F0 0A 

    if (fZero) {PC=0XF48B;break;};
    //F481: CMP #$04     ; 2  ;C9 04 

    M=0x04;
      fCarry=( A >= M );
    //F483: INC $9F,X    ; 6  ;F6 9F 

    M=ReadByte(0x9F + X ) + 1;
       //AltSnd0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x9F + X ,M);
    //F485: BCC $F48B   ; 3  ;90 04 

    if (!fCarry) {PC=0XF48B;break;};
    //F487: LDA #$00    ; 2  ;A9 00 
    A=0x00;

    //F489: STA $9F,X   ; 4  ;95 9F 

    WriteByte(0x9F + X,A);   //AltSnd0
  case 0xF48B:  //0xF47F, 0xF485, 0xF489, 
    //F48B: LDA $34,X    ; 4  ;B5 34        //Check Missle collided with Playfield
    A=ReadByte(0x34 + X);
    fNeg=(A >= 0x80);
    //F48D: BMI $F496   ; 3  ;30 07 
    if (fNeg) {PC=0XF496;
          break;};              // yes, Missile collided with PF.


    //F48F: LDA #$00    ; 2  ;A9 00 
    A=0x00;
    //F491: STA $9D,X   ; 4  ;95 9D 

    WriteByte(0x9D + X,A);   //MxPFcount0
    //F493: JMP $F4D6   ; 3  ;4C D6 F4 

    PC=0xF4D6;
    break;

    //Collision Missile Playfield.
  case 0xF496:  //0xF48D, 
    //F496: BIT $82   ; 3  ;24 82  Missle hit wall

    M=ReadByte(0x82);   //PF_PONG
    fOverflow=(M & 0x40);
    //F498: BVC $F4D0   ; 3  ;50 36 

    if (!fOverflow) {PC=0XF4D0;break;};
    //F49A: LDA $9D,X    ; 4  ;B5 9D 

    A=ReadByte(0x9D + X);   //MxPFcount0
    fZero = (A == 0);
    //F49C: BNE $F4B7   ; 3  ;D0 19 

    if (!fZero) {PC=0XF4B7;break;};
    //F49E: INC $9F,X    ; 6  ;F6 9F 

    M=ReadByte(0x9F + X ) + 1;
       //AltSnd0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x9F + X ,M);
    //F4A0: DEC $9B,X    ; 6  ;D6 9B 

    M=ReadByte(0x9B + X) - 1;   //BounceCount0
    if (M<0) M=M + 0x100;
    WriteByte(0x9B + X ,M);
    //F4A2: LDA $97,X    ; 4  ;B5 97 

    A=ReadByte(0x97 + X);
    //F4A4: STA $B2,X   ; 4  ;95 B2 

    WriteByte(0xB2 + X,A);   //OldMisDir0
    //F4A6: EOR #$FF   ; 2  ;49 FF 

    A=A ^ 0xFF;
    //F4A8: STA $97,X   ; 4  ;95 97 

    WriteByte(0x97 + X,A);  //Missile Direction
    //F4AA: INC $97,X    ; 6  ;F6 97 

    M=ReadByte(0x97 + X ) + 1;   //Missile Direction
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x97 + X ,M);
    //F4AC: LDA $97,X    ; 4  ;B5 97 

    A=ReadByte(0x97 + X);
    //F4AE: AND #$03    ; 2  ;29 03 

    A=A & 0x03;   fZero = (0 == A);
    //F4B0: BNE $F4B4   ; 3  ;D0 02 

    if (!fZero) {PC=0XF4B4;break;};
    //F4B2: INC $97,X    ; 6  ;F6 97 

    M=ReadByte(0x97 + X ) + 1;  //Missile Direction
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x97 + X ,M);  //Missile Direction
  case 0xF4B4:  //0xF4B0, 0xF4B2, 
    //F4B4: JMP $F4D4   ; 3  ;4C D4 F4  
    PC=0xF4D4;
    break;                      //Jump continue next player.


  case 0xF4B7:  //0xF49C, 
    //F4B7: CMP #$01     ; 2  ;C9 01 

    M=0x01;
      fZero = (M == A);
    //F4B9: BEQ $F4C6   ; 3  ;F0 0B 

    if (fZero) {PC=0XF4C6;break;};
    //F4BB: CMP #$03     ; 2  ;C9 03 

    M=0x03;
      fCarry=( A >= M );
      fZero = (M == A);
    //F4BD: BCC $F4D4   ; 3  ;90 15 

    if (!fCarry) {PC=0XF4D4;break;};
    //F4BF: BNE $F4D4   ; 3  ;D0 13 

    if (!fZero) {PC=0XF4D4;break;};
    //F4C1: LDA $B2,X    ; 4  ;B5 B2 

    A=ReadByte(0xB2 + X);   //OldMisDir0
    //F4C3: JMP $F4C8   ; 3  ;4C C8 F4 

    PC=0xF4C8;
    break;
  case 0xF4C6:  //0xF4B9, 
    //F4C6: LDA $97,X    ; 4  ;B5 97 

    A=ReadByte(0x97 + X);
  case 0xF4C8:  //0xF4C3, 0xF4C6, 
    //F4C8: CLC   ; 2  ;18 

    fCarry=false;
    //F4C9: ADC #$08    ; 2  ;69 08 

    opcADC( 0x08);
    //F4CB: STA $97,X   ; 4  ;95 97 

    WriteByte(0x97 + X,A);
    //F4CD: JMP $F4D4   ; 3  ;4C D4 F4 

    PC=0xF4D4;
    break;
  case 0xF4D0:  //0xF498, 
    //F4D0: LDA #$01    ; 2  ;A9 01 

    A=0x01;
    //F4D2: STA $99,X   ; 4  ;95 99 

    WriteByte(0x99 + X,A);   //MisLife0
  case 0xF4D4:  //0xF4B4, 0xF4D2, 0xF4BD, 0xF4BF, 0xF4CD, 
    //F4D4: INC $9D,X    ; 6  ;F6 9D 

    M=ReadByte(0x9D + X ) + 1;
       //MxPFcount0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x9D + X ,M);

    ///////////CHECK Tank Collisions //////////////////////////////////////////

  case 0xF4D6:  //0xF493, 0xF4D4, 
    //F4D6: LDA $32,X    ; 4  ;B5 32 

    A = ReadByte(0x32 + X);         //CXP0FB    Check if tank collided with wall.
    fNeg=(A >= 0x80);
    //F4D8: BMI $F4DE   ; 3  ;30 04 

    if (fNeg) {PC=0XF4DE;
          
          Serial.println("WALL COLL");
          break;};  //Wall collision
    //F4DA: LDA $37    ; 3  ;A5 37 

    A=ReadCollisionMissle2MPlayer2P(); //Collisions D7=P0/P1, D6=M0/M1
    fNeg=(A >= 0x80);           // Check if Tank&Tank collision.
    //F4DC: BPL $F4E7   ; 3  ;10 09 

    if (!fNeg) {PC=0XF4E7;
          break;};


    //Tank&Tank collision
  case 0xF4DE:  //0xF4D8, 0xF4DC, 
    //F4DE: LDA $8A    ; 3  ;A5 8A          // See if we are spinning a tank.

    A=ReadByte(0x8A);   //StirTimer
    //F4E0: CMP #$02     ; 2  ;C9 02        // < 2 means no.   2 or more is the countdown.

    M=0x02;
      fCarry=( A >= M );

    //F4E2: BCC $F4ED   ; 3  ;90 09 
    if (!fCarry) {PC=0XF4ED;
            break;};            //No spinning tanks.  

    //F4E4: JSR $F508   ; 6  ;20 08 F5 
    WriteStackWord(0xF4E7);
    PC=0xF508;                    //Is spinning tank    JSR  TankKnockBack
    break;

                          //There was no collision at all.  
  case 0xF4E7:  //0xF4DC, 0xF4E4,       //Set the collision counter to 3.
    //F4E7: LDA #$03    ; 2  ;A9 03 

    A=0x03;
    fZero = (A == 0);
    //F4E9: STA $E4,X   ; 4  ;95 E4 

    WriteByte(0xE4 + X,A);   //COLcount0
    //F4EB: BNE $F501   ; 3  ;D0 14 

    if (!fZero) {PC=0XF501;
            break;}; //Always does Branch.

  case 0xF4ED:  //0xF4E2, 0xF4EB, 
    //F4ED: DEC $E4,X    ; 6  ;D6 E4          //  DEC Collision Counter
    M=ReadByte(0xE4 + X) - 1;   //COLcount0
    if (M<0) M=M + 0x100;
    WriteByte(0xE4 + X ,M);
    fNeg=(M >= 0x80);
    //F4EF: BMI $F4F7   ; 3  ;30 06 

    if (fNeg) {PC=0XF4F7;
        break;                  //Counter finsihed  GOTO Ignore collision
        }; 
    //F4F1: LDA $8B,X    ; 4  ;B5 8B        //Get the tank Velocity

    A=ReadByte(0x8B + X);   //Vtemp
    fZero = (A == 0);
    //F4F3: BEQ $F501   ; 3  ;F0 0C 

    if (fZero) {PC=0XF501;
          break;};            // If Velocity = 0;  done with this tank, continue loop.
    //F4F5: BNE $F4F9   ; 3  ;D0 02 

    if (!fZero) {PC=0XF4F9;
          break;};            // If Velocity >0;  Flip tank.

  case 0xF4F7:  //0xF4EF, 0xF4F5, 
    //F4F7: INC $95,X    ; 6  ;F6 95      //Inc the direction 

    M=ReadByte(0x95 + X ) + 1;
       //DIRECTN0
    if (M>0xFF) M=M & 0xFF;
    WriteByte(0x95 + X ,M);

    //  FLIP TANK
  case 0xF4F9:  //0xF4F5, 0xF4F7, 
    //F4F9: LDA $95,X    ; 4  ;B5 95 

    A=ReadByte(0x95 + X);   //DIRECTN0
    //F4FB: CLC   ; 2  ;18 

    fCarry=false;
    //F4FC: ADC #$08    ; 2  ;69 08         ;ADD 180 degrees to direction.

    opcADC( 0x08);
    //F4FE: JSR $F50F   ; 6  ;20 0F F5     // JSR BUMPTANK
  
      Serial.println("BUMPTANK F4FE");
      WriteStackWord(0xF501);
      PC=0xF50F;
      break;
  case 0xF501:  //0xF47A, 0xF4EB, 0xF4F3, 0xF4FE, 
    //F501: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F502: BMI $F507   ; 3  ;30 03 

    if (fNeg) {PC=0XF507;break;};
    //F504: JMP $F446   ; 3  ;4C 46 F4 

    PC=0xF446;
    break;
  case 0xF507:  //0xF502, 
    //F507: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;

     
  //  ; Bump the tank in the direction  the other player's missile is moving 
  ///////////////////////////////////////////////////////////////////////// TankKnockBack 
    // Input X =  Loser Tank.

  case 0xF508:  //0xF2F6, 0xF4E4, 
    //F508: TXA   ; 2  ;8A 
    if (X == 0) {
      char sssss = 0;
    };
    if (X == 1) {
      char sssss = 0;
    };

    A=X;
    //F509: EOR #$01   ; 2  ;49 01 

    A=A ^ 0x01;  
    //F50B: TAY   ; 2  ;A8    Get Winning Tank #

    Y=A;
    //F50C: LDA $0097,Y    ; 4  ;B9 97 00   Read value from winning tank.

    A=ReadByte(0x0097+Y);    //Winner Missle Direction

 
    //  Bump the tank in the direction of a standard  22.5 - degree bearing code
    ///////////////////////////////////////////////////////////////////////// BumpTank 
  case 0xF50F:  //0xF50C, 0xF4FE, 
    //F50F: AND #$0F    ; 2  ;29 0F 

    if (X == 0) {
      
    };
    if (X == 1) {
      char sssss = 0;
    };


    A=A & 0x0F;
    //F511: TAY   ; 2  ;A8 

    Y=A;
    //F512: LDA $F627,Y    ; 4  ;B9 27 F6 

    A=ReadByte(0xF627+Y);         // 0xC8, 0xC4, 0xC0, 0xE0,  0x00, 0x20, 0x40, 0x44,  
                        // 0x48, 0x4C, 0x4F, 0x2F,  0x0F,  0xEF, 0xCF, 0xCC 
    //F515: JSR $F27C   ; 6  ;20 7C F2             //JSR MOVE TANKS AND MISSLES

    WriteStackWord(0xF518);
    PC=0xF27C;
    break;
  case 0xF518:  //0xF515, 
    //F518: LDA #$00    ; 2  ;A9 00 

    A=0x00;
    //F51A: STA $A8,X   ; 4  ;95 A8 

    WriteByte(0xA8 + X,A);   //MVadjA0
    //F51C: STA $AA,X   ; 4  ;95 AA 

    WriteByte(0xAA + X,A);   //MVadjB0
    //F51E: STA $8D,X   ; 4  ;95 8D 

    WriteByte(0x8D + X,A);   //FwdTimer0
    //F520: LDA $D8,X    ; 4  ;B5 D8 

    A=ReadByte(0xD8 + X);   //XColor0
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F522: STA $D6,X   ; 4  ;95 D6 

    WriteByte(0xD6 + X,A);   //Color0
    //F524: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;


//////////////////////////////////////////    GAME INIT

  case 0xF525:  //0xF1D0, 
    //F525: LDX $85    ; 3  ;A6 85    

    X=ReadByte(0x85);   //GAMSHP      //0=tank, 1=biplane, 2=jet
    //F527: LDA $F7C6,X    ; 4  ;BD C6 F7 

    A=ReadByte(0xF7C6 + X);         // 0x4F, 0xCF, 0x8F, 
    //F52A: STA $BB    ; 3  ;85 BB 

    WriteByte(0xBB,A);   //SHAPES
    //F52C: LDA $F7C9,X    ; 4  ;BD C9 F7 

    A=ReadByte(0xF7C9 + X);         //0xF6, 0xF6, 0xF6,
    //F52F: STA $BC    ; 3  ;85 BC 

    WriteByte(0xBC,A);
    //F531: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    //F533: LSR A   ; 2  ;4A 

    A=A>>1;
    //F534: LSR A   ; 2  ;4A 

    A=A>>1;
    //F535: AND #$03    ; 2  ;29 03 

    A=A & 0x03;
    //F537: TAX   ; 2  ;AA 

    X=A;
    //F538: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    fNeg=(A >= 0x80);
    //F53A: BPL $F546   ; 3  ;10 0A 

    if (!fNeg) {PC=0XF546;break;};
    //F53C: AND #$08    ; 2  ;29 08 

    A=A & 0x08;   fZero = (0 == A);
    //F53E: BEQ $F544   ; 3  ;F0 04 

    if (fZero) {PC=0XF544;break;};
    //F540: LDX #$03    ; 2  ;A2 03 

    X=0x03;
    fNeg=(X >= 0x80);
    //F542: BPL $F548   ; 3  ;10 04 

    if (!fNeg) {PC=0XF548;break;};
  case 0xF544:  //0xF53E, 0xF542, 
    //F544: LDA #$80    ; 2  ;A9 80 

    A=0x80;
  case 0xF546:  //0xF53A, 0xF544, 
    //F546: STA $82    ; 3  ;85 82 

    WriteByte(0x82,A);   //PF_PONG
  case 0xF548:  //0xF542, 0xF546, 
    //F548: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    //F54A: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F54B: ASL A   ; 2  ;0A 

    fCarry = ((A & 0x80)>0);
    A=A<<1;
    A=A&0xFF;
    //F54C: BIT $A3   ; 3  ;24 A3 

    M=ReadByte(0xA3);   //GAMVAR
    fNeg=(M & 0x80);
    fOverflow=(M & 0x40);
    //F54E: BMI $F556   ; 3  ;30 06 

    if (fNeg) {PC=0XF556;break;};
    //F550: STA $02    ; 3  ;85 02 

    WaitForWSync();    // Wait for leading edge of horizontal blank
    //F552: STA $84    ; 3  ;85 84 

    WriteByte(0x84,A);   //BILLIARD
    //F554: AND #$80    ; 2  ;29 80 

    A=A & 0x80;
  case 0xF556:  //0xF54E, 0xF554, 
    //F556: STA $83    ; 3  ;85 83 

    WriteByte(0x83,A);   //GUIDED
    //F558: LDA #$F7    ; 2  ;A9 F7 

    A=0xF7;
    //F55A: STA $B6    ; 3  ;85 B6 

    WriteByte(0xB6,A);
    //F55C: STA $B8    ; 3  ;85 B8 

    WriteByte(0xB8,A);
    //F55E: STA $BA    ; 3  ;85 BA 

    WriteByte(0xBA,A);   //LORES5
    //F560: LDA $F7CC,X    ; 4  ;BD CC F7 

    A=ReadByte(0xF7CC + X);
    //F563: STA $10    ; 3  ;85 10 
    ResetPlayer(0,DurationCtr);    // reset player 0
    TankX[0]=TankXposStart0;

    
    //F565: STA $B5    ; 3  ;85 B5  
    WriteByte(0xB5,A);   //LORES0
    
    //F567: LDA $F7D0,X    ; 4  ;BD D0 F7 

    A=ReadByte(0xF7D0 + X);
    //F56A: STA $B7    ; 3  ;85 B7 

    WriteByte(0xB7,A);
    //F56C: LDA $F7D4,X    ; 4  ;BD D4 F7 

    A=ReadByte(0xF7D4 + X);
    fZero = (A == 0);
    fNeg=(A >= 0x80);
    //F56F: STA $B9    ; 3  ;85 B9 

    WriteByte(0xB9,A);
    //F571: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;

    
  case 0xF572:  //0xF01A, 
    //F572: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    //F574: AND #$87    ; 2  ;29 87 

    A=A & 0x87;
    fNeg=(A & 0x80);
    //F576: BMI $F57A   ; 3  ;30 02 

    if (fNeg) {PC=0XF57A;break;};
    //F578: LDA #$00    ; 2  ;A9 00 

    A=0x00;
  case 0xF57A:  //0xF576, 0xF578, 
    //F57A: ASL A   ; 2  ;0A 

    A=A<<1;
    A=A&0xFF;
    //F57B: TAX   ; 2  ;AA 

    X=A;
    //F57C: LDA $F75D,X    ; 4  ;BD 5D F7 

    A=ReadByte(0xF75D + X);
    //F57F: STA $04    ; 3  ;85 04 

    SetNumSizPlrMsl(0,A);    //  number-size player-missile 0
    //F581: LDA $F75E,X    ; 4  ;BD 5E F7 

    A=ReadByte(0xF75E + X);
    //F584: STA $05    ; 3  ;85 05 

    SetNumSizPlrMsl(1,A);    //  number-size player-missile 1
    //F586: LDA $A3    ; 3  ;A5 A3 

    A=ReadByte(0xA3);   //GAMVAR
    //F588: AND #$C0    ; 2  ;29 C0 

    A=A & 0xC0;
    //F58A: LSR A   ; 2  ;4A 

    A=A>>1;
    //F58B: LSR A   ; 2  ;4A 

    A=A>>1;
    //F58C: LSR A   ; 2  ;4A 

    A=A>>1;
    //F58D: LSR A   ; 2  ;4A 

    fCarry = ((A & 0x01)>0);
    A=A>>1;
    //F58E: TAY   ; 2  ;A8 

    Y=A;
    //F58F: LDA $88    ; 3  ;A5 88 

    A=ReadByte(0x88);   //GameOn
    //F591: STA $0282   ; 4  ;8D 82 02 

 //   WritePIA(0x0282,A);    //SWCHB - PIA Port B, Console Switches
    //F594: EOR #$FF   ; 2  ;49 FF 

    A=A ^ 0xFF;
    //F596: AND  $DD    ; 3  ;25 DD 

    A=A & ReadByte(0xDD);   //GameTimer
    //F598: STA $D1    ; 3  ;85 D1 

    WriteByte(0xD1,A);   //TEMP1
    //F59A: LDX #$FF    ; 2  ;A2 FF 

    X=0xFF;
    //F59C: LDA $0282    ; 4  ;AD 82 02 

    A=ReadPIA(0x0282);    //SWCHB - PIA Port B, Console Switches;
    //F59F: AND #$08    ; 2  ;29 08 

    A=A & 0x08;   fZero = (0 == A);
    //F5A1: BNE $F5A7   ; 3  ;D0 04 

    if (!fZero) {PC=0XF5A7;break;};
    //F5A3: LDY #$10    ; 2  ;A0 10 

    Y=0x10;
    //F5A5: LDX #$0F    ; 2  ;A2 0F 

    X=0x0F;
  case 0xF5A7:  //0xF5A1, 0xF5A5, 
    //F5A7: STX $D2    ; 3  ;86 D2 

    WriteByte(0xD2,X);   //TEMP
    //F5A9: LDX #$03    ; 2  ;A2 03 

    X=0x03;
  case 0xF5AB:  //0xF5A9, 0xF5BA, 
    //F5AB: LDA $F765,Y    ; 4  ;B9 65 F7 

    A=ReadByte(0xF765+Y);
    //F5AE: EOR $D1   ; 3  ;45 D1 

    A=A ^ ReadByte(0xD1);   //TEMP1
    //F5B0: AND  $D2    ; 3  ;25 D2 

    A=A & ReadByte(0xD2);   //TEMP
    //F5B2: STA $06,X   ; 4  ;95 06 

    WriteByte(0x06 + X,A);
    //F5B4: STA $D6,X   ; 4  ;95 D6 

    WriteByte(0xD6 + X,A);   //Color0
    //F5B6: STA $D8,X   ; 4  ;95 D8 

    WriteByte(0xD8 + X,A);   //XColor0
    //F5B8: INY   ; 2  ;C8 

    Y++;
    Y=Y & 0xFF;
    //F5B9: DEX   ; 2  ;CA 

    X--;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F5BA: BPL $F5AB   ; 3  ;10 EF 

    if (!fNeg) {PC=0XF5AB;break;};
    //F5BC: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;


    /////////////////////////////////////////////       CLEAR MEMORY
  case 0xF5BD:  //0xF007, 0xF1A5, 0xF16B, 
    //F5BD: LDA #$00    ; 2  ;A9 00 

    A=0x00;
  case 0xF5BF:  //0xF5BD, 0xF5C2, 
    //F5BF: INX   ; 2  ;E8 

    X++;
    X=X & 0xFF;
    fZero = (X == 0);
    fNeg=(X >= 0x80);
    //F5C0: STA $A2,X   ; 4  ;95 A2 

    WriteByte((0xA2 + X) & 0xFF ,A);   //SCORE1
    //F5C2: BNE $F5BF   ; 3  ;D0 FB 

    if (!fZero) {PC=0XF5BF;break;};
    //F5C4: RTS   ; 6  ;60 

    PC=ReadStackWord();
    break;

  default:
  Serial.print("Bad PC: ");
  Serial.println(PC,HEX);
    char sssss = 0;
}














//END SWITCH









    };//End While Loop

     
  }

 
