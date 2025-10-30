//
//  main.cpp
//  learn-metal
//
//  Created by OnionLord on 2025-10-28.
//

#include <iostream>
#include <Metal/Metal.hpp>
#include "mtl_engine.hpp"

int main()
{
    MTLEngine engine;
    engine.init();
    engine.run();
    engine.cleanup();
    
    return 0;
}
