/*
 * Component description for TWI
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-11T10:29:08Z */
#ifndef _SAMG54_TWI_COMPONENT_H_
#define _SAMG54_TWI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR TWI                                          */
/* ************************************************************************** */

/* -------- TWI_CR : (TWI Offset: 0x00) ( /W 32) Control Register -------- */
#define TWI_CR_START_Pos                      _UINT32_(0)                                          /* (TWI_CR) Send a START Condition Position */
#define TWI_CR_START_Msk                      (_UINT32_(0x1) << TWI_CR_START_Pos)                  /* (TWI_CR) Send a START Condition Mask */
#define TWI_CR_START(value)                   (TWI_CR_START_Msk & (_UINT32_(value) << TWI_CR_START_Pos)) /* Assigment of value for START in the TWI_CR register */
#define TWI_CR_STOP_Pos                       _UINT32_(1)                                          /* (TWI_CR) Send a STOP Condition Position */
#define TWI_CR_STOP_Msk                       (_UINT32_(0x1) << TWI_CR_STOP_Pos)                   /* (TWI_CR) Send a STOP Condition Mask */
#define TWI_CR_STOP(value)                    (TWI_CR_STOP_Msk & (_UINT32_(value) << TWI_CR_STOP_Pos)) /* Assigment of value for STOP in the TWI_CR register */
#define TWI_CR_MSEN_Pos                       _UINT32_(2)                                          /* (TWI_CR) TWI Master Mode Enabled Position */
#define TWI_CR_MSEN_Msk                       (_UINT32_(0x1) << TWI_CR_MSEN_Pos)                   /* (TWI_CR) TWI Master Mode Enabled Mask */
#define TWI_CR_MSEN(value)                    (TWI_CR_MSEN_Msk & (_UINT32_(value) << TWI_CR_MSEN_Pos)) /* Assigment of value for MSEN in the TWI_CR register */
#define TWI_CR_MSDIS_Pos                      _UINT32_(3)                                          /* (TWI_CR) TWI Master Mode Disabled Position */
#define TWI_CR_MSDIS_Msk                      (_UINT32_(0x1) << TWI_CR_MSDIS_Pos)                  /* (TWI_CR) TWI Master Mode Disabled Mask */
#define TWI_CR_MSDIS(value)                   (TWI_CR_MSDIS_Msk & (_UINT32_(value) << TWI_CR_MSDIS_Pos)) /* Assigment of value for MSDIS in the TWI_CR register */
#define TWI_CR_SVEN_Pos                       _UINT32_(4)                                          /* (TWI_CR) TWI Slave Mode Enabled Position */
#define TWI_CR_SVEN_Msk                       (_UINT32_(0x1) << TWI_CR_SVEN_Pos)                   /* (TWI_CR) TWI Slave Mode Enabled Mask */
#define TWI_CR_SVEN(value)                    (TWI_CR_SVEN_Msk & (_UINT32_(value) << TWI_CR_SVEN_Pos)) /* Assigment of value for SVEN in the TWI_CR register */
#define TWI_CR_SVDIS_Pos                      _UINT32_(5)                                          /* (TWI_CR) TWI Slave Mode Disabled Position */
#define TWI_CR_SVDIS_Msk                      (_UINT32_(0x1) << TWI_CR_SVDIS_Pos)                  /* (TWI_CR) TWI Slave Mode Disabled Mask */
#define TWI_CR_SVDIS(value)                   (TWI_CR_SVDIS_Msk & (_UINT32_(value) << TWI_CR_SVDIS_Pos)) /* Assigment of value for SVDIS in the TWI_CR register */
#define TWI_CR_QUICK_Pos                      _UINT32_(6)                                          /* (TWI_CR) SMBus Quick Command Position */
#define TWI_CR_QUICK_Msk                      (_UINT32_(0x1) << TWI_CR_QUICK_Pos)                  /* (TWI_CR) SMBus Quick Command Mask */
#define TWI_CR_QUICK(value)                   (TWI_CR_QUICK_Msk & (_UINT32_(value) << TWI_CR_QUICK_Pos)) /* Assigment of value for QUICK in the TWI_CR register */
#define TWI_CR_SWRST_Pos                      _UINT32_(7)                                          /* (TWI_CR) Software Reset Position */
#define TWI_CR_SWRST_Msk                      (_UINT32_(0x1) << TWI_CR_SWRST_Pos)                  /* (TWI_CR) Software Reset Mask */
#define TWI_CR_SWRST(value)                   (TWI_CR_SWRST_Msk & (_UINT32_(value) << TWI_CR_SWRST_Pos)) /* Assigment of value for SWRST in the TWI_CR register */
#define TWI_CR_Msk                            _UINT32_(0x000000FF)                                 /* (TWI_CR) Register Mask  */


/* -------- TWI_MMR : (TWI Offset: 0x04) (R/W 32) Master Mode Register -------- */
#define TWI_MMR_IADRSZ_Pos                    _UINT32_(8)                                          /* (TWI_MMR) Internal Device Address Size Position */
#define TWI_MMR_IADRSZ_Msk                    (_UINT32_(0x3) << TWI_MMR_IADRSZ_Pos)                /* (TWI_MMR) Internal Device Address Size Mask */
#define TWI_MMR_IADRSZ(value)                 (TWI_MMR_IADRSZ_Msk & (_UINT32_(value) << TWI_MMR_IADRSZ_Pos)) /* Assigment of value for IADRSZ in the TWI_MMR register */
#define   TWI_MMR_IADRSZ_NONE_Val             _UINT32_(0x0)                                        /* (TWI_MMR) No internal device address  */
#define   TWI_MMR_IADRSZ_1_BYTE_Val           _UINT32_(0x1)                                        /* (TWI_MMR) One-byte internal device address  */
#define   TWI_MMR_IADRSZ_2_BYTE_Val           _UINT32_(0x2)                                        /* (TWI_MMR) Two-byte internal device address  */
#define   TWI_MMR_IADRSZ_3_BYTE_Val           _UINT32_(0x3)                                        /* (TWI_MMR) Three-byte internal device address  */
#define TWI_MMR_IADRSZ_NONE                   (TWI_MMR_IADRSZ_NONE_Val << TWI_MMR_IADRSZ_Pos)      /* (TWI_MMR) No internal device address Position  */
#define TWI_MMR_IADRSZ_1_BYTE                 (TWI_MMR_IADRSZ_1_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /* (TWI_MMR) One-byte internal device address Position  */
#define TWI_MMR_IADRSZ_2_BYTE                 (TWI_MMR_IADRSZ_2_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /* (TWI_MMR) Two-byte internal device address Position  */
#define TWI_MMR_IADRSZ_3_BYTE                 (TWI_MMR_IADRSZ_3_BYTE_Val << TWI_MMR_IADRSZ_Pos)    /* (TWI_MMR) Three-byte internal device address Position  */
#define TWI_MMR_MREAD_Pos                     _UINT32_(12)                                         /* (TWI_MMR) Master Read Direction Position */
#define TWI_MMR_MREAD_Msk                     (_UINT32_(0x1) << TWI_MMR_MREAD_Pos)                 /* (TWI_MMR) Master Read Direction Mask */
#define TWI_MMR_MREAD(value)                  (TWI_MMR_MREAD_Msk & (_UINT32_(value) << TWI_MMR_MREAD_Pos)) /* Assigment of value for MREAD in the TWI_MMR register */
#define TWI_MMR_DADR_Pos                      _UINT32_(16)                                         /* (TWI_MMR) Device Address Position */
#define TWI_MMR_DADR_Msk                      (_UINT32_(0x7F) << TWI_MMR_DADR_Pos)                 /* (TWI_MMR) Device Address Mask */
#define TWI_MMR_DADR(value)                   (TWI_MMR_DADR_Msk & (_UINT32_(value) << TWI_MMR_DADR_Pos)) /* Assigment of value for DADR in the TWI_MMR register */
#define TWI_MMR_Msk                           _UINT32_(0x007F1300)                                 /* (TWI_MMR) Register Mask  */


