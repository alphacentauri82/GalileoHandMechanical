/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PIT.h
**     Project     : Galileo_Teensy
**     Processor   : MK20DX256VLL7
**     Component   : Init_PIT
**     Version     : Component 01.005, Driver 01.05, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-02-17, 15:11, # CodeGen: 19
**     Abstract    :
**          This file implements the PIT (PIT) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : PIT
**          Device                                         : PIT
**          Setttings                                      : 
**            Clock gate                                   : Enabled
**            Clock settings                               : 
**              Base clock frequency                       : 36 MHz
**            Freeze in debug mode                         : no
**          Channels                                       : 
**            Channel 0                                    : 
**              Timer 0                                    : Enabled
**              Timer 0 load value                         : 18000000
**              Timer 0 Period                             : 500.000 ms
**              Interrupt                                  : 
**                Interrupt                                : INT_PIT0
**                Interrupt request                        : Enabled
**                Interrupt priority                       : 0 (Highest)
**                ISR Name                                 : PIT0_IRQHandler
**                Timer interrupt                          : Enabled
**            Channel 1                                    : 
**              Timer 1                                    : Disabled
**              Timer 1 load value                         : 0
**              Timer 1 Period                             : 0.028 us
**              Interrupt                                  : 
**                Interrupt                                : INT_PIT1
**                Interrupt request                        : Disabled
**                Interrupt priority                       : 0 (Highest)
**                ISR Name                                 : 
**                Timer interrupt                          : Disabled
**            Channel 2                                    : 
**              Timer 2                                    : Disabled
**              Timer 2 load value                         : 0
**              Timer 2 Period                             : 0.028 us
**              Interrupt                                  : 
**                Interrupt                                : INT_PIT2
**                Interrupt request                        : Disabled
**                Interrupt priority                       : 0 (Highest)
**                ISR Name                                 : 
**                Timer interrupt                          : Disabled
**            Channel 3                                    : 
**              Timer 3                                    : Disabled
**              Timer 3 load value                         : 0
**              Timer 3 Period                             : 0.028 us
**              Interrupt                                  : 
**                Interrupt                                : INT_PIT3
**                Interrupt request                        : Disabled
**                Interrupt priority                       : 0 (Highest)
**                ISR Name                                 : 
**                Timer interrupt                          : Disabled
**          Initialization                                 : 
**            Module                                       : Enabled
**            Call Init method                             : yes
**     Contents    :
**         Init - void PIT_Init(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PIT.h
** @version 01.05
** @brief
**          This file implements the PIT (PIT) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup PIT_module PIT module documentation
**  @{
*/         

#ifndef PIT_H_
#define PIT_H_

/* MODULE PIT. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define PIT_DEVICE PIT_BASE_PTR


/*
** ===================================================================
**     Method      :  PIT_Init (component Init_PIT)
**     Description :
**         This method initializes registers of the PIT module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void PIT_Init(void);
/*
** ===================================================================
** The interrupt service routine must be implemented by user in one
** of the user modules (see PIT.c file for more information).
** ===================================================================
*/
PE_ISR(PIT0_IRQHandler);


/* END PIT. */
#endif /* #ifndef __PIT_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/