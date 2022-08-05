#pragma once
/******************************************************************************/
/* File   : ServiceFiM.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceFiM.hpp"
#include "CfgServiceFiM.hpp"
#include "ServiceFiM_core.hpp"
#include "infServiceFiM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceFiM:
      INTERFACES_EXMCALPORTED_SERVICEFIM
      public abstract_module
   ,  public class_ServiceFiM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceFiM_Type* lptrConst = (ConstServiceFiM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEFIM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEFIM_CONST,       SERVICEFIM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEFIM_CONFIG_DATA, SERVICEFIM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEFIM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEFIM_CODE) MainFunction   (void);
      SERVICEFIM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceFiM, SERVICEFIM_VAR) ServiceFiM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

