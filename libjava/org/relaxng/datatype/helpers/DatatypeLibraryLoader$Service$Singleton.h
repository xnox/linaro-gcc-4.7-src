
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_relaxng_datatype_helpers_DatatypeLibraryLoader$Service$Singleton__
#define __org_relaxng_datatype_helpers_DatatypeLibraryLoader$Service$Singleton__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
        namespace helpers
        {
            class DatatypeLibraryLoader$Service$Singleton;
        }
      }
    }
  }
}

class org::relaxng::datatype::helpers::DatatypeLibraryLoader$Service$Singleton : public ::java::lang::Object
{

  DatatypeLibraryLoader$Service$Singleton(::java::lang::Object *);
public:
  virtual jboolean hasMoreElements();
  virtual ::java::lang::Object * nextElement();
public: // actually package-private
  DatatypeLibraryLoader$Service$Singleton(::java::lang::Object *, ::org::relaxng::datatype::helpers::DatatypeLibraryLoader$Service$Singleton *);
private:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) obj;
public:
  static ::java::lang::Class class$;
};

#endif // __org_relaxng_datatype_helpers_DatatypeLibraryLoader$Service$Singleton__
