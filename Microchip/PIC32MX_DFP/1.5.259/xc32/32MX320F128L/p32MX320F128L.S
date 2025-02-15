 #-------------------------------------------------------------------------
 # MPLAB XC Compiler -  PIC32MX320F128L processor definition module
 # 
 # Copyright (c) 2021, Microchip Technology Inc. and its subsidiaries ("Microchip")
 # All rights reserved.
 # 
 # This software is developed by Microchip Technology Inc. and its
 # subsidiaries ("Microchip").
 # 
 # Redistribution and use in source and binary forms, with or without
 # modification, are permitted provided that the following conditions are 
 # met:
 # 
 # 1.      Redistributions of source code must retain the above copyright
 #         notice, this list of conditions and the following disclaimer.
 # 2.      Redistributions in binary form must reproduce the above 
 #         copyright notice, this list of conditions and the following 
 #         disclaimer in the documentation and/or other materials provided 
 #         with the distribution. Publication is not required when this file 
 #         is used in an embedded application.
 # 3.      Microchip's name may not be used to endorse or promote products
 #         derived from this software without specific prior written 
 #         permission.
 # 
 # THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 # WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 # MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 # SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 # EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 # PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 # OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 # WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 # OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 # ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 # 
 #

 #-------------------------------------------------------------------------

WDTCON = 0xBF800000
  .global WDTCON
WDTCONCLR = 0xBF800004
  .global WDTCONCLR
WDTCONSET = 0xBF800008
  .global WDTCONSET
WDTCONINV = 0xBF80000C
  .global WDTCONINV
RTCCON = 0xBF800200
  .global RTCCON
RTCCONCLR = 0xBF800204
  .global RTCCONCLR
RTCCONSET = 0xBF800208
  .global RTCCONSET
RTCCONINV = 0xBF80020C
  .global RTCCONINV
RTCALRM = 0xBF800210
  .global RTCALRM
RTCALRMCLR = 0xBF800214
  .global RTCALRMCLR
RTCALRMSET = 0xBF800218
  .global RTCALRMSET
RTCALRMINV = 0xBF80021C
  .global RTCALRMINV
RTCTIME = 0xBF800220
  .global RTCTIME
RTCTIMECLR = 0xBF800224
  .global RTCTIMECLR
RTCTIMESET = 0xBF800228
  .global RTCTIMESET
RTCTIMEINV = 0xBF80022C
  .global RTCTIMEINV
RTCDATE = 0xBF800230
  .global RTCDATE
RTCDATECLR = 0xBF800234
  .global RTCDATECLR
RTCDATESET = 0xBF800238
  .global RTCDATESET
RTCDATEINV = 0xBF80023C
  .global RTCDATEINV
ALRMTIME = 0xBF800240
  .global ALRMTIME
ALRMTIMECLR = 0xBF800244
  .global ALRMTIMECLR
ALRMTIMESET = 0xBF800248
  .global ALRMTIMESET
ALRMTIMEINV = 0xBF80024C
  .global ALRMTIMEINV
ALRMDATE = 0xBF800250
  .global ALRMDATE
ALRMDATECLR = 0xBF800254
  .global ALRMDATECLR
ALRMDATESET = 0xBF800258
  .global ALRMDATESET
ALRMDATEINV = 0xBF80025C
  .global ALRMDATEINV
T1CON = 0xBF800600
  .global T1CON
T1CONCLR = 0xBF800604
  .global T1CONCLR
T1CONSET = 0xBF800608
  .global T1CONSET
T1CONINV = 0xBF80060C
  .global T1CONINV
TMR1 = 0xBF800610
  .global TMR1
TMR1CLR = 0xBF800614
  .global TMR1CLR
TMR1SET = 0xBF800618
  .global TMR1SET
TMR1INV = 0xBF80061C
  .global TMR1INV
PR1 = 0xBF800620
  .global PR1
PR1CLR = 0xBF800624
  .global PR1CLR
PR1SET = 0xBF800628
  .global PR1SET
PR1INV = 0xBF80062C
  .global PR1INV
T2CON = 0xBF800800
  .global T2CON
T2CONCLR = 0xBF800804
  .global T2CONCLR
T2CONSET = 0xBF800808
  .global T2CONSET
T2CONINV = 0xBF80080C
  .global T2CONINV
TMR2 = 0xBF800810
  .global TMR2
TMR2CLR = 0xBF800814
  .global TMR2CLR
TMR2SET = 0xBF800818
  .global TMR2SET
TMR2INV = 0xBF80081C
  .global TMR2INV
PR2 = 0xBF800820
  .global PR2
PR2CLR = 0xBF800824
  .global PR2CLR
PR2SET = 0xBF800828
  .global PR2SET
PR2INV = 0xBF80082C
  .global PR2INV
T3CON = 0xBF800A00
  .global T3CON
T3CONCLR = 0xBF800A04
  .global T3CONCLR
T3CONSET = 0xBF800A08
  .global T3CONSET
T3CONINV = 0xBF800A0C
  .global T3CONINV
TMR3 = 0xBF800A10
  .global TMR3
TMR3CLR = 0xBF800A14
  .global TMR3CLR
TMR3SET = 0xBF800A18
  .global TMR3SET
TMR3INV = 0xBF800A1C
  .global TMR3INV
PR3 = 0xBF800A20
  .global PR3
PR3CLR = 0xBF800A24
  .global PR3CLR
PR3SET = 0xBF800A28
  .global PR3SET
PR3INV = 0xBF800A2C
  .global PR3INV
T4CON = 0xBF800C00
  .global T4CON
