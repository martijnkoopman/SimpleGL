#ifndef SIMPLEGL_APPLICATION_H
#define SIMPLEGL_APPLICATION_H

namespace simplegl {

class ApplicationPrivate;

class Application {
public:
  Application();

  bool initialized() const;

private:
  ApplicationPrivate *m_pimpl;
};

} // namespace simplegl

#endif // SIMPLEGL_APPLICATION_H
