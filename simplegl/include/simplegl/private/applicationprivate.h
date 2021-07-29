#ifndef SIMPLEGL_APPLICATIONPRIVATE_H
#define SIMPLEGL_APPLICATIONPRIVATE_H

namespace simplegl {

class ApplicationPrivate
{
public:
  ApplicationPrivate();
  ~ApplicationPrivate();

  bool initialized() const;

private:
  bool m_initialized;
};

} // namespace simplegl

#endif // SIMPLEGL_APPLICATIONPRIVATE_H
