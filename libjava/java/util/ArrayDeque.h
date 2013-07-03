
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_ArrayDeque__
#define __java_util_ArrayDeque__

#pragma interface

#include <java/util/AbstractCollection.h>
#include <gcj/array.h>


class java::util::ArrayDeque : public ::java::util::AbstractCollection
{

  void allocateElements(jint);
  void doubleCapacity();
  JArray< ::java::lang::Object * > * copyElements(JArray< ::java::lang::Object * > *);
public:
  ArrayDeque();
  ArrayDeque(jint);
  ArrayDeque(::java::util::Collection *);
  virtual void addFirst(::java::lang::Object *);
  virtual void addLast(::java::lang::Object *);
  virtual jboolean offerFirst(::java::lang::Object *);
  virtual jboolean offerLast(::java::lang::Object *);
  virtual ::java::lang::Object * removeFirst();
  virtual ::java::lang::Object * removeLast();
  virtual ::java::lang::Object * pollFirst();
  virtual ::java::lang::Object * pollLast();
  virtual ::java::lang::Object * getFirst();
  virtual ::java::lang::Object * getLast();
  virtual ::java::lang::Object * peekFirst();
  virtual ::java::lang::Object * peekLast();
  virtual jboolean removeFirstOccurrence(::java::lang::Object *);
  virtual jboolean removeLastOccurrence(::java::lang::Object *);
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean offer(::java::lang::Object *);
  virtual ::java::lang::Object * remove();
  virtual ::java::lang::Object * poll();
  virtual ::java::lang::Object * element();
  virtual ::java::lang::Object * peek();
  virtual void push(::java::lang::Object *);
  virtual ::java::lang::Object * pop();
private:
  void checkInvariants();
  jboolean delete$(jint);
public:
  virtual jint size();
  virtual jboolean isEmpty();
  virtual ::java::util::Iterator * iterator();
  virtual ::java::util::Iterator * descendingIterator();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
  virtual void clear();
  virtual JArray< ::java::lang::Object * > * toArray();
  virtual JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  virtual ::java::util::ArrayDeque * ArrayDeque$clone();
private:
  void writeObject(::java::io::ObjectOutputStream *);
  void readObject(::java::io::ObjectInputStream *);
public:
  virtual ::java::lang::Object * clone();
public: // actually package-private
  static jint access$1(::java::util::ArrayDeque *);
  static jint access$2(::java::util::ArrayDeque *);
  static JArray< ::java::lang::Object * > * access$3(::java::util::ArrayDeque *);
  static jboolean access$4(::java::util::ArrayDeque *, jint);
private:
  JArray< ::java::lang::Object * > * __attribute__((aligned(__alignof__( ::java::util::AbstractCollection)))) elements;
  jint head;
  jint tail;
  static const jint MIN_INITIAL_CAPACITY = 8;
  static const jlong serialVersionUID = 2340985798034038923LL;
public: // actually package-private
  static jboolean $assertionsDisabled;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_ArrayDeque__