/* -------- TWI_SMR : (TWI Offset: 0x08) (R/W 32) Slave Mode Register -------- */
#define TWI_SMR_SADR_Pos                      _UINT32_(16)                                         /* (TWI_SMR) Slave Address Position */
#define TWI_SMR_SADR_Msk                      (_UINT32_(0x7F) << TWI_SMR_SADR_Pos)                 /* (TWI_SMR) Slave Address Mask */
#define TWI_SMR_SADR(value)                   (TWI_SMR_SADR_Msk & (_UINT32_(value) << TWI_SMR_SADR_Pos)) /* Assigment of value for SADR in the TWI_SMR register */
#define TWI_SMR_Msk                           _UINT32_(0x007F0000)                                 /* (TWI_SMR) Register Mask  */


/* -------- TWI_IADR : (TWI Offset: 0x0C) (R/W 32) Internal Address Register -------- */
#define TWI_IADR_IADR_Pos                     _UINT32_(0)                                          /* (TWI_IADR) Internal Address Position */
#define TWI_IADR_IADR_Msk                     (_UINT32_(0xFFFFFF) << TWI_IADR_IADR_Pos)            /* (TWI_IADR) Internal Address Mask */
#define TWI_IADR_IADR(value)                  (TWI_IADR_IADR_Msk & (_UINT32_(value) << TWI_IADR_IADR_Pos)) /* Assigment of value for IADR in the TWI_IADR register */
#define TWI_IADR_Msk                          _UINT32_(0x00FFFFFF)                                 /* (TWI_IADR) Register Mask  */


/* -------- TWI_CWGR : (TWI Offset: 0x10) (R/W 32) Clock Waveform Generator Register -------- */
#define TWI_CWGR_CLDIV_Pos                    _UINT32_(0)                                          /* (TWI_CWGR) Clock Low Divider Position */
#define TWI_CWGR_CLDIV_Msk                    (_UINT32_(0xFF) << TWI_CWGR_CLDIV_Pos)               /* (TWI_CWGR) Clock Low Divider Mask */
#define TWI_CWGR_CLDIV(value)                 (TWI_CWGR_CLDIV_Msk & (_UINT32_(value) << TWI_CWGR_CLDIV_Pos)) /* Assigment of value for CLDIV in the TWI_CWGR register */
#define TWI_CWGR_CHDIV_Pos                    _UINT32_(8)                                          /* (TWI_CWGR) Clock High Divider Position */
#define TWI_CWGR_CHDIV_Msk                    (_UINT32_(0xFF) << TWI_CWGR_CHDIV_Pos)               /* (TWI_CWGR) Clock High Divider Mask */
#define TWI_CWGR_CHDIV(value)                 (TWI_CWGR_CHDIV_Msk & (_UINT32_(value) << TWI_CWGR_CHDIV_Pos)) /* Assigment of value for CHDIV in the TWI_CWGR register */
#define TWI_CWGR_CKDIV_Pos                    _UINT32_(16)                                         /* (TWI_CWGR) Clock Divider Position */
#define TWI_CWGR_CKDIV_Msk                    (_UINT32_(0x7) << TWI_CWGR_CKDIV_Pos)                /* (TWI_CWGR) Clock Divider Mask */
#define TWI_CWGR_CKDIV(value)                 (TWI_CWGR_CKDIV_Msk & (_UINT32_(value) << TWI_CWGR_CKDIV_Pos)) /* Assigment of value for CKDIV in the TWI_CWGR register */
#define TWI_CWGR_HOLD_Pos                     _UINT32_(24)                                         /* (TWI_CWGR) TWD Hold Time versus TWCK falling Position */
#define TWI_CWGR_HOLD_Msk                     (_UINT32_(0x1F) << TWI_CWGR_HOLD_Pos)                /* (TWI_CWGR) TWD Hold Time versus TWCK falling Mask */
#define TWI_CWGR_HOLD(value)                  (TWI_CWGR_HOLD_Msk & (_UINT32_(value) << TWI_CWGR_HOLD_Pos)) /* Assigment of value for HOLD in the TWI_CWGR register */
#define TWI_CWGR_Msk                          _UINT32_(0x1F07FFFF)                                 /* (TWI_CWGR) Register Mask  */


/* -------- TWI_SR : (TWI Offset: 0x20) ( R/ 32) Status Register -------- */
#define TWI_SR_TXCOMP_Pos                     _UINT32_(0)                                          /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Position */
#define TWI_SR_TXCOMP_Msk                     (_UINT32_(0x1) << TWI_SR_TXCOMP_Pos)                 /* (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXCOMP(value)                  (TWI_SR_TXCOMP_Msk & (_UINT32_(value) << TWI_SR_TXCOMP_Pos)) /* Assigment of value for TXCOMP in the TWI_SR register */
#define TWI_SR_RXRDY_Pos                      _UINT32_(1)                                          /* (TWI_SR) Receive Holding Register Ready (cleared by reading TWI_RHR) Position */
#define TWI_SR_RXRDY_Msk                      (_UINT32_(0x1) << TWI_SR_RXRDY_Pos)                  /* (TWI_SR) Receive Holding Register Ready (cleared by reading TWI_RHR) Mask */
#define TWI_SR_RXRDY(value)                   (TWI_SR_RXRDY_Msk & (_UINT32_(value) << TWI_SR_RXRDY_Pos)) /* Assigment of value for RXRDY in the TWI_SR register */
#define TWI_SR_TXRDY_Pos                      _UINT32_(2)                                          /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Position */
#define TWI_SR_TXRDY_Msk                      (_UINT32_(0x1) << TWI_SR_TXRDY_Pos)                  /* (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXRDY(value)                   (TWI_SR_TXRDY_Msk & (_UINT32_(value) << TWI_SR_TXRDY_Pos)) /* Assigment of value for TXRDY in the TWI_SR register */
#define TWI_SR_SVREAD_Pos                     _UINT32_(3)                                          /* (TWI_SR) Slave Read Position */
#define TWI_SR_SVREAD_Msk                     (_UINT32_(0x1) << TWI_SR_SVREAD_Pos)                 /* (TWI_SR) Slave Read Mask */
#define TWI_SR_SVREAD(value)                  (TWI_SR_SVREAD_Msk & (_UINT32_(value) << TWI_SR_SVREAD_Pos)) /* Assigment of value for SVREAD in the TWI_SR register */
#define TWI_SR_SVACC_Pos                      _UINT32_(4)                                          /* (TWI_SR) Slave Access Position */
#define TWI_SR_SVACC_Msk                      (_UINT32_(0x1) << TWI_SR_SVACC_Pos)                  /* (TWI_SR) Slave Access Mask */
#define TWI_SR_SVACC(value)                   (TWI_SR_SVACC_Msk & (_UINT32_(value) << TWI_SR_SVACC_Pos)) /* Assigment of value for SVACC in the TWI_SR register */
#define TWI_SR_GACC_Pos                       _UINT32_(5)                                          /* (TWI_SR) General Call Access (cleared on read) Position */
#define TWI_SR_GACC_Msk                       (_UINT32_(0x1) << TWI_SR_GACC_Pos)                   /* (TWI_SR) General Call Access (cleared on read) Mask */
#define TWI_SR_GACC(value)                    (TWI_SR_GACC_Msk & (_UINT32_(value) << TWI_SR_GACC_Pos)) /* Assigment of value for GACC in the TWI_SR register */
#define TWI_SR_OVRE_Pos                       _UINT32_(6)                                          /* (TWI_SR) Overrun Error (cleared on read) Position */
#define TWI_SR_OVRE_Msk                       (_UINT32_(0x1) << TWI_SR_OVRE_Pos)                   /* (TWI_SR) Overrun Error (cleared on read) Mask */
#define TWI_SR_OVRE(value)                    (TWI_SR_OVRE_Msk & (_UINT32_(value) << TWI_SR_OVRE_Pos)) /* Assigment of value for OVRE in the TWI_SR register */
#define TWI_SR_NACK_Pos                       _UINT32_(8)                                          /* (TWI_SR) Not Acknowledged (cleared on read) Position */
#define TWI_SR_NACK_Msk                       (_UINT32_(0x1) << TWI_SR_NACK_Pos)                   /* (TWI_SR) Not Acknowledged (cleared on read) Mask */
#define TWI_SR_NACK(value)                    (TWI_SR_NACK_Msk & (_UINT32_(value) << TWI_SR_NACK_Pos)) /* Assigment of value for NACK in the TWI_SR register */
#define TWI_SR_ARBLST_Pos                     _UINT32_(9)                                          /* (TWI_SR) Arbitration Lost (cleared on read) Position */
#define TWI_SR_ARBLST_Msk                     (_UINT32_(0x1) << TWI_SR_ARBLST_Pos)                 /* (TWI_SR) Arbitration Lost (cleared on read) Mask */
#define TWI_SR_ARBLST(value)                  (TWI_SR_ARBLST_Msk & (_UINT32_(value) << TWI_SR_ARBLST_Pos)) /* Assigment of value for ARBLST in the TWI_SR register */
#define TWI_SR_SCLWS_Pos                      _UINT32_(10)                                         /* (TWI_SR) Clock Wait State Position */
#define TWI_SR_SCLWS_Msk                      (_UINT32_(0x1) << TWI_SR_SCLWS_Pos)                  /* (TWI_SR) Clock Wait State Mask */
#define TWI_SR_SCLWS(value)                   (TWI_SR_SCLWS_Msk & (_UINT32_(value) << TWI_SR_SCLWS_Pos)) /* Assigment of value for SCLWS in the TWI_SR register */
#define TWI_SR_EOSACC_Pos                     _UINT32_(11)                                         /* (TWI_SR) End Of Slave Access (cleared on read) Position */
#define TWI_SR_EOSACC_Msk                     (_UINT32_(0x1) << TWI_SR_EOSACC_Pos)                 /* (TWI_SR) End Of Slave Access (cleared on read) Mask */
#define TWI_SR_EOSACC(value)                  (TWI_SR_EOSACC_Msk & (_UINT32_(value) << TWI_SR_EOSACC_Pos)) /* Assigment of value for EOSACC in the TWI_SR register */
#define TWI_SR_ENDRX_Pos                      _UINT32_(12)                                         /* (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_ENDRX_Msk                      (_UINT32_(0x1) << TWI_SR_ENDRX_Pos)                  /* (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_ENDRX(value)                   (TWI_SR_ENDRX_Msk & (_UINT32_(value) << TWI_SR_ENDRX_Pos)) /* Assigment of value for ENDRX in the TWI_SR register */
#define TWI_SR_ENDTX_Pos                      _UINT32_(13)                                         /* (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_ENDTX_Msk                      (_UINT32_(0x1) << TWI_SR_ENDTX_Pos)                  /* (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_ENDTX(value)                   (TWI_SR_ENDTX_Msk & (_UINT32_(value) << TWI_SR_ENDTX_Pos)) /* Assigment of value for ENDTX in the TWI_SR register */
#define TWI_SR_RXBUFF_Pos                     _UINT32_(14)                                         /* (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_RXBUFF_Msk                     (_UINT32_(0x1) << TWI_SR_RXBUFF_Pos)                 /* (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_RXBUFF(value)                  (TWI_SR_RXBUFF_Msk & (_UINT32_(value) << TWI_SR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the TWI_SR register */
#define TWI_SR_TXBUFE_Pos                     _UINT32_(15)                                         /* (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_TXBUFE_Msk                     (_UINT32_(0x1) << TWI_SR_TXBUFE_Pos)                 /* (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_TXBUFE(value)                  (TWI_SR_TXBUFE_Msk & (_UINT32_(value) << TWI_SR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the TWI_SR register */
#define TWI_SR_Msk                            _UINT32_(0x0000FF7F)                                 /* (TWI_SR) Register Mask  */


