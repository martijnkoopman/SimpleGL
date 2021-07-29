#include "simplegl/private/windowprivate.h"

namespace simplegl {

WindowPrivate::WindowPrivate()
    : m_glfwWindow(glfwCreateWindow(640, 480, "Simple example", NULL, NULL)) {
  glfwMakeContextCurrent(m_glfwWindow);
  glfwSwapInterval(1);
}

WindowPrivate::~WindowPrivate() {
  if (m_glfwWindow != nullptr) {
    glfwDestroyWindow(m_glfwWindow);
  }
}

GLFWwindow *WindowPrivate::glfwWindow() const { return m_glfwWindow; }

bool WindowPrivate::initialized() const { return m_glfwWindow != nullptr; }

void WindowPrivate::show() {
  while (!glfwWindowShouldClose(m_glfwWindow)) {
    glfwSwapBuffers(m_glfwWindow);
    glfwPollEvents();
  }
}

} // namespace simplegl
