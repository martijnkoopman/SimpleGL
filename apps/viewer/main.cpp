/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):

  Copyright (c) Martijn Koopman 2021
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#include <simplegl/application.h>
#include <simplegl/window.h>

#include <iostream>

int main()
{
  simplegl::Application app;
  if (!app.initialized())
  {
    std::cerr << "Failed to initialize app." << std::endl;
  }

  simplegl::Window window;
  if (!window.initialized())
  {
    std::cerr << "Failed to initialize window." << std::endl;
  }

  window.show();

  return 0;
}
