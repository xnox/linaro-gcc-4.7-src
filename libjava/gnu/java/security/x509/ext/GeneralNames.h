
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_x509_ext_GeneralNames__
#define __gnu_java_security_x509_ext_GeneralNames__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace x509
        {
          namespace ext
          {
              class GeneralNames;
          }
        }
      }
    }
  }
}

class gnu::java::security::x509::ext::GeneralNames : public ::java::lang::Object
{

public:
  GeneralNames(JArray< jbyte > *);
  virtual ::java::util::List * getNames();
  virtual ::java::lang::String * toString();
private:
  ::java::util::List * __attribute__((aligned(__alignof__( ::java::lang::Object)))) names;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_x509_ext_GeneralNames__
