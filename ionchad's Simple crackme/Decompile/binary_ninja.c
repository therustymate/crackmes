int64_t sub_140001000()
{
    /* tailcall */
    return atexit(sub_140003108);
}

int64_t sub_140001010()
{
    if (!IsDebuggerPresent())
        return CloseHandle(0xdeadc0de);
    
    MessageBoxA(nullptr, "Debugger Detected!", &data_1400043e0, MB_OK);
    ExitProcess(0);
    /* no return */
}

struct std::exception::VTable** std::_Parallelism_resources_exhausted::_Parallelism_resources_exhausted(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    return arg1;
}

void* const sub_1400010a0(void* arg1)
{
    void* result = *(arg1 + 8);
    
    if (result)
        return result;
    
    return "Unknown exception";
}

struct std::exception::VTable** std::exception::`scalar deleting destructor'(struct std::exception::VTable** arg1, char arg2)
{
    *arg1 = &std::exception::`vftable';
    __std_exception_destroy(&arg1[1]);
    
    if (arg2 & 1)
        sub_14000203c(arg1);
    
    return arg1;
}

int64_t std::exception::~exception(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    /* tailcall */
    return __std_exception_destroy(&arg1[1]);
}

struct std::bad_alloc::std::bad_array_new_length::VTable** sub_140001130(struct std::bad_alloc::std::bad_array_new_length::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad array new length";
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
    return arg1;
}

void stdext::threads::_Throw_lock_error() __noreturn
{
    struct std::bad_alloc::std::bad_array_new_length::VTable* exceptionObject;
    sub_140001130(&exceptionObject);
    _CxxThrowException(&exceptionObject, &data_140005150);
    /* no return */
}

struct std::exception::VTable** sub_140001180(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
    return arg1;
}

