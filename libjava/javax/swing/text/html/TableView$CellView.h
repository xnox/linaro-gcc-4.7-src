
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_TableView$CellView__
#define __javax_swing_text_html_TableView$CellView__

#pragma interface

#include <javax/swing/text/html/BlockView.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class SizeRequirements;
      namespace text
      {
          class Element;
        namespace html
        {
            class TableView;
            class TableView$CellView;
        }
      }
    }
  }
}

class javax::swing::text::html::TableView$CellView : public ::javax::swing::text::html::BlockView
{

public: // actually package-private
  TableView$CellView(::javax::swing::text::html::TableView *, ::javax::swing::text::Element *);
public: // actually protected
  virtual ::javax::swing::SizeRequirements * calculateMajorAxisRequirements(jint, ::javax::swing::SizeRequirements *);
  virtual void setPropertiesFromAttributes();
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::javax::swing::text::html::BlockView)))) colSpan;
  jint rowSpan;
  ::javax::swing::text::html::TableView * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_TableView$CellView__