T4CONCLR = 0xBF800C04
  .global T4CONCLR
T4CONSET = 0xBF800C08
  .global T4CONSET
T4CONINV = 0xBF800C0C
  .global T4CONINV
TMR4 = 0xBF800C10
  .global TMR4
TMR4CLR = 0xBF800C14
  .global TMR4CLR
TMR4SET = 0xBF800C18
  .global TMR4SET
TMR4INV = 0xBF800C1C
  .global TMR4INV
PR4 = 0xBF800C20
  .global PR4
PR4CLR = 0xBF800C24
  .global PR4CLR
PR4SET = 0xBF800C28
  .global PR4SET
PR4INV = 0xBF800C2C
  .global PR4INV
T5CON = 0xBF800E00
  .global T5CON
T5CONCLR = 0xBF800E04
  .global T5CONCLR
T5CONSET = 0xBF800E08
  .global T5CONSET
T5CONINV = 0xBF800E0C
  .global T5CONINV
TMR5 = 0xBF800E10
  .global TMR5
TMR5CLR = 0xBF800E14
  .global TMR5CLR
TMR5SET = 0xBF800E18
  .global TMR5SET
TMR5INV = 0xBF800E1C
  .global TMR5INV
PR5 = 0xBF800E20
  .global PR5
PR5CLR = 0xBF800E24
  .global PR5CLR
PR5SET = 0xBF800E28
  .global PR5SET
PR5INV = 0xBF800E2C
  .global PR5INV
IC1CON = 0xBF802000
  .global IC1CON
IC1CONCLR = 0xBF802004
  .global IC1CONCLR
IC1CONSET = 0xBF802008
  .global IC1CONSET
IC1CONINV = 0xBF80200C
  .global IC1CONINV
IC1BUF = 0xBF802010
  .global IC1BUF
IC2CON = 0xBF802200
  .global IC2CON
IC2CONCLR = 0xBF802204
  .global IC2CONCLR
IC2CONSET = 0xBF802208
  .global IC2CONSET
IC2CONINV = 0xBF80220C
  .global IC2CONINV
IC2BUF = 0xBF802210
  .global IC2BUF
IC3CON = 0xBF802400
  .global IC3CON
IC3CONCLR = 0xBF802404
  .global IC3CONCLR
IC3CONSET = 0xBF802408
  .global IC3CONSET
IC3CONINV = 0xBF80240C
  .global IC3CONINV
IC3BUF = 0xBF802410
  .global IC3BUF
IC4CON = 0xBF802600
  .global IC4CON
IC4CONCLR = 0xBF802604
  .global IC4CONCLR
IC4CONSET = 0xBF802608
  .global IC4CONSET
IC4CONINV = 0xBF80260C
  .global IC4CONINV
IC4BUF = 0xBF802610
  .global IC4BUF
IC5CON = 0xBF802800
  .global IC5CON
IC5CONCLR = 0xBF802804
  .global IC5CONCLR
IC5CONSET = 0xBF802808
  .global IC5CONSET
IC5CONINV = 0xBF80280C
  .global IC5CONINV
IC5BUF = 0xBF802810
  .global IC5BUF
OC1CON = 0xBF803000
  .global OC1CON
OC1CONCLR = 0xBF803004
  .global OC1CONCLR
OC1CONSET = 0xBF803008
  .global OC1CONSET
OC1CONINV = 0xBF80300C
  .global OC1CONINV
OC1R = 0xBF803010
  .global OC1R
OC1RCLR = 0xBF803014
  .global OC1RCLR
OC1RSET = 0xBF803018
  .global OC1RSET
OC1RINV = 0xBF80301C
  .global OC1RINV
OC1RS = 0xBF803020
  .global OC1RS
OC1RSCLR = 0xBF803024
  .global OC1RSCLR
OC1RSSET = 0xBF803028
  .global OC1RSSET
OC1RSINV = 0xBF80302C
  .global OC1RSINV
OC2CON = 0xBF803200
  .global OC2CON
OC2CONCLR = 0xBF803204
  .global OC2CONCLR
OC2CONSET = 0xBF803208
  .global OC2CONSET
OC2CONINV = 0xBF80320C
  .global OC2CONINV
OC2R = 0xBF803210
  .global OC2R
OC2RCLR = 0xBF803214
  .global OC2RCLR
OC2RSET = 0xBF803218
  .global OC2RSET
OC2RINV = 0xBF80321C
  .global OC2RINV
OC2RS = 0xBF803220
  .global OC2RS
OC2RSCLR = 0xBF803224
  .global OC2RSCLR
OC2RSSET = 0xBF803228
  .global OC2RSSET
OC2RSINV = 0xBF80322C
  .global OC2RSINV
OC3CON = 0xBF803400
  .global OC3CON
OC3CONCLR = 0xBF803404
  .global OC3CONCLR
OC3CONSET = 0xBF803408
  .global OC3CONSET
OC3CONINV = 0xBF80340C
  .global OC3CONINV
OC3R = 0xBF803410
  .global OC3R
OC3RCLR = 0xBF803414
  .global OC3RCLR
OC3RSET = 0xBF803418
  .global OC3RSET
OC3RINV = 0xBF80341C
  .global OC3RINV
OC3RS = 0xBF803420
  .global OC3RS
OC3RSCLR = 0xBF803424
  .global OC3RSCLR
OC3RSSET = 0xBF803428
  .global OC3RSSET
OC3RSINV = 0xBF80342C
  .global OC3RSINV
OC4CON = 0xBF803600
  .global OC4CON