/* -------- TWI_IER : (TWI Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define TWI_IER_TXCOMP_Pos                    _UINT32_(0)                                          /* (TWI_IER) Transmission Completed Interrupt Enable Position */
#define TWI_IER_TXCOMP_Msk                    (_UINT32_(0x1) << TWI_IER_TXCOMP_Pos)                /* (TWI_IER) Transmission Completed Interrupt Enable Mask */
#define TWI_IER_TXCOMP(value)                 (TWI_IER_TXCOMP_Msk & (_UINT32_(value) << TWI_IER_TXCOMP_Pos)) /* Assigment of value for TXCOMP in the TWI_IER register */
#define TWI_IER_RXRDY_Pos                     _UINT32_(1)                                          /* (TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWI_IER_RXRDY_Msk                     (_UINT32_(0x1) << TWI_IER_RXRDY_Pos)                 /* (TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_RXRDY(value)                  (TWI_IER_RXRDY_Msk & (_UINT32_(value) << TWI_IER_RXRDY_Pos)) /* Assigment of value for RXRDY in the TWI_IER register */
#define TWI_IER_TXRDY_Pos                     _UINT32_(2)                                          /* (TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWI_IER_TXRDY_Msk                     (_UINT32_(0x1) << TWI_IER_TXRDY_Pos)                 /* (TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_TXRDY(value)                  (TWI_IER_TXRDY_Msk & (_UINT32_(value) << TWI_IER_TXRDY_Pos)) /* Assigment of value for TXRDY in the TWI_IER register */
#define TWI_IER_SVACC_Pos                     _UINT32_(4)                                          /* (TWI_IER) Slave Access Interrupt Enable Position */
#define TWI_IER_SVACC_Msk                     (_UINT32_(0x1) << TWI_IER_SVACC_Pos)                 /* (TWI_IER) Slave Access Interrupt Enable Mask */
#define TWI_IER_SVACC(value)                  (TWI_IER_SVACC_Msk & (_UINT32_(value) << TWI_IER_SVACC_Pos)) /* Assigment of value for SVACC in the TWI_IER register */
#define TWI_IER_GACC_Pos                      _UINT32_(5)                                          /* (TWI_IER) General Call Access Interrupt Enable Position */
#define TWI_IER_GACC_Msk                      (_UINT32_(0x1) << TWI_IER_GACC_Pos)                  /* (TWI_IER) General Call Access Interrupt Enable Mask */
#define TWI_IER_GACC(value)                   (TWI_IER_GACC_Msk & (_UINT32_(value) << TWI_IER_GACC_Pos)) /* Assigment of value for GACC in the TWI_IER register */
#define TWI_IER_OVRE_Pos                      _UINT32_(6)                                          /* (TWI_IER) Overrun Error Interrupt Enable Position */
#define TWI_IER_OVRE_Msk                      (_UINT32_(0x1) << TWI_IER_OVRE_Pos)                  /* (TWI_IER) Overrun Error Interrupt Enable Mask */
#define TWI_IER_OVRE(value)                   (TWI_IER_OVRE_Msk & (_UINT32_(value) << TWI_IER_OVRE_Pos)) /* Assigment of value for OVRE in the TWI_IER register */
#define TWI_IER_NACK_Pos                      _UINT32_(8)                                          /* (TWI_IER) Not Acknowledge Interrupt Enable Position */
#define TWI_IER_NACK_Msk                      (_UINT32_(0x1) << TWI_IER_NACK_Pos)                  /* (TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define TWI_IER_NACK(value)                   (TWI_IER_NACK_Msk & (_UINT32_(value) << TWI_IER_NACK_Pos)) /* Assigment of value for NACK in the TWI_IER register */
#define TWI_IER_ARBLST_Pos                    _UINT32_(9)                                          /* (TWI_IER) Arbitration Lost Interrupt Enable Position */
#define TWI_IER_ARBLST_Msk                    (_UINT32_(0x1) << TWI_IER_ARBLST_Pos)                /* (TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define TWI_IER_ARBLST(value)                 (TWI_IER_ARBLST_Msk & (_UINT32_(value) << TWI_IER_ARBLST_Pos)) /* Assigment of value for ARBLST in the TWI_IER register */
#define TWI_IER_SCL_WS_Pos                    _UINT32_(10)                                         /* (TWI_IER) Clock Wait State Interrupt Enable Position */
#define TWI_IER_SCL_WS_Msk                    (_UINT32_(0x1) << TWI_IER_SCL_WS_Pos)                /* (TWI_IER) Clock Wait State Interrupt Enable Mask */
#define TWI_IER_SCL_WS(value)                 (TWI_IER_SCL_WS_Msk & (_UINT32_(value) << TWI_IER_SCL_WS_Pos)) /* Assigment of value for SCL_WS in the TWI_IER register */
#define TWI_IER_EOSACC_Pos                    _UINT32_(11)                                         /* (TWI_IER) End Of Slave Access Interrupt Enable Position */
#define TWI_IER_EOSACC_Msk                    (_UINT32_(0x1) << TWI_IER_EOSACC_Pos)                /* (TWI_IER) End Of Slave Access Interrupt Enable Mask */
#define TWI_IER_EOSACC(value)                 (TWI_IER_EOSACC_Msk & (_UINT32_(value) << TWI_IER_EOSACC_Pos)) /* Assigment of value for EOSACC in the TWI_IER register */
#define TWI_IER_ENDRX_Pos                     _UINT32_(12)                                         /* (TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define TWI_IER_ENDRX_Msk                     (_UINT32_(0x1) << TWI_IER_ENDRX_Pos)                 /* (TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define TWI_IER_ENDRX(value)                  (TWI_IER_ENDRX_Msk & (_UINT32_(value) << TWI_IER_ENDRX_Pos)) /* Assigment of value for ENDRX in the TWI_IER register */
#define TWI_IER_ENDTX_Pos                     _UINT32_(13)                                         /* (TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define TWI_IER_ENDTX_Msk                     (_UINT32_(0x1) << TWI_IER_ENDTX_Pos)                 /* (TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define TWI_IER_ENDTX(value)                  (TWI_IER_ENDTX_Msk & (_UINT32_(value) << TWI_IER_ENDTX_Pos)) /* Assigment of value for ENDTX in the TWI_IER register */
#define TWI_IER_RXBUFF_Pos                    _UINT32_(14)                                         /* (TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define TWI_IER_RXBUFF_Msk                    (_UINT32_(0x1) << TWI_IER_RXBUFF_Pos)                /* (TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define TWI_IER_RXBUFF(value)                 (TWI_IER_RXBUFF_Msk & (_UINT32_(value) << TWI_IER_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the TWI_IER register */
#define TWI_IER_TXBUFE_Pos                    _UINT32_(15)                                         /* (TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define TWI_IER_TXBUFE_Msk                    (_UINT32_(0x1) << TWI_IER_TXBUFE_Pos)                /* (TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define TWI_IER_TXBUFE(value)                 (TWI_IER_TXBUFE_Msk & (_UINT32_(value) << TWI_IER_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the TWI_IER register */
#define TWI_IER_Msk                           _UINT32_(0x0000FF77)                                 /* (TWI_IER) Register Mask  */


