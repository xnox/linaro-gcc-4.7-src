
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkVolatileImage__
#define __gnu_java_awt_peer_gtk_GtkVolatileImage__

#pragma interface

#include <java/awt/image/VolatileImage.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkComponentPeer;
              class GtkVolatileImage;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Graphics;
        class Graphics2D;
        class GraphicsConfiguration;
        class ImageCapabilities;
      namespace image
      {
          class BufferedImage;
          class ColorModel;
          class ImageObserver;
          class SampleModel;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GtkVolatileImage : public ::java::awt::image::VolatileImage
{

public: // actually package-private
  virtual jlong init(::gnu::java::awt::peer::gtk::GtkComponentPeer *, jint, jint);
  virtual void destroy(jlong);
  virtual JArray< jint > * nativeGetPixels(jlong);
public:
  virtual JArray< jint > * getPixels();
public: // actually package-private
  virtual void nativeCopyArea(jlong, jint, jint, jint, jint, jint, jint);
public:
  virtual void copyArea(jint, jint, jint, jint, jint, jint);
public: // actually package-private
  virtual void nativeDrawVolatile(jlong, jlong, jint, jint, jint, jint);
public:
  virtual void drawVolatile(jlong, jint, jint, jint, jint);
  GtkVolatileImage(::gnu::java::awt::peer::gtk::GtkComponentPeer *, jint, jint, ::java::awt::ImageCapabilities *);
  GtkVolatileImage(jint, jint, ::java::awt::ImageCapabilities *);
  GtkVolatileImage(jint, jint);
  virtual void finalize();
  virtual void dispose();
  virtual ::java::awt::image::BufferedImage * getSnapshot();
  virtual ::java::awt::Graphics * getGraphics();
  virtual ::java::awt::Graphics2D * createGraphics();
  virtual jint validate(::java::awt::GraphicsConfiguration *);
  virtual jboolean contentsLost();
  virtual ::java::awt::ImageCapabilities * getCapabilities();
  virtual jint getWidth();
  virtual jint getHeight();
  virtual jint getWidth(::java::awt::image::ImageObserver *);
  virtual jint getHeight(::java::awt::image::ImageObserver *);
  virtual ::java::lang::Object * getProperty(::java::lang::String *, ::java::awt::image::ImageObserver *);
public: // actually protected
  static ::java::awt::image::SampleModel * createGdkSampleModel(jint, jint);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::awt::image::VolatileImage)))) width;
  jint height;
private:
  ::java::awt::ImageCapabilities * caps;
public: // actually package-private
  ::gnu::java::awt::peer::gtk::GtkComponentPeer * component;
  static ::java::awt::image::ColorModel * gdkColorModel;
  jlong nativePointer;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkVolatileImage__
