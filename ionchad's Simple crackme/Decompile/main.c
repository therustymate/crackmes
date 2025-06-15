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
    memset(&s, 0, 0x20);
    int128_t* flag = &var_78;
    int128_t* rsi = var_78;
    
    if (var_60 > 0xf)
        flag = rsi;
    
    int64_t rbx = 0x7fffffffffffffff;
    
    if (var_68 > 0x7fffffffffffffff)
    {
        sub_140001200();
        /* no return */
    }
    
    int64_t possible_code_size;
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
        possible_code_size = var_68;
        var_80 = rbx;
        memcpy(rax_7, flag, var_68 + 1);
    }
    else
    {
        possible_code_size = var_68;
        var_80 = 0xf;
        s = *flag;
    }
    
    char possible_input_char;
    sub_140001220(&possible_input_char, &s);
    void possible_input_type;
    int128_t* possible_input_var = sub_140001350(&possible_input_type, &possible_input_char); // Possible input (fgets, gets, etc)
    int128_t possible_code_buffer = {0};
    strncpy(&possible_code_buffer, "KIWZ", 5);
    sub_140001220(&s, &possible_code_buffer); // Possible variable data transfer (&possible_code_buffer -> &s)
    int128_t* buffer2 = &s;
    int128_t* moved_code_buffer = s;
    
    if (var_80 > 0xf)
        buffer2 = moved_code_buffer;
    
    int128_t* possible_input_buffer = possible_input_var;
    
    if (*(possible_input_var + 0x18) > 0xf)
        possible_input_buffer = *possible_input_var;
    
    uint64_t count = possible_input_var[1];
    
    if (count != possible_code_size)
        flag = 0;
    else if (count)
        flag = !memcmp(possible_input_buffer, buffer2, count); // Core comparsion
    else
        flag = 1;
    
    if (var_80 > 0xf)
    {
        int128_t* code_buffer = moved_code_buffer;
        
        if (var_80 + 1 >= 0x1000)
        {
            moved_code_buffer = *(moved_code_buffer - 8);
            
            if (code_buffer - moved_code_buffer - 8 > 0x1f)
            {
                _invalid_parameter_noinfo_noreturn();
                /* no return */
            }
        }
        
        sub_14000203c(moved_code_buffer);
    }
    
    int64_t possible_code_size_1 = 0;
    int64_t var_80_1 = 0xf;
    s = 0;
    int64_t rdx_6 = *(possible_input_var + 0x18);
    
    if (rdx_6 > 0xf)
    {
        void* rcx_10 = *possible_input_var;
        
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
    
    possible_input_var[1] = 0;
    *(possible_input_var + 0x18) = 0xf;
    *possible_input_var = 0;
    PSTR lpText;
    char const* const lpCaption;
    
    if (!flag)
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
        void* rcx_12 = possible_input_char;
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
    possible_input_char = 0;
    
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