/* -------- TWI_IDR : (TWI Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define TWI_IDR_TXCOMP_Pos                    _UINT32_(0)                                          /* (TWI_IDR) Transmission Completed Interrupt Disable Position */
#define TWI_IDR_TXCOMP_Msk                    (_UINT32_(0x1) << TWI_IDR_TXCOMP_Pos)                /* (TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define TWI_IDR_TXCOMP(value)                 (TWI_IDR_TXCOMP_Msk & (_UINT32_(value) << TWI_IDR_TXCOMP_Pos)) /* Assigment of value for TXCOMP in the TWI_IDR register */
#define TWI_IDR_RXRDY_Pos                     _UINT32_(1)                                          /* (TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_RXRDY_Msk                     (_UINT32_(0x1) << TWI_IDR_RXRDY_Pos)                 /* (TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_RXRDY(value)                  (TWI_IDR_RXRDY_Msk & (_UINT32_(value) << TWI_IDR_RXRDY_Pos)) /* Assigment of value for RXRDY in the TWI_IDR register */
#define TWI_IDR_TXRDY_Pos                     _UINT32_(2)                                          /* (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_TXRDY_Msk                     (_UINT32_(0x1) << TWI_IDR_TXRDY_Pos)                 /* (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_TXRDY(value)                  (TWI_IDR_TXRDY_Msk & (_UINT32_(value) << TWI_IDR_TXRDY_Pos)) /* Assigment of value for TXRDY in the TWI_IDR register */
#define TWI_IDR_SVACC_Pos                     _UINT32_(4)                                          /* (TWI_IDR) Slave Access Interrupt Disable Position */
#define TWI_IDR_SVACC_Msk                     (_UINT32_(0x1) << TWI_IDR_SVACC_Pos)                 /* (TWI_IDR) Slave Access Interrupt Disable Mask */
#define TWI_IDR_SVACC(value)                  (TWI_IDR_SVACC_Msk & (_UINT32_(value) << TWI_IDR_SVACC_Pos)) /* Assigment of value for SVACC in the TWI_IDR register */
#define TWI_IDR_GACC_Pos                      _UINT32_(5)                                          /* (TWI_IDR) General Call Access Interrupt Disable Position */
#define TWI_IDR_GACC_Msk                      (_UINT32_(0x1) << TWI_IDR_GACC_Pos)                  /* (TWI_IDR) General Call Access Interrupt Disable Mask */
#define TWI_IDR_GACC(value)                   (TWI_IDR_GACC_Msk & (_UINT32_(value) << TWI_IDR_GACC_Pos)) /* Assigment of value for GACC in the TWI_IDR register */
#define TWI_IDR_OVRE_Pos                      _UINT32_(6)                                          /* (TWI_IDR) Overrun Error Interrupt Disable Position */
#define TWI_IDR_OVRE_Msk                      (_UINT32_(0x1) << TWI_IDR_OVRE_Pos)                  /* (TWI_IDR) Overrun Error Interrupt Disable Mask */
#define TWI_IDR_OVRE(value)                   (TWI_IDR_OVRE_Msk & (_UINT32_(value) << TWI_IDR_OVRE_Pos)) /* Assigment of value for OVRE in the TWI_IDR register */
#define TWI_IDR_NACK_Pos                      _UINT32_(8)                                          /* (TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define TWI_IDR_NACK_Msk                      (_UINT32_(0x1) << TWI_IDR_NACK_Pos)                  /* (TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWI_IDR_NACK(value)                   (TWI_IDR_NACK_Msk & (_UINT32_(value) << TWI_IDR_NACK_Pos)) /* Assigment of value for NACK in the TWI_IDR register */
#define TWI_IDR_ARBLST_Pos                    _UINT32_(9)                                          /* (TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define TWI_IDR_ARBLST_Msk                    (_UINT32_(0x1) << TWI_IDR_ARBLST_Pos)                /* (TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWI_IDR_ARBLST(value)                 (TWI_IDR_ARBLST_Msk & (_UINT32_(value) << TWI_IDR_ARBLST_Pos)) /* Assigment of value for ARBLST in the TWI_IDR register */
#define TWI_IDR_SCL_WS_Pos                    _UINT32_(10)                                         /* (TWI_IDR) Clock Wait State Interrupt Disable Position */
#define TWI_IDR_SCL_WS_Msk                    (_UINT32_(0x1) << TWI_IDR_SCL_WS_Pos)                /* (TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define TWI_IDR_SCL_WS(value)                 (TWI_IDR_SCL_WS_Msk & (_UINT32_(value) << TWI_IDR_SCL_WS_Pos)) /* Assigment of value for SCL_WS in the TWI_IDR register */
#define TWI_IDR_EOSACC_Pos                    _UINT32_(11)                                         /* (TWI_IDR) End Of Slave Access Interrupt Disable Position */
#define TWI_IDR_EOSACC_Msk                    (_UINT32_(0x1) << TWI_IDR_EOSACC_Pos)                /* (TWI_IDR) End Of Slave Access Interrupt Disable Mask */
#define TWI_IDR_EOSACC(value)                 (TWI_IDR_EOSACC_Msk & (_UINT32_(value) << TWI_IDR_EOSACC_Pos)) /* Assigment of value for EOSACC in the TWI_IDR register */
#define TWI_IDR_ENDRX_Pos                     _UINT32_(12)                                         /* (TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define TWI_IDR_ENDRX_Msk                     (_UINT32_(0x1) << TWI_IDR_ENDRX_Pos)                 /* (TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDRX(value)                  (TWI_IDR_ENDRX_Msk & (_UINT32_(value) << TWI_IDR_ENDRX_Pos)) /* Assigment of value for ENDRX in the TWI_IDR register */
#define TWI_IDR_ENDTX_Pos                     _UINT32_(13)                                         /* (TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define TWI_IDR_ENDTX_Msk                     (_UINT32_(0x1) << TWI_IDR_ENDTX_Pos)                 /* (TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDTX(value)                  (TWI_IDR_ENDTX_Msk & (_UINT32_(value) << TWI_IDR_ENDTX_Pos)) /* Assigment of value for ENDTX in the TWI_IDR register */
#define TWI_IDR_RXBUFF_Pos                    _UINT32_(14)                                         /* (TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define TWI_IDR_RXBUFF_Msk                    (_UINT32_(0x1) << TWI_IDR_RXBUFF_Pos)                /* (TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define TWI_IDR_RXBUFF(value)                 (TWI_IDR_RXBUFF_Msk & (_UINT32_(value) << TWI_IDR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the TWI_IDR register */
#define TWI_IDR_TXBUFE_Pos                    _UINT32_(15)                                         /* (TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define TWI_IDR_TXBUFE_Msk                    (_UINT32_(0x1) << TWI_IDR_TXBUFE_Pos)                /* (TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define TWI_IDR_TXBUFE(value)                 (TWI_IDR_TXBUFE_Msk & (_UINT32_(value) << TWI_IDR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the TWI_IDR register */
#define TWI_IDR_Msk                           _UINT32_(0x0000FF77)                                 /* (TWI_IDR) Register Mask  */


