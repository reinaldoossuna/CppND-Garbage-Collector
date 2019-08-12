// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned refcount; // current reference count
    T *memPtr;         // pointer to allocated memory
    /* isArray is true if memPtr points
to an allocated array. It is false
otherwise. */
    bool isArray = false; // true if pointing to array
    /* If memPtr is pointing to an allocated
array, then arraySize contains its size */
    unsigned arraySize = 0; // size of array
    // Here, mPtr points to the allocated memory.
    // If this is an array, then size specifies
    // the size of the array.

    PtrDetails(T *ptr, unsigned size=0)
    {
      // TODO: Implement PtrDetails
      /*
        Declare constructor for PtrDetails which will have two parameters
        First constructor paremeter is going to be pointer and second which is not required, is going to be size of eventual array in memory
        We need to construct logic of the constructor which will set isArray attribute if size is larger then 0
      */
      if(size > 0){
        isArray = true;
        arraySize = size;
      }
      memPtr = ptr;
      refcount = 1;
    }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==
    return ob1.memPtr == ob2.memPtr;
}
