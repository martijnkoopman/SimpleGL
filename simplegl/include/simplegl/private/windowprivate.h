#ifndef SIMPLEGL_WINDOWPRIVATE_H
#define SIMPLEGL_WINDOWPRIVATE_H

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace simplegl {

class WindowPrivate
{
public:
  WindowPrivate();
  ~WindowPrivate();

  GLFWwindow *glfwWindow() const;

  bool initialized() const;
  void show();

private:
  GLFWwindow *m_glfwWindow;
};

} // namespace simplegl

#endif // SIMPLEGL_WINDOWPRIVATE_H