/* -------- TWI_IMR : (TWI Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define TWI_IMR_TXCOMP_Pos                    _UINT32_(0)                                          /* (TWI_IMR) Transmission Completed Interrupt Mask Position */
#define TWI_IMR_TXCOMP_Msk                    (_UINT32_(0x1) << TWI_IMR_TXCOMP_Pos)                /* (TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define TWI_IMR_TXCOMP(value)                 (TWI_IMR_TXCOMP_Msk & (_UINT32_(value) << TWI_IMR_TXCOMP_Pos)) /* Assigment of value for TXCOMP in the TWI_IMR register */
#define TWI_IMR_RXRDY_Pos                     _UINT32_(1)                                          /* (TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_RXRDY_Msk                     (_UINT32_(0x1) << TWI_IMR_RXRDY_Pos)                 /* (TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_RXRDY(value)                  (TWI_IMR_RXRDY_Msk & (_UINT32_(value) << TWI_IMR_RXRDY_Pos)) /* Assigment of value for RXRDY in the TWI_IMR register */
#define TWI_IMR_TXRDY_Pos                     _UINT32_(2)                                          /* (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_TXRDY_Msk                     (_UINT32_(0x1) << TWI_IMR_TXRDY_Pos)                 /* (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_TXRDY(value)                  (TWI_IMR_TXRDY_Msk & (_UINT32_(value) << TWI_IMR_TXRDY_Pos)) /* Assigment of value for TXRDY in the TWI_IMR register */
#define TWI_IMR_SVACC_Pos                     _UINT32_(4)                                          /* (TWI_IMR) Slave Access Interrupt Mask Position */
#define TWI_IMR_SVACC_Msk                     (_UINT32_(0x1) << TWI_IMR_SVACC_Pos)                 /* (TWI_IMR) Slave Access Interrupt Mask Mask */
#define TWI_IMR_SVACC(value)                  (TWI_IMR_SVACC_Msk & (_UINT32_(value) << TWI_IMR_SVACC_Pos)) /* Assigment of value for SVACC in the TWI_IMR register */
#define TWI_IMR_GACC_Pos                      _UINT32_(5)                                          /* (TWI_IMR) General Call Access Interrupt Mask Position */
#define TWI_IMR_GACC_Msk                      (_UINT32_(0x1) << TWI_IMR_GACC_Pos)                  /* (TWI_IMR) General Call Access Interrupt Mask Mask */
#define TWI_IMR_GACC(value)                   (TWI_IMR_GACC_Msk & (_UINT32_(value) << TWI_IMR_GACC_Pos)) /* Assigment of value for GACC in the TWI_IMR register */
#define TWI_IMR_OVRE_Pos                      _UINT32_(6)                                          /* (TWI_IMR) Overrun Error Interrupt Mask Position */
#define TWI_IMR_OVRE_Msk                      (_UINT32_(0x1) << TWI_IMR_OVRE_Pos)                  /* (TWI_IMR) Overrun Error Interrupt Mask Mask */
#define TWI_IMR_OVRE(value)                   (TWI_IMR_OVRE_Msk & (_UINT32_(value) << TWI_IMR_OVRE_Pos)) /* Assigment of value for OVRE in the TWI_IMR register */
#define TWI_IMR_NACK_Pos                      _UINT32_(8)                                          /* (TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define TWI_IMR_NACK_Msk                      (_UINT32_(0x1) << TWI_IMR_NACK_Pos)                  /* (TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWI_IMR_NACK(value)                   (TWI_IMR_NACK_Msk & (_UINT32_(value) << TWI_IMR_NACK_Pos)) /* Assigment of value for NACK in the TWI_IMR register */
#define TWI_IMR_ARBLST_Pos                    _UINT32_(9)                                          /* (TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define TWI_IMR_ARBLST_Msk                    (_UINT32_(0x1) << TWI_IMR_ARBLST_Pos)                /* (TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWI_IMR_ARBLST(value)                 (TWI_IMR_ARBLST_Msk & (_UINT32_(value) << TWI_IMR_ARBLST_Pos)) /* Assigment of value for ARBLST in the TWI_IMR register */
#define TWI_IMR_SCL_WS_Pos                    _UINT32_(10)                                         /* (TWI_IMR) Clock Wait State Interrupt Mask Position */
#define TWI_IMR_SCL_WS_Msk                    (_UINT32_(0x1) << TWI_IMR_SCL_WS_Pos)                /* (TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define TWI_IMR_SCL_WS(value)                 (TWI_IMR_SCL_WS_Msk & (_UINT32_(value) << TWI_IMR_SCL_WS_Pos)) /* Assigment of value for SCL_WS in the TWI_IMR register */
#define TWI_IMR_EOSACC_Pos                    _UINT32_(11)                                         /* (TWI_IMR) End Of Slave Access Interrupt Mask Position */
#define TWI_IMR_EOSACC_Msk                    (_UINT32_(0x1) << TWI_IMR_EOSACC_Pos)                /* (TWI_IMR) End Of Slave Access Interrupt Mask Mask */
#define TWI_IMR_EOSACC(value)                 (TWI_IMR_EOSACC_Msk & (_UINT32_(value) << TWI_IMR_EOSACC_Pos)) /* Assigment of value for EOSACC in the TWI_IMR register */
#define TWI_IMR_ENDRX_Pos                     _UINT32_(12)                                         /* (TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define TWI_IMR_ENDRX_Msk                     (_UINT32_(0x1) << TWI_IMR_ENDRX_Pos)                 /* (TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDRX(value)                  (TWI_IMR_ENDRX_Msk & (_UINT32_(value) << TWI_IMR_ENDRX_Pos)) /* Assigment of value for ENDRX in the TWI_IMR register */
#define TWI_IMR_ENDTX_Pos                     _UINT32_(13)                                         /* (TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define TWI_IMR_ENDTX_Msk                     (_UINT32_(0x1) << TWI_IMR_ENDTX_Pos)                 /* (TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDTX(value)                  (TWI_IMR_ENDTX_Msk & (_UINT32_(value) << TWI_IMR_ENDTX_Pos)) /* Assigment of value for ENDTX in the TWI_IMR register */
#define TWI_IMR_RXBUFF_Pos                    _UINT32_(14)                                         /* (TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define TWI_IMR_RXBUFF_Msk                    (_UINT32_(0x1) << TWI_IMR_RXBUFF_Pos)                /* (TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define TWI_IMR_RXBUFF(value)                 (TWI_IMR_RXBUFF_Msk & (_UINT32_(value) << TWI_IMR_RXBUFF_Pos)) /* Assigment of value for RXBUFF in the TWI_IMR register */
#define TWI_IMR_TXBUFE_Pos                    _UINT32_(15)                                         /* (TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define TWI_IMR_TXBUFE_Msk                    (_UINT32_(0x1) << TWI_IMR_TXBUFE_Pos)                /* (TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define TWI_IMR_TXBUFE(value)                 (TWI_IMR_TXBUFE_Msk & (_UINT32_(value) << TWI_IMR_TXBUFE_Pos)) /* Assigment of value for TXBUFE in the TWI_IMR register */
#define TWI_IMR_Msk                           _UINT32_(0x0000FF77)                                 /* (TWI_IMR) Register Mask  */