OC4CONCLR = 0xBF803604
  .global OC4CONCLR
OC4CONSET = 0xBF803608
  .global OC4CONSET
OC4CONINV = 0xBF80360C
  .global OC4CONINV
OC4R = 0xBF803610
  .global OC4R
OC4RCLR = 0xBF803614
  .global OC4RCLR
OC4RSET = 0xBF803618
  .global OC4RSET
OC4RINV = 0xBF80361C
  .global OC4RINV
OC4RS = 0xBF803620
  .global OC4RS
OC4RSCLR = 0xBF803624
  .global OC4RSCLR
OC4RSSET = 0xBF803628
  .global OC4RSSET
OC4RSINV = 0xBF80362C
  .global OC4RSINV
OC5CON = 0xBF803800
  .global OC5CON
OC5CONCLR = 0xBF803804
  .global OC5CONCLR
OC5CONSET = 0xBF803808
  .global OC5CONSET
OC5CONINV = 0xBF80380C
  .global OC5CONINV
OC5R = 0xBF803810
  .global OC5R
OC5RCLR = 0xBF803814
  .global OC5RCLR
OC5RSET = 0xBF803818
  .global OC5RSET
OC5RINV = 0xBF80381C
  .global OC5RINV
OC5RS = 0xBF803820
  .global OC5RS
OC5RSCLR = 0xBF803824
  .global OC5RSCLR
OC5RSSET = 0xBF803828
  .global OC5RSSET
OC5RSINV = 0xBF80382C
  .global OC5RSINV
I2C1CON = 0xBF805000
  .global I2C1CON
I2C1CONCLR = 0xBF805004
  .global I2C1CONCLR
I2C1CONSET = 0xBF805008
  .global I2C1CONSET
I2C1CONINV = 0xBF80500C
  .global I2C1CONINV
I2C1STAT = 0xBF805010
  .global I2C1STAT
I2C1STATCLR = 0xBF805014
  .global I2C1STATCLR
I2C1STATSET = 0xBF805018
  .global I2C1STATSET
I2C1STATINV = 0xBF80501C
  .global I2C1STATINV
I2C1ADD = 0xBF805020
  .global I2C1ADD
I2C1ADDCLR = 0xBF805024
  .global I2C1ADDCLR
I2C1ADDSET = 0xBF805028
  .global I2C1ADDSET
I2C1ADDINV = 0xBF80502C
  .global I2C1ADDINV
I2C1MSK = 0xBF805030
  .global I2C1MSK
I2C1MSKCLR = 0xBF805034
  .global I2C1MSKCLR
I2C1MSKSET = 0xBF805038
  .global I2C1MSKSET
I2C1MSKINV = 0xBF80503C
  .global I2C1MSKINV
I2C1BRG = 0xBF805040
  .global I2C1BRG
I2C1BRGCLR = 0xBF805044
  .global I2C1BRGCLR
I2C1BRGSET = 0xBF805048
  .global I2C1BRGSET
I2C1BRGINV = 0xBF80504C
  .global I2C1BRGINV
I2C1TRN = 0xBF805050
  .global I2C1TRN
I2C1TRNCLR = 0xBF805054
  .global I2C1TRNCLR
I2C1TRNSET = 0xBF805058
  .global I2C1TRNSET
I2C1TRNINV = 0xBF80505C
  .global I2C1TRNINV
I2C1RCV = 0xBF805060
  .global I2C1RCV
I2C2CON = 0xBF805200
  .global I2C2CON
I2C2CONCLR = 0xBF805204
  .global I2C2CONCLR
I2C2CONSET = 0xBF805208
  .global I2C2CONSET
I2C2CONINV = 0xBF80520C
  .global I2C2CONINV
I2C2STAT = 0xBF805210
  .global I2C2STAT
I2C2STATCLR = 0xBF805214
  .global I2C2STATCLR
I2C2STATSET = 0xBF805218
  .global I2C2STATSET
I2C2STATINV = 0xBF80521C
  .global I2C2STATINV
I2C2ADD = 0xBF805220
  .global I2C2ADD
I2C2ADDCLR = 0xBF805224
  .global I2C2ADDCLR
I2C2ADDSET = 0xBF805228
  .global I2C2ADDSET
I2C2ADDINV = 0xBF80522C
  .global I2C2ADDINV
I2C2MSK = 0xBF805230
  .global I2C2MSK
I2C2MSKCLR = 0xBF805234
  .global I2C2MSKCLR
I2C2MSKSET = 0xBF805238
  .global I2C2MSKSET
I2C2MSKINV = 0xBF80523C
  .global I2C2MSKINV
I2C2BRG = 0xBF805240
  .global I2C2BRG
I2C2BRGCLR = 0xBF805244
  .global I2C2BRGCLR
I2C2BRGSET = 0xBF805248
  .global I2C2BRGSET
I2C2BRGINV = 0xBF80524C
  .global I2C2BRGINV
I2C2TRN = 0xBF805250
  .global I2C2TRN
I2C2TRNCLR = 0xBF805254
  .global I2C2TRNCLR
I2C2TRNSET = 0xBF805258
  .global I2C2TRNSET
I2C2TRNINV = 0xBF80525C
  .global I2C2TRNINV
I2C2RCV = 0xBF805260
  .global I2C2RCV
SPI1CON = 0xBF805800
  .global SPI1CON
SPI1CONCLR = 0xBF805804
  .global SPI1CONCLR
SPI1CONSET = 0xBF805808
  .global SPI1CONSET
SPI1CONINV = 0xBF80580C
  .global SPI1CONINV
