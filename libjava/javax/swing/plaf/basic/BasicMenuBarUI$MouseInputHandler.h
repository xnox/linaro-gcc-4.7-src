
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicMenuBarUI$MouseInputHandler__
#define __javax_swing_plaf_basic_BasicMenuBarUI$MouseInputHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicMenuBarUI;
            class BasicMenuBarUI$MouseInputHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicMenuBarUI$MouseInputHandler : public ::java::lang::Object
{

  BasicMenuBarUI$MouseInputHandler(::javax::swing::plaf::basic::BasicMenuBarUI *);
public:
  virtual void mouseClicked(::java::awt::event::MouseEvent *);
  virtual void mousePressed(::java::awt::event::MouseEvent *);
  virtual void mouseReleased(::java::awt::event::MouseEvent *);
  virtual void mouseExited(::java::awt::event::MouseEvent *);
  virtual void mouseDragged(::java::awt::event::MouseEvent *);
  virtual void mouseMoved(::java::awt::event::MouseEvent *);
  virtual void mouseEntered(::java::awt::event::MouseEvent *);
public: // actually package-private
  BasicMenuBarUI$MouseInputHandler(::javax::swing::plaf::basic::BasicMenuBarUI *, ::javax::swing::plaf::basic::BasicMenuBarUI$MouseInputHandler *);
  ::javax::swing::plaf::basic::BasicMenuBarUI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicMenuBarUI$MouseInputHandler__