/* -------- TWI_RHR : (TWI Offset: 0x30) ( R/ 32) Receive Holding Register -------- */
#define TWI_RHR_RXDATA_Pos                    _UINT32_(0)                                          /* (TWI_RHR) Master or Slave Receive Holding Data Position */
#define TWI_RHR_RXDATA_Msk                    (_UINT32_(0xFF) << TWI_RHR_RXDATA_Pos)               /* (TWI_RHR) Master or Slave Receive Holding Data Mask */
#define TWI_RHR_RXDATA(value)                 (TWI_RHR_RXDATA_Msk & (_UINT32_(value) << TWI_RHR_RXDATA_Pos)) /* Assigment of value for RXDATA in the TWI_RHR register */
#define TWI_RHR_Msk                           _UINT32_(0x000000FF)                                 /* (TWI_RHR) Register Mask  */


/* -------- TWI_THR : (TWI Offset: 0x34) ( /W 32) Transmit Holding Register -------- */
#define TWI_THR_TXDATA_Pos                    _UINT32_(0)                                          /* (TWI_THR) Master or Slave Transmit Holding Data Position */
#define TWI_THR_TXDATA_Msk                    (_UINT32_(0xFF) << TWI_THR_TXDATA_Pos)               /* (TWI_THR) Master or Slave Transmit Holding Data Mask */
#define TWI_THR_TXDATA(value)                 (TWI_THR_TXDATA_Msk & (_UINT32_(value) << TWI_THR_TXDATA_Pos)) /* Assigment of value for TXDATA in the TWI_THR register */
#define TWI_THR_Msk                           _UINT32_(0x000000FF)                                 /* (TWI_THR) Register Mask  */


/* -------- TWI_WPMR : (TWI Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define TWI_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (TWI_WPMR) Write Protection Enable Position */
#define TWI_WPMR_WPEN_Msk                     (_UINT32_(0x1) << TWI_WPMR_WPEN_Pos)                 /* (TWI_WPMR) Write Protection Enable Mask */
#define TWI_WPMR_WPEN(value)                  (TWI_WPMR_WPEN_Msk & (_UINT32_(value) << TWI_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the TWI_WPMR register */
#define TWI_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (TWI_WPMR) Write Protection Key Position */
#define TWI_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << TWI_WPMR_WPKEY_Pos)           /* (TWI_WPMR) Write Protection Key Mask */
#define TWI_WPMR_WPKEY(value)                 (TWI_WPMR_WPKEY_Msk & (_UINT32_(value) << TWI_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the TWI_WPMR register */
#define   TWI_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x545749)                                   /* (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define TWI_WPMR_WPKEY_PASSWD                 (TWI_WPMR_WPKEY_PASSWD_Val << TWI_WPMR_WPKEY_Pos)    /* (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define TWI_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (TWI_WPMR) Register Mask  */


/* -------- TWI_WPSR : (TWI Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define TWI_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (TWI_WPSR) Write Protection Violation Status Position */
#define TWI_WPSR_WPVS_Msk                     (_UINT32_(0x1) << TWI_WPSR_WPVS_Pos)                 /* (TWI_WPSR) Write Protection Violation Status Mask */
#define TWI_WPSR_WPVS(value)                  (TWI_WPSR_WPVS_Msk & (_UINT32_(value) << TWI_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the TWI_WPSR register */
#define TWI_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (TWI_WPSR) Write Protection Violation Source Position */
#define TWI_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFFFF) << TWI_WPSR_WPVSRC_Pos)          /* (TWI_WPSR) Write Protection Violation Source Mask */
#define TWI_WPSR_WPVSRC(value)                (TWI_WPSR_WPVSRC_Msk & (_UINT32_(value) << TWI_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the TWI_WPSR register */
#define TWI_WPSR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (TWI_WPSR) Register Mask  */


/* -------- TWI_RPR : (TWI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define TWI_RPR_RXPTR_Pos                     _UINT32_(0)                                          /* (TWI_RPR) Receive Pointer Register Position */
#define TWI_RPR_RXPTR_Msk                     (_UINT32_(0xFFFFFFFF) << TWI_RPR_RXPTR_Pos)          /* (TWI_RPR) Receive Pointer Register Mask */
#define TWI_RPR_RXPTR(value)                  (TWI_RPR_RXPTR_Msk & (_UINT32_(value) << TWI_RPR_RXPTR_Pos)) /* Assigment of value for RXPTR in the TWI_RPR register */
#define TWI_RPR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (TWI_RPR) Register Mask  */


/* -------- TWI_RCR : (TWI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define TWI_RCR_RXCTR_Pos                     _UINT32_(0)                                          /* (TWI_RCR) Receive Counter Register Position */
#define TWI_RCR_RXCTR_Msk                     (_UINT32_(0xFFFF) << TWI_RCR_RXCTR_Pos)              /* (TWI_RCR) Receive Counter Register Mask */
#define TWI_RCR_RXCTR(value)                  (TWI_RCR_RXCTR_Msk & (_UINT32_(value) << TWI_RCR_RXCTR_Pos)) /* Assigment of value for RXCTR in the TWI_RCR register */
#define TWI_RCR_Msk                           _UINT32_(0x0000FFFF)                                 /* (TWI_RCR) Register Mask  */


/* -------- TWI_TPR : (TWI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define TWI_TPR_TXPTR_Pos                     _UINT32_(0)                                          /* (TWI_TPR) Transmit Counter Register Position */
#define TWI_TPR_TXPTR_Msk                     (_UINT32_(0xFFFFFFFF) << TWI_TPR_TXPTR_Pos)          /* (TWI_TPR) Transmit Counter Register Mask */
#define TWI_TPR_TXPTR(value)                  (TWI_TPR_TXPTR_Msk & (_UINT32_(value) << TWI_TPR_TXPTR_Pos)) /* Assigment of value for TXPTR in the TWI_TPR register */
#define TWI_TPR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (TWI_TPR) Register Mask  */


/* -------- TWI_TCR : (TWI Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define TWI_TCR_TXCTR_Pos                     _UINT32_(0)                                          /* (TWI_TCR) Transmit Counter Register Position */
#define TWI_TCR_TXCTR_Msk                     (_UINT32_(0xFFFF) << TWI_TCR_TXCTR_Pos)              /* (TWI_TCR) Transmit Counter Register Mask */
#define TWI_TCR_TXCTR(value)                  (TWI_TCR_TXCTR_Msk & (_UINT32_(value) << TWI_TCR_TXCTR_Pos)) /* Assigment of value for TXCTR in the TWI_TCR register */
#define TWI_TCR_Msk                           _UINT32_(0x0000FFFF)                                 /* (TWI_TCR) Register Mask  */


/* -------- TWI_RNPR : (TWI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define TWI_RNPR_RXNPTR_Pos                   _UINT32_(0)                                          /* (TWI_RNPR) Receive Next Pointer Position */
#define TWI_RNPR_RXNPTR_Msk                   (_UINT32_(0xFFFFFFFF) << TWI_RNPR_RXNPTR_Pos)        /* (TWI_RNPR) Receive Next Pointer Mask */
#define TWI_RNPR_RXNPTR(value)                (TWI_RNPR_RXNPTR_Msk & (_UINT32_(value) << TWI_RNPR_RXNPTR_Pos)) /* Assigment of value for RXNPTR in the TWI_RNPR register */
#define TWI_RNPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (TWI_RNPR) Register Mask  */