SPI1STAT = 0xBF805810
  .global SPI1STAT
SPI1STATCLR = 0xBF805814
  .global SPI1STATCLR
SPI1STATSET = 0xBF805818
  .global SPI1STATSET
SPI1STATINV = 0xBF80581C
  .global SPI1STATINV
SPI1BUF = 0xBF805820
  .global SPI1BUF
SPI1BRG = 0xBF805830
  .global SPI1BRG
SPI1BRGCLR = 0xBF805834
  .global SPI1BRGCLR
SPI1BRGSET = 0xBF805838
  .global SPI1BRGSET
SPI1BRGINV = 0xBF80583C
  .global SPI1BRGINV
SPI2CON = 0xBF805A00
  .global SPI2CON
SPI2CONCLR = 0xBF805A04
  .global SPI2CONCLR
SPI2CONSET = 0xBF805A08
  .global SPI2CONSET
SPI2CONINV = 0xBF805A0C
  .global SPI2CONINV
SPI2STAT = 0xBF805A10
  .global SPI2STAT
SPI2STATCLR = 0xBF805A14
  .global SPI2STATCLR
SPI2STATSET = 0xBF805A18
  .global SPI2STATSET
SPI2STATINV = 0xBF805A1C
  .global SPI2STATINV
SPI2BUF = 0xBF805A20
  .global SPI2BUF
SPI2BRG = 0xBF805A30
  .global SPI2BRG
SPI2BRGCLR = 0xBF805A34
  .global SPI2BRGCLR
SPI2BRGSET = 0xBF805A38
  .global SPI2BRGSET
SPI2BRGINV = 0xBF805A3C
  .global SPI2BRGINV
U1MODE = 0xBF806000
  .global U1MODE
U1MODECLR = 0xBF806004
  .global U1MODECLR
U1MODESET = 0xBF806008
  .global U1MODESET
U1MODEINV = 0xBF80600C
  .global U1MODEINV
U1STA = 0xBF806010
  .global U1STA
U1STACLR = 0xBF806014
  .global U1STACLR
U1STASET = 0xBF806018
  .global U1STASET
U1STAINV = 0xBF80601C
  .global U1STAINV
U1TXREG = 0xBF806020
  .global U1TXREG
U1RXREG = 0xBF806030
  .global U1RXREG
U1BRG = 0xBF806040
  .global U1BRG
U1BRGCLR = 0xBF806044
  .global U1BRGCLR
U1BRGSET = 0xBF806048
  .global U1BRGSET
U1BRGINV = 0xBF80604C
  .global U1BRGINV
U2MODE = 0xBF806200
  .global U2MODE
U2MODECLR = 0xBF806204
  .global U2MODECLR
U2MODESET = 0xBF806208
  .global U2MODESET
U2MODEINV = 0xBF80620C
  .global U2MODEINV
U2STA = 0xBF806210
  .global U2STA
U2STACLR = 0xBF806214
  .global U2STACLR
U2STASET = 0xBF806218
  .global U2STASET
U2STAINV = 0xBF80621C
  .global U2STAINV
U2TXREG = 0xBF806220
  .global U2TXREG
U2RXREG = 0xBF806230
  .global U2RXREG
U2BRG = 0xBF806240
  .global U2BRG
U2BRGCLR = 0xBF806244
  .global U2BRGCLR
U2BRGSET = 0xBF806248
  .global U2BRGSET
U2BRGINV = 0xBF80624C
  .global U2BRGINV
PMCON = 0xBF807000
  .global PMCON
PMCONCLR = 0xBF807004
  .global PMCONCLR
PMCONSET = 0xBF807008
  .global PMCONSET
PMCONINV = 0xBF80700C
  .global PMCONINV
PMMODE = 0xBF807010
  .global PMMODE
PMMODECLR = 0xBF807014
  .global PMMODECLR
PMMODESET = 0xBF807018
  .global PMMODESET
PMMODEINV = 0xBF80701C
  .global PMMODEINV
PMADDR = 0xBF807020
  .global PMADDR
PMADDRCLR = 0xBF807024
  .global PMADDRCLR
PMADDRSET = 0xBF807028
  .global PMADDRSET
PMADDRINV = 0xBF80702C
  .global PMADDRINV
PMDOUT = 0xBF807030
  .global PMDOUT
PMDOUTCLR = 0xBF807034
  .global PMDOUTCLR
PMDOUTSET = 0xBF807038
  .global PMDOUTSET
PMDOUTINV = 0xBF80703C
  .global PMDOUTINV
PMDIN = 0xBF807040
  .global PMDIN
PMDINCLR = 0xBF807044
  .global PMDINCLR
PMDINSET = 0xBF807048
  .global PMDINSET
PMDININV = 0xBF80704C
  .global PMDININV
PMAEN = 0xBF807050
  .global PMAEN
PMAENCLR = 0xBF807054
  .global PMAENCLR
PMAENSET = 0xBF807058
  .global PMAENSET
PMAENINV = 0xBF80705C
  .global PMAENINV
PMSTAT = 0xBF807060
  .global PMSTAT
PMSTATCLR = 0xBF807064
  .global PMSTATCLR
PMSTATSET = 0xBF807068
  .global PMSTATSET
PMSTATINV = 0xBF80706C
  .global PMSTATINV
AD1CON1 = 0xBF809000
  .global AD1CON1
AD1CON1CLR = 0xBF809004
  .global AD1CON1CLR
AD1CON1SET = 0xBF809008
  .global AD1CON1SET
AD1CON1INV = 0xBF80900C
  .global AD1CON1INV