struct std::exception::VTable** sub_1400011c0(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

void sub_140001200() __noreturn
{
    std::_Xlength_error("string too long");
    /* no return */
}

int64_t* sub_140001220(int128_t* arg1, int64_t* arg2)
{
    void var_48;
    int64_t rax_1 = __security_cookie ^ &var_48;
    int64_t* result = arg1;
    int128_t* var_20 = arg1;
    int64_t* var_20_1 = arg2;
    sub_140001350(arg1, arg2);
    int64_t i = 0;
    
    if (result[2] > 0)
    {
        do
        {
            int64_t* result_1 = result;
            
            if (result[3] > 0xf)
                result_1 = *result;
            
            *(result_1 + i) ^= i + 0x21 + (i << 2);
            i += 1;
        } while (i < result[2]);
    }
    
    int64_t rdx = arg2[3];
    
    if (rdx > 0xf)
    {
        void* rcx_1 = *arg2;
        
        if (rdx + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx_1 - 8);
            
            if (rcx_1 - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
            
            rcx_1 = r8_1;
        }
        
        sub_14000203c(rcx_1);
    }
    
    arg2[2] = 0;
    arg2[3] = 0xf;
    *arg2 = 0;
    __security_check_cookie(rax_1 ^ &var_48);
    return result;
}

void sub_1400012f0(int64_t* arg1)
{
    int64_t rdx = arg1[3];
    
    if (rdx > 0xf)
    {
        void* rcx = *arg1;
        
        if (rdx + 1 >= 0x1000)
        {
            void* r8_1 = *(rcx - 8);
            
            if (rcx - r8_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
            
            rcx = r8_1;
        }
        
        sub_14000203c(rcx);
    }
    
    arg1[2] = 0;
    arg1[3] = 0xf;
    *arg1 = 0;
}

int128_t* sub_140001350(int128_t* arg1, int64_t* arg2)
{
    void* rax = nullptr;
    __builtin_memset(arg1, 0, 0x20);
    int64_t* rbp = arg2;
    
    if (arg2[3] > 0xf)
        rbp = *arg2;
    
    int64_t rsi = arg2[2];
    int64_t rdi = 0x7fffffffffffffff;
    
    if (rsi > 0x7fffffffffffffff)
    {
        sub_140001200();
        /* no return */
    }
    
    if (rsi <= 0xf)
    {
        arg1[1] = rsi;
        *(arg1 + 0x18) = 0xf;
        *arg1 = *rbp;
        return arg1;
    }
    
    int64_t rcx_1 = rsi | 0xf;
    uint64_t rax_2;
    
    if (rcx_1 <= 0x7fffffffffffffff)
    {
        rdi = rcx_1;
        
        if (rcx_1 < 0x16)
            rdi = 0x16;
        
        if (rdi != -1)
        {
            if (rdi + 1 >= 0x1000)
            {
                rax_2 = rdi + 0x28;
                
                if (rax_2 > rdi + 1)
                    goto label_1400013d9;
                
                stdext::threads::_Throw_lock_error();
                /* no return */
            }
            
            rax = operator new(rdi + 1);
        }
    }
    else
    {
        rax_2 = -0x7fffffffffffffd9;
        label_1400013d9:
        int64_t rax_3 = operator new(rax_2);
        
        if (!rax_3)
        {
            _invalid_parameter_noinfo_noreturn();
            /* no return */
        }
        
        rax = (rax_3 + 0x27) & 0xffffffffffffffe0;
        *(rax - 8) = rax_3;
    }
    *arg1 = rax;
    arg1[1] = rsi;
    *(arg1 + 0x18) = rdi;
    memcpy(rax, rbp, rsi + 1);
    return arg1;
}

struct std::exception::std::bad_cast::VTable** sub_140001470(struct std::exception::std::bad_cast::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad cast";
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

void __scrt_throw_std_bad_alloc() __noreturn
{
    struct std::exception::std::bad_cast::VTable* exceptionObject;
    sub_140001470(&exceptionObject);
    _CxxThrowException(&exceptionObject, &data_140005188);
    /* no return */
}

struct std::exception::VTable** sub_1400014c0(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

void sub_140001500(void* arg1)
{
    int64_t* rcx = *(arg1 + 8);
    
    if (rcx)
    {
        int64_t* rax = (*(*rcx + 0x10))(rcx);
        
        if (rax)
            /* jump -> **rax */
    }
}

int64_t main()
{
    void var_108;
    int64_t rax_1 = __security_cookie ^ &var_108;
    sub_140001010();
    int128_t var_78 = {0};
    int64_t var_68 = 0;
    int64_t var_60 = 0xf;
    var_78 = 0;
    sub_140001a00(std::cout);
    sub_140001bc0(std::cin, &var_78);
    int128_t s;
    __builtin_memset(&s, 0, 0x20);
    int128_t* r14 = &var_78;
    int128_t* rsi = var_78;
    
    if (var_60 > 0xf)
        r14 = rsi;
    
    int64_t rbx = 0x7fffffffffffffff;
    
    if (var_68 > 0x7fffffffffffffff)
    {
        sub_140001200();
        /* no return */
    }
    
    int64_t var_88;
    int64_t var_80;
    
    if (var_68 > 0xf)
    {
        int64_t rax_3 = var_68 | 0xf;
        void* const rax_7;
        uint64_t rax_4;
        
        if (rax_3 <= 0x7fffffffffffffff)
        {
            rbx = rax_3;
            
            if (rax_3 < 0x16)
                rbx = 0x16;
            
            if (rbx != -1)
            {
                if (rbx + 1 >= 0x1000)
                {
                    rax_4 = rbx + 0x28;
                    
                    if (rax_4 > rbx + 1)
                        goto label_140001623;
                    
                    stdext::threads::_Throw_lock_error();
                    /* no return */
                }
                
                rax_7 = operator new(rbx + 1);
            }
            else
                rax_7 = nullptr;
        }
        else
        {
            rax_4 = -0x7fffffffffffffd9;
            label_140001623:
            int64_t rax_5 = operator new(rax_4);
            
            if (!rax_5)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
            
            rax_7 = (rax_5 + 0x27) & 0xffffffffffffffe0;
            *(rax_7 - 8) = rax_5;
        }
        s = rax_7;
        var_88 = var_68;
        var_80 = rbx;
        memcpy(rax_7, r14, var_68 + 1);
    }
    else
    {
        var_88 = var_68;
        var_80 = 0xf;
        s = *r14;
    }
    
    char var_58;
    sub_140001220(&var_58, &s);
    void var_b8;
    int128_t* buffer1_1 = sub_140001350(&var_b8, &var_58);
    int128_t* buffer1_2 = buffer1_1;
    int128_t var_e0 = {0};
    int64_t var_d0 = 4;
    int64_t var_c8 = 0xf;
    __builtin_strncpy(&var_e0, "KIWZ", 5);
    sub_140001220(&s, &var_e0);
    int128_t* buffer2 = &s;
    int128_t* buffer2_1 = s;
    
    if (var_80 > 0xf)
        buffer2 = buffer2_1;
    
    int128_t* buffer1 = buffer1_1;
    
    if (*(buffer1_1 + 0x18) > 0xf)
        buffer1 = *buffer1_1;
    
    uint64_t count = buffer1_1[1];
    
    if (count != var_88)
        r14 = 0;
    else if (count)
        r14 = !memcmp(buffer1, buffer2, count);
    else
        r14 = 1;
    
    if (var_80 > 0xf)
    {
        int128_t* buffer2_2 = buffer2_1;
        
        if (var_80 + 1 >= 0x1000)
        {
            buffer2_1 = *(buffer2_1 - 8);
            
            if (buffer2_2 - buffer2_1 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
        
        sub_14000203c(buffer2_1);
    }
    
    int64_t var_88_1 = 0;
    int64_t var_80_1 = 0xf;
    s = 0;
    int64_t rdx_6 = *(buffer1_1 + 0x18);
    
    if (rdx_6 > 0xf)
    {
        void* rcx_10 = *buffer1_1;
        
        if (rdx_6 + 1 >= 0x1000)
        {
            void* r8_2 = *(rcx_10 - 8);
            
            if (rcx_10 - r8_2 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
            
            rcx_10 = r8_2;
        }
        
        sub_14000203c(rcx_10);
    }
    
    buffer1_1[1] = 0;
    *(buffer1_1 + 0x18) = 0xf;
    *buffer1_1 = 0;
    PSTR lpText;
    char const* const lpCaption;
    
    if (!r14)
    {
        lpCaption = "Error";
        lpText = "Invalid License";
    }
    else
    {
        lpCaption = "Success";
        lpText = "License Accepted!";
    }
    
    MessageBoxA(nullptr, lpText, lpCaption, MB_OK);
    int64_t var_40;
    
    if (var_40 > 0xf)
    {
        void* rcx_12 = var_58;
        void* rax_12 = rcx_12;
        
        if (var_40 + 1 >= 0x1000)
        {
            rcx_12 = *(rcx_12 - 8);
            
            if (rax_12 - rcx_12 - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
        
        sub_14000203c(rcx_12);
    }
    
    int64_t var_48 = 0;
    int64_t var_40_1 = 0xf;
    var_58 = 0;
    
    if (var_60 > 0xf)
    {
        int128_t* rax_15 = rsi;
        
        if (var_60 + 1 >= 0x1000)
        {
            rsi = *(rsi - 8);
            
            if (rax_15 - rsi - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
        
        sub_14000203c(rsi);
    }
    
    __security_check_cookie(rax_1 ^ &var_108);
    return 0;
}

class std::locale::facet* Concurrency::details::UMSThreadProxy::InternalSwitchTo(class std::locale* arg1)
{
    void var_48;
    int64_t rax_1 = __security_cookie ^ &var_48;
    class std::_Lockit var_20;
    std::_Lockit::_Lockit(&var_20, 0);
    class std::locale::facet* _Ppf = data_140006740;
    class std::locale::facet* _Ppf_2;
    
    if (!*std::ctype<char>::id)
    {
        std::_Lockit::_Lockit(&_Ppf_2, 0);
        
        if (!*std::ctype<char>::id)
        {
            *std::locale::id::_Id_cnt += 1;
            *std::ctype<char>::id = *std::locale::id::_Id_cnt;
        }
        
        std::_Lockit::~_Lockit(&_Ppf_2);
    }
    
    int64_t rsi = *std::ctype<char>::id;
    class std::locale::_Locimp* _Ptr = arg1->_Ptr;
    class std::locale::facet* result;
    
    if (rsi >= _Ptr->_Facetcount)
    {
        result = nullptr;
        label_140001960:
        
        if (!_Ptr->_Xparent)
            goto label_14000197a;
        
        class std::locale::_Locimp* rax_5 = std::locale::_Getgloballocale();
        
        if (rsi >= rax_5->_Facetcount)
        {
            label_14000197f:
            result = _Ppf;
            
            if (!result)
            {
                if (std::ctype<char>::_Getcat(&_Ppf, arg1) == -1)
                {
                    __scrt_throw_std_bad_alloc();
                    /* no return */
                }
                
                class std::locale::facet* _Ppf_1 = _Ppf;
                _Ppf_2 = _Ppf_1;
                sub_140002d78(_Ppf_1);
                _Ppf_1->vtable->_Incref(_Ppf_1);
                result = _Ppf;
                data_140006740 = result;
            }
        }
        else
        {
            result = rax_5->_Facetvec[rsi];
            label_14000197a:
            
            if (!result)
                goto label_14000197f;
        }
    }
    else
    {
        result = _Ptr->_Facetvec[rsi];
        
        if (!result)
            goto label_140001960;
    }
    
    std::_Lockit::~_Lockit(&var_20);
    __security_check_cookie(rax_1 ^ &var_48);
    return result;
}

int64_t* sub_140001a00(int64_t* arg1)
{
    int64_t rdx;
    int64_t arg_10 = rdx;
    int64_t* arg_8 = arg1;
    int32_t _State = 0;
    arg_10 = 0;
    int64_t rdx_1 = *(*arg1 + 4);
    int64_t rdi = *(rdx_1 + arg1 + 0x28);
    int64_t i;
    
    if (rdi < 0x14)
        i = 0;
    else
        i = rdi - 0x13;
    
    class std::wostream* r14 = arg1;
    int64_t* var_28 = arg1;
    int64_t* rcx = *(rdx_1 + arg1 + 0x48);
    
    if (rcx)
        (*(*rcx + 8))(rcx);
    
    void* rax_3 = std::ios_base::good(*(*arg1 + 4) + arg1);
    
    if (rax_3)
    {
        class std::ostream* rcx_4 = *(*(*arg1 + 4) + arg1 + 0x50);
        
        if (!rcx_4 || rcx_4 == arg1)
            rax_3 = 1;
        else
        {
            std::ostream::flush(rcx_4);
            rax_3 = std::ios_base::good(*(*arg1 + 4) + arg1);
        }
    }
    
    char var_20 = rax_3;
    
    if (rax_3)
    {
        if ((*(*(*arg1 + 4) + arg1 + 0x18) & 0x1c0) == 0x40)
        {
            label_140001b06:
            
            if (std::streambuf::sputn(*(*(*arg1 + 4) + arg1 + 0x48), "Enter license key: ", 0x13)
                != 0x13)
            {
                label_140001b38:
                _State = 4;
                arg_10 = 4;
            }
            else
            {
                for (; i > 0; i -= 1)
                {
                    if (std::streambuf::sputc(*(*(*arg1 + 4) + arg1 + 0x48)) == 0xffffffff)
                        goto label_140001b38;
                }
            }
        }
        else
        {
            while (true)
            {
                if (i <= 0)
                    goto label_140001b06;
                
                if (std::streambuf::sputc(*(*(*arg1 + 4) + arg1 + 0x48)) == 0xffffffff)
                {
                    _State = 4;
                    break;
                }
                
                i -= 1;
            }
            
            arg_10 = 4;
        }
        
        *(*(*arg1 + 4) + arg1 + 0x28) = 0;
    }
    else
        _State = 4;
    
    std::ios::setstate(*(*arg1 + 4) + arg1, _State, 0);
    
    if (!std::uncaught_exception())
        std::ostream::_Osfx(r14);
    
    int64_t* rcx_18 = *(*r14->vtable->__vecDelDtor[4] + r14 + 0x48);
    
    if (rcx_18)
        (*(*rcx_18 + 0x10))(rcx_18);
    
    return arg1;
}

int64_t* sub_140001bc0(int64_t* arg1, int64_t* arg2)
{
    int64_t* var_50 = arg1;
    int32_t _State = 0;
    int32_t var_54 = 0;
    int64_t r15;
    r15 = 0;
    char var_58 = 0;
    int64_t* var_48 = arg1;
    int64_t* rcx_1 = *(*(*arg1 + 4) + arg1 + 0x48);
    
    if (rcx_1)
        (*(*rcx_1 + 8))(rcx_1);
    
    uint8_t rax_2 = std::istream::_Ipfx(arg1, 0);
    uint8_t var_40 = rax_2;
    
    if (rax_2)
    {
        class std::locale __return;
        class std::locale::facet* rax_5 = Concurrency::details::UMSThreadProxy::InternalSwitchTo(
            std::ios_base::getloc(*(*arg1 + 4) + arg1, &__return));
        class std::locale::_Locimp* _Ptr = __return._Ptr;
        
        if (_Ptr)
        {
            class std::_Facet_base* rax_7 = _Ptr->vtable->_Decref(_Ptr);
            
            if (rax_7)
                rax_7->vtable->__vecDelDtor(rax_7, 1);
        }
        
        arg2[2] = 0;
        int64_t* rax_9 = arg2;
        
        if (arg2[3] > 0xf)
            rax_9 = *arg2;
        
        *rax_9 = 0;
        int64_t i = *(*(*arg1 + 4) + arg1 + 0x28);
        
        if (i <= 0 || i >= 0x7fffffffffffffff)
            i = 0x7fffffffffffffff;
        
        int32_t rax_11;
        int64_t r8_1;
        rax_11 = std::streambuf::sgetc();
        
        while (i)
        {
            if (rax_11 == 0xffffffff)
            {
                _State = 1;
                int32_t var_54_1 = 1;
                break;
            }
            
            uint64_t r9_1 = rax_11;
            
            if (*(*(rax_5 + 0x18) + (r9_1 << 1)) & 0x48)
                break;
            
            int64_t rcx_8 = arg2[2];
            int64_t rdx_1 = arg2[3];
            
            if (rcx_8 >= rdx_1)
                sub_140001da0(arg2, rdx_1, r8_1, r9_1);
            else
            {
                arg2[2] = rcx_8 + 1;
                int64_t* rax_14 = arg2;
                
                if (rdx_1 > 0xf)
                    rax_14 = *arg2;
                
                *(rax_14 + rcx_8) = r9_1;
                *(rax_14 + rcx_8 + 1) = 0;
            }
            
            r15 = 1;
            char var_58_1 = 1;
            i -= 1;
            rax_11 = std::streambuf::snextc();
        }
    }
    
    *(*(*arg1 + 4) + arg1 + 0x28) = 0;
    
    if (!r15)
        _State |= 2;
    
    std::ios::setstate(*(*arg1 + 4) + arg1, _State, 0);
    int64_t* rcx_14 = *(*(*arg1 + 4) + arg1 + 0x48);
    
    if (rcx_14)
    {
        int64_t rdx_4 = *rcx_14;
        (*(rdx_4 + 0x10))(rcx_14, rdx_4);
    }
    
    return arg1;
}

int64_t* sub_140001da0(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)
{
    int64_t rbp = arg1[2];
    int64_t rbx = 0x7fffffffffffffff;
    
    if (0x7fffffffffffffff - rbp < 1)
    {
        sub_140001200();
        /* no return */
    }
    
    int64_t r14 = arg1[3];
    int64_t rdx_1 = (rbp + 1) | 0xf;
    uint64_t rcx_1;
    
    if (rdx_1 <= 0x7fffffffffffffff)
        rcx_1 = r14 >> 1;
    
    uint64_t rax_3;
    char* rdi_1;
    
    if (rdx_1 <= 0x7fffffffffffffff && r14 <= 0x7fffffffffffffff - rcx_1)
    {
        int64_t rax_2 = rcx_1 + r14;
        rbx = rdx_1;
        
        if (rdx_1 < rax_2)
            rbx = rax_2;
        
        if (rbx == -1)
        {
            rdi_1 = nullptr;
            goto label_140001e67;
        }
        
        if (rbx + 1 < 0x1000)
        {
            rdi_1 = operator new(rbx + 1);
            goto label_140001e67;
        }
        
        rax_3 = rbx + 0x28;
        
        if (rax_3 > rbx + 1)
            goto label_140001e47;
        
        stdext::threads::_Throw_lock_error();
        /* no return */
    }
    
    rax_3 = -0x7fffffffffffffd9;
    label_140001e47:
    int64_t rax_4 = operator new(rax_3);
    
    if (rax_4)
    {
        rdi_1 = (rax_4 + 0x27) & 0xffffffffffffffe0;
        *(rdi_1 - 8) = rax_4;
        label_140001e67:
        arg1[2] = rbp + 1;
        uint32_t count = rbp;
        arg1[3] = rbx;
        
        if (r14 <= 0xf)
        {
            memcpy(rdi_1, arg1, count);
            rdi_1[rbp] = arg4;
            rdi_1[rbp + 1] = 0;
            *arg1 = rdi_1;
            return arg1;
        }
        
        void* rbx_1 = *arg1;
        memcpy(rdi_1, rbx_1, count);
        rdi_1[rbp] = arg4;
        rdi_1[rbp + 1] = 0;
        
        if (r14 + 1 < 0x1000)
            goto label_140001eb7;
        
        void* rcx_5 = *(rbx_1 - 8);
        
        if (rbx_1 - rcx_5 - 8 <= 0x1f)
        {
            rbx_1 = rcx_5;
            label_140001eb7:
            sub_14000203c(rbx_1);
            *arg1 = rdi_1;
            return arg1;
        }
    }
    
    _invalid_parameter_noinfo_noreturn();
    /* no return */
}

void* sub_140001f10(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    void* result = *rcx;
    int64_t* rcx_1 = *(*(result + 4) + rcx + 0x48);
    
    if (!rcx_1)
        return result;
    
    return (*(*rcx_1 + 0x10))(rcx_1);
}

void* sub_140001f40(int64_t* arg1)
{
    int64_t* rdx = *arg1;
    void* result = *rdx;
    int64_t* rcx_1 = *(*(result + 4) + rdx + 0x48);
    
    if (!rcx_1)
        return result;
    
    return (*(*rcx_1 + 0x10))(rcx_1);
}

void* sub_140001f70(int64_t* arg1)
{
    if (!std::uncaught_exception())
        std::ostream::_Osfx(*arg1);
    
    int64_t* rcx_1 = *arg1;
    void* result = *rcx_1;
    int64_t* rcx_2 = *(*(result + 4) + rcx_1 + 0x48);
    
    if (!rcx_2)
        return result;
    
    return (*(*rcx_2 + 0x10))(rcx_2);
}

void sub_140001fb0(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    
    if (!rcx)
        return;
    
    /* jump -> **rcx */
}

int64_t __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = ROLQ(arg1, 0x10);
        
        if (!(rcx & 0xffff))
            return;
        
        arg1 = RORQ(rcx, 0x10);
    }
    
    /* tailcall */
    return __report_gsfailure(arg1);
}

int64_t operator new(uint64_t arg1)
{
    uint64_t _Size = arg1;
    
    while (true)
    {
        int64_t result = malloc(arg1);
        
        if (result)
            return result;
        
        if (!_callnewh(_Size))
            break;
        
        arg1 = _Size;
    }
    
    if (_Size != -1)
    {
        __scrt_throw_std_bad_array_new_length();
        /* no return */
    }
    
    stdext::threads::_Throw_lock_error();
    /* no return */
}

void sub_14000203c(void* _Block)
{
    /* tailcall */
    return sub_1400024a0(_Block);
}

struct type_info::VTable** type_info::`scalar deleting destructor'(struct type_info::VTable** arg1, char arg2)
{
    *arg1 = &type_info::`vftable';
    
    if (arg2 & 1)
        sub_14000203c(arg1);
    
    return arg1;
}

int64_t pre_c_initialization()
{
    _set_app_type(_crt_console_app);
    _set_fmode(0x4000);
    *__p__commode() = 0;
    
    if (__scrt_initialize_onexit_tables(1))
    {
        _RTC_Initialize();
        atexit(_RTC_Terminate);
        
        if (!_configure_narrow_argv(_crt_argv_unexpanded_arguments))
        {
            sub_1400027a8();
            
            if (sub_1400027ec())
                __setusermatherr(sub_140002794);
            
            _configthreadlocale(0);
            
            if (sub_1400027b8())
                _initialize_narrow_environment();
            
            j_sub_140002794();
            return 0;
        }
    }
    
    __scrt_fastfail(7);
    breakpoint();
}

int64_t post_pgo_initialization()
{
    __scrt_initialize_default_local_stdio_options();
    return 0;
}

int64_t pre_cpp_initialization()
{
    sub_1400029b4();
    /* tailcall */
    return _set_new_mode(0);
}

int64_t __scrt_common_main_seh(int64_t arg1 @ rbx)
{
    int64_t arg_8 = arg1;
    
    if (!sub_1400024e4(1))
    {
        __scrt_fastfail(7);
        __scrt_fastfail(7);
    }
    else
    {
        int64_t rsi;
        rsi = 0;
        char var_18_1 = 0;
        arg1 = __scrt_acquire_startup_lock();
        int32_t rcx_1 = data_1400066b0;
        
        if (rcx_1 == 1)
            __scrt_fastfail(7);
        else
        {
            if (rcx_1)
            {
                rsi = 1;
                char var_18_2 = 1;
            }
            else
            {
                data_1400066b0 = 1;
                
                if (_initterm_e(&data_140004310, &data_140004328))
                    return 0xff;
                
                _initterm(&data_1400042f0, &data_140004308);
                data_1400066b0 = 2;
            }
            
            rcx_1 = arg1;
            __scrt_release_startup_lock(rcx_1);
            
            if (data_140006750 && __scrt_is_nonwritable_in_current_image(&data_140006750))
                data_140006750(0, 2, 0);
            
            if (data_140006748 && __scrt_is_nonwritable_in_current_image(&data_140006748))
                _register_thread_local_exe_atexit_callback(data_140006748);
            
            _get_initial_narrow_environment();
            *__p___argv();
            *__p___argc();
            main();
            arg1 = 0;
            
            if (sub_140002960())
            {
                if (!rsi)
                    _cexit();
                
                __scrt_uninitialize_crt(1, 0);
                return 0;
            }
        }
    }
    
    exit(arg1);
    /* no return */
}

uint64_t sub_140002282(int32_t arg1 @ rax, char arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    if (!sub_140002960())
    {
        _exit(arg1);
        /* no return */
    }
    
    if (!arg2)
        _c_exit();
    
    return arg1;
}

int64_t _start()
{
    sub_1400026e8();
    int64_t rbx;
    /* tailcall */
    return __scrt_common_main_seh(rbx);
}

void __raise_securityfailure(EXCEPTION_POINTERS* arg1) __noreturn
{
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    uint64_t stack_cookie_1 = stack_cookie;
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    capture_previous_context(&data_1400061e0);
    data_1400062d8 = __return_addr;
    data_140006278 = &stack_cookie_1;
    data_140006150 = data_1400062d8;
    data_140006260 = stack_cookie_1;
    data_140006140 = 0xc0000409;
    data_140006144 = 1;
    data_140006158 = 1;
    data_140006160 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_140006040;
    __raise_securityfailure(&data_140004360);
    /* no return */
}

int64_t sub_1400023e6() __pure
{
    return;
}

IMAGE_RUNTIME_FUNCTION_ENTRY* capture_previous_context(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
    
    for (int32_t i = 0; i < 2; i += 1)
    {
        uint64_t ImageBase;
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
        
        if (!FunctionEntry)
            break;
        
        uint64_t EstablisherFrame;
        void HandlerData;
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, 
            &HandlerData, &EstablisherFrame, nullptr);
    }
    
    return FunctionEntry;
}

struct std::exception::std::bad_alloc::VTable** std::bad_exception::bad_exception(struct std::exception::std::bad_alloc::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad allocation";
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

void __scrt_throw_std_bad_array_new_length() __noreturn
{
    struct std::exception::std::bad_alloc::VTable* exceptionObject;
    std::bad_exception::bad_exception(&exceptionObject);
    _CxxThrowException(&exceptionObject, &data_140005080);
    /* no return */
}

void sub_1400024a0(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;
    
    if (!sub_140002d64())
    {
        label_1400024d6:
        result = 0;
    }
    else
    {
        TEB* gsbase;
        void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
        
        do
        {
            result = 0;
            bool z_1;
            
            if (0 == data_1400066b8)
            {
                data_1400066b8 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_1400066b8;
                z_1 = false;
            }
            
            if (z_1)
                goto label_1400024d6;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

int64_t sub_1400024e4(int32_t arg1)
{
    if (!arg1)
        data_1400066c0 = 1;
    
    int64_t xcr0;
    sub_140002a98(xcr0);
    
    if (sub_1400027b8() && sub_1400027b8())
        return 1;
    
    return 0;
}

int32_t __scrt_initialize_onexit_tables(int32_t arg1)
{
    int32_t result;
    
    if (data_1400066c1)
        result = 1;
    else
    {
        if (arg1 > 1)
        {
            __scrt_fastfail(5);
            breakpoint();
        }
        
        if (!sub_140002d64() || arg1)
        {
            __builtin_memset(&data_1400066c8, 0xff, 0x30);
            data_1400066c1 = 1;
            result = 1;
        }
        else if (_initialize_onexit_table(&data_1400066c8))
            result = 0;
        else if (!_initialize_onexit_table(&data_1400066e0))
        {
            data_1400066c1 = 1;
            result = 1;
        }
        else
            result = 0;
    }
    
    return result;
}

uint64_t __scrt_is_nonwritable_in_current_image(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;
    
    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;
        
        if (rdx_1 == &data_1400002f8)
        {
            rdx_1 = nullptr;
            break;
        }
        
        uint64_t virtualAddress = rdx_1->virtualAddress;
        
        if (arg1 - &__dos_header >= virtualAddress
                && arg1 - &__dos_header < rdx_1->virtualSize + virtualAddress)
            break;
        
        rdx_1 = &rdx_1[1];
    }
    
    uint64_t result;
    
    if (!rdx_1)
        result = 0;
    else if (rdx_1->characteristics >= 0)
        result = 1;
    else
        result = 0;
    
    return result;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int32_t result = sub_140002d64();
    
    if (result && !rbx)
    {
        data_1400066b8;
        data_1400066b8 = 0;
    }
    
    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    data_1400066c0;
    int64_t result;
    result = 1;
    return result;
}

_onexit_t_1 _onexit(_PVFV arg1)
{
    _onexit_t_1 _Function = arg1;
    int32_t rax;
    
    if (data_1400066c8 != -1)
        rax = _register_onexit_function(&data_1400066c8, _Function);
    else
        rax = _crt_atexit(arg1);
    
    if (!rax)
        return _Function;
    
    return nullptr;
}

uint64_t atexit(_PVFV arg1)
{
    _onexit_t_1 rax = _onexit(arg1);
    int32_t rax_1 = -(rax);
    return -((rax_1 - rax_1)) - 1;
}

uint64_t sub_1400026e8()
{
    uint64_t __security_cookie_1 = __security_cookie;
    
    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        FILETIME systemTimeAsFileTime;
        systemTimeAsFileTime.dwLowDateTime = 0;
        systemTimeAsFileTime.dwHighDateTime = 0;
        GetSystemTimeAsFileTime(&systemTimeAsFileTime);
        int64_t rax;
        rax = systemTimeAsFileTime.dwLowDateTime;
        *rax[4] = systemTimeAsFileTime.dwHighDateTime;
        int64_t var_18 = rax;
        uint64_t rax_2 = GetCurrentThreadId();
        var_18 ^= rax_2;
        uint64_t rax_4 = GetCurrentProcessId();
        var_18 ^= rax_4;
        int64_t performanceCount;
        QueryPerformanceCounter(&performanceCount);
        __security_cookie_1 =
            (performanceCount << 0x20 ^ performanceCount ^ var_18 ^ &var_18) & 0xffffffffffff;
        
        if (__security_cookie_1 == 0x2b992ddfa232)
            __security_cookie_1 = 0x2b992ddfa233;
        
        __security_cookie = __security_cookie_1;
    }
    
    uint64_t result = ~__security_cookie_1;
    data_140006040 = result;
    return result;
}

int64_t sub_140002794() __pure
{
    return 0;
}

int64_t sub_140002798() __pure
{
    return 1;
}

int64_t sub_1400027a0() __pure
{
    return 0x4000;
}

int64_t sub_1400027a8()
{
    /* tailcall */
    return InitializeSListHead(&data_140006700);
}

int64_t sub_1400027b8() __pure
{
    int64_t result;
    result = 1;
    return result;
}

void _guard_check_icall(void (* arg1)()) __pure
{
    return;
}

int64_t sub_1400027c0() __pure
{
    return &data_140006710;
}

int64_t sub_1400027c8() __pure
{
    return &data_140006718;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_140006710 |= 0x24;
    data_140006718 |= 2;
    return &data_140006718;
}

int64_t sub_1400027ec()
{
    int64_t result;
    result = !data_14000604c;
    return result;
}

int64_t sub_1400027f8() __pure
{
    return &data_140006750;
}

int64_t sub_140002800() __pure
{
    return &data_140006748;
}

int64_t sub_140002808()
{
    data_140006720 = 0;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    sub_140002808();
    CONTEXT ContextRecord;
    memset(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t Rip = ContextRecord.Rip;
    uint64_t ImageBase;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    uint64_t EstablisherFrame;
    void HandlerData;
    
    if (FunctionEntry)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, &ContextRecord, 
            &HandlerData, &EstablisherFrame, nullptr);
    ContextRecord.Rip = __return_addr;
    int64_t __saved_rbx;
    ContextRecord.Rsp = &__saved_rbx;
    int32_t var_578;
    memset(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    BOOL rax_3 = IsDebuggerPresent();
    EXCEPTION_POINTERS ExceptionInfo;
    ExceptionInfo.ExceptionRecord = &var_578;
    ExceptionInfo.ContextRecord = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);
    
    if (!result && rax_3 != 1)
        sub_140002808();
    
    return result;
}

int64_t j_sub_140002794()
{
    /* tailcall */
    return sub_140002794();
}

HMODULE sub_140002960()
{
    HMODULE result = GetModuleHandleW(nullptr);
    int32_t* rcx_2;
    
    if (result && result->unused == 0x5a4d)
        rcx_2 = result * 2;
    
    if (!result || result->unused != 0x5a4d || *rcx_2 != 0x4550 || rcx_2[6] != 0x20b
            || rcx_2[0x21] <= 0xe)
        result = 0;
    else
        result = rcx_2[0x3e];
    
    return result;
}

int64_t sub_1400029b4()
{
    /* tailcall */
    return SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
}

int64_t __scrt_unhandled_exception_filter(int64_t* arg1)
{
    int32_t* rbx = *arg1;
    
    if (*rbx == 0xe06d7363 && rbx[6] == 4)
    {
        int32_t rdx_1 = rbx[8];
        
        if (rdx_1 - 0x19930520 <= 2 || rdx_1 == 0x1994000)
        {
            *__current_exception() = rbx;
            *__current_exception_context() = arg1[1];
            terminate();
            /* no return */
        }
    }
    
    return 0;
}

void _RTC_Initialize()
{
    for (void* const i = &data_140004cf0; i < &data_140004cf0; i += 8)
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

void _RTC_Terminate()
{
    for (void* const i = &data_140004d00; i < &data_140004d00; i += 8)
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

int64_t sub_140002a98(int64_t arg1 @ xcr0)
{
    int32_t temp0;
    int32_t temp1;
    int32_t temp2;
    int32_t temp3;
    temp0 = __cpuid(0, 0);
    int32_t temp0_1;
    int32_t temp1_1;
    int32_t temp2_1;
    int32_t temp3_1;
    temp0_1 = __cpuid(1, 0);
    int32_t var_28 = temp0_1;
    int32_t var_24 = temp1_1;
    int32_t var_20 = temp2_1;
    int32_t var_1c = temp3_1;
    int32_t rax_2;
    uint64_t rax_3;
    
    if (!((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e) | (temp1 ^ 0x756e6547)))
    {
        data_140006068 = -1;
        rax_2 = temp0_1 & 0xfff3ff0;
        data_140006060 = 0x8000;
        
        if (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670)
            rax_3 = rax_2 - 0x30650;
    }
    
    int32_t r8_3;
    
    if ((temp3 ^ 0x49656e69) | (temp2 ^ 0x6c65746e) | (temp1 ^ 0x756e6547) || (rax_2 != 0x106c0
            && rax_2 != 0x20660 && rax_2 != 0x20670
            && (rax_3 > 0x20 || !TEST_BITQ(0x100010001, rax_3))))
        r8_3 = data_140006728;
    else
    {
        r8_3 = data_140006728 | 1;
        data_140006728 = r8_3;
    }
    
    int32_t r9_2 = 0;
    int32_t rsi = 0;
    int32_t r10_4 = 0;
    int32_t r11 = 0;
    
    if (temp0 >= 7)
    {
        int32_t temp0_2;
        int32_t temp1_2;
        int32_t temp2_2;
        int32_t temp3_2;
        temp0_2 = __cpuid(7, 0);
        int32_t var_28_1 = temp0_2;
        rsi = temp3_2;
        int32_t var_24_1 = temp1_2;
        r9_2 = temp1_2;
        int32_t var_20_1 = temp2_2;
        int32_t var_1c_1 = temp3_2;
        
        if (TEST_BITD(temp1_2, 9))
            data_140006728 = r8_3 | 2;
        
        if (temp0_2 >= 1)
        {
            int32_t temp0_3;
            int32_t temp1_3;
            int32_t temp2_3;
            int32_t temp3_3;
            temp0_3 = __cpuid(7, 1);
            r10_4 = temp3_3;
            int32_t var_28_2 = temp0_3;
            int32_t var_24_2 = temp1_3;
            int32_t var_20_2 = temp2_3;
            int32_t var_1c_2 = temp3_3;
        }
        
        if (temp0 >= 0x24)
        {
            int32_t temp0_4;
            int32_t temp1_4;
            int32_t temp2_4;
            int32_t temp3_4;
            temp0_4 = __cpuid(0x24, 0);
            r11 = temp1_4;
            int32_t var_28_3 = temp0_4;
            int32_t var_24_3 = temp1_4;
            int32_t var_20_3 = temp2_4;
            int32_t var_1c_3 = temp3_4;
        }
    }
    
    int64_t rax_8 = data_140006050 & 0xfffffffffffffffe;
    data_140006058 = 1;
    data_14000605c = 2;
    data_140006050 = rax_8;
    
    if (TEST_BITD(temp2_1, 0x14))
    {
        data_140006058 = 2;
        data_140006050 = rax_8 & 0xffffffffffffffef;
        data_14000605c = 6;
    }
    
    if (TEST_BITD(temp2_1, 0x1b))
    {
        int32_t temp0_5;
        int32_t temp1_5;
        temp0_5 = _xgetbv(0, arg1);
        uint64_t rdx_7 = temp0_5 << 0x20 | temp1_5;
        
        if (TEST_BITD(temp2_1, 0x1c) && (rdx_7 & 6) == 6)
        {
            int32_t rax_13 = data_14000605c | 8;
            data_140006058 = 3;
            data_14000605c = rax_13;
            int64_t rax_16;
            
            if (!(r9_2 & 0x20))
                rax_16 = data_140006050;
            else
            {
                data_140006058 = 5;
                data_14000605c = rax_13 | 0x20;
                rax_16 = data_140006050 & 0xfffffffffffffffd;
                data_140006050 = rax_16;
                
                if ((r9_2 & 0xd0030000) == 0xd0030000)
                {
                    if ((rdx_7 & 0xe0) != 0xe0)
                        rax_16 = data_140006050;
                    else
                    {
                        int64_t rax_18 = data_140006050;
                        data_14000605c |= 0x40;
                        rax_16 = rax_18 & 0xffffffffffffffdb;
                        data_140006058 = 6;
                        data_140006050 = rax_16;
                    }
                }
            }
            
            if (TEST_BITD(rsi, 0x17))
                data_140006050 = rax_16 & 0xfffffffffeffffff;
            
            if (TEST_BITD(r10_4, 0x13) && (rdx_7 & 0xe0) == 0xe0)
            {
                int32_t rax_22 = r11 & 0x400ff;
                data_140006724 = rax_22;
                int64_t rcx_10 = ~((r11 >> 0x10 & 7) | 0x1000028) & data_140006050;
                data_140006050 = rcx_10;
                
                if (rax_22 > 1)
                    data_140006050 = rcx_10 & 0xffffffffffffffbf;
            }
        }
        
        if (TEST_BITD(r10_4, 0x15) && TEST_BITQ(rdx_7, 0x13))
            data_140006050 &= 0xffffffffffffff7f;
    }
    
    return 0;
}

int64_t sub_140002d64()
{
    int64_t result;
    result = data_140006070;
    return result;
}

void std::_Lockit::~_Lockit(class std::_Lockit* this)
{
    /* tailcall */
    return std::_Lockit::~_Lockit(this);
}

int64_t sub_140002d78(int64_t arg1)
{
    int64_t* rax = malloc(0x10);
    
    if (!rax)
    {
        std::_Xbad_alloc();
        /* no return */
    }
    
    int64_t result = data_140006730;
    *rax = result;
    rax[1] = arg1;
    data_140006730 = rax;
    return result;
}

void std::_Xbad_alloc() __noreturn
{
    /* tailcall */
    return std::_Xbad_alloc();
}

enum _EXCEPTION_DISPOSITION __C_specific_handler(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, 
        DispatcherContext);
}

enum _EXCEPTION_DISPOSITION __CxxFrameHandler4(struct EHExceptionRecord* pExcept, uint64_t RN, struct _CONTEXT* pContext, struct _xDISPATCHER_CONTEXT* pDC)
{
    /* tailcall */
    return __CxxFrameHandler4(pExcept, RN, pContext, pDC);
}

void __std_terminate() __noreturn
{
    /* tailcall */
    return __std_terminate();
}

void _CxxThrowException(void* pExceptionObject, struct _s__ThrowInfo* pThrowInfo) __noreturn
{
    /* tailcall */
    return _CxxThrowException(pExceptionObject, pThrowInfo);
}

int64_t __current_exception()
{
    /* tailcall */
    return __current_exception();
}

int64_t __current_exception_context()
{
    /* tailcall */
    return __current_exception_context();
}

int64_t memset(void* dest, int32_t c, uint64_t count)
{
    /* tailcall */
    return memset(dest, c, count);
}

int32_t _callnewh(uint64_t _Size)
{
    /* tailcall */
    return _callnewh(_Size);
}

int64_t malloc(uint64_t _Size)
{
    /* tailcall */
    return malloc(_Size);
}

int32_t _seh_filter_exe(uint32_t _ExceptionNum, struct _EXCEPTION_POINTERS* _ExceptionPtr)
{
    /* tailcall */
    return _seh_filter_exe(_ExceptionNum, _ExceptionPtr);
}

void _set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return _set_app_type(_Type);
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

errno_t _configure_narrow_argv(enum _crt_argv_mode mode)
{
    /* tailcall */
    return _configure_narrow_argv(mode);
}

int32_t _initialize_narrow_environment()
{
    /* tailcall */
    return _initialize_narrow_environment();
}

char** _get_initial_narrow_environment()
{
    /* tailcall */
    return _get_initial_narrow_environment();
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

int32_t _initterm_e(_PIFV* _First, _PIFV* _Last)
{
    /* tailcall */
    return _initterm_e(_First, _Last);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

void _exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return _exit(_Except);
}

errno_t _set_fmode(int32_t _Value)
{
    /* tailcall */
    return _set_fmode(_Value);
}

int32_t* __p___argc()
{
    /* tailcall */
    return __p___argc();
}

char*** __p___argv()
{
    /* tailcall */
    return __p___argv();
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

void _c_exit()
{
    /* tailcall */
    return _c_exit();
}

void _register_thread_local_exe_atexit_callback(_tls_callback_type _Callback)
{
    /* tailcall */
    return _register_thread_local_exe_atexit_callback(_Callback);
}

int32_t _configthreadlocale(int32_t _Flag)
{
    /* tailcall */
    return _configthreadlocale(_Flag);
}

int32_t _set_new_mode(int32_t _NewMode)
{
    /* tailcall */
    return _set_new_mode(_NewMode);
}

int32_t* __p__commode()
{
    /* tailcall */
    return __p__commode();
}

void free(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

int32_t _initialize_onexit_table(struct _onexit_table_t* _Table)
{
    /* tailcall */
    return _initialize_onexit_table(_Table);
}

int32_t _register_onexit_function(struct _onexit_table_t* _Table, _onexit_t_1 _Function)
{
    /* tailcall */
    return _register_onexit_function(_Table, _Function);
}

int32_t _crt_atexit(_PVFV _Function)
{
    /* tailcall */
    return _crt_atexit(_Function);
}

void terminate() __noreturn
{
    /* tailcall */
    return terminate();
}

int64_t __GSHandlerCheckCommon(int64_t arg1, void* arg2, int32_t* arg3)
{
    int64_t r9 = arg1;
    int64_t r10 = arg1;
    
    if (*arg3 & 4)
        r10 = (arg3[1] + arg1) & -(arg3[2]);
    
    uint64_t rcx_1 = *(*(arg2 + 0x10) + 8);
    int64_t rax_5 = *(arg2 + 8);
    
    if (*(rcx_1 + rax_5 + 3) & 0xf)
        r9 += *(rcx_1 + rax_5 + 3) & 0xfffffff0;
    
    /* tailcall */
    return __security_check_cookie(r9 ^ *((*arg3 & 0xfffffff8) + r10));
}

int64_t __GSHandlerCheck_EH4(struct EHExceptionRecord* arg1, uint64_t arg2, struct _CONTEXT* arg3, struct _xDISPATCHER_CONTEXT* arg4)
{
    void* HandlerData = arg4->HandlerData;
    __GSHandlerCheckCommon(arg2, arg4, HandlerData + 4);
    
    if (!(*(HandlerData + 4) & (-(((HandlerData + 4) - (HandlerData + 4))) + 1)))
        return 1;
    
    return __CxxFrameHandler4(arg1, arg2, arg3, arg4);
}

int32_t memcmp(void const* buffer1, void const* buffer2, uint64_t count)
{
    /* tailcall */
    return memcmp(buffer1, buffer2, count);
}

int64_t memcpy(void* dest, void const* src, uint32_t count)
{
    /* tailcall */
    return memcpy(dest, src, count);
}

void _guard_dispatch_icall_nop(void (* arg1)())
{
    int64_t rax;
    /* jump -> rax */
}

int64_t sub_140002fa0()
{
    int64_t rax;
    /* tailcall */
    return rax();
}

int64_t std::_Func_class<class std::_Func_impl<struct std::_Callable_obj<class <lambda_6dd2c61d572e92a64c8eda4035773505>,0>,class std::allocator<class std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>,class <lambda_6dd2c61d572e92a64c8eda4035773505>,class std::allocator<class std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Do_alloc<class std::_Func_impl<struct std::_Callable_obj<class <lambda_6dd2c61d572e92a64c8eda4035773505>,0>,class std::allocator<class std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>,class <lambda_6dd2c61d572e92a64c8eda4035773505>,class std::allocator<class std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil> > >::dtor$6::dtor$6(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400012f0(*(arg2 + 0x28));
}

int64_t std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Getffldx::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400012f0(arg2 + 0x90);
}

int64_t std::money_get<uint16_t,class std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::_Getmfld::dtor$15::dtor$15(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400012f0(arg2 + 0xb0);
}

int64_t int `public: __cdecl std::function<void __cdecl(class Concurrency::message<unsigned __int64> *)>::function<void __cdecl(class Concurrency::message<unsigned __int64> *)><class <lambda_deb3b1cc7f29cfa0f47c69f8f435afdd>>(class <lambda_deb3b1cc7f29cfa0f47c69f8f435afdd> &&)'::`1'::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_1400012f0(*(arg2 + 0x20));
}

int64_t sub_140002ff0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return std::_Lockit::~_Lockit(arg2 + 0x28);
}

int64_t Concurrency::details::WorkQueue::Steal::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001fb0(arg2 + 0x30);
}

int64_t Concurrency::details::_Originator::_send<enum Concurrency::agent_status>::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001f40(arg2 + 0x20);
}

int64_t Concurrency::details::_Originator::_send<uint64_t>::dtor$2::dtor$2(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001f70(arg2 + 0x20);
}

int64_t int `private: void __cdecl std::shared_ptr<class __ExceptionPtr>::_Resetp<class __ExceptionPtr, void (__cdecl *)(class __ExceptionPtr *), class _DebugMallocator<int>>(class __ExceptionPtr *, void (__cdecl *)(class __ExceptionPtr *), class _DebugMallocator<int>)'::`1'::catch$0(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    int64_t* rdx = *(arg2 + 0x50);
    std::ios::setstate(*(*rdx + 4) + rdx, 4, 1);
    return 0;
}

int64_t std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::_Fput::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001f40(arg2 + 0x30);
}

int64_t Concurrency::agent::cancel::dtor$1::dtor$1(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001f10(arg2 + 0x30);
}

int64_t std::basic_ios<char,struct std::char_traits<char> >::init::dtor$0::dtor$0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140001500(arg2 + 0x40);
}

int64_t Concurrency::details::_UnrealizedChore::_UnstructuredChoreWrapper::catch$2::catch$2(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    int64_t* rdx = *(arg2 + 0x28);
    std::ios::setstate(*(*rdx + 4) + rdx, 4, 1);
    return 0;
}

int64_t thread_start<uint32_t (__cdecl*)(void* __ptr64)>::filt$0::filt$0(int64_t* arg1)
{
    return _seh_filter_exe(**arg1, arg1);
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

void sub_140003108()
{
    while (true)
    {
        int64_t* rbx_1 = data_140006730;
        
        if (!rbx_1)
            break;
        
        int64_t* rcx_1 = rbx_1[1];
        data_140006730 = *rbx_1;
        int64_t* rax_5 = (*(*rcx_1 + 0x10))();
        
        if (rax_5)
            (**rax_5)(rax_5, 1);
        
        free(rbx_1);
    }
}

