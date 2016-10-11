//
//  AppDelegate.hpp
//  CCApplicationProtocol
//
//  Created by jack on 16/10/12.
//  Copyright © 2016年 jack. All rights reserved.
//

#ifndef AppDelegate_hpp
#define AppDelegate_hpp

#include <stdio.h>
#include "iostream"
#include"CCApplicationProtocol.hpp"
class AppDelegate:private CCApplicationProtocol
{
public:
    AppDelegate();
    virtual ~AppDelegate();
    bool applicationDidFinishLaunching();
};


#endif /* AppDelegate_hpp */