AD1CON2 = 0xBF809010
  .global AD1CON2
AD1CON2CLR = 0xBF809014
  .global AD1CON2CLR
AD1CON2SET = 0xBF809018
  .global AD1CON2SET
AD1CON2INV = 0xBF80901C
  .global AD1CON2INV
AD1CON3 = 0xBF809020
  .global AD1CON3
AD1CON3CLR = 0xBF809024
  .global AD1CON3CLR
AD1CON3SET = 0xBF809028
  .global AD1CON3SET
AD1CON3INV = 0xBF80902C
  .global AD1CON3INV
AD1CHS = 0xBF809040
  .global AD1CHS
AD1CHSCLR = 0xBF809044
  .global AD1CHSCLR
AD1CHSSET = 0xBF809048
  .global AD1CHSSET
AD1CHSINV = 0xBF80904C
  .global AD1CHSINV
AD1CSSL = 0xBF809050
  .global AD1CSSL
AD1CSSLCLR = 0xBF809054
  .global AD1CSSLCLR
AD1CSSLSET = 0xBF809058
  .global AD1CSSLSET
AD1CSSLINV = 0xBF80905C
  .global AD1CSSLINV
AD1PCFG = 0xBF809060
  .global AD1PCFG
AD1PCFGCLR = 0xBF809064
  .global AD1PCFGCLR
AD1PCFGSET = 0xBF809068
  .global AD1PCFGSET
AD1PCFGINV = 0xBF80906C
  .global AD1PCFGINV
ADC1BUF0 = 0xBF809070
  .global ADC1BUF0
ADC1BUF1 = 0xBF809080
  .global ADC1BUF1
ADC1BUF2 = 0xBF809090
  .global ADC1BUF2
ADC1BUF3 = 0xBF8090A0
  .global ADC1BUF3
ADC1BUF4 = 0xBF8090B0
  .global ADC1BUF4
ADC1BUF5 = 0xBF8090C0
  .global ADC1BUF5
ADC1BUF6 = 0xBF8090D0
  .global ADC1BUF6
ADC1BUF7 = 0xBF8090E0
  .global ADC1BUF7
ADC1BUF8 = 0xBF8090F0
  .global ADC1BUF8
ADC1BUF9 = 0xBF809100
  .global ADC1BUF9
ADC1BUFA = 0xBF809110
  .global ADC1BUFA
ADC1BUFB = 0xBF809120
  .global ADC1BUFB
ADC1BUFC = 0xBF809130
  .global ADC1BUFC
ADC1BUFD = 0xBF809140
  .global ADC1BUFD
ADC1BUFE = 0xBF809150
  .global ADC1BUFE
ADC1BUFF = 0xBF809160
  .global ADC1BUFF
CVRCON = 0xBF809800
  .global CVRCON
CVRCONCLR = 0xBF809804
  .global CVRCONCLR
CVRCONSET = 0xBF809808
  .global CVRCONSET
CVRCONINV = 0xBF80980C
  .global CVRCONINV
CM1CON = 0xBF80A000
  .global CM1CON
CM1CONCLR = 0xBF80A004
  .global CM1CONCLR
CM1CONSET = 0xBF80A008
  .global CM1CONSET
CM1CONINV = 0xBF80A00C
  .global CM1CONINV
CM2CON = 0xBF80A010
  .global CM2CON
CM2CONCLR = 0xBF80A014
  .global CM2CONCLR
CM2CONSET = 0xBF80A018
  .global CM2CONSET
CM2CONINV = 0xBF80A01C
  .global CM2CONINV
CMSTAT = 0xBF80A060
  .global CMSTAT
CMSTATCLR = 0xBF80A064
  .global CMSTATCLR
CMSTATSET = 0xBF80A068
  .global CMSTATSET
CMSTATINV = 0xBF80A06C
  .global CMSTATINV
OSCCON = 0xBF80F000
  .global OSCCON
OSCCONCLR = 0xBF80F004
  .global OSCCONCLR
OSCCONSET = 0xBF80F008
  .global OSCCONSET
OSCCONINV = 0xBF80F00C
  .global OSCCONINV
OSCTUN = 0xBF80F010
  .global OSCTUN
OSCTUNCLR = 0xBF80F014
  .global OSCTUNCLR
OSCTUNSET = 0xBF80F018
  .global OSCTUNSET
OSCTUNINV = 0xBF80F01C
  .global OSCTUNINV
DDPCON = 0xBF80F200
  .global DDPCON
DEVID = 0xBF80F220
  .global DEVID
SYSKEY = 0xBF80F230
  .global SYSKEY
SYSKEYCLR = 0xBF80F234
  .global SYSKEYCLR
SYSKEYSET = 0xBF80F238
  .global SYSKEYSET
SYSKEYINV = 0xBF80F23C
  .global SYSKEYINV
NVMCON = 0xBF80F400
  .global NVMCON
NVMCONCLR = 0xBF80F404
  .global NVMCONCLR
NVMCONSET = 0xBF80F408
  .global NVMCONSET
NVMCONINV = 0xBF80F40C
  .global NVMCONINV
NVMKEY = 0xBF80F410
  .global NVMKEY
NVMADDR = 0xBF80F420
  .global NVMADDR
NVMADDRCLR = 0xBF80F424
  .global NVMADDRCLR
NVMADDRSET = 0xBF80F428
  .global NVMADDRSET
NVMADDRINV = 0xBF80F42C
  .global NVMADDRINV
NVMDATA = 0xBF80F430
  .global NVMDATA
NVMSRCADDR = 0xBF80F440
  .global NVMSRCADDR
