/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2000, 2016
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 *******************************************************************************/

#ifndef TR_OPTIMIZATIONMANAGER_INCL
#define TR_OPTIMIZATIONMANAGER_INCL

#include <stddef.h>                              // for NULL
#include "optimizer/OMROptimizationManager.hpp"
#include "optimizer/Optimizations.hpp"           // for Optimizations


namespace TR { class Optimizer; }
struct OptimizationStrategy;

namespace TR
{

class OMR_EXTENSIBLE OptimizationManager : public OMR::OptimizationManagerConnector
   {
   public:

   OptimizationManager(TR::Optimizer *o, OptimizationFactory factory, OMR::Optimizations optNum, const char *optDetailString, const OptimizationStrategy *groupOfOpts = NULL) :
      OMR::OptimizationManagerConnector(o, factory, optNum, optDetailString, groupOfOpts) {}
   };

}

#endif
