#include<config.h>
CPS_START_NAMESPACE
//--------------------------------------------------------------------
//  CVS keywords
//
//  $Author: zs $
//  $Date: 2004/08/18 11:57:42 $
//  $Header: /space/cvs/cps/cps++/src/comms/qcdoc/cbuf/cbuf.C,v 1.4 2004/08/18 11:57:42 zs Exp $
//  $Id: cbuf.C,v 1.4 2004/08/18 11:57:42 zs Exp $
//  $Name: v5_0_16_hantao_io_test_v7 $
//  $Locker:  $
//  $Revision: 1.4 $
//  $Source: /space/cvs/cps/cps++/src/comms/qcdoc/cbuf/cbuf.C,v $
//  $State: Exp $
//
//--------------------------------------------------------------------
//--------------------------------------------------------------------------
//
// 10/31/97
//
// cbuf:
//
// Routines that control the circular buffer.
//
//--------------------------------------------------------------------------

CPS_END_NAMESPACE
#include<comms/cbuf.h>
CPS_START_NAMESPACE


//--------------------------------------------------------------------------
// saveCbufCntrlReg:
// Saves the contents of the circular buffer control registers
// in the cbuf_cntrl_reg static array
//--------------------------------------------------------------------------
void saveCbufCntrlReg(void) {}


//--------------------------------------------------------------------------
// restoreCbufCntrlReg:
// Restores the contents of the circular buffer control registers
// from the cbuf_cntrl_reg static array
//--------------------------------------------------------------------------
void restoreCbufCntrlReg(void){}


//------------------------------------------------------------------
// setCbufCntrlReg(reg_no, value):
// Sets the contents of the circular buffer control register 
// reg_no to value.
//------------------------------------------------------------------
void setCbufCntrlReg(int reg_no, unsigned int value){}


//------------------------------------------------------------------
// printCbufCntrlReg:
// Prints the contents of the circular buffer control registers
// under the control of VRB.Flow
//------------------------------------------------------------------
void printCbufCntrlReg(void){}
CPS_END_NAMESPACE