/* -------- TWI_RNCR : (TWI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define TWI_RNCR_RXNCTR_Pos                   _UINT32_(0)                                          /* (TWI_RNCR) Receive Next Counter Position */
#define TWI_RNCR_RXNCTR_Msk                   (_UINT32_(0xFFFF) << TWI_RNCR_RXNCTR_Pos)            /* (TWI_RNCR) Receive Next Counter Mask */
#define TWI_RNCR_RXNCTR(value)                (TWI_RNCR_RXNCTR_Msk & (_UINT32_(value) << TWI_RNCR_RXNCTR_Pos)) /* Assigment of value for RXNCTR in the TWI_RNCR register */
#define TWI_RNCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (TWI_RNCR) Register Mask  */


/* -------- TWI_TNPR : (TWI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define TWI_TNPR_TXNPTR_Pos                   _UINT32_(0)                                          /* (TWI_TNPR) Transmit Next Pointer Position */
#define TWI_TNPR_TXNPTR_Msk                   (_UINT32_(0xFFFFFFFF) << TWI_TNPR_TXNPTR_Pos)        /* (TWI_TNPR) Transmit Next Pointer Mask */
#define TWI_TNPR_TXNPTR(value)                (TWI_TNPR_TXNPTR_Msk & (_UINT32_(value) << TWI_TNPR_TXNPTR_Pos)) /* Assigment of value for TXNPTR in the TWI_TNPR register */
#define TWI_TNPR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (TWI_TNPR) Register Mask  */


/* -------- TWI_TNCR : (TWI Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define TWI_TNCR_TXNCTR_Pos                   _UINT32_(0)                                          /* (TWI_TNCR) Transmit Counter Next Position */
#define TWI_TNCR_TXNCTR_Msk                   (_UINT32_(0xFFFF) << TWI_TNCR_TXNCTR_Pos)            /* (TWI_TNCR) Transmit Counter Next Mask */
#define TWI_TNCR_TXNCTR(value)                (TWI_TNCR_TXNCTR_Msk & (_UINT32_(value) << TWI_TNCR_TXNCTR_Pos)) /* Assigment of value for TXNCTR in the TWI_TNCR register */
#define TWI_TNCR_Msk                          _UINT32_(0x0000FFFF)                                 /* (TWI_TNCR) Register Mask  */


/* -------- TWI_PTCR : (TWI Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define TWI_PTCR_RXTEN_Pos                    _UINT32_(0)                                          /* (TWI_PTCR) Receiver Transfer Enable Position */
#define TWI_PTCR_RXTEN_Msk                    (_UINT32_(0x1) << TWI_PTCR_RXTEN_Pos)                /* (TWI_PTCR) Receiver Transfer Enable Mask */
#define TWI_PTCR_RXTEN(value)                 (TWI_PTCR_RXTEN_Msk & (_UINT32_(value) << TWI_PTCR_RXTEN_Pos)) /* Assigment of value for RXTEN in the TWI_PTCR register */
#define TWI_PTCR_RXTDIS_Pos                   _UINT32_(1)                                          /* (TWI_PTCR) Receiver Transfer Disable Position */
#define TWI_PTCR_RXTDIS_Msk                   (_UINT32_(0x1) << TWI_PTCR_RXTDIS_Pos)               /* (TWI_PTCR) Receiver Transfer Disable Mask */
#define TWI_PTCR_RXTDIS(value)                (TWI_PTCR_RXTDIS_Msk & (_UINT32_(value) << TWI_PTCR_RXTDIS_Pos)) /* Assigment of value for RXTDIS in the TWI_PTCR register */
#define TWI_PTCR_TXTEN_Pos                    _UINT32_(8)                                          /* (TWI_PTCR) Transmitter Transfer Enable Position */
#define TWI_PTCR_TXTEN_Msk                    (_UINT32_(0x1) << TWI_PTCR_TXTEN_Pos)                /* (TWI_PTCR) Transmitter Transfer Enable Mask */
#define TWI_PTCR_TXTEN(value)                 (TWI_PTCR_TXTEN_Msk & (_UINT32_(value) << TWI_PTCR_TXTEN_Pos)) /* Assigment of value for TXTEN in the TWI_PTCR register */
#define TWI_PTCR_TXTDIS_Pos                   _UINT32_(9)                                          /* (TWI_PTCR) Transmitter Transfer Disable Position */
#define TWI_PTCR_TXTDIS_Msk                   (_UINT32_(0x1) << TWI_PTCR_TXTDIS_Pos)               /* (TWI_PTCR) Transmitter Transfer Disable Mask */
#define TWI_PTCR_TXTDIS(value)                (TWI_PTCR_TXTDIS_Msk & (_UINT32_(value) << TWI_PTCR_TXTDIS_Pos)) /* Assigment of value for TXTDIS in the TWI_PTCR register */
#define TWI_PTCR_RXCBEN_Pos                   _UINT32_(16)                                         /* (TWI_PTCR) Receiver Circular Buffer Enable Position */
#define TWI_PTCR_RXCBEN_Msk                   (_UINT32_(0x1) << TWI_PTCR_RXCBEN_Pos)               /* (TWI_PTCR) Receiver Circular Buffer Enable Mask */
#define TWI_PTCR_RXCBEN(value)                (TWI_PTCR_RXCBEN_Msk & (_UINT32_(value) << TWI_PTCR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the TWI_PTCR register */
#define TWI_PTCR_RXCBDIS_Pos                  _UINT32_(17)                                         /* (TWI_PTCR) Receiver Circular Buffer Disable Position */
#define TWI_PTCR_RXCBDIS_Msk                  (_UINT32_(0x1) << TWI_PTCR_RXCBDIS_Pos)              /* (TWI_PTCR) Receiver Circular Buffer Disable Mask */
#define TWI_PTCR_RXCBDIS(value)               (TWI_PTCR_RXCBDIS_Msk & (_UINT32_(value) << TWI_PTCR_RXCBDIS_Pos)) /* Assigment of value for RXCBDIS in the TWI_PTCR register */
#define TWI_PTCR_TXCBEN_Pos                   _UINT32_(18)                                         /* (TWI_PTCR) Transmitter Circular Buffer Enable Position */
#define TWI_PTCR_TXCBEN_Msk                   (_UINT32_(0x1) << TWI_PTCR_TXCBEN_Pos)               /* (TWI_PTCR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTCR_TXCBEN(value)                (TWI_PTCR_TXCBEN_Msk & (_UINT32_(value) << TWI_PTCR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the TWI_PTCR register */
#define TWI_PTCR_TXCBDIS_Pos                  _UINT32_(19)                                         /* (TWI_PTCR) Transmitter Circular Buffer Disable Position */
#define TWI_PTCR_TXCBDIS_Msk                  (_UINT32_(0x1) << TWI_PTCR_TXCBDIS_Pos)              /* (TWI_PTCR) Transmitter Circular Buffer Disable Mask */
#define TWI_PTCR_TXCBDIS(value)               (TWI_PTCR_TXCBDIS_Msk & (_UINT32_(value) << TWI_PTCR_TXCBDIS_Pos)) /* Assigment of value for TXCBDIS in the TWI_PTCR register */
#define TWI_PTCR_ERRCLR_Pos                   _UINT32_(24)                                         /* (TWI_PTCR) Transfer Bus Error Clear Position */
#define TWI_PTCR_ERRCLR_Msk                   (_UINT32_(0x1) << TWI_PTCR_ERRCLR_Pos)               /* (TWI_PTCR) Transfer Bus Error Clear Mask */
#define TWI_PTCR_ERRCLR(value)                (TWI_PTCR_ERRCLR_Msk & (_UINT32_(value) << TWI_PTCR_ERRCLR_Pos)) /* Assigment of value for ERRCLR in the TWI_PTCR register */
#define TWI_PTCR_Msk                          _UINT32_(0x010F0303)                                 /* (TWI_PTCR) Register Mask  */


