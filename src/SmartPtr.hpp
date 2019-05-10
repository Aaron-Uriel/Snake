#ifndef SMARTPTR
#define SMARTPTR

template <class GenType>
class SmartPtr {
    private:
    GenType *m_Ptr;
    public:
    SmartPtr(GenType *Ptr = nullptr);
};

#endif