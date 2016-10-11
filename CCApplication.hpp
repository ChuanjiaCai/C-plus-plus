//
//  CCApplication.hpp
//  CCApplicationProtocol
//
//  Created by jack on 16/10/12.
//  Copyright © 2016年 jack. All rights reserved.
//

#ifndef CCApplication_hpp
#define CCApplication_hpp

#include <stdio.h>
#include"CCApplicationProtocol.hpp"
class CCApplication:public CCApplicationProtocol
{
public:
    CCApplication();
    virtual ~CCApplication();
    int run();
    static CCApplication *sharedApplication();
    static CCApplication *sm_pSharedApplication;
};


#endif /* CCApplication_hpp */