/* -------- TWI_PTSR : (TWI Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define TWI_PTSR_RXTEN_Pos                    _UINT32_(0)                                          /* (TWI_PTSR) Receiver Transfer Enable Position */
#define TWI_PTSR_RXTEN_Msk                    (_UINT32_(0x1) << TWI_PTSR_RXTEN_Pos)                /* (TWI_PTSR) Receiver Transfer Enable Mask */
#define TWI_PTSR_RXTEN(value)                 (TWI_PTSR_RXTEN_Msk & (_UINT32_(value) << TWI_PTSR_RXTEN_Pos)) /* Assigment of value for RXTEN in the TWI_PTSR register */
#define TWI_PTSR_TXTEN_Pos                    _UINT32_(8)                                          /* (TWI_PTSR) Transmitter Transfer Enable Position */
#define TWI_PTSR_TXTEN_Msk                    (_UINT32_(0x1) << TWI_PTSR_TXTEN_Pos)                /* (TWI_PTSR) Transmitter Transfer Enable Mask */
#define TWI_PTSR_TXTEN(value)                 (TWI_PTSR_TXTEN_Msk & (_UINT32_(value) << TWI_PTSR_TXTEN_Pos)) /* Assigment of value for TXTEN in the TWI_PTSR register */
#define TWI_PTSR_RXCBEN_Pos                   _UINT32_(16)                                         /* (TWI_PTSR) Receiver Circular Buffer Enable Position */
#define TWI_PTSR_RXCBEN_Msk                   (_UINT32_(0x1) << TWI_PTSR_RXCBEN_Pos)               /* (TWI_PTSR) Receiver Circular Buffer Enable Mask */
#define TWI_PTSR_RXCBEN(value)                (TWI_PTSR_RXCBEN_Msk & (_UINT32_(value) << TWI_PTSR_RXCBEN_Pos)) /* Assigment of value for RXCBEN in the TWI_PTSR register */
#define TWI_PTSR_TXCBEN_Pos                   _UINT32_(18)                                         /* (TWI_PTSR) Transmitter Circular Buffer Enable Position */
#define TWI_PTSR_TXCBEN_Msk                   (_UINT32_(0x1) << TWI_PTSR_TXCBEN_Pos)               /* (TWI_PTSR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTSR_TXCBEN(value)                (TWI_PTSR_TXCBEN_Msk & (_UINT32_(value) << TWI_PTSR_TXCBEN_Pos)) /* Assigment of value for TXCBEN in the TWI_PTSR register */
#define TWI_PTSR_ERR_Pos                      _UINT32_(24)                                         /* (TWI_PTSR) Transfer Bus Error Position */
#define TWI_PTSR_ERR_Msk                      (_UINT32_(0x1) << TWI_PTSR_ERR_Pos)                  /* (TWI_PTSR) Transfer Bus Error Mask */
#define TWI_PTSR_ERR(value)                   (TWI_PTSR_ERR_Msk & (_UINT32_(value) << TWI_PTSR_ERR_Pos)) /* Assigment of value for ERR in the TWI_PTSR register */
#define TWI_PTSR_Msk                          _UINT32_(0x01050101)                                 /* (TWI_PTSR) Register Mask  */


/** \brief TWI register offsets definitions */
#define TWI_CR_REG_OFST                _UINT32_(0x00)      /* (TWI_CR) Control Register Offset */
#define TWI_MMR_REG_OFST               _UINT32_(0x04)      /* (TWI_MMR) Master Mode Register Offset */
#define TWI_SMR_REG_OFST               _UINT32_(0x08)      /* (TWI_SMR) Slave Mode Register Offset */
#define TWI_IADR_REG_OFST              _UINT32_(0x0C)      /* (TWI_IADR) Internal Address Register Offset */
#define TWI_CWGR_REG_OFST              _UINT32_(0x10)      /* (TWI_CWGR) Clock Waveform Generator Register Offset */
#define TWI_SR_REG_OFST                _UINT32_(0x20)      /* (TWI_SR) Status Register Offset */
#define TWI_IER_REG_OFST               _UINT32_(0x24)      /* (TWI_IER) Interrupt Enable Register Offset */
#define TWI_IDR_REG_OFST               _UINT32_(0x28)      /* (TWI_IDR) Interrupt Disable Register Offset */
#define TWI_IMR_REG_OFST               _UINT32_(0x2C)      /* (TWI_IMR) Interrupt Mask Register Offset */
#define TWI_RHR_REG_OFST               _UINT32_(0x30)      /* (TWI_RHR) Receive Holding Register Offset */
#define TWI_THR_REG_OFST               _UINT32_(0x34)      /* (TWI_THR) Transmit Holding Register Offset */
#define TWI_WPMR_REG_OFST              _UINT32_(0xE4)      /* (TWI_WPMR) Write Protection Mode Register Offset */
#define TWI_WPSR_REG_OFST              _UINT32_(0xE8)      /* (TWI_WPSR) Write Protection Status Register Offset */
#define TWI_RPR_REG_OFST               _UINT32_(0x100)     /* (TWI_RPR) Receive Pointer Register Offset */
#define TWI_RCR_REG_OFST               _UINT32_(0x104)     /* (TWI_RCR) Receive Counter Register Offset */
#define TWI_TPR_REG_OFST               _UINT32_(0x108)     /* (TWI_TPR) Transmit Pointer Register Offset */
#define TWI_TCR_REG_OFST               _UINT32_(0x10C)     /* (TWI_TCR) Transmit Counter Register Offset */
#define TWI_RNPR_REG_OFST              _UINT32_(0x110)     /* (TWI_RNPR) Receive Next Pointer Register Offset */
#define TWI_RNCR_REG_OFST              _UINT32_(0x114)     /* (TWI_RNCR) Receive Next Counter Register Offset */
#define TWI_TNPR_REG_OFST              _UINT32_(0x118)     /* (TWI_TNPR) Transmit Next Pointer Register Offset */
#define TWI_TNCR_REG_OFST              _UINT32_(0x11C)     /* (TWI_TNCR) Transmit Next Counter Register Offset */
#define TWI_PTCR_REG_OFST              _UINT32_(0x120)     /* (TWI_PTCR) Transfer Control Register Offset */
#define TWI_PTSR_REG_OFST              _UINT32_(0x124)     /* (TWI_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TWI register API structure */
typedef struct
{
  __O   uint32_t                       TWI_CR;             /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       TWI_MMR;            /**< Offset: 0x04 (R/W  32) Master Mode Register */
  __IO  uint32_t                       TWI_SMR;            /**< Offset: 0x08 (R/W  32) Slave Mode Register */
  __IO  uint32_t                       TWI_IADR;           /**< Offset: 0x0C (R/W  32) Internal Address Register */
  __IO  uint32_t                       TWI_CWGR;           /**< Offset: 0x10 (R/W  32) Clock Waveform Generator Register */
  __I   uint8_t                        Reserved1[0x0C];
  __I   uint32_t                       TWI_SR;             /**< Offset: 0x20 (R/   32) Status Register */
  __O   uint32_t                       TWI_IER;            /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       TWI_IDR;            /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       TWI_IMR;            /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       TWI_RHR;            /**< Offset: 0x30 (R/   32) Receive Holding Register */
  __O   uint32_t                       TWI_THR;            /**< Offset: 0x34 ( /W  32) Transmit Holding Register */
  __I   uint8_t                        Reserved2[0xAC];
  __IO  uint32_t                       TWI_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       TWI_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       TWI_RPR;            /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       TWI_RCR;            /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       TWI_TPR;            /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       TWI_TCR;            /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       TWI_RNPR;           /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       TWI_RNCR;           /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       TWI_TNPR;           /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       TWI_TNCR;           /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       TWI_PTCR;           /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       TWI_PTSR;           /**< Offset: 0x124 (R/   32) Transfer Status Register */
} twi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG54_TWI_COMPONENT_H_ */
