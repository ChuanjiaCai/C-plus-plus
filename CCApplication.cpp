//
//  CCApplication.cpp
//  CCApplicationProtocol
//
//  Created by jack on 16/10/12.
//  Copyright © 2016年 jack. All rights reserved.
//

#include "CCApplication.hpp"
#include"stddef.h"
CCApplication *CCApplication::sm_pSharedApplication=NULL;
CCApplication::CCApplication()
{
    sm_pSharedApplication=this;
}
CCApplication::~CCApplication()
{}
CCApplication *CCApplication::sharedApplication()
{
    if(sm_pSharedApplication!=NULL)
        return sm_pSharedApplication;
    return 0;
    
}
int CCApplication::run()
{
    applicationDidFinishLanuching();
    return 0;
}
