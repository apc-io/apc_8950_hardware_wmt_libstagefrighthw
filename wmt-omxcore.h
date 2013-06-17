/*
* Copyright (c) 2011-2012 WonderMedia Technologies, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License"); you may not 
* use this file except in compliance with the License. You may obtain a copy 
* of the License at http://www.apache.org/licenses/LICENSE-2.0.
*
* Unless required by applicable law or agreed to in writing, software distributed 
* under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
* CONDITIONS OF ANY KIND, either express or implied. See the License for the 
* specific language governing permissions and limitations under the License.
*/

#ifndef WMT_OMX_CORE_H
#define WMT_OMX_CORE_H

#define MAX_COMPONENT_NAME 10
#define MAX_COMPONENT 10
#define MAX_ROLES 10

#define WMT_LOGE(fmt,arg...) LOGE("[%s][%d]"fmt,__FUNCTION__,__LINE__,##arg);

typedef struct _WMT_core {
    OMX_STRING 	name;
	OMX_STRING 	lib_name;
	OMX_PTR	   	lib_so;
    OMX_U16 	RoleCount;
    OMX_STRING 	RoleArray[MAX_ROLES];
    void*		handle;
}WMT_core;

#endif

