
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_VisibilityHelper__
#define __org_omg_CORBA_VisibilityHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
          class VisibilityHelper;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::VisibilityHelper : public ::java::lang::Object
{

public:
  VisibilityHelper();
  static void insert(::org::omg::CORBA::Any *, jshort);
  static jshort extract(::org::omg::CORBA::Any *);
  static ::org::omg::CORBA::TypeCode * type();
  static ::java::lang::String * id();
  static jshort read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, jshort);
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_VisibilityHelper__
