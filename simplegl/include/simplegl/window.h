#ifndef SIMPLEGL_WINDOW_H
#define SIMPLEGL_WINDOW_H

namespace simplegl {

class WindowPrivate;

class Window
{
public:
  Window();

  bool initialized() const;

  void show();

private:
  WindowPrivate *m_pimpl;
};

} // namespace simplegl

#endif // SIMPLEGL_WINDOW_H
