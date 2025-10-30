//
//  mtl_engine.hpp
//  learn-metal
//
//  Created by OnionLord on 2025-10-28.
//

#ifndef mtl_engine_h
#define mtl_engine_h

#define GLFW_INCLUDE_NONE
#import <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_COCOA
#import <GLFW/glfw3native.h>

#include <Metal/Metal.hpp>
#include <Metal/Metal.h>
#include <QuartzCore/CAMetalLayer.hpp>
#include <QuartzCore/CAMetalLayer.h>
#include <QuartzCore/QuartzCore.hpp>

class MTLEngine
{
public:
    void init();
    void run();
    void cleanup();
private:
    void initDevice();
    void initWindow();
    
    MTL::Device *metalDevice;
    GLFWwindow *glfwWindow;
    NSWindow *metalWindow;
    CAMetalLayer *metalLayer;
};


#endif /* mtl_engine_h */