RCON = 0xBF80F600
  .global RCON
RCONCLR = 0xBF80F604
  .global RCONCLR
RCONSET = 0xBF80F608
  .global RCONSET
RCONINV = 0xBF80F60C
  .global RCONINV
RSWRST = 0xBF80F610
  .global RSWRST
RSWRSTCLR = 0xBF80F614
  .global RSWRSTCLR
RSWRSTSET = 0xBF80F618
  .global RSWRSTSET
RSWRSTINV = 0xBF80F61C
  .global RSWRSTINV
_DDPSTAT = 0xBF880140
  .global _DDPSTAT
_STRO = 0xBF880170
  .global _STRO
_STROCLR = 0xBF880174
  .global _STROCLR
_STROSET = 0xBF880178
  .global _STROSET
_STROINV = 0xBF88017C
  .global _STROINV
_APPO = 0xBF880180
  .global _APPO
_APPOCLR = 0xBF880184
  .global _APPOCLR
_APPOSET = 0xBF880188
  .global _APPOSET
_APPOINV = 0xBF88018C
  .global _APPOINV
_APPI = 0xBF880190
  .global _APPI
INTCON = 0xBF881000
  .global INTCON
INTCONCLR = 0xBF881004
  .global INTCONCLR
INTCONSET = 0xBF881008
  .global INTCONSET
INTCONINV = 0xBF88100C
  .global INTCONINV
INTSTAT = 0xBF881010
  .global INTSTAT
IPTMR = 0xBF881020
  .global IPTMR
IPTMRCLR = 0xBF881024
  .global IPTMRCLR
IPTMRSET = 0xBF881028
  .global IPTMRSET
IPTMRINV = 0xBF88102C
  .global IPTMRINV
IFS0 = 0xBF881030
  .global IFS0
IFS0CLR = 0xBF881034
  .global IFS0CLR
IFS0SET = 0xBF881038
  .global IFS0SET
IFS0INV = 0xBF88103C
  .global IFS0INV
IFS1 = 0xBF881040
  .global IFS1
IFS1CLR = 0xBF881044
  .global IFS1CLR
IFS1SET = 0xBF881048
  .global IFS1SET
IFS1INV = 0xBF88104C
  .global IFS1INV
IEC0 = 0xBF881060
  .global IEC0
IEC0CLR = 0xBF881064
  .global IEC0CLR
IEC0SET = 0xBF881068
  .global IEC0SET
IEC0INV = 0xBF88106C
  .global IEC0INV
IEC1 = 0xBF881070
  .global IEC1
IEC1CLR = 0xBF881074
  .global IEC1CLR
IEC1SET = 0xBF881078
  .global IEC1SET
IEC1INV = 0xBF88107C
  .global IEC1INV
IPC0 = 0xBF881090
  .global IPC0
IPC0CLR = 0xBF881094
  .global IPC0CLR
IPC0SET = 0xBF881098
  .global IPC0SET
IPC0INV = 0xBF88109C
  .global IPC0INV
IPC1 = 0xBF8810A0
  .global IPC1
IPC1CLR = 0xBF8810A4
  .global IPC1CLR
IPC1SET = 0xBF8810A8
  .global IPC1SET
IPC1INV = 0xBF8810AC
  .global IPC1INV
IPC2 = 0xBF8810B0
  .global IPC2
IPC2CLR = 0xBF8810B4
  .global IPC2CLR
IPC2SET = 0xBF8810B8
  .global IPC2SET
IPC2INV = 0xBF8810BC
  .global IPC2INV
IPC3 = 0xBF8810C0
  .global IPC3
IPC3CLR = 0xBF8810C4
  .global IPC3CLR
IPC3SET = 0xBF8810C8
  .global IPC3SET
IPC3INV = 0xBF8810CC
  .global IPC3INV
IPC4 = 0xBF8810D0
  .global IPC4
IPC4CLR = 0xBF8810D4
  .global IPC4CLR
IPC4SET = 0xBF8810D8
  .global IPC4SET
IPC4INV = 0xBF8810DC
  .global IPC4INV
IPC5 = 0xBF8810E0
  .global IPC5
IPC5CLR = 0xBF8810E4
  .global IPC5CLR
IPC5SET = 0xBF8810E8
  .global IPC5SET
IPC5INV = 0xBF8810EC
  .global IPC5INV
IPC6 = 0xBF8810F0
  .global IPC6
IPC6CLR = 0xBF8810F4
  .global IPC6CLR
IPC6SET = 0xBF8810F8
  .global IPC6SET
IPC6INV = 0xBF8810FC
  .global IPC6INV
IPC7 = 0xBF881100
  .global IPC7
IPC7CLR = 0xBF881104
  .global IPC7CLR
IPC7SET = 0xBF881108
  .global IPC7SET
IPC7INV = 0xBF88110C
  .global IPC7INV
IPC8 = 0xBF881110
  .global IPC8
IPC8CLR = 0xBF881114
  .global IPC8CLR
IPC8SET = 0xBF881118
  .global IPC8SET
IPC8INV = 0xBF88111C
  .global IPC8INV
IPC11 = 0xBF881140
  .global IPC11
IPC11CLR = 0xBF881144
  .global IPC11CLR
IPC11SET = 0xBF881148
  .global IPC11SET
IPC11INV = 0xBF88114C
  .global IPC11INV
BMXCON = 0xBF882000
  .global BMXCON
BMXCONCLR = 0xBF882004
  .global BMXCONCLR
BMXCONSET = 0xBF882008
  .global BMXCONSET
