#include <simplegl/application.h>
#include <simplegl/window.h>

#include <iostream>

int main()
{
  simplegl::Application app;
  if (!app.initialized()) {
    std::cerr << "Failed to initialize app." << std::endl;
  }

  simplegl::Window window;
  if (!window.initialized()) {
    std::cerr << "Failed to initialize window." << std::endl;
  }

  window.show();

  return 0;
}
