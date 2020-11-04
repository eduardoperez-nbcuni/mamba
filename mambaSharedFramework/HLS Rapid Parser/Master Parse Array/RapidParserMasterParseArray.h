//
//  RapidParserMasterParseArray.h
//  mamba
//
//  Created by David Coufal on 1/20/17.
//  Copyright © 2017 Comcast Cable Communications Management, LLC
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#ifndef RapidParserMasterParseArray_h
#define RapidParserMasterParseArray_h

#if __has_include("RapidParserState.h")
#include "RapidParserState.h"
#include "RapidParserLineState.h"
#include "RapidParserStateHandlers.h"
#else
#include "../Library/RapidParserState.h"
#include "../Library/RapidParserLineState.h"
#include "../Library/RapidParserStateHandlers.h"
#endif

extern const parserStateHandler masterParseArray[numberOfScanningParseStates][256];

#endif /* RapidParserMasterParseArray_h */