BMXCONINV = 0xBF88200C
  .global BMXCONINV
BMXDKPBA = 0xBF882010
  .global BMXDKPBA
BMXDKPBACLR = 0xBF882014
  .global BMXDKPBACLR
BMXDKPBASET = 0xBF882018
  .global BMXDKPBASET
BMXDKPBAINV = 0xBF88201C
  .global BMXDKPBAINV
BMXDUDBA = 0xBF882020
  .global BMXDUDBA
BMXDUDBACLR = 0xBF882024
  .global BMXDUDBACLR
BMXDUDBASET = 0xBF882028
  .global BMXDUDBASET
BMXDUDBAINV = 0xBF88202C
  .global BMXDUDBAINV
BMXDUPBA = 0xBF882030
  .global BMXDUPBA
BMXDUPBACLR = 0xBF882034
  .global BMXDUPBACLR
BMXDUPBASET = 0xBF882038
  .global BMXDUPBASET
BMXDUPBAINV = 0xBF88203C
  .global BMXDUPBAINV
BMXDRMSZ = 0xBF882040
  .global BMXDRMSZ
BMXPUPBA = 0xBF882050
  .global BMXPUPBA
BMXPUPBACLR = 0xBF882054
  .global BMXPUPBACLR
BMXPUPBASET = 0xBF882058
  .global BMXPUPBASET
BMXPUPBAINV = 0xBF88205C
  .global BMXPUPBAINV
BMXPFMSZ = 0xBF882060
  .global BMXPFMSZ
BMXBOOTSZ = 0xBF882070
  .global BMXBOOTSZ
CHECON = 0xBF884000
  .global CHECON
CHECONCLR = 0xBF884004
  .global CHECONCLR
CHECONSET = 0xBF884008
  .global CHECONSET
CHECONINV = 0xBF88400C
  .global CHECONINV
CHEACC = 0xBF884010
  .global CHEACC
CHEACCCLR = 0xBF884014
  .global CHEACCCLR
CHEACCSET = 0xBF884018
  .global CHEACCSET
CHEACCINV = 0xBF88401C
  .global CHEACCINV
CHETAG = 0xBF884020
  .global CHETAG
CHETAGCLR = 0xBF884024
  .global CHETAGCLR
CHETAGSET = 0xBF884028
  .global CHETAGSET
CHETAGINV = 0xBF88402C
  .global CHETAGINV
CHEMSK = 0xBF884030
  .global CHEMSK
CHEMSKCLR = 0xBF884034
  .global CHEMSKCLR
CHEMSKSET = 0xBF884038
  .global CHEMSKSET
CHEMSKINV = 0xBF88403C
  .global CHEMSKINV
CHEW0 = 0xBF884040
  .global CHEW0
CHEW1 = 0xBF884050
  .global CHEW1
CHEW2 = 0xBF884060
  .global CHEW2
CHEW3 = 0xBF884070
  .global CHEW3
CHELRU = 0xBF884080
  .global CHELRU
CHEHIT = 0xBF884090
  .global CHEHIT
CHEMIS = 0xBF8840A0
  .global CHEMIS
CHEPFABT = 0xBF8840C0
  .global CHEPFABT
TRISA = 0xBF886000
  .global TRISA
TRISACLR = 0xBF886004
  .global TRISACLR
TRISASET = 0xBF886008
  .global TRISASET
TRISAINV = 0xBF88600C
  .global TRISAINV
PORTA = 0xBF886010
  .global PORTA
PORTACLR = 0xBF886014
  .global PORTACLR
PORTASET = 0xBF886018
  .global PORTASET
PORTAINV = 0xBF88601C
  .global PORTAINV
LATA = 0xBF886020
  .global LATA
LATACLR = 0xBF886024
  .global LATACLR
LATASET = 0xBF886028
  .global LATASET
LATAINV = 0xBF88602C
  .global LATAINV
ODCA = 0xBF886030
  .global ODCA
ODCACLR = 0xBF886034
  .global ODCACLR
ODCASET = 0xBF886038
  .global ODCASET
ODCAINV = 0xBF88603C
  .global ODCAINV
TRISB = 0xBF886040
  .global TRISB
TRISBCLR = 0xBF886044
  .global TRISBCLR
TRISBSET = 0xBF886048
  .global TRISBSET
TRISBINV = 0xBF88604C
  .global TRISBINV
PORTB = 0xBF886050
  .global PORTB
PORTBCLR = 0xBF886054
  .global PORTBCLR
PORTBSET = 0xBF886058
  .global PORTBSET
PORTBINV = 0xBF88605C
  .global PORTBINV
LATB = 0xBF886060
  .global LATB
LATBCLR = 0xBF886064
  .global LATBCLR
LATBSET = 0xBF886068
  .global LATBSET
LATBINV = 0xBF88606C
  .global LATBINV
ODCB = 0xBF886070
  .global ODCB
ODCBCLR = 0xBF886074
  .global ODCBCLR
ODCBSET = 0xBF886078
  .global ODCBSET
ODCBINV = 0xBF88607C
  .global ODCBINV
TRISC = 0xBF886080
  .global TRISC
TRISCCLR = 0xBF886084
  .global TRISCCLR
TRISCSET = 0xBF886088
  .global TRISCSET
TRISCINV = 0xBF88608C
  .global TRISCINV
PORTC = 0xBF886090
  .global PORTC
PORTCCLR = 0xBF886094
  .global PORTCCLR
PORTCSET = 0xBF886098
  .global PORTCSET
PORTCINV = 0xBF88609C
  .global PORTCINV
