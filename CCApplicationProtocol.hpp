//
//  CCApplicationProtocol.hpp
//  CCApplicationProtocol
//
//  Created by jack on 16/10/12.
//  Copyright © 2016年 jack. All rights reserved.
//

#ifndef CCApplicationProtocol_hpp
#define CCApplicationProtocol_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
class CCApplicationProtocol
{
public:
    CCApplicationProtocol(){}
    virtual ~CCApplicationProtocol(){}
    virtual bool applicationDidFinishLanuching()=0;
};


#endif /* CCApplicationProtocol_hpp */
