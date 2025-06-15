#include "out.h"



void FUN_140001010(void)

{
  BOOL BVar1;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    MessageBoxA((HWND)0x0,"Debugger Detected!","Bye",0);
                    // WARNING: Subroutine does not return
    ExitProcess(0);
  }
  CloseHandle((HANDLE)0xdeadc0de);
  return;
}



undefined8 * FUN_140001060(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



char * FUN_1400010a0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined8 * FUN_1400010c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



undefined8 * FUN_140001130(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



void FUN_140001160(void)

{
  undefined8 local_28 [5];
  
  FUN_140001130(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140005150);
}



undefined8 * FUN_140001180(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_1400011c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_140001200(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_140001220(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Memory;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_140006000 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_140001350(param_1,param_2);
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      *(byte *)((longlong)puVar3 + uVar2) =
           *(byte *)((longlong)puVar3 + uVar2) ^ (char)uVar2 * '\x05' + 0x21U;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[2]);
  }
  if (0xf < (ulonglong)param_2[3]) {
    pvVar1 = (void *)*param_2;
    _Memory = pvVar1;
    if ((0xfff < param_2[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_140001fe0(local_18 ^ (ulonglong)auStack_48);
  return;
}



void FUN_1400012f0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 * FUN_140001350(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar2 = param_2[2];
  if (0x7fffffffffffffff < uVar2) {
    FUN_140001200();
    pcVar3 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar3)();
    return puVar7;
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar4 = puVar7[1];
    *param_1 = *puVar7;
    param_1[1] = uVar4;
    return param_1;
  }
  uVar8 = uVar2 | 0xf;
  if (uVar8 < 0x8000000000000000) {
    if (uVar8 < 0x16) {
      uVar8 = 0x16;
    }
    uVar1 = uVar8 + 1;
    if (uVar1 == 0) goto LAB_14000142c;
    if (uVar1 < 0x1000) {
      _Dst = operator_new(uVar1);
      goto LAB_14000142c;
    }
    uVar5 = uVar8 + 0x28;
    if (uVar5 <= uVar1) {
      FUN_140001160();
      pcVar3 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar3)();
      return puVar7;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
    uVar8 = 0x7fffffffffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  *(void **)((longlong)_Dst - 8) = pvVar6;
LAB_14000142c:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  memcpy(_Dst,puVar7,uVar2 + 1);
  return param_1;
}



undefined8 * FUN_140001470(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



void FUN_1400014a0(void)

{
  undefined8 local_28 [5];
  
  FUN_140001470(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140005188);
}



undefined8 * FUN_1400014c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



void FUN_140001500(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00014000152a. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar1)(puVar1,1,*(code **)*puVar1);
      return;
    }
  }
  return;
}



void FUN_140001540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  size_t _Size;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 ***pppuVar9;
  undefined8 ****_Dst;
  longlong *plVar10;
  longlong *_Buf1;
  void *pvVar11;
  void *pvVar12;
  undefined8 ****ppppuVar13;
  char *lpText;
  char *lpCaption;
  bool bVar14;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0 [5];
  undefined8 local_b8 [4];
  undefined8 ***local_98;
  undefined8 **ppuStack_90;
  size_t local_88;
  ulonglong local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140006000 ^ (ulonglong)auStack_108;
  FUN_140001010();
  uStack_70 = 0;
  _Dst = (undefined8 ****)0x0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (undefined8 ****)0x0;
  FUN_140001a00((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref);
  FUN_140001bc0((basic_istream<char,struct_std::char_traits<char>_> *)cin_exref,
                (longlong *)&local_78,param_3);
  uVar5 = local_60;
  uVar3 = local_68;
  pppuVar4 = local_78;
  local_98 = (undefined8 ***)0x0;
  ppuStack_90 = (undefined8 ***)0x0;
  local_88 = 0;
  local_80 = 0;
  ppppuVar13 = &local_78;
  if (0xf < local_60) {
    ppppuVar13 = (undefined8 ****)local_78;
  }
  if (0x7fffffffffffffff < local_68) {
    FUN_140001200();
LAB_1400018b6:
    FUN_140001160();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_68 < 0x10) {
    local_88 = local_68;
    local_80 = 0xf;
    local_98 = *ppppuVar13;
    ppuStack_90 = ppppuVar13[1];
    goto LAB_14000169a;
  }
  uVar7 = local_68 | 0xf;
  if (uVar7 < 0x8000000000000000) {
    if (uVar7 < 0x16) {
      uVar7 = 0x16;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 != 0) {
      if (0xfff < uVar1) {
        uVar8 = uVar7 + 0x28;
        if (uVar8 <= uVar1) goto LAB_1400018b6;
        goto LAB_140001620;
      }
      _Dst = (undefined8 ****)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
    uVar7 = 0x7fffffffffffffff;
LAB_140001620:
    pppuVar9 = (undefined8 ***)operator_new(uVar8);
    if (pppuVar9 == (undefined8 ***)0x0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (undefined8 ****)((longlong)pppuVar9 + 0x27U & 0xffffffffffffffe0);
    _Dst[-1] = pppuVar9;
  }
  local_88 = uVar3;
  local_98 = _Dst;
  local_80 = uVar7;
  memcpy(_Dst,ppppuVar13,uVar3 + 1);
LAB_14000169a:
  FUN_140001220((undefined8 *)&local_58,(longlong *)&local_98);
  plVar10 = FUN_140001350(local_b8,(undefined8 *)&local_58);
  local_e0[1] = 0;
  local_e0[2] = 4;
  local_e0[3] = 0xf;
  local_e0[0] = 0x5a57494b;
  local_e8 = plVar10;
  FUN_140001220(&local_98,local_e0);
  uVar3 = local_80;
  pppuVar9 = local_98;
  ppppuVar13 = &local_98;
  if (0xf < local_80) {
    ppppuVar13 = (undefined8 ****)local_98;
  }
  _Buf1 = plVar10;
  if (0xf < (ulonglong)plVar10[3]) {
    _Buf1 = (longlong *)*plVar10;
  }
  _Size = plVar10[2];
  if (_Size == local_88) {
    if (_Size == 0) {
      bVar14 = true;
    }
    else {
      iVar6 = memcmp(_Buf1,ppppuVar13,_Size);
      bVar14 = iVar6 == 0;
    }
  }
  else {
    bVar14 = false;
  }
  if (0xf < uVar3) {
    ppppuVar13 = (undefined8 ****)pppuVar9;
    if ((0xfff < uVar3 + 1) &&
       (ppppuVar13 = (undefined8 ****)pppuVar9[-1],
       0x1f < (ulonglong)((longlong)pppuVar9 + (-8 - (longlong)ppppuVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar13);
  }
  local_88 = 0;
  local_80 = 0xf;
  local_98 = (undefined8 ***)((ulonglong)local_98 & 0xffffffffffffff00);
  if (0xf < (ulonglong)plVar10[3]) {
    pvVar12 = (void *)*plVar10;
    pvVar11 = pvVar12;
    if ((0xfff < plVar10[3] + 1U) &&
       (pvVar11 = *(void **)((longlong)pvVar12 + -8),
       0x1f < (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
  }
  plVar10[2] = 0;
  plVar10[3] = 0xf;
  *(undefined1 *)plVar10 = 0;
  if (bVar14) {
    lpCaption = "Success";
    lpText = "License Accepted!";
  }
  else {
    lpCaption = "Error";
    lpText = "Invalid License";
  }
  MessageBoxA((HWND)0x0,lpText,lpCaption,0);
  if (0xf < local_40) {
    pvVar11 = (void *)CONCAT71(uStack_57,local_58);
    pvVar12 = pvVar11;
    if ((0xfff < local_40 + 1) &&
       (pvVar12 = *(void **)((longlong)pvVar11 + -8),
       0x1f < (ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar12)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar12);
  }
  local_48 = 0;
  local_40 = 0xf;
  local_58 = 0;
  if (0xf < uVar5) {
    ppppuVar13 = (undefined8 ****)pppuVar4;
    if ((0xfff < uVar5 + 1) &&
       (ppppuVar13 = (undefined8 ****)pppuVar4[-1],
       0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)ppppuVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar13);
  }
  FUN_140001fe0(local_38 ^ (ulonglong)auStack_108);
  return;
}



void FUN_1400018c0(locale *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  facet *pfVar5;
  _Locimp *p_Var6;
  __uint64 _Var7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  facet *local_28;
  _Lockit local_20 [8];
  facet *local_18;
  ulonglong local_10;
  
  local_10 = DAT_140006000 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  pcVar3 = id_exref;
  local_28 = DAT_140006740;
  if (*(longlong *)id_exref == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_18,0);
    pcVar4 = _Id_cnt_exref;
    if (*(longlong *)pcVar3 == 0) {
      *(int *)_Id_cnt_exref = *(int *)_Id_cnt_exref + 1;
      *(longlong *)pcVar3 = (longlong)*(int *)pcVar4;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_18);
  }
  uVar1 = *(ulonglong *)pcVar3;
  lVar2 = *(longlong *)(param_1 + 8);
  if ((uVar1 < *(ulonglong *)(lVar2 + 0x18)) &&
     (*(longlong *)(uVar1 * 8 + *(longlong *)(lVar2 + 0x10)) != 0)) goto LAB_1400019c4;
  lVar8 = 0;
  if (*(char *)(lVar2 + 0x24) == '\0') {
LAB_14000197a:
    if (lVar8 != 0) goto LAB_1400019c4;
  }
  else {
    p_Var6 = std::locale::_Getgloballocale();
    if (uVar1 < *(ulonglong *)(p_Var6 + 0x18)) {
      lVar8 = *(longlong *)(uVar1 * 8 + *(longlong *)(p_Var6 + 0x10));
      goto LAB_14000197a;
    }
  }
  if (local_28 == (facet *)0x0) {
    _Var7 = std::ctype<char>::_Getcat(&local_28,param_1);
    pfVar5 = local_28;
    if (_Var7 == 0xffffffffffffffff) {
      FUN_1400014a0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_18 = local_28;
    FUN_140002d78(local_28);
    (**(code **)(*(longlong *)pfVar5 + 8))(pfVar5);
    DAT_140006740 = local_28;
  }
LAB_1400019c4:
  std::_Lockit::~_Lockit(local_20);
  FUN_140001fe0(local_10 ^ (ulonglong)auStack_48);
  return;
}



basic_ostream<char,struct_std::char_traits<char>_> *
FUN_140001a00(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  __int64 _Var3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (*(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) < 0x14) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) + -0x13;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
      bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar1 == false) {
    iVar4 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; 0 < lVar5; lVar5 = lVar5 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_140001b3b;
      }
    }
    _Var3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                       "Enter license key: ",0x13);
    if (_Var3 == 0x13) {
      for (; 0 < lVar5; lVar5 = lVar5 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_140001b3b;
      }
    }
    else {
LAB_140001b3b:
      iVar4 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



basic_istream<char,struct_std::char_traits<char>_> *
FUN_140001bc0(basic_istream<char,struct_std::char_traits<char>_> *param_1,longlong *param_2,
             undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  locale *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_30;
  
  bVar3 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar4 = std::basic_istream<char,struct_std::char_traits<char>_>::_Ipfx(param_1,false);
  uVar10 = 0;
  if (bVar4) {
    plVar6 = (locale *)
             std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar7 = FUN_1400018c0(plVar6);
    if ((local_30 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
    param_2[2] = 0;
    plVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar9 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar9 = 0;
    uVar11 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
    if (((longlong)uVar11 < 1) || (0x7ffffffffffffffe < uVar11)) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    for (; uVar10 = 0, uVar11 != 0; uVar11 = uVar11 - 1) {
      if (uVar5 == 0xffffffff) {
        uVar10 = 1;
        break;
      }
      uVar10 = 0;
      if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)(uVar5 & 0xff) * 2) & 0x48) != 0)
      break;
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (uVar1 < uVar2) {
        param_2[2] = uVar1 + 1;
        plVar9 = param_2;
        if (0xf < uVar2) {
          plVar9 = (longlong *)*param_2;
        }
        *(char *)((longlong)plVar9 + uVar1) = (char)uVar5;
        *(undefined1 *)((longlong)plVar9 + uVar1 + 1) = 0;
      }
      else {
        FUN_140001da0(param_2,uVar2,param_3,(char)uVar5);
      }
      bVar3 = true;
      uVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  if (!bVar3) {
    uVar10 = uVar10 | 2;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar10,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



undefined8 *
FUN_140001da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  uVar7 = 0x7fffffffffffffff;
  if (_Size == 0x7fffffffffffffff) {
    FUN_140001200();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar2 = param_1[3];
  uVar6 = _Size + 1 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar7 + 0x28;
        if (uVar6 <= uVar1) {
          FUN_140001160();
          pcVar3 = (code *)swi(3);
          puVar5 = (undefined8 *)(*pcVar3)();
          return puVar5;
        }
        goto LAB_140001e44;
      }
      _Dst = operator_new(uVar1);
    }
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_140001e44:
    pvVar4 = operator_new(uVar6);
    if (pvVar4 == (void *)0x0) goto LAB_140001ebe;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar7;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,pvVar4,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_4;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    _Memory = pvVar4;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
LAB_140001ebe:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}



void FUN_140001f10(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_140001f40(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_140001f70(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_140001fe0(longlong param_1)

{
  if ((param_1 == DAT_140006000) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140002318();
  return;
}



// Library Function - Single Match
//  void * __ptr64 __cdecl operator new(unsigned __int64)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_140001160();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_140002480();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140002e63. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



undefined8 * FUN_140002044(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



void FUN_140002070(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_1400027a0();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140002794();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_140002a20();
    atexit((_func_5014 *)&LAB_140002a5c);
    uVar7 = FUN_140002798();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_1400027a8();
      bVar2 = FUN_1400027ec();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140002794);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140002794();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_1400027b8();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140002794();
      uVar5 = thunk_FUN_140002794();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140002810(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 FUN_140002128(void)

{
  FUN_1400027d0();
  return 0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

int FUN_140002154(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar10;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = FUN_1400024e4(1);
  if ((char)uVar3 == '\0') {
    FUN_140002810(7);
  }
  else {
    bVar1 = false;
    uVar10 = 0;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_1400066b0 != 1) {
      if (DAT_1400066b0 == 0) {
        DAT_1400066b0 = 1;
        iVar2 = _initterm_e(&DAT_140004310,&DAT_140004328);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1400042f0,&DAT_140004308);
        DAT_1400066b0 = 2;
      }
      else {
        bVar1 = true;
        uVar10 = 1;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_1400027f8();
      if ((*plVar4 != 0) && (uVar5 = FUN_1400025ac((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0,2,0,in_R9,uVar10);
      }
      plVar4 = (longlong *)FUN_140002800();
      if ((*plVar4 != 0) && (uVar5 = FUN_1400025ac((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      uVar6 = _get_initial_narrow_environment();
      puVar7 = (undefined8 *)__p___argv();
      uVar3 = *puVar7;
      puVar8 = (uint *)__p___argc();
      uVar9 = (ulonglong)*puVar8;
      iVar2 = FUN_140001540(uVar9,uVar3,uVar6);
      uVar5 = FUN_140002960();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar9 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_1400022c0;
    }
  }
  FUN_140002810(7);
LAB_1400022c0:
                    // WARNING: Subroutine does not return
  exit(iVar2);
}



void entry(void)

{
  __security_init_cookie();
  FUN_140002154();
  return;
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000140002311. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140002318(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140002343;
  capture_previous_context((PCONTEXT)&DAT_1400061e0);
  _DAT_140006150 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140006278 = puVar3 + 0x40;
  _DAT_140006260 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140006140 = 0xc0000409;
  _DAT_140006144 = 1;
  _DAT_140006158 = 1;
  DAT_140006160 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140006000;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140006040;
  *(undefined8 *)(puVar3 + -8) = 0x1400023e5;
  DAT_1400062d8 = _DAT_140006150;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140004360);
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



undefined8 * FUN_140002460(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_140002480(void)

{
  undefined8 local_28 [5];
  
  FUN_140002460(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140005080);
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140002e63. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_1400024d6:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1400066b8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1400066b8;
        pvVar1 = DAT_1400066b8;
      }
      DAT_1400066b8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1400024d6;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



longlong FUN_1400024e4(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_1400066c0 = 1;
  }
  FUN_140002a98();
  cVar1 = FUN_1400027b8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1400027b8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1400027b8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_1400066c1 == '\0') {
    if (1 < param_1) {
      FUN_140002810(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_1400066c8 = 0xffffffffffffffff;
      uRam00000001400066d0 = 0xffffffffffffffff;
      _DAT_1400066d8 = 0xffffffffffffffff;
      _DAT_1400066e0 = 0xffffffffffffffff;
      uRam00000001400066e8 = 0xffffffffffffffff;
      _DAT_1400066f0 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1400066c8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1400066e0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1400066c1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x000140002639)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong FUN_1400025ac(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140002622;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140002622:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1400066b8 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2019 Release

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1400066c0 == '\0') || (param_2 == '\0')) {
    FUN_1400027b8();
    FUN_1400027b8();
  }
  return 1;
}



// Library Function - Single Match
//  _onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1400066c8 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1400066c8);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



// Library Function - Single Match
//  atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_140006000 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_140006000 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_140006000 == 0x2b992ddfa232) {
      DAT_140006000 = 0x2b992ddfa233;
    }
  }
  DAT_140006040 = ~DAT_140006000;
  return;
}



undefined8 FUN_140002794(void)

{
  return 0;
}



undefined8 FUN_140002798(void)

{
  return 1;
}



undefined8 FUN_1400027a0(void)

{
  return 0x4000;
}



void FUN_1400027a8(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400027af. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_140006700);
  return;
}



undefined1 FUN_1400027b8(void)

{
  return 1;
}



void _guard_check_icall(void)

{
  return;
}



undefined * FUN_1400027c0(void)

{
  return &DAT_140006710;
}



undefined * FUN_1400027c8(void)

{
  return &DAT_140006718;
}



void FUN_1400027d0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1400027c0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1400027c8();
  *puVar1 = *puVar1 | 2;
  return;
}



bool FUN_1400027ec(void)

{
  return DAT_14000604c == 0;
}



undefined * FUN_1400027f8(void)

{
  return &DAT_140006750;
}



undefined * FUN_140002800(void)

{
  return &DAT_140006748;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140002808(void)

{
  _DAT_140006720 = 0;
  return;
}



void FUN_140002810(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x140002844;
  FUN_140002808();
  *(undefined8 *)(puVar4 + -8) = 0x140002855;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x14000285f;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140002879;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1400028ba;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1400028ec;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x14000290e;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x14000292b;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x140002936;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x140002947;
    FUN_140002808();
  }
  return;
}



undefined8 thunk_FUN_140002794(void)

{
  return 0;
}



ulonglong FUN_140002960(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || ((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71(2,piVar3[0x3e] != 0);
  }
  return uVar2;
}



void FUN_1400029b4(void)

{
                    // WARNING: Could not recover jumptable at 0x0001400029bb. Too many branches
                    // WARNING: Treating indirect jump as call
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_1400029c4);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140002a20(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140004cf0; puVar1 < &DAT_140004cf0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000140002bbb)
// WARNING: Removing unreachable block (ram,0x000140002b9e)
// WARNING: Removing unreachable block (ram,0x000140002b6d)
// WARNING: Removing unreachable block (ram,0x000140002ad4)
// WARNING: Removing unreachable block (ram,0x000140002ab1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140002a98(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_140006068 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_140006060 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140006728 = DAT_140006728 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_140006728 = DAT_140006728 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_140006058 = 1;
  DAT_14000605c = 2;
  uVar6 = DAT_140006050 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_140006058 = 2;
    DAT_14000605c = 6;
    uVar6 = DAT_140006050 & 0xffffffffffffffee;
  }
  DAT_140006050 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      _DAT_140006058 = 3;
      uVar6 = DAT_140006050;
      uVar5 = DAT_14000605c | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_140006058 = 5;
        uVar6 = DAT_140006050 & 0xfffffffffffffffd;
        uVar5 = DAT_14000605c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_14000605c = DAT_14000605c | 0x68;
          _DAT_140006058 = 6;
          uVar6 = DAT_140006050 & 0xffffffffffffffd9;
          uVar5 = DAT_14000605c;
        }
      }
      DAT_14000605c = uVar5;
      DAT_140006050 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_140006050 = DAT_140006050 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_140006724 = uVar10 & 0x400ff;
        DAT_140006050 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_140006050;
        if (1 < _DAT_140006724) {
          DAT_140006050 = DAT_140006050 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_140006050 = DAT_140006050 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_140006070 != 0;
}



void FUN_140002d78(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)malloc(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DAT_140006730;
    puVar2[1] = param_1;
    DAT_140006730 = puVar2;
    return;
  }
  std::_Xbad_alloc();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __cdecl std::_Xbad_alloc(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002db5. Too many branches
                    // WARNING: Treating indirect jump as call
  _Xbad_alloc();
  return;
}



void __CxxFrameHandler4(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dc1. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler4();
  return;
}



void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x000140002dcd. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dd3. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dd9. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002ddf. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002de5. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002deb. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void _seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002df1. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_exe();
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002df7. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002dfd. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e03. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e09. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _get_initial_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e0f. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_narrow_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e15. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e1b. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x000140002e21. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x000140002e27. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002e2d. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e33. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e39. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e3f. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e4b. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002e51. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e5d. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000140002e63. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e69. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e6f. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e75. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000140002e7b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_140001fe0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002f5f. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140002f65. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000140002f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_1400030cf(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_140003108(void)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  
  while (_Memory = DAT_140006730, DAT_140006730 != (undefined8 *)0x0) {
    puVar1 = DAT_140006730 + 1;
    DAT_140006730 = (undefined8 *)*DAT_140006730;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    free(_Memory);
  }
  return;
}