LATC = 0xBF8860A0
  .global LATC
LATCCLR = 0xBF8860A4
  .global LATCCLR
LATCSET = 0xBF8860A8
  .global LATCSET
LATCINV = 0xBF8860AC
  .global LATCINV
ODCC = 0xBF8860B0
  .global ODCC
ODCCCLR = 0xBF8860B4
  .global ODCCCLR
ODCCSET = 0xBF8860B8
  .global ODCCSET
ODCCINV = 0xBF8860BC
  .global ODCCINV
TRISD = 0xBF8860C0
  .global TRISD
TRISDCLR = 0xBF8860C4
  .global TRISDCLR
TRISDSET = 0xBF8860C8
  .global TRISDSET
TRISDINV = 0xBF8860CC
  .global TRISDINV
PORTD = 0xBF8860D0
  .global PORTD
PORTDCLR = 0xBF8860D4
  .global PORTDCLR
PORTDSET = 0xBF8860D8
  .global PORTDSET
PORTDINV = 0xBF8860DC
  .global PORTDINV
LATD = 0xBF8860E0
  .global LATD
LATDCLR = 0xBF8860E4
  .global LATDCLR
LATDSET = 0xBF8860E8
  .global LATDSET
LATDINV = 0xBF8860EC
  .global LATDINV
ODCD = 0xBF8860F0
  .global ODCD
ODCDCLR = 0xBF8860F4
  .global ODCDCLR
ODCDSET = 0xBF8860F8
  .global ODCDSET
ODCDINV = 0xBF8860FC
  .global ODCDINV
TRISE = 0xBF886100
  .global TRISE
TRISECLR = 0xBF886104
  .global TRISECLR
TRISESET = 0xBF886108
  .global TRISESET
TRISEINV = 0xBF88610C
  .global TRISEINV
PORTE = 0xBF886110
  .global PORTE
PORTECLR = 0xBF886114
  .global PORTECLR
PORTESET = 0xBF886118
  .global PORTESET
PORTEINV = 0xBF88611C
  .global PORTEINV
LATE = 0xBF886120
  .global LATE
LATECLR = 0xBF886124
  .global LATECLR
LATESET = 0xBF886128
  .global LATESET
LATEINV = 0xBF88612C
  .global LATEINV
ODCE = 0xBF886130
  .global ODCE
ODCECLR = 0xBF886134
  .global ODCECLR
ODCESET = 0xBF886138
  .global ODCESET
ODCEINV = 0xBF88613C
  .global ODCEINV
TRISF = 0xBF886140
  .global TRISF
TRISFCLR = 0xBF886144
  .global TRISFCLR
TRISFSET = 0xBF886148
  .global TRISFSET
TRISFINV = 0xBF88614C
  .global TRISFINV
PORTF = 0xBF886150
  .global PORTF
PORTFCLR = 0xBF886154
  .global PORTFCLR
PORTFSET = 0xBF886158
  .global PORTFSET
PORTFINV = 0xBF88615C
  .global PORTFINV
LATF = 0xBF886160
  .global LATF
LATFCLR = 0xBF886164
  .global LATFCLR
LATFSET = 0xBF886168
  .global LATFSET
LATFINV = 0xBF88616C
  .global LATFINV
ODCF = 0xBF886170
  .global ODCF
ODCFCLR = 0xBF886174
  .global ODCFCLR
ODCFSET = 0xBF886178
  .global ODCFSET
ODCFINV = 0xBF88617C
  .global ODCFINV
TRISG = 0xBF886180
  .global TRISG
TRISGCLR = 0xBF886184
  .global TRISGCLR
TRISGSET = 0xBF886188
  .global TRISGSET
TRISGINV = 0xBF88618C
  .global TRISGINV
PORTG = 0xBF886190
  .global PORTG
PORTGCLR = 0xBF886194
  .global PORTGCLR
PORTGSET = 0xBF886198
  .global PORTGSET
PORTGINV = 0xBF88619C
  .global PORTGINV
LATG = 0xBF8861A0
  .global LATG
LATGCLR = 0xBF8861A4
  .global LATGCLR
LATGSET = 0xBF8861A8
  .global LATGSET
LATGINV = 0xBF8861AC
  .global LATGINV
ODCG = 0xBF8861B0
  .global ODCG
ODCGCLR = 0xBF8861B4
  .global ODCGCLR
ODCGSET = 0xBF8861B8
  .global ODCGSET
ODCGINV = 0xBF8861BC
  .global ODCGINV
CNCON = 0xBF8861C0
  .global CNCON
CNCONCLR = 0xBF8861C4
  .global CNCONCLR
CNCONSET = 0xBF8861C8
  .global CNCONSET
CNCONINV = 0xBF8861CC
  .global CNCONINV
CNEN = 0xBF8861D0
  .global CNEN
CNENCLR = 0xBF8861D4
  .global CNENCLR
CNENSET = 0xBF8861D8
  .global CNENSET
CNENINV = 0xBF8861DC
  .global CNENINV
CNPUE = 0xBF8861E0
  .global CNPUE
CNPUECLR = 0xBF8861E4
  .global CNPUECLR
CNPUESET = 0xBF8861E8
  .global CNPUESET
CNPUEINV = 0xBF8861EC
  .global CNPUEINV
DEVCFG3 = 0xBFC02FF0
  .global DEVCFG3
DEVCFG2 = 0xBFC02FF4
  .global DEVCFG2
DEVCFG1 = 0xBFC02FF8
  .global DEVCFG1
DEVCFG0 = 0xBFC02FFC
  .global DEVCFG0


