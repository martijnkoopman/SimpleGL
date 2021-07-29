/*=========================================================================

  Program:        Simple Graphics Library
  Author:         Martijn Koopman
  Co-author(s):
  License:        GNU General Public License Version 3

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

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
