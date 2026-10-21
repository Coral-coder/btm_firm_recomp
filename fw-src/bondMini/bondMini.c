/* Ghidra 11.1.2 headless decompilation of application.bin, base 0x26000. */
/* Derived from vendor firmware: for private interoperability study only. */

/* ---- thunk_FUN_0002fab8 @ 00026208 ---- */

void thunk_FUN_0002fab8(void)

{
  (*DAT_0002620c)();
  return;
}


/* ---- FUN_00026218 @ 00026218 ---- */

void FUN_00026218(void)

{
  FUN_00028228(0x4001);
  return;
}


/* ---- FUN_00026234 @ 00026234 ---- */

undefined4 FUN_00026234(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    ExclusiveAccess((uint *)(param_1 + 4));
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = (uVar3 & 0xffff) + (uint)*(ushort *)(param_1 + 0xe);
    if (*(ushort *)(param_1 + 0xc) <= uVar4) {
      uVar4 = uVar4 - *(ushort *)(param_1 + 0xc);
    }
    if (uVar4 == *(ushort *)(param_1 + 8)) break;
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 4));
    if (bVar1) {
      *(uint *)(param_1 + 4) = uVar4 & 0xffff | uVar3 & 0xffff0000;
      uVar2 = 1;
LAB_00026266:
      *param_2 = uVar3;
      return uVar2;
    }
  }
  ClearExclusiveLocal();
  uVar2 = 0;
  goto LAB_00026266;
}


/* ---- FUN_0002626c @ 0002626c ---- */

void FUN_0002626c(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 4));
    uVar2 = *(uint *)(param_1 + 4);
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 4));
  } while (!bVar1);
  *(uint *)(param_1 + 4) = uVar2 & 0xffff | uVar2 << 0x10;
  return;
}


/* ---- FUN_0002627e @ 0002627e ---- */

undefined4 FUN_0002627e(int param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 >> 0x10 == (uint)*(ushort *)(param_1 + 6)) {
      ClearExclusiveLocal();
      uVar2 = 0;
      goto LAB_000262b2;
    }
    uVar4 = (uVar3 >> 0x10) + (uint)*(ushort *)(param_1 + 0xe);
    if (*(ushort *)(param_1 + 0xc) <= uVar4) {
      uVar4 = uVar4 - *(ushort *)(param_1 + 0xc);
    }
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar1);
  *(uint *)(param_1 + 8) = uVar3 & 0xffff | uVar4 << 0x10;
  uVar2 = 1;
LAB_000262b2:
  *param_2 = uVar3;
  return uVar2;
}


/* ---- FUN_000262b8 @ 000262b8 ---- */

void FUN_000262b8(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar2 = *(uint *)(param_1 + 8);
    bVar1 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar1);
  *(uint *)(param_1 + 8) = uVar2 & 0xffff0000 | (int)uVar2 >> 0x10 & 0xffffU;
  return;
}


/* ---- FUN_000262ca @ 000262ca ---- */

undefined4 FUN_000262ca(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  do {
    ExclusiveAccess((uint *)(param_1 + 8));
    uVar4 = *(uint *)(param_1 + 8);
    uVar1 = *(ushort *)(param_1 + 6);
    uVar3 = (uint)uVar1;
    bVar5 = uVar4 != (uVar4 >> 0x10 | uVar4 << 0x10);
    uVar2 = 0;
    if (bVar5) {
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar3 = CONCAT22(uVar1,uVar1);
    }
    if (bVar5) {
      uVar3 = uVar4 | uVar3 << 0x10;
    }
    else {
      uVar4 = *(uint *)(param_1 + 4);
      if (uVar4 == (uVar4 >> 0x10 | uVar4 << 0x10)) {
        uVar2 = 1;
      }
    }
    bVar5 = (bool)hasExclusiveAccess((uint *)(param_1 + 8));
  } while (!bVar5);
  *(uint *)(param_1 + 8) = uVar3;
  return uVar2;
}


/* ---- FUN_000262fc @ 000262fc ---- */

undefined4 FUN_000262fc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  *param_3 = param_2;
  return uVar2;
}


/* ---- FUN_00026314 @ 00026314 ---- */

void FUN_00026314(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 | param_2;
  *param_3 = uVar2 | param_2;
  return;
}


/* ---- FUN_0002632e @ 0002632e ---- */

void FUN_0002632e(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 & param_2;
  *param_3 = uVar2 & param_2;
  return;
}


/* ---- FUN_00026348 @ 00026348 ---- */

void FUN_00026348(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2 ^ param_2;
  *param_3 = uVar2 ^ param_2;
  return;
}


/* ---- FUN_00026362 @ 00026362 ---- */

void FUN_00026362(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    ExclusiveAccess(param_1);
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + param_2;
  *param_3 = iVar2 + param_2;
  return;
}


/* ---- FUN_0002637c @ 0002637c ---- */

void FUN_0002637c(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  
  do {
    ExclusiveAccess(param_1);
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 - param_2;
  *param_3 = iVar2 - param_2;
  return;
}


/* ---- FUN_00026396 @ 00026396 ---- */

undefined4 FUN_00026396(int *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  do {
    uVar2 = 0;
    ExclusiveAccess(param_1);
    iVar3 = *param_1;
    bVar4 = iVar3 == *param_2;
    if (bVar4) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      param_4 = 1;
      if (bVar1) {
        param_4 = 0;
        *param_1 = param_3;
      }
    }
    if (bVar4) {
      uVar2 = 1;
    }
    else {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      param_4 = 1;
      if (bVar1) {
        param_4 = 0;
        *param_1 = iVar3;
      }
    }
    if (!bVar4) {
      *param_2 = iVar3;
    }
  } while (param_4 != 0);
  return uVar2;
}


/* ---- FUN_000263c0 @ 000263c0 ---- */

void FUN_000263c0(uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  
  do {
    ExclusiveAccess(param_1);
    uVar2 = *param_1;
    if (param_2 <= uVar2) {
      uVar2 = uVar2 - param_2;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar2;
  *param_3 = uVar2;
  return;
}


/* ---- FUN_000263e0 @ 000263e0 ---- */

void FUN_000263e0(void)

{
  (*DAT_000263fc)();
                    /* WARNING: Could not recover jumptable at 0x000263e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00026400)();
  return;
}


/* ---- FUN_000263e8 @ 000263e8 ---- */

void FUN_000263e8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ea @ 000263ea ---- */

void FUN_000263ea(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ec @ 000263ec ---- */

void FUN_000263ec(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263ee @ 000263ee ---- */

void FUN_000263ee(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f0 @ 000263f0 ---- */

void FUN_000263f0(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f2 @ 000263f2 ---- */

void FUN_000263f2(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f4 @ 000263f4 ---- */

void FUN_000263f4(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f6 @ 000263f6 ---- */

void FUN_000263f6(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263f8 @ 000263f8 ---- */

void FUN_000263f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000263fa @ 000263fa ---- */

void FUN_000263fa(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00026404 @ 00026404 ---- */

longlong FUN_00026404(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  iVar3 = 0x40;
  while (iVar4 = iVar3 + -1, 0 < iVar3) {
    uVar6 = FUN_00026932(param_1,param_2,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_00026466(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      param_2 = (param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_00026466(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


/* ---- FUN_00026466 @ 00026466 ---- */

longlong FUN_00026466(uint param_1,int param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
  }
  return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                  param_1 << (param_3 & 0xff));
}


/* ---- FUN_00026484 @ 00026484 ---- */

void FUN_00026484(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined *)param_1 = *(undefined *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


/* ---- FUN_000264a8 @ 000264a8 ---- */

void FUN_000264a8(undefined *param_1,int param_2,undefined param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}


/* ---- FUN_000264b6 @ 000264b6 ---- */

void FUN_000264b6(undefined4 param_1,undefined4 param_2)

{
  FUN_000264a8(param_1,param_2,0);
  return;
}


/* ---- FUN_000264ba @ 000264ba ---- */

undefined4 FUN_000264ba(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000264a8(param_1,param_3,param_2);
  return param_1;
}


/* ---- FUN_000264cc @ 000264cc ---- */

int FUN_000264cc(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (int)pcVar2 - (int)(param_1 + 1);
}


/* ---- FUN_000264da @ 000264da ---- */

void FUN_000264da(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1)));
      uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_000264f4 @ 000264f4 ---- */

char * FUN_000264f4(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}


/* ---- FUN_00026506 @ 00026506 ---- */

void FUN_00026506(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0;
      ((uVar1 < param_3 && (*(char *)(param_1 + uVar1) == *(char *)(param_2 + uVar1))) &&
      (*(char *)(param_1 + uVar1) != '\0')); uVar1 = uVar1 + 1) {
  }
  return;
}


/* ---- FUN_00026524 @ 00026524 ---- */

uint FUN_00026524(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar1 = (int)(param_2 ^ param_4) >> 0x1f;
  uVar2 = -iVar1;
  uVar6 = param_3;
  uVar9 = param_4;
  if ((param_2 & 0x7fffffff) <= (param_4 & 0x7fffffff) &&
      (uint)(param_3 <= param_1) <= (param_2 & 0x7fffffff) - (param_4 & 0x7fffffff)) {
    uVar6 = param_1;
    uVar9 = param_2;
    param_2 = param_4;
    param_1 = param_3;
  }
  if ((uVar9 & 0x7fffffff | uVar6) != 0) {
    uVar8 = param_2 >> 0x14;
    uVar3 = uVar8 & 0x7ff;
    iVar4 = uVar3 - ((uVar9 << 1) >> 0x15);
    if (iVar4 < 0x40) {
      uVar9 = uVar9 & 0xfffff | 0x100000;
      if (uVar2 != 0) {
        bVar10 = uVar6 != 0;
        uVar6 = -uVar6;
        uVar9 = -(uint)bVar10 - uVar9;
      }
      uVar11 = FUN_00026466(uVar6,uVar9,0x40 - iVar4);
      uVar7 = (uint)(uVar11 >> 0x20);
      uVar5 = (uint)uVar11;
      lVar12 = FUN_00026952(uVar6,uVar9,iVar4);
      lVar12 = lVar12 + CONCAT44(param_2,param_1);
      uVar6 = (uint)lVar12;
      uVar9 = (uint)((ulonglong)lVar12 >> 0x20);
      if ((param_2 ^ uVar9) >> 0x14 != 0) {
        if (uVar2 == 0) {
          uVar11 = CONCAT44(uVar7 >> 1 | uVar6 * -0x80000000,
                            (uint)((uVar11 & 0x100000000) != 0) << 0x1f | uVar5 >> 1);
          uVar9 = uVar9 + uVar8 * -0x100000 + 0x100000;
          lVar12 = CONCAT44((uVar9 >> 1) + uVar8 * 0x100000,
                            (uint)((uVar9 & 1) != 0) << 0x1f | uVar6 >> 1);
        }
        else {
          if (iVar4 < 2) {
            uVar6 = FUN_00026994(uVar6,uVar9 + uVar8 * -0x100000 + 0x100000,uVar5,uVar7,0,
                                 (uVar8 & 0x800) << 0x14,uVar3);
            return uVar6;
          }
          lVar12 = CONCAT44(uVar8 * -0x100000 + uVar9 * 2 + (uint)CARRY4(uVar6,uVar6),
                            uVar6 * 2 | uVar7 >> 0x1f);
          uVar11 = CONCAT44(uVar7 * 2 + (uint)CARRY4(uVar5,uVar5),uVar5 * 2);
        }
      }
    }
    else {
      uVar11 = CONCAT44(-(uint)(1 < (uint)(iVar1 * -2)),iVar1 * 2 + 1);
      lVar12 = CONCAT44(param_2 - (param_1 < uVar2),param_1 + iVar1);
    }
    uVar6 = FUN_00026976((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),(int)uVar11,
                         (int)(uVar11 >> 0x20));
    return uVar6;
  }
  return param_1;
}


/* ---- FUN_00026666 @ 00026666 ---- */

void FUN_00026666(void)

{
  FUN_00026524();
  return;
}


/* ---- FUN_00026672 @ 00026672 ---- */

void FUN_00026672(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    uVar6 = (uint)((ulonglong)param_1 * (ulonglong)param_3);
    uVar2 = param_2 & 0xfffff | 0x100000;
    uVar3 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_1 >> 10 | (param_2 & 0xfffff) << 0x16;
    uVar8 = param_3 >> 10 | (param_4 & 0xfffff) << 0x16;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar8;
    uVar7 = (uint)lVar1;
    iVar5 = uVar4 * (uVar3 >> 10) + (uVar2 >> 10) * uVar8 + (int)((ulonglong)lVar1 >> 0x20);
    uVar8 = ((param_1 * uVar3 +
             uVar2 * param_3 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20)) -
            (iVar5 * 0x100000 | uVar7 >> 0xc)) - (uint)(uVar6 < uVar7 * 0x100000);
    uVar4 = param_1 >> 0x1a | uVar2 << 6;
    uVar2 = param_3 >> 0x1a | uVar3 << 6;
    uVar3 = uVar6 + uVar7 * -0x100000 >> 0x14 | uVar8 * 0x1000;
    lVar1 = (ulonglong)uVar4 * (ulonglong)uVar2 +
            (ulonglong)((iVar5 - uVar4 * uVar2) + (uVar8 >> 0x14) + (uint)CARRY4(uVar3,uVar7));
    FUN_00026994((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar6 * 0x1000,uVar3 + uVar7,0,
                 (param_2 ^ param_4) & 0x80000000,
                 (((param_4 & 0x7fffffff) << 1) >> 0x15) + (((param_2 & 0x7fffffff) << 1) >> 0x15) +
                 -0x3ff);
  }
  return;
}


/* ---- FUN_00026756 @ 00026756 ---- */

void FUN_00026756(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if (((param_1 | param_2 & 0x7fffffff) != 0) && ((param_3 | param_4 & 0x7fffffff) != 0)) {
    uVar5 = param_4 & 0xfffff | 0x100000;
    uVar4 = param_2 & 0xfffff | 0x100000;
    iVar7 = (((param_2 & 0x7fffffff) << 1) >> 0x15) - (((param_4 & 0x7fffffff) << 1) >> 0x15);
    iVar8 = iVar7 + 0x3fd;
    if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
      iVar8 = iVar7 + 0x3fe;
    }
    else {
      bVar10 = CARRY4(param_1,param_1);
      param_1 = param_1 * 2;
      uVar4 = uVar4 * 2 + (uint)bVar10;
    }
    if (-1 < iVar8) {
      uVar3 = 0x100000;
      uVar6 = 0;
      uVar9 = 0;
      for (uVar2 = 0; (uVar2 | uVar3) != 0; uVar2 = (uint)(uVar1 != 0) << 0x1f | uVar2 >> 1) {
        if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          bVar10 = param_1 < param_3;
          param_1 = param_1 - param_3;
          uVar4 = (uVar4 - uVar5) - (uint)bVar10;
          uVar6 = uVar6 | uVar2;
          uVar9 = uVar9 | uVar3;
        }
        uVar1 = uVar3 & 1;
        uVar3 = uVar3 >> 1;
        bVar10 = CARRY4(param_1,param_1);
        param_1 = param_1 * 2;
        uVar4 = uVar4 * 2 + (uint)bVar10;
      }
      if ((param_1 | uVar4) != 0) {
        if ((param_1 ^ param_3 | uVar4 ^ uVar5) == 0) {
          param_1 = 0;
          uVar4 = 0x80000000;
        }
        else if (uVar5 < uVar4 || uVar4 - uVar5 < (uint)(param_3 <= param_1)) {
          param_1 = 0xfffffffe;
          uVar4 = 0xffffffff;
        }
        else {
          param_1 = 1;
          uVar4 = 0;
        }
      }
      FUN_00026976(uVar6,uVar9 + iVar8 * 0x100000 + ((param_2 ^ param_4) & 0x80000000),param_1,uVar4
                  );
      return;
    }
  }
  return;
}


/* ---- FUN_00026834 @ 00026834 ---- */

void FUN_00026834(uint param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 >> 0x1f;
  FUN_00026994((param_1 ^ uVar1) - uVar1,0,0,0,0,uVar1 * -0x80000000,0x433);
  return;
}


/* ---- FUN_00026856 @ 00026856 ---- */

void FUN_00026856(undefined4 param_1)

{
  FUN_00026994(param_1,0,0,0,0,0,0x433);
  return;
}


/* ---- FUN_00026870 @ 00026870 ---- */

int FUN_00026870(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 << 1) >> 0x15;
  if (uVar1 < 0x3ff) {
    param_1 = 0;
  }
  else {
    if (uVar1 < 0x434) {
      param_1 = FUN_00026932(param_1,param_2 & 0xfffff | 0x100000,-(uVar1 - 0x433));
    }
    else {
      param_1 = param_1 << (uVar1 - 0x433 & 0xff);
    }
    if ((param_2 & 0x80000000) != 0) {
      return -param_1;
    }
  }
  return param_1;
}


/* ---- FUN_000268ae @ 000268ae ---- */

int FUN_000268ae(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 << 1) >> 0x15;
  if (uVar2 < 0x3ff) {
    return 0;
  }
  if (uVar2 < 0x434) {
    iVar1 = FUN_00026932(param_1,param_2 & 0xfffff | 0x100000,-(uVar2 - 0x433));
    return iVar1;
  }
  return param_1 << (uVar2 - 0x433 & 0xff);
}


/* ---- FUN_000268e0 @ 000268e0 ---- */

undefined8 FUN_000268e0(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (uVar1 != 0) {
    return CONCAT44(param_1 & 0x80000000 | ((uVar1 >> 0x17) + 0x380) * 0x100000 |
                    (uVar1 << 9) >> 0xc,param_1 << 0x1d);
  }
  return 0;
}


/* ---- FUN_00026906 @ 00026906 ---- */

int FUN_00026906(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar2 = 0x20;
  while (uVar3 = uVar2 - 1, 0 < (int)uVar2) {
    uVar2 = uVar3;
    if (param_2 <= param_1 >> (uVar3 & 0xff)) {
      param_1 = param_1 - (param_2 << (uVar3 & 0xff));
      iVar1 = iVar1 + (1 << (uVar3 & 0xff));
    }
  }
  return iVar1;
}


/* ---- FUN_00026932 @ 00026932 ---- */

ulonglong FUN_00026932(uint param_1,uint param_2,uint param_3)

{
  if (0x1f < (int)param_3) {
    return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
  }
  return CONCAT44(param_2 >> (param_3 & 0xff),
                  param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
}


/* ---- FUN_00026952 @ 00026952 ---- */

undefined8 FUN_00026952(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 0x20) {
    iVar2 = (int)param_2 >> (param_3 & 0xff);
    uVar1 = param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff);
  }
  else {
    uVar1 = (int)param_2 >> (param_3 - 0x20 & 0xff);
    iVar2 = (int)(param_2 | uVar1) >> 0x1f;
  }
  return CONCAT44(iVar2,uVar1);
}


/* ---- FUN_00026976 @ 00026976 ---- */

undefined8 FUN_00026976(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  
  if (param_4 < 0) {
    bVar1 = 0xfffffffe < param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + (uint)bVar1;
    if ((param_3 * 2 | param_4 * 2 + (uint)CARRY4(param_3,param_3)) == 0) {
      param_1 = param_1 & 0xfffffffe;
    }
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_00026994 @ 00026994 ---- */

ulonglong FUN_00026994(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                      int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    iVar1 = LZCOUNT(param_1) + 0x20;
  }
  else {
    iVar1 = LZCOUNT(param_2);
  }
  uVar3 = FUN_00026466();
  uVar2 = (uint)(uVar3 >> 0x20);
  if (((uint)uVar3 | param_3 | uVar2 | param_4) != 0) {
    if ((param_3 | param_4) != 0) {
      uVar4 = FUN_00026932(param_3,param_4,0x40 - iVar1);
      lVar5 = FUN_00026466(param_3,param_4,iVar1);
      uVar3 = CONCAT44(uVar2 | (uint)((ulonglong)uVar4 >> 0x20),
                       (uint)uVar3 | (uint)uVar4 | (uint)(lVar5 != 0));
    }
    uVar2 = (uint)(uVar3 >> 0xb);
    iVar1 = (param_7 - iVar1) + 10;
    if (-1 < iVar1) {
      uVar3 = FUN_00026976(uVar2 + param_5,
                           iVar1 * 0x100000 + (int)((uVar3 >> 0xb) >> 0x20) + param_6 +
                           (uint)CARRY4(uVar2,param_5),0,(int)uVar3 << 0x15);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00026a30 @ 00026a30 ---- */

undefined8 FUN_00026a30(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((param_2 & 0x7fffffff | param_1) != 0) && (uVar1 = (param_2 << 1) >> 0x15, uVar1 < 0x434)) {
    if (0x3fe < uVar1) {
      uVar2 = FUN_00026466(param_1,param_2,uVar1 - 0x3f3);
      uVar3 = FUN_00026932(param_1,param_2,-(uVar1 - 0x433));
      uVar2 = FUN_00026976((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                           (int)((ulonglong)uVar2 >> 0x20));
      uVar2 = FUN_00026466((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),-(uVar1 - 0x433));
      return uVar2;
    }
    if ((uVar1 < 0x3fe) || ((param_2 << 0xc | param_1 >> 0x14 | param_1 << 0xc) == 0)) {
      param_1 = 0;
      param_2 = 0;
    }
    else {
      param_2 = param_2 & 0x80000000 | DAT_00026ab4;
      param_1 = 0;
    }
  }
  return CONCAT44(param_2,param_1);
}


/* ---- FUN_00026ab8 @ 00026ab8 ---- */

int FUN_00026ab8(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_00026ae8 @ 00026ae8 ---- */

int FUN_00026ae8(int param_1,int param_2)

{
  if (-1 < param_2) {
    param_1 = -param_1;
  }
  return param_1;
}


/* ---- FUN_00026b18 @ 00026b18 ---- */

void FUN_00026b18(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *extraout_r1;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  for (puVar7 = &DAT_0003a88c; puVar7 < &DAT_0003a8ac; puVar7 = puVar7 + 4) {
    param_3 = puVar7[2];
    (*(code *)puVar7[3])(*puVar7,puVar7[1]);
  }
  UNRECOVERED_JUMPTABLE = (code *)0x26b35;
  thunk_FUN_0002fab8();
  pbVar2 = &stack0x000002b0;
  pbVar3 = extraout_r1;
  do {
    uVar8 = (uint)*pbVar2;
    uVar6 = uVar8 & 7;
    pbVar1 = pbVar2 + 1;
    if ((*pbVar2 & 7) == 0) {
      pbVar1 = pbVar2 + 2;
      uVar6 = (uint)pbVar2[1];
    }
    uVar4 = (int)uVar8 >> 4;
    if (uVar4 == 0) {
      uVar4 = (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    }
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      *pbVar3 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar3 = pbVar3 + 1;
    }
    if ((int)(uVar8 << 0x1c) < 0) {
      pbVar2 = pbVar1 + 1;
      iVar5 = uVar4 + 2;
      pbVar1 = pbVar3 + -(uint)*pbVar1;
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        *pbVar3 = *pbVar1;
        pbVar3 = pbVar3 + 1;
        pbVar1 = pbVar1 + 1;
      }
    }
    else {
      while (uVar4 = uVar4 - 1, pbVar2 = pbVar1, -1 < (int)uVar4) {
        *pbVar3 = 0;
        pbVar3 = pbVar3 + 1;
      }
    }
  } while (pbVar3 < extraout_r1 + param_3);
                    /* WARNING: Could not recover jumptable at 0x00026b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* ---- FUN_00026b3c @ 00026b3c ---- */

void FUN_00026b3c(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar5 = param_2 + param_3;
  do {
    uVar6 = (uint)*param_1;
    uVar4 = uVar6 & 7;
    pbVar1 = param_1 + 1;
    if ((*param_1 & 7) == 0) {
      pbVar1 = param_1 + 2;
      uVar4 = (uint)param_1[1];
    }
    uVar2 = (int)uVar6 >> 4;
    if (uVar2 == 0) {
      uVar2 = (uint)*pbVar1;
      pbVar1 = pbVar1 + 1;
    }
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *param_2 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      param_2 = param_2 + 1;
    }
    if ((int)(uVar6 << 0x1c) < 0) {
      param_1 = pbVar1 + 1;
      iVar3 = uVar2 + 2;
      pbVar1 = param_2 + -(uint)*pbVar1;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        *param_2 = *pbVar1;
        param_2 = param_2 + 1;
        pbVar1 = pbVar1 + 1;
      }
    }
    else {
      while (uVar2 = uVar2 - 1, param_1 = pbVar1, -1 < (int)uVar2) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
    }
  } while (param_2 < pbVar5);
                    /* WARNING: Could not recover jumptable at 0x00026b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


/* ---- FUN_00026b92 @ 00026b92 ---- */

void FUN_00026b92(void)

{
  return;
}


/* ---- FUN_00026b94 @ 00026b94 ---- */

void FUN_00026b94(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_48 [4];
  undefined4 local_38 [2];
  int local_30;
  undefined4 local_2c [3];
  
  iVar4 = DAT_00026cf0;
  uVar10 = 0;
  sVar9 = 0x100;
  uVar8 = 1;
  uVar11 = 0;
  local_30 = 0;
  do {
    iVar3 = FUN_00030edc(sVar9);
    if ((iVar3 != 0) && ((*(uint *)(iVar4 + 0x304) & uVar8) != 0)) {
      FUN_00030ec8(sVar9);
      uVar10 = uVar10 | uVar8;
    }
    sVar9 = sVar9 + 4;
    uVar8 = uVar8 << 1;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 8);
  iVar3 = FUN_00030edc(0x17c);
  if (iVar3 != 0) {
    FUN_00030ec8(0x17c);
    uVar10 = uVar10 | 0x80000000;
    FUN_00030ea0(0,1,&local_30);
  }
  iVar3 = DAT_00026cf4;
  if ((uVar10 & 0xff) != 0) {
    uVar11 = 1;
    uVar8 = 0;
    do {
      if ((uVar11 & uVar10) != 0) {
        iVar5 = iVar4 + uVar8 * 4;
        pcVar7 = *(code **)(iVar3 + uVar8 * 4);
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)((uint)(*(int *)(iVar5 + 0x510) << 0x13) >> 0x1b,
                    (uint)(*(int *)(iVar5 + 0x510) << 0xe) >> 0x1e);
        }
      }
      uVar11 = uVar11 << 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
  }
  if (-1 < (int)uVar10) {
    return;
  }
  local_38[0] = 0;
  local_2c[0] = 0xffffffff;
  do {
    uVar10 = 0;
    uVar8 = uVar10;
    do {
      pbVar1 = (byte *)(iVar3 + uVar10 + 0x50);
      bVar2 = *pbVar1;
      uVar11 = bVar2 & 0xffffff3f;
      if ((*pbVar1 != 0xff) && (iVar4 = FUN_00030534(uVar11,local_2c), iVar4 != 0)) {
        bVar2 = bVar2 >> 6;
        iVar4 = FUN_0002b84c(uVar11);
        pcVar7 = *(code **)(iVar3 + iVar4 * 4);
        if (pcVar7 == (code *)0x0) {
          if (bVar2 == 3) goto LAB_00026c6c;
        }
        else {
          if (bVar2 == 3) {
LAB_00026c6c:
            FUN_00030544(uVar11,local_38);
          }
          uVar12 = (uint)(*(int *)(uVar11 * 4 + 0x50000700) << 0xe) >> 0x1e;
          iVar4 = FUN_00030534(uVar11,&local_30);
          if (iVar4 == 0) {
            if (uVar12 == 3) goto LAB_00026c9c;
          }
          else if (uVar12 == 2) {
LAB_00026c9c:
            if (bVar2 == 3) {
              if (uVar12 == 2) {
                uVar6 = 3;
              }
              else {
                uVar6 = 2;
              }
              FUN_00030e3e(uVar11,uVar6);
              uVar8 = uVar8 + 1 & 0xff;
            }
            if (pcVar7 != (code *)0x0) {
              (*pcVar7)(uVar11,bVar2);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 4);
    if (uVar8 == 0) {
      return;
    }
    FUN_00030ea0(0,1,local_48);
    if (local_48[0] == local_30) {
      return;
    }
    local_30 = local_48[0];
    local_2c[0] = local_38[0];
  } while( true );
}


/* ---- FUN_00026cf8 @ 00026cf8 ---- */

void FUN_00026cf8(uint param_1)

{
  *(int *)(&DAT_e000e280 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026d0e @ 00026d0e ---- */

void FUN_00026d0e(uint param_1)

{
  *(int *)(&DAT_e000e100 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026d24 @ 00026d24 ---- */

void FUN_00026d24(uint param_1)

{
  *(int *)((param_1 >> 5) * 4 + -0x1fff1e00) = 1 << (param_1 & 0x1f);
  return;
}


/* ---- FUN_00026d3a @ 00026d3a ---- */

void FUN_00026d3a(uint param_1,int param_2)

{
  undefined uVar1;
  
  uVar1 = (undefined)((uint)(param_2 << 0x1d) >> 0x18);
  if ((int)param_1 < 0) {
    *(undefined *)((param_1 & 0xf) + 0xe000ed14) = uVar1;
    return;
  }
  (&DAT_e000e400)[param_1] = uVar1;
  return;
}


/* ---- FUN_00026d80 @ 00026d80 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026d80(void)

{
  code **ppcVar1;
  int iVar2;
  
  iVar2 = FUN_00030a44(0x100);
  ppcVar1 = DAT_00026dd4;
  if (iVar2 != 0) {
    FUN_00030a52(0x100);
    _DAT_40000308 = 1;
    if (*(char *)((int)ppcVar1 + 5) == '\0') {
      *(undefined *)((int)ppcVar1 + 5) = 1;
      (**ppcVar1)(0);
    }
  }
  iVar2 = FUN_00030a44(0x104);
  if (iVar2 != 0) {
    FUN_00030a52(0x104);
    _DAT_40000308 = 2;
                    /* WARNING: Could not recover jumptable at 0x00026dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar1)(1);
    return;
  }
  return;
}


/* ---- FUN_00026dd8 @ 00026dd8 ---- */

void FUN_00026dd8(void)

{
  int iVar1;
  
  iVar1 = DAT_00026df8;
  *(undefined4 *)(DAT_00026df8 + 0x140) = 0;
  *(undefined4 *)(iVar1 + 0x144) = 0;
  *(undefined4 *)(iVar1 + 0x148) = 0;
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_00036cd0();
  return;
}


/* ---- FUN_00026dfc @ 00026dfc ---- */

void FUN_00026dfc(undefined4 param_1,uint param_2,code *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  code **ppcVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar4 = FUN_00031174(0x104);
  ppcVar3 = DAT_00026f40;
  puVar2 = DAT_00026f3c;
  if (iVar4 == 0) {
LAB_00026e56:
    if (*(char *)((int)ppcVar3 + 0x2e) == '\0') goto LAB_00026eb6;
  }
  else {
    FUN_00031184(0x104);
    if ((*(char *)((int)ppcVar3 + 0x2e) == '\0') || (*(char *)((int)ppcVar3 + 0x2f) != '\0')) {
      local_28 = local_28 & 0xffffff00;
      local_24 = ppcVar3[1];
      local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)(ppcVar3 + 2));
      if (ppcVar3[3] == (code *)0x0) {
        *(undefined *)(ppcVar3 + 4) = 0;
      }
      else {
        *(undefined2 *)((int)ppcVar3 + 0x1a) = *(undefined2 *)(ppcVar3 + 6);
        ppcVar3[1] = ppcVar3[3];
        *(undefined2 *)(ppcVar3 + 2) = *(undefined2 *)(ppcVar3 + 6);
        ppcVar3[3] = (code *)0x0;
        if (*(char *)((int)ppcVar3 + 0x2e) == '\0') {
          *puVar2 = 1;
        }
      }
      (**ppcVar3)(&local_28);
      *(undefined *)((int)ppcVar3 + 0x2f) = 0;
      goto LAB_00026e56;
    }
  }
  iVar4 = FUN_00031174(0x100);
  if (iVar4 == 0) goto LAB_00026eb6;
  FUN_00031184(0x100);
  uVar1 = *(ushort *)((int)ppcVar3 + 0x1a);
  uVar7 = (ushort)*(byte *)((int)ppcVar3 + 0x2d);
  if (uVar7 < uVar1) {
    *(ushort *)((int)ppcVar3 + 0x1a) = uVar1 - uVar7;
    pcVar5 = ppcVar3[1] + ((uint)*(ushort *)(ppcVar3 + 2) - (uint)(ushort)(uVar1 - uVar7)) * 2;
LAB_00026e9a:
    FUN_00031150(pcVar5);
  }
  else {
    if ((uVar1 == uVar7) && (pcVar5 = ppcVar3[3], pcVar5 != (code *)0x0)) {
      *(undefined *)((int)ppcVar3 + 0x2f) = 1;
      *(undefined2 *)((int)ppcVar3 + 0x1a) = 0;
      goto LAB_00026e9a;
    }
    if (uVar1 == uVar7) {
      *(undefined *)((int)ppcVar3 + 0x2f) = 1;
      *(undefined2 *)((int)ppcVar3 + 0x1a) = 0;
    }
  }
  FUN_00031184(0x104);
  DAT_00026f3c[1] = 1;
LAB_00026eb6:
  iVar4 = FUN_00031174(0x110);
  if (iVar4 != 0) {
    FUN_00031184(0x110);
    *(undefined *)(ppcVar3 + 4) = 0;
    local_28 = CONCAT31(local_28._1_3_,2);
    (**ppcVar3)(&local_28);
  }
  iVar4 = FUN_00031174(0x114);
  if (iVar4 == 0) {
    pcVar5 = ppcVar3[5];
    while (pcVar5 != (code *)0x0) {
      iVar4 = LZCOUNT(pcVar5);
      iVar8 = iVar4 * 4 + 0x118;
      pcVar5 = (code *)((uint)pcVar5 & ~(0x80000000U >> iVar4));
      iVar6 = FUN_00031174(iVar8);
      if (iVar6 != 0) {
        FUN_00031184(iVar8);
        local_28 = CONCAT31(local_28._1_3_,1);
        (**ppcVar3)(&local_28);
      }
    }
  }
  else {
    FUN_00031184(0x114);
    *(undefined *)(ppcVar3 + 4) = 0;
  }
  return;
}


/* ---- FUN_00026f44 @ 00026f44 ---- */

void FUN_00026f44(void)

{
  FUN_000372f0(DAT_00026f50,DAT_00026f4c);
  return;
}


/* ---- FUN_00026f54 @ 00026f54 ---- */

void FUN_00026f54(void)

{
  FUN_000372f0(0x40004000,DAT_00026f60);
  return;
}


/* ---- FUN_00026f64 @ 00026f64 ---- */

void FUN_00026f64(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  software_interrupt(0x28);
  FUN_00034324(s_SPI_Flash_Erase_Sector__x_addr___00026fb8,param_1,param_1);
  if (param_1 == 0) {
LAB_00026fae:
    FUN_00034324(s_SPI_Flash_Erase_Sector_OK__x_0002702c,param_1);
  }
  else {
    do {
      FUN_00030a64(0x32);
      software_interrupt(0x28);
      FUN_00034324(s_SPI_Flash_Erase_Sector_againg__d_00026fdc,iVar1,param_1,param_1);
      if (param_1 == 0) goto LAB_00026fae;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
  }
  FUN_00034324(s_SPI_Flash_Erase_Sector_END__d__x_00027008,iVar1,param_1);
  FUN_00030a64(0x32);
  return;
}


/* ---- thunk_FUN_00026484 @ 0002704c ---- */

void thunk_FUN_00026484(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined *)param_1 = *(undefined *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


/* ---- FUN_00027050 @ 00027050 ---- */

void FUN_00027050(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char local_120 [260];
  
  software_interrupt(0x29);
  FUN_00034324(s_write_flash__x_addr__x__d_00027128,param_2,param_2,param_3);
  if (param_2 == 0) {
LAB_000270c2:
    FUN_00034324(s_SPI_Flash_Write_Page_OK__x_00027168,param_2);
  }
  else {
    bVar2 = 0;
    do {
      FUN_00030a64(0x32);
      software_interrupt(0x29);
      FUN_00034324(s_write_flash_againg__d__x__x_00027148,bVar2,param_2,param_2);
      if (param_2 == 0) goto LAB_000270c2;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 10);
  }
  FUN_00030a64(0x14);
  FUN_000264b6(local_120,0x100);
  bVar2 = 0;
  while( true ) {
    FUN_00026484(local_120,param_2,param_3);
    for (uVar1 = 0; (uVar1 < param_3 && (local_120[uVar1] == *(char *)(param_1 + uVar1)));
        uVar1 = uVar1 + 1 & 0xffff) {
    }
    if (uVar1 == param_3) break;
    FUN_00030a64(0x14);
    bVar2 = bVar2 + 1;
    if (0x13 < bVar2) {
LAB_000270f8:
      if (bVar2 == 0x14) {
        FUN_00034324(s_write_0002719c);
        FUN_00034328(param_1,param_3);
        FUN_00034324(s_read_000271a4);
        FUN_00034328(local_120,param_3);
        FUN_00034324(s_write_flash_fail__d_000271ac,0x14);
      }
      return;
    }
  }
  FUN_00034324(s_write_flash_OK__d_00027188,bVar2);
  goto LAB_000270f8;
}


/* ---- thunk_FUN_00036b6c @ 000271c4 ---- */

void thunk_FUN_00036b6c(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint in_r3;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uStack_28;
  
  iVar1 = DAT_00036be8;
  uVar8 = *(undefined4 *)(DAT_00036be8 + 4);
  iVar7 = *(int *)(DAT_00036be8 + 8);
  uStack_28 = in_r3;
  iVar2 = FUN_0002c8c4(&uStack_28);
  if (iVar2 == 0) {
    iVar2 = FUN_0002f8e4(0);
    if (iVar2 == 0) goto LAB_00036be0;
  }
  else {
    iVar2 = 0;
    puVar3 = *(uint **)(iVar1 + 4);
    uVar5 = uStack_28;
    puVar6 = (uint *)0x0;
    while (puVar4 = puVar3, puVar4 != (uint *)0x0) {
      uVar9 = *puVar4;
      if (uVar5 < uVar9) {
        *puVar4 = uVar9 - uVar5;
        break;
      }
      uVar5 = uVar5 - uVar9;
      iVar2 = iVar2 + uVar9;
      *puVar4 = 0;
      puVar3 = (uint *)puVar4[7];
      if (puVar4[3] != 0) {
        puVar4[1] = iVar7 + iVar2 & 0xffffff;
        puVar4[2] = puVar4[3];
        puVar4[7] = (uint)puVar6;
        puVar6 = puVar4;
      }
    }
    *(uint **)(iVar1 + 4) = puVar4;
    FUN_0002f8e4(puVar6);
  }
  FUN_0002ba9c(uVar8);
LAB_00036be0:
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- thunk_FUN_000313dc @ 000271c8 ---- */

void thunk_FUN_000313dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  code **ppcStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  ppcStack_8 = param_4;
  FUN_000314a8(&uStack_10,DAT_000313fc);
  while (ppcStack_8 != (code **)0x0) {
    (**ppcStack_8)(ppcStack_8[1]);
    FUN_000314d6(&uStack_10);
  }
  return;
}


/* ---- FUN_000271cc @ 000271cc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000271cc(void)

{
  char cVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = (byte *)(DAT_00027498 + 4);
  cVar1 = *DAT_00027498;
  pbVar3 = (byte *)(DAT_00027498 + 8);
  if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
     ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5)))))) {
    *DAT_0002749c = ((uint)_DAT_10000324 << 0x13) >> 0x1b;
LAB_00027214:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_0002721e;
    *(undefined4 *)(DAT_000274a4 + 0x74) = DAT_000274a0;
LAB_0002724a:
    *DAT_000274a8 = (uint)(_DAT_10000244 << 0x10) >> 0x1d;
LAB_0002725e:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_00027268;
    *DAT_000274ac = *DAT_000274ac & 0xfeffffff;
LAB_00027298:
    _DAT_4000010c = 0;
    _DAT_40000110 = 0;
    DAT_000274a8[-1] = 0;
LAB_000272b2:
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 3) goto LAB_000272bc;
    DAT_000274a8[0x19] = 3;
LAB_000272e2:
    puVar2 = DAT_000274b0;
    *DAT_000274b0 = 5;
    DAT_000274b0[0x1e] = 1;
    DAT_000274b0[2] = 0;
    puVar2[1] = 0x3f;
LAB_00027302:
    puVar2 = DAT_000274b8;
    if (((uint)*pbVar3 << 0x18) >> 0x1c != 5) goto LAB_0002730c;
    *DAT_000274b8 = *DAT_000274b4;
    puVar2[1] = DAT_000274b4[1];
    puVar2[2] = DAT_000274b4[2];
    puVar2[3] = DAT_000274b4[3];
    puVar2[4] = DAT_000274b4[4];
    puVar2[5] = DAT_000274b4[5];
    puVar2 = DAT_000274b8;
    DAT_000274b8[8] = DAT_000274b4[6];
    puVar2[9] = DAT_000274b4[7];
    puVar2[10] = DAT_000274b4[8];
    puVar2[0xb] = DAT_000274b4[9];
    puVar2[0xc] = DAT_000274b4[10];
    puVar2[0xd] = DAT_000274b4[0xb];
    puVar2 = DAT_000274b8;
    DAT_000274b8[0x10] = DAT_000274b4[0xc];
    puVar2[0x11] = DAT_000274b4[0xd];
    puVar2[0x12] = DAT_000274b4[0xe];
    puVar2[0x13] = DAT_000274b4[0xf];
    puVar2[0x14] = DAT_000274b4[0x10];
LAB_000273c6:
    uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c;
    if (((uVar5 != 3) && (uVar5 != 4)) && (uVar5 != 5)) goto LAB_000273d8;
    *DAT_000274bc = _DAT_10000258 & 0x4f;
  }
  else {
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_00027214;
LAB_0002721e:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
       ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5))))))
    goto LAB_0002724a;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_0002725e;
LAB_00027268:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) &&
       ((uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c, uVar5 == 3 || ((uVar5 == 4 || (uVar5 == 5))))))
    goto LAB_00027298;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_000272b2;
LAB_000272bc:
    if (((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) && (((uint)*pbVar3 << 0x18) >> 0x1c == 3))
    goto LAB_000272e2;
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_00027302;
LAB_0002730c:
    if ((cVar1 == '\x06') && ((*pbVar4 & 0xf) == 0)) goto LAB_000273c6;
LAB_000273d8:
    if ((cVar1 != '\x06') || ((*pbVar4 & 0xf) != 0)) goto LAB_00027412;
  }
  uVar5 = ((uint)*pbVar3 << 0x18) >> 0x1c;
  if ((((uVar5 == 3) || (uVar5 == 4)) || (uVar5 == 5)) && ((*DAT_000274c0 & 1) != 0)) {
    *DAT_000274c0 = 0xfffffffe;
  }
LAB_00027412:
  if ((_DAT_10000130 == 6) && (_DAT_10000134 == 6)) {
    *DAT_000274c4 = *DAT_000274c4 | 0x400;
  }
  DAT_000274ac[-0x1d] = DAT_000274ac[-0x1d] | 0xf00000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  if ((_DAT_1000120c & 1) == 0) {
    *DAT_000274d8 = DAT_000274d4;
    return;
  }
  *DAT_000274c8 = 1;
  do {
  } while (*DAT_000274cc == 0);
  do {
  } while (*DAT_000274cc == 0);
  *DAT_000274c8 = 0;
  do {
  } while (*DAT_000274cc == 0);
  DataSynchronizationBarrier(0xf);
  DAT_000274ac[-0x3c] = DAT_000274ac[-0x3c] & 0x700 | DAT_000274d0;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000274dc @ 000274dc ---- */

void FUN_000274dc(void)

{
  FUN_0002e818(DAT_000274ec,DAT_000274e8,4);
  return;
}


/* ---- FUN_000274f0 @ 000274f0 ---- */

void FUN_000274f0(void)

{
  FUN_0002e818(DAT_00027500,DAT_000274fc,4);
  return;
}


/* ---- FUN_00027504 @ 00027504 ---- */

void FUN_00027504(void)

{
                    /* WARNING: Could not recover jumptable at 0x00027508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_0002750c)();
  return;
}


/* ---- FUN_0002754c @ 0002754c ---- */

void FUN_0002754c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_00027564;
  *DAT_00027564 = 0;
  puVar2 = DAT_0002756c;
  *DAT_0002756c = DAT_00027568;
  puVar2[1] = 1;
  *puVar1 = 1;
  return;
}


/* ---- FUN_00027570 @ 00027570 ---- */

undefined4 FUN_00027570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_00027718(param_2,&uStack_8,&uStack_10,DAT_00027594);
  FUN_0002786c(0,&uStack_10);
  return uVar1;
}


/* ---- FUN_00027598 @ 00027598 ---- */

undefined8 FUN_00027598(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined uVar9;
  char cVar10;
  ulonglong in_d0;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_38;
  undefined4 uVar8;
  
  uVar3 = (uint)(in_d0 >> 0x20);
  uVar13 = FUN_00026a30((int)in_d0,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar1 = (undefined4)uVar13;
  uVar14 = FUN_00026666((int)in_d0,uVar3,uVar1,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar2 = (undefined4)uVar14;
  cVar10 = true;
  uVar9 = (in_d0 & 0x8000000000000000) == 0;
  uVar6 = (undefined4)((ulonglong)DAT_00027670 >> 0x20);
  uVar12 = (undefined4)DAT_00027668;
  uVar7 = (undefined4)((ulonglong)DAT_00027668 >> 0x20);
  uVar11 = (undefined4)DAT_00027660;
  uVar8 = (undefined4)((ulonglong)DAT_00027660 >> 0x20);
  if ((bool)uVar9) {
    FUN_00026ab8(uVar2,uVar5,(int)DAT_00027670,uVar6);
    if (cVar10 != '\0') {
      FUN_00026ae8(uVar2,uVar5,uVar12,uVar7);
      if ((bool)cVar10 && !(bool)uVar9) goto LAB_00027632;
      goto LAB_00027624;
    }
  }
  else {
    FUN_00026ab8(uVar2,uVar5,(int)DAT_00027670,uVar6);
    if ((bool)cVar10 && !(bool)uVar9) {
      FUN_00026ae8(uVar2,uVar5,uVar12,uVar7);
      if (cVar10 != '\0') goto LAB_00027632;
LAB_00027624:
      uVar13 = FUN_00026524(uVar1,uVar4,uVar11,uVar8);
      goto LAB_00027632;
    }
  }
  uVar13 = FUN_00026666(uVar1,uVar4,uVar11,uVar8);
LAB_00027632:
  local_38 = CONCAT44(uVar3 & 0x80000000 | (uint)((ulonglong)uVar13 >> 0x20) & 0x7fffffff,
                      (int)uVar13);
  return local_38;
}


/* ---- FUN_00027698 @ 00027698 ---- */

undefined4 FUN_00027698(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x20) {
    uVar1 = 1 << (param_1 & 0xff) & DAT_000276b8;
  }
  else {
    if (0x3f < (int)param_1) {
      return 1;
    }
    uVar1 = 1 << (param_1 - 0x20 & 0xff);
  }
  if (uVar1 != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000276bc @ 000276bc ---- */

int FUN_000276bc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  if (param_2 == 0) {
    iVar1 = FUN_0003381c(param_1,&local_10);
    if ((iVar1 != 0x3002) && (iVar1 != 0)) {
      FUN_00026218(iVar1,0x8d,DAT_00027714);
    }
    if (local_10 << 0x1e < 0) {
      return local_10 << 0x1e;
    }
  }
  iVar1 = FUN_00033894(param_1,0);
  if ((iVar1 != 0) && (iVar1 != 0x11)) {
    if (iVar1 == 0xd) {
      software_interrupt(0x76);
      iVar1 = param_1;
    }
    else if ((iVar1 != 0xb) && (iVar1 != 0x3002)) {
      iVar1 = FUN_00026218(iVar1,0xbc,DAT_00027714,local_10);
      return iVar1;
    }
  }
  return iVar1;
}


/* ---- FUN_00027718 @ 00027718 ---- */

int FUN_00027718(byte *param_1,int *param_2,undefined4 param_3,code *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char extraout_r1;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char local_39 [5];
  byte *pbStack_34;
  int *local_30;
  undefined4 local_2c;
  code *pcStack_28;
  
  pcStack_28 = param_4;
  local_2c = param_3;
  pbStack_34 = param_1;
  iVar6 = 0;
  local_30 = param_2;
  do {
    while( true ) {
      bVar1 = *param_1;
      if (bVar1 == 0) {
        return iVar6;
      }
      if (bVar1 == 0x25) break;
      (*param_4)(bVar1,local_2c);
      param_1 = param_1 + 1;
      iVar6 = iVar6 + 1;
    }
    uVar8 = 0;
    iVar9 = 0;
    while( true ) {
      pbVar5 = param_1 + 1;
      uVar2 = 1 << (*pbVar5 - 0x20 & 0xff);
      if ((uVar2 & DAT_00027868) == 0) break;
      uVar8 = uVar8 | uVar2;
      param_1 = pbVar5;
    }
    if (*pbVar5 == 0x2e) {
      pbVar5 = param_1 + 2;
      uVar8 = uVar8 | 4;
      if (*pbVar5 == 0x2a) {
        pbVar5 = param_1 + 3;
        iVar9 = *local_30;
        local_30 = local_30 + 1;
      }
      else {
        for (; *pbVar5 - 0x30 < 10; pbVar5 = pbVar5 + 1) {
          iVar9 = (uint)*pbVar5 + iVar9 * 10 + -0x30;
        }
      }
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return iVar6;
    }
    if ((bVar1 == 100) || (bVar1 == 0x69)) {
      iVar3 = *local_30;
      local_30 = local_30 + 1;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        local_39[1] = 0x2d;
      }
      else if ((int)(uVar8 << 0x14) < 0) {
        local_39[1] = 0x2b;
      }
      else {
        if ((uVar8 & 1) == 0) goto LAB_000277e2;
        local_39[1] = 0x20;
      }
      iVar4 = 1;
LAB_000277dc:
      pcVar7 = local_39 + 1;
      while (iVar3 != 0) {
        iVar3 = FUN_00026906(iVar3,10);
        pcVar7 = pcVar7 + -1;
        *pcVar7 = extraout_r1 + '0';
      }
      pcVar10 = local_39 + (1 - (int)pcVar7);
      if (-1 < (int)(uVar8 << 0x1d)) {
        iVar9 = 1;
      }
      if ((int)pcVar10 < iVar9) {
        iVar9 = iVar9 - (int)pcVar10;
      }
      else {
        iVar9 = 0;
      }
      for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
        (*param_4)(local_39[iVar3 + 1],local_2c);
        iVar6 = iVar6 + 1;
      }
      while (0 < iVar9) {
        (*param_4)(0x30,local_2c);
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + -1;
      }
      while (0 < (int)pcVar10) {
        (*param_4)(*pcVar7,local_2c);
        iVar6 = iVar6 + 1;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + -1;
      }
    }
    else {
      if (bVar1 == 0x75) {
        iVar3 = *local_30;
        local_30 = local_30 + 1;
LAB_000277e2:
        iVar4 = 0;
        goto LAB_000277dc;
      }
      (*param_4)(bVar1,local_2c);
      iVar6 = iVar6 + 1;
    }
    param_1 = pbVar5 + 1;
  } while( true );
}


/* ---- FUN_0002786c @ 0002786c ---- */

void FUN_0002786c(undefined param_1,undefined4 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  *param_2 = puVar1 + 1;
  *puVar1 = param_1;
  return;
}


/* ---- FUN_00027878 @ 00027878 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00027878(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _DAT_00027930;
  if (*(char *)(_DAT_00027930 + 0xc) == '\x01') {
    FUN_00034324(s____________touch_busy____________00027933 + 1);
  }
  if (param_1 << 0x1b < 0) {
    FUN_00034324(s_Double_TAP_detected__int_state__0_0002795c,param_1,*(undefined *)(iVar3 + 8),
                 *(undefined *)(iVar3 + 0xd));
    if (*(int *)(_DAT_0002798c + 8) == -1) {
      FUN_00034c04();
    }
    cVar1 = *(char *)(iVar3 + 8);
    if ((cVar1 == -0x7f) || (cVar1 == '\x01')) {
      FUN_00034324(s_Double_TAP_detected__001_000279ac);
      FUN_00038588();
      if (*(char *)(iVar3 + 8) == -0x7f) {
        FUN_00034324(s_Double_TAP_detected__002_000279c8);
      }
      iVar3 = FUN_00027d50();
      if (iVar3 != 0) {
        FUN_00034324(s_Start_adv_ERROR_in_func___s__lin_000279e8,DAT_000279e4,0x4f);
      }
      pcVar2 = s_Double_TAP_detected__003_00027a14;
    }
    else {
      if (cVar1 == -0x7c) {
        if (*(char *)(iVar3 + 0xd) == '\x12') {
          FUN_00034324(s_Double_TAP_detected__004_00027a30);
          FUN_00034c54();
          return;
        }
      }
      else if (cVar1 == -0x7b) {
        return;
      }
      FUN_00038588();
      pcVar2 = s_Double_TAP_detected__007_0002798f + 1;
    }
  }
  else {
    if (param_1 << 0x1a < 0) {
      FUN_00034324(s_Single_TAP_detected__int_state__0_00027a4c,param_1);
      iVar4 = _DAT_00027930 + 0xd;
      FUN_000264b6(iVar4,0xe);
      *(undefined *)(iVar3 + 0xd) = 0x16;
      FUN_00030234(iVar4);
      return;
    }
    pcVar2 = s_Double_TAP_detected__006_00027a74;
  }
  FUN_00034324(pcVar2);
  return;
}


/* ---- FUN_00027a90 @ 00027a90 ---- */

undefined4 FUN_00027a90(void)

{
  FUN_00026b92();
  return 1;
}


/* ---- FUN_00027a9a @ 00027a9a ---- */

undefined4 FUN_00027a9a(void)

{
  return 1;
}


/* ---- FUN_00027a9e @ 00027a9e ---- */

undefined4 FUN_00027a9e(void)

{
  return 1;
}


/* ---- FUN_00027aa2 @ 00027aa2 ---- */

undefined4 FUN_00027aa2(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if ((((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (*param_1 >> 1 == *param_2 >> 1))
     && (iVar1 = FUN_000264da(param_1 + 1,param_2 + 1,6), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00027ac8 @ 00027ac8 ---- */

undefined4 FUN_00027ac8(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00027ad4 @ 00027ad4 ---- */

undefined4 FUN_00027ad4(int param_1,uint param_2,int param_3)

{
  if ((*(uint *)(param_1 + 0xc) <= param_2) &&
     ((param_2 + param_3) - 1 <= *(uint *)(param_1 + 0x10))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00027aec @ 00027aec ---- */

uint FUN_00027aec(int param_1)

{
  return (param_1 + 1U) % 5;
}


/* ---- FUN_00027afa @ 00027afa ---- */

int FUN_00027afa(void)

{
  int iVar1;
  
  iVar1 = FUN_0002b438(0,2,1);
  if ((((iVar1 == 0) || (iVar1 == 7)) && ((iVar1 = FUN_0002b438(1,2,7), iVar1 == 0 || (iVar1 == 7)))
      ) && ((iVar1 = FUN_0002b438(0,0,10), iVar1 == 0 || (iVar1 == 7)))) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00027b30 @ 00027b30 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00027b30(void)

{
  int iVar1;
  undefined local_d0 [2];
  undefined local_ce;
  undefined local_cd;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined2 *local_70;
  undefined local_57;
  undefined local_54;
  undefined local_53;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined2 local_14 [2];
  undefined2 local_10;
  undefined *local_c;
  
  FUN_000264b6(local_d0,0xac);
  software_interrupt(0x6d);
  local_24 = local_16;
  local_23 = local_17;
  local_22 = local_18;
  local_21 = local_19;
  local_20 = local_1a;
  local_1f = local_1b;
  local_14[0] = 0xffff;
  local_c = &local_24;
  local_d0[0] = 2;
  local_ce = 1;
  local_b8 = 1;
  local_54 = 1;
  local_10 = 6;
  local_cd = 6;
  local_b4 = DAT_00027bfc;
  local_53 = 1;
  local_40 = 0x664;
  local_c0 = 0;
  local_bc = 0;
  local_3c = 18000;
  local_70 = local_14;
  local_57 = 0;
  local_2c = DAT_00027c00;
  local_48 = 0x180;
  local_44 = 3000;
  FUN_00034324(s_advertising_init_int__d_second___00027c07 + 1,*(undefined2 *)(_DAT_00027c04 + 0x34)
               ,*(undefined2 *)(_DAT_00027c04 + 0x36));
  iVar1 = FUN_00029cf0(_DAT_00027c2c,local_d0);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x660,s__________main_c_00027c2f + 1);
  }
  FUN_00029cea(_DAT_00027c2c,1);
  return;
}


/* ---- FUN_00027c40 @ 00027c40 ---- */

void FUN_00027c40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  FUN_00034324(s_____________advertising_start____00027cf8,param_1);
  if (param_1 == 0) {
    FUN_000264a8(DAT_00027d44,0x10,0xffff);
    iVar1 = DAT_00027d48;
    iVar6 = 8;
    *(undefined4 *)(DAT_00027d48 + 0x14) = 8;
    iVar2 = DAT_00027d44;
    piVar7 = (int *)(iVar1 + 0x14);
    iVar3 = FUN_00033dcc(0xffff);
    *piVar7 = 0;
    while ((iVar3 != 0xffff && (bVar8 = iVar6 != 0, iVar6 = iVar6 + -1, bVar8))) {
      iVar5 = *piVar7;
      *piVar7 = iVar5 + 1;
      *(short *)(iVar2 + iVar5 * 2) = (short)iVar3;
      iVar3 = FUN_00033dcc();
    }
    iVar2 = FUN_00034104(DAT_00027d44,*(undefined4 *)(iVar1 + 0x14));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x13a,s__________main_c_00027d34);
    }
    iVar2 = FUN_000338b0(DAT_00027d44,*(undefined4 *)(iVar1 + 0x14));
    if ((iVar2 != 6) && (iVar2 != 0)) {
      FUN_00026218(iVar2,0x141,s__________main_c_00027d34);
    }
    iVar2 = FUN_00029e78(DAT_00027d4c,3);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 0x145;
  }
  else {
    FUN_00034324(s_Erase_bonds__00027d24);
    iVar2 = FUN_00033f8c();
    if (iVar2 == 0) {
      return;
    }
    uVar4 = 0x450;
  }
  FUN_00026218(iVar2,uVar4,s__________main_c_00027d34);
  return;
}


/* ---- FUN_00027d50 @ 00027d50 ---- */

undefined4 FUN_00027d50(void)

{
  return 0;
}


/* ---- FUN_00027d54 @ 00027d54 ---- */

void FUN_00027d54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  motor_on(0x32,500,param_3,param_4,param_2,param_3,param_4);
  leds_req_breath(0xffffff,0x1e,200,200,1000,600,2000);
  return;
}


/* ---- FUN_00027d7e @ 00027d7e ---- */

void FUN_00027d7e(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined local_40 [16];
  undefined auStack_30 [13];
  undefined auStack_23 [16];
  undefined auStack_13 [3];
  
  uVar2 = 0;
  do {
    local_40[uVar2] = *(undefined *)(param_1 + (0xf - uVar2));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  FUN_000264b6(auStack_30,0xd);
  uVar2 = 0;
  do {
    uVar1 = uVar2 + 1;
    auStack_23[2 - uVar2] = *(undefined *)(param_2 + uVar2);
    uVar2 = uVar1;
  } while (uVar1 < 3);
  software_interrupt(0x46);
  uVar2 = 0;
  do {
    *(undefined *)(param_3 + uVar2) = auStack_13[2 - uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}


/* ---- FUN_00027dd0 @ 00027dd0 ---- */

undefined4 FUN_00027dd0(int param_1)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00027de0 @ 00027de0 ---- */

void FUN_00027de0(undefined4 param_1)

{
  FUN_0002a5ac(param_1,*(undefined *)(DAT_00027de8 + 3));
  return;
}


/* ---- FUN_00027fdc @ 00027fdc ---- */

void FUN_00027fdc(code **param_1,int param_2,uint param_3)

{
  char cVar1;
  code cVar2;
  uint uVar3;
  undefined uVar4;
  code *pcVar5;
  int iVar6;
  uint local_20;
  
  local_20 = 0;
LAB_00028150:
  if (param_3 <= local_20) {
    return;
  }
  switch(*(undefined *)(param_1 + 0x37)) {
  case 0:
    cVar1 = *(char *)(param_2 + local_20);
    *(char *)((int)param_1 + 0xdd) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x3b) = 4;
      param_1[0x34] = (code *)(param_1 + 0xf);
      param_1[0x35] = (code *)&NMI;
      uVar4 = 1;
      local_20 = local_20 + 1;
    }
    else {
      uVar3 = local_20 + 1;
      if (cVar1 != '\x01') goto LAB_0002803c;
      *(undefined *)(param_1 + 0x3b) = 5;
      param_1[0x34] = (code *)(param_1 + 0x2f);
      param_1[0x35] = (code *)0x1;
LAB_0002807a:
      local_20 = local_20 + 1;
      uVar4 = 2;
    }
    break;
  case 1:
    param_1[0x42] = *(code **)(local_20 + param_2);
    uVar3 = local_20 + 4;
    goto LAB_0002807e;
  case 2:
    cVar2 = *(code *)(param_2 + local_20);
    param_1[0x3a][(int)(param_1 + 0x43)] = cVar2;
    uVar3 = local_20 + 1;
    if (cVar2 != (code)0x0) {
      param_1[0x3a] = param_1[0x3a] + 1;
      goto LAB_0002807a;
    }
LAB_0002807e:
    local_20 = uVar3;
    uVar4 = 3;
    break;
  case 3:
    pcVar5 = (code *)(uint)*(byte *)(param_2 + local_20);
    param_1[0x40] = pcVar5;
    uVar3 = local_20 + 1;
    if (pcVar5 < param_1[0x35]) {
      param_1[0x41] = *(code **)(param_1[0x34] + (int)pcVar5 * 0x10 + 0xc);
      local_20 = local_20 + 1;
      iVar6 = FUN_00027dd0(param_1);
      uVar3 = local_20;
      if (iVar6 == 0) {
        iVar6 = FUN_00028f10(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
        if (iVar6 != 0) {
          param_1[0x36] = param_1[0x36] + -1;
        }
        uVar4 = 4;
        break;
      }
    }
LAB_0002803c:
    local_20 = uVar3;
    uVar4 = 8;
    break;
  case 4:
    *(ushort *)(param_1 + 0x3f) = (ushort)*(byte *)(param_2 + local_20);
    *(undefined *)(param_1 + 0x37) = 5;
    local_20 = local_20 + 1;
    goto LAB_00028150;
  case 5:
    uVar4 = FUN_00028f22(param_1,param_2,&local_20);
    break;
  case 6:
    uVar4 = FUN_00028e5c(param_1,param_2,&local_20);
    break;
  case 7:
    if (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f)) {
      *(ushort *)(param_1 + 0x39) = *(ushort *)(param_1 + 0x39) + 1;
      local_20 = local_20 + 1;
    }
    if (*(short *)(param_1 + 0x39) == *(short *)(param_1 + 0x3f)) {
      iVar6 = FUN_00028f10(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
      if (iVar6 != 0) {
        (**param_1)(param_1 + 0x3b);
      }
      iVar6 = FUN_00027dd0(param_1);
      uVar3 = local_20;
      if (iVar6 != 0) goto LAB_0002803c;
      goto LAB_0002807e;
    }
    uVar4 = 7;
    break;
  case 8:
    local_20 = param_3;
    goto LAB_00028150;
  default:
    goto LAB_0002814c;
  }
  *(undefined *)(param_1 + 0x37) = uVar4;
  goto LAB_00028150;
LAB_0002814c:
  *(undefined *)(param_1 + 0x37) = 8;
  goto LAB_00028150;
}


/* ---- FUN_0002815c @ 0002815c ---- */

void FUN_0002815c(void)

{
  FUN_00034324(s_appButtonInit_00028178);
  FUN_000281b0(DAT_00028188,1,100);
  FUN_0002818c();
  return;
}


/* ---- FUN_0002818c @ 0002818c ---- */

undefined4 FUN_0002818c(void)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = DAT_000281ac;
  for (uVar2 = 0; uVar2 < *pbVar1; uVar2 = uVar2 + 1) {
    FUN_0003161c(*(undefined *)(*(int *)(pbVar1 + 4) + uVar2 * 8),1);
  }
  return 0;
}


/* ---- FUN_000281b0 @ 000281b0 ---- */

int FUN_000281b0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 local_18;
  
  if (param_3 < 5) {
    iVar2 = 7;
  }
  else {
    local_18 = param_4;
    iVar2 = FUN_00031814();
    if ((iVar2 != 0) || (iVar2 = FUN_000317a4(), iVar2 == 0)) {
      puVar3 = DAT_00028218;
      *(int *)(DAT_00028218 + 4) = param_1;
      *puVar3 = (char)param_2;
      *(uint *)(puVar3 + 8) = param_3;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      *(undefined4 *)(puVar3 + 0x18) = 0;
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      puVar1 = DAT_0002821c;
      do {
        bVar4 = param_2 == 0;
        param_2 = param_2 - 1 & 0xff;
        if (bVar4) {
          iVar2 = FUN_00028c28(DAT_0002821c + 1,0,DAT_00028224,local_18);
          return iVar2;
        }
        puVar3 = (undefined *)(param_1 + param_2 * 8);
        iVar2 = FUN_000316c0(*puVar3,&local_18,DAT_00028220);
      } while (iVar2 == 0);
    }
  }
  return iVar2;
}


/* ---- FUN_00028228 @ 00028228 ---- */

void FUN_00028228(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  disableIRQinterrupts();
  uVar1 = FUN_00031530(param_3[2]);
  uVar2 = param_2;
  FUN_00034324(s_SYSTEM_ERROR__u___s__at__s__u_PC_000282d8,param_3[2],uVar1,param_3[1],*param_3,
               param_2);
  if (param_1 == 1) {
    pcVar3 = s_SOFTDEVICE__ASSERTION_FAILED_0002837c;
  }
  else if (param_1 == 0x1001) {
    pcVar3 = s_SOFTDEVICE__INVALID_MEMORY_ACCES_0002839c;
  }
  else {
    if (param_1 != 0x4001) {
      if (param_1 == 0x4002) {
        FUN_00034324(s_ASSERTION_FAILED_at__s__u_00028308,param_3[1],*(undefined2 *)param_3);
      }
      else {
        FUN_00034324(s_UNKNOWN_FAULT_at_0x_08X_00028324,param_2);
      }
      goto LAB_00028278;
    }
    uVar2 = FUN_00031530(param_3[2]);
    FUN_00034324(s_ERROR__u___s__at__s__u_PC_at__0x_000283c0,param_3[2],uVar2,param_3[1],*param_3,
                 param_2);
    pcVar3 = s_End_of_error_report_000283e8;
    uVar2 = param_2;
  }
  FUN_00034324(pcVar3);
LAB_00028278:
  uVar1 = FUN_00031530(param_3[2]);
  FUN_00034324(s_ERROR__u___s__at__s__u_00028340,param_3[2],uVar1,param_3[1],*param_3,uVar2);
  FUN_00034324(s______System_reset______00028358);
  DataSynchronizationBarrier(0xf);
  *DAT_00028374 = *DAT_00028374 & 0x700 | DAT_00028378;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- motor_off @ 00028400 ---- */

void motor_off(void)

{
  int iVar1;
  
  FUN_0002fe78();
  FUN_000386e4();
  iVar1 = DAT_00028420;
  *(undefined *)(DAT_00028420 + 0xb) = 0;
  if (*(char *)(iVar1 + 10) != '\x01') {
    FUN_00034270();
    return;
  }
  return;
}


/* ---- motor_on @ 00028424 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void motor_on(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _DAT_00028458;
  if (*(char *)(_DAT_00028458 + 0x2f) != '\x01') {
    FUN_0003428c();
  }
  FUN_0002fe38(param_1);
  FUN_0003867c(param_2);
  *(undefined *)(iVar1 + 0xb) = 1;
  FUN_00034324(s_Motor_enabled__strength____d__ti_0002845b + 1,param_1,param_2);
  return;
}


/* ---- FUN_00028490 @ 00028490 ---- */

undefined4 FUN_00028490(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int **)(param_1 + 4) + 1);
  uVar1 = (uint)*(byte *)(DAT_000284c4 + uVar2);
  if (uVar1 != 0xff) {
    if (uVar1 == 0xfe) {
      return 1;
    }
    if (*(int *)(**(int **)(param_1 + 4) + uVar1 * 4 + 0x540) != *(int *)(DAT_000284c8 + uVar2 * 4))
    {
      return 1;
    }
    *(undefined *)(DAT_000284c4 + uVar2) = 0xff;
  }
  return 0;
}


/* ---- FUN_000284cc @ 000284cc ---- */

undefined4 FUN_000284cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_3 * (uint)*(ushort *)(*param_1 + 0x18)) / 100 & 0xffff;
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x21) != '\x02') {
    return 8;
  }
  if (*(uint *)(iVar1 + param_2 * 0xc + 4) == uVar2) {
    if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar1 + 0x1c))(*(undefined *)(param_1[1] + 4));
    }
  }
  else {
    iVar1 = FUN_00028490(param_1);
    if (iVar1 != 0) {
      return 0x11;
    }
    *(undefined *)(DAT_00028550 + (uint)*(byte *)(param_1[1] + 4)) = 0xfe;
    FUN_00034e94(param_1,param_2,uVar2);
    if (*(int *)(*param_1 + 0x1c) != 0) {
      *(undefined *)(DAT_00028554 + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 2;
      FUN_00031f08(param_1[1],2);
    }
  }
  return 0;
}


/* ---- FUN_000284e0 @ 000284e0 ---- */

undefined4 FUN_000284e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x21) != '\x02') {
    return 8;
  }
  if (*(int *)(iVar1 + param_2 * 0xc + 4) == param_3) {
    if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
      (**(code **)(iVar1 + 0x1c))(*(undefined *)(param_1[1] + 4));
    }
  }
  else {
    iVar1 = FUN_00028490(param_1);
    if (iVar1 != 0) {
      return 0x11;
    }
    *(undefined *)(DAT_00028550 + (uint)*(byte *)(param_1[1] + 4)) = 0xfe;
    FUN_00034e94(param_1,param_2,param_3);
    if (*(int *)(*param_1 + 0x1c) != 0) {
      *(undefined *)(DAT_00028554 + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 2;
      FUN_00031f08(param_1[1],2);
    }
  }
  return 0;
}


/* ---- FUN_00028558 @ 00028558 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00028558(int *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_28;
  
  puVar1 = DAT_00028648;
  iVar7 = *param_1;
  puVar6 = (undefined4 *)(iVar7 + param_2 * 0xc);
  if (*(char *)(iVar7 + 0x21) == '\0') {
    puVar6[1] = 0;
    *(char *)((int)puVar6 + 10) = (char)param_4;
    iVar3 = FUN_00031828(param_3,&local_28);
    if (iVar3 == 0) {
      *(uint *)(iVar7 + param_2 * 0xc) = param_3;
      iVar3 = 1 << (param_3 & 0xff);
      iVar7 = iVar3;
      if (param_4 != 0) {
        iVar7 = _DAT_50000508;
        _DAT_5000050c = iVar3;
      }
      _DAT_50000508 = iVar7;
      uVar8 = 0;
      do {
        iVar7 = FUN_000319c8((int)puVar6 + uVar8 + 8);
        if (iVar7 != 0) goto LAB_000285d4;
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < 2);
      FUN_00031a78(*(undefined *)(puVar6 + 2));
      FUN_00031a78(*(undefined *)((int)puVar6 + 9));
      if (param_4 == 0) {
        uVar2 = FUN_000319b0(*puVar6);
        uVar4 = FUN_00031604(*puVar6);
      }
      else {
        uVar2 = FUN_00031604();
        uVar4 = FUN_000319b0(*puVar6);
      }
      uVar5 = FUN_00031eea(param_1[1],param_2);
      FUN_00031a34(*(undefined *)(puVar6 + 2),uVar5,uVar2);
      uVar2 = FUN_00031eea(param_1[1],2);
      FUN_00031a34(*(undefined *)((int)puVar6 + 9),uVar2,uVar4);
      *(undefined *)((int)puVar6 + 0xb) = 1;
      *(undefined *)(DAT_0002864c + (uint)*(byte *)(param_1[1] + 4) * 2 + param_2) = 0;
      uVar2 = 0;
    }
    else {
LAB_000285d4:
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


/* ---- FUN_00028650 @ 00028650 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028650(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  FUN_00031f2c(param_1[1]);
  FUN_00031efa(param_1[1],2);
  FUN_00031a78(*(undefined *)(iVar3 + 0x20));
  uVar2 = 0;
  do {
    puVar1 = (undefined4 *)(iVar3 + uVar2 * 0xc);
    if (*(byte *)((int)puVar1 + 0xb) != 0) {
      if (*(char *)(*param_1 + uVar2 * 0xc + 10) == '\0') {
        _DAT_50000508 = 1 << (uint)*(byte *)puVar1;
      }
      else {
        _DAT_5000050c = 1 << *(byte *)puVar1;
      }
      FUN_000318e8(*puVar1);
      FUN_00031a78(*(byte *)(puVar1 + 2));
      FUN_00031a78(*(byte *)((int)puVar1 + 9));
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  *(undefined *)(iVar3 + 0x21) = 1;
  return;
}


/* ---- FUN_000286c8 @ 000286c8 ---- */

void FUN_000286c8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = DAT_00028738;
  uVar2 = 0;
  iVar4 = *param_1;
  do {
    puVar3 = (undefined4 *)(iVar4 + uVar2 * 0xc);
    *(undefined *)(iVar1 + (uint)*(byte *)(param_1[1] + 4) * 2 + uVar2) = 0;
    if (*(char *)((int)puVar3 + 0xb) != '\0') {
      FUN_00031930(*puVar3,*(char *)(*param_1 + uVar2 * 0xc + 10) == '\0');
      FUN_0003190c(*puVar3);
      puVar3[1] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  *(undefined *)(DAT_0002873c + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
  FUN_00031ea8(param_1[1]);
  FUN_00031f48(param_1[1]);
  *(undefined *)(iVar4 + 0x21) = 2;
  return;
}


/* ---- FUN_00028740 @ 00028740 ---- */

int FUN_00028740(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_3c;
  uint local_38;
  int *piStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    iVar4 = 0xb;
  }
  else {
    iVar4 = *param_1;
    if (*(char *)(iVar4 + 0x21) == '\0') {
      piStack_30 = param_1;
      iStack_2c = param_2;
      local_28 = param_3;
      iVar2 = FUN_00030b4c();
      if ((iVar2 == 0) || (iVar2 == 0x85)) {
        iVar2 = FUN_00031814();
        if ((iVar2 == 0) && (iVar2 = FUN_000317a4(), iVar2 != 0)) {
          return 3;
        }
        pcVar1 = DAT_000288bc;
        if (((uint)*DAT_000288b8 << 0x18) >> 0x1c == 3) {
          *DAT_000288bc = '\0';
        }
        else {
          *DAT_000288bc = '\x01';
        }
        *(undefined *)(iVar4 + 0x20) = 0xff;
        uVar5 = 0;
        do {
          iVar2 = iVar4 + uVar5 * 0xc;
          *(undefined *)(iVar2 + 0xb) = 0;
          *(undefined *)(iVar2 + 8) = 0xff;
          *(undefined *)(iVar2 + 9) = 0xff;
          uVar3 = uVar5 + 1 & 0xff;
          *(undefined4 *)(iVar4 + uVar5 * 0xc) = 0xffffffff;
          uVar5 = uVar3;
        } while (uVar3 < 2);
        iVar2 = FUN_000319c8(iVar4 + 0x20);
        if (iVar2 == 0) {
          uVar5 = 0;
          do {
            iVar2 = *(int *)(param_2 + uVar5 * 4);
            if (iVar2 != -1) {
              iVar2 = FUN_00028558(param_1,uVar5,iVar2,*(undefined *)(param_2 + uVar5 + 8));
              if (iVar2 != 0) {
                FUN_00034dd4(param_1);
                return iVar2;
              }
              FUN_000284e0(param_1,uVar5,0);
            }
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < 2);
          uVar3 = *(uint *)(param_2 + 0x10);
          for (uVar5 = 0; (0xfff < uVar3 && (uVar5 < 9)); uVar5 = uVar5 + 1) {
            uVar3 = uVar3 >> 1;
          }
          if ((*pcVar1 != '\0') && (uVar5 == 0)) {
            uVar5 = 1;
          }
          local_3c = CONCAT31((int3)((uint)*(undefined4 *)(DAT_000288c0 + 4) >> 8),(char)uVar5);
          local_38 = (uint)*(byte *)(param_1[1] + 4);
          iVar2 = FUN_00031f90(param_1[1],&local_3c,DAT_000288c4);
          if (iVar2 != 0) {
            FUN_00034dd4(param_1);
            return iVar2;
          }
          uVar5 = (uint)(*(int *)(param_2 + 0x10) << 4) >>
                  (*(uint *)(*(int *)param_1[1] + 0x510) & 0xff);
          *(uint *)(iVar4 + 0x18) = uVar5;
          FUN_00031ea8(param_1[1]);
          FUN_00031f64(param_1[1],2,uVar5,4,1);
          FUN_00031efa(param_1[1],2);
          *(undefined4 *)(iVar4 + 0x1c) = local_28;
          pcVar1 = DAT_000288bc;
          *(int **)(DAT_000288c8 + (uint)*(byte *)(param_1[1] + 4) * 4) = param_1;
          pcVar1[*(byte *)(param_1[1] + 4) + 1] = -1;
          *(undefined *)(iVar4 + 0x21) = 1;
          return 0;
        }
        FUN_00034dd4(param_1);
      }
      iVar4 = 4;
    }
    else {
      iVar4 = 8;
    }
  }
  return iVar4;
}


/* ---- FUN_000288cc @ 000288cc ---- */

undefined4 FUN_000288cc(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_28;
  
  pcVar1 = DAT_00028968;
  if (*(ushort *)(DAT_00028968 + 2) < param_2) {
    uVar4 = 9;
  }
  else {
    local_28 = param_4 & 0xffffff00;
    FUN_00028d4c(&local_28);
    if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
      cVar2 = pcVar1[1] + 1;
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 == *pcVar1) {
      FUN_00028d94(local_28 & 0xff);
    }
    else {
      uVar5 = (uint)(byte)pcVar1[1];
      if ((ushort)(byte)pcVar1[1] < *(ushort *)(pcVar1 + 4)) {
        cVar2 = pcVar1[1] + 1;
      }
      else {
        cVar2 = '\0';
      }
      pcVar1[1] = cVar2;
      FUN_00028d94(local_28 & 0xff);
      if (uVar5 != 0xffff) {
        iVar3 = *(int *)(pcVar1 + 8);
        *(undefined4 *)(iVar3 + uVar5 * 8) = param_3;
        if ((param_1 == 0) || (param_2 == 0)) {
          *(undefined2 *)(iVar3 + uVar5 * 8 + 4) = 0;
        }
        else {
          FUN_00026484(uVar5 * *(ushort *)(pcVar1 + 2) + *(int *)(pcVar1 + 0xc),param_1,param_2);
          *(short *)(*(int *)(pcVar1 + 8) + uVar5 * 8 + 4) = (short)param_2;
        }
        return 0;
      }
    }
    uVar4 = 4;
  }
  return uVar4;
}


/* ---- FUN_0002896c @ 0002896c ---- */

void FUN_0002896c(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  pbVar1 = DAT_000289a8;
  while (pbVar1[1] != *pbVar1) {
    uVar3 = (uint)*pbVar1;
    (**(code **)(*(int *)(pbVar1 + 8) + uVar3 * 8))
              (uVar3 * *(ushort *)(pbVar1 + 2) + *(int *)(pbVar1 + 0xc),
               *(undefined2 *)(*(int *)(pbVar1 + 8) + uVar3 * 8 + 4));
    if ((ushort)*pbVar1 < *(ushort *)(pbVar1 + 4)) {
      bVar2 = *pbVar1 + 1;
    }
    else {
      bVar2 = 0;
    }
    *pbVar1 = bVar2;
  }
  return;
}


/* ---- FUN_000289ac @ 000289ac ---- */

undefined4 FUN_000289ac(undefined2 param_1,short param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = DAT_000289d4;
  if ((param_3 & 3) != 0) {
    return 7;
  }
  *(uint *)(DAT_000289d4 + 8) = param_3;
  *(uint *)(puVar1 + 0xc) = param_3 + (ushort)(param_2 * 8 + 8);
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 2) = param_1;
  *(short *)(puVar1 + 4) = param_2;
  return 0;
}


/* ---- FUN_000289d8 @ 000289d8 ---- */

void FUN_000289d8(void)

{
  FUN_0002c4f8(DAT_000289e4,0x80,0);
  return;
}


/* ---- FUN_000289e8 @ 000289e8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000289e8(void)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_00026484(DAT_00028a6c,0x70000,0x84);
  FUN_00026484(DAT_00028a70,0x70000,0x84);
  FUN_00026484(DAT_00028a6c,0x70000,0x84);
  FUN_00034324(DAT_00028a74,0x70000,0x71000,0x84);
  uVar2 = 0;
  pcVar4 = *(char **)(_DAT_00028a78 + 8);
  do {
    if (*pcVar4 != -1) {
      FUN_00026484(DAT_00028a70,*(char **)(_DAT_00028a78 + 8),0x84);
      FUN_00034324(s_app_setting____________app_setti_00028a7b + 1,0x84);
      piVar1 = DAT_00028a70;
      if (*(char *)(DAT_00028a70 + 1) == '\x03') {
        iVar3 = FUN_000289d8();
        if (iVar3 == *piVar1) {
          return 0;
        }
      }
      pcVar4 = s_app_setting____________APP_setti_00028ae8;
      goto LAB_00028a5c;
    }
    uVar2 = uVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (uVar2 < 0x84);
  pcVar4 = s_app_setting____________APP_data_s_00028aac;
LAB_00028a5c:
  debug_printf(pcVar4);
  FUN_00028b28();
  return 1;
}


/* ---- FUN_00028b28 @ 00028b28 ---- */

void FUN_00028b28(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_000264b6(DAT_00028be0,0x84);
  puVar1 = DAT_00028be0;
  *(undefined *)(DAT_00028be0 + 1) = 3;
  puVar1[2] = 0xffffffff;
  FUN_00027570(DAT_00028be0 + 3,s_12345678_00028be4);
  *(undefined *)(puVar1 + 5) = 10;
  puVar1[6] = 0x32;
  puVar1[7] = 16000;
  puVar1[8] = 2000;
  *(undefined *)(puVar1 + 9) = 5;
  *(undefined *)((int)puVar1 + 0x25) = 0x50;
  *(undefined *)((int)puVar1 + 0x26) = 6;
  *(undefined *)((int)puVar1 + 0x27) = 1;
  *(undefined2 *)(puVar1 + 10) = 1000;
  *(undefined2 *)((int)puVar1 + 0x2a) = 500;
  *(undefined2 *)(puVar1 + 0xb) = 0x5dc;
  puVar1[0xc] = 0xffffff;
  *(undefined2 *)(puVar1 + 0xd) = 0x20;
  *(undefined2 *)((int)puVar1 + 0x36) = 0x1e;
  *(undefined2 *)(puVar1 + 0xe) = 0x18;
  *(undefined2 *)((int)puVar1 + 0x3a) = 0xf0;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  *(undefined2 *)((int)puVar1 + 0x3e) = 400;
  *(undefined *)(puVar1 + 0x19) = 1;
  *(undefined2 *)((int)puVar1 + 0x66) = 1000;
  *(undefined2 *)(puVar1 + 0x1a) = 700;
  puVar1[0x1b] = DAT_00028bf0;
  puVar1[0x10] = 0xffffff;
  puVar1[0x11] = 0xffffff;
  puVar1[0x12] = 0xffffff;
  puVar1[0x18] = 0xff0000;
  puVar1[0x13] = 0xffffff;
  puVar1[0x14] = 0xffffff;
  puVar1[0x15] = 0xff0000;
  puVar1[0x16] = 0xffffff;
  puVar1[0x17] = 0xffffff;
  uVar2 = DAT_00028bf4;
  *(undefined *)((int)puVar1 + 0x7a) = 0;
  puVar1[0x1f] = uVar2;
  *(undefined2 *)(puVar1 + 0x20) = 0xe08;
  uVar2 = FUN_000289d8();
  *puVar1 = uVar2;
  *DAT_00028bf8 = 0;
  return;
}


/* ---- FUN_00028bfc @ 00028bfc ---- */

undefined4 FUN_00028bfc(void)

{
  if (*DAT_00028c18 != '\x02') {
    *DAT_00028c18 = '\x01';
    FUN_00035944();
    return 1;
  }
  return 0;
}


/* ---- FUN_00028c1c @ 00028c1c ---- */

undefined4 FUN_00028c1c(void)

{
  return *DAT_00028c24;
}


/* ---- FUN_00028c28 @ 00028c28 ---- */

undefined4 FUN_00028c28(int *param_1,undefined param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(DAT_00028c4c + 2) != '\0') {
    if ((param_3 == 0) || (param_1 == (int *)0x0)) {
      return 7;
    }
    iVar1 = *param_1;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      *(undefined *)(iVar1 + 0x10) = 0;
      *(undefined *)(iVar1 + 0x11) = param_2;
      *(int *)(iVar1 + 0x14) = param_3;
      return 0;
    }
  }
  return 8;
}


/* ---- FUN_00028c50 @ 00028c50 ---- */

undefined4 FUN_00028c50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00035570();
  puVar1 = DAT_00028c98;
  *DAT_00028c98 = 0;
  puVar1[1] = 0;
  puVar2 = DAT_00028c9c;
  puVar1[2] = 0x19;
  *(undefined4 *)(puVar2 + 4) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_00026cf8(0x14);
  FUN_00026d3a(0x14,6);
  FUN_00026d0e(0x14);
  *DAT_00028ca0 = 0;
  FUN_00026d3a(0x11,6);
  *(undefined4 *)(puVar2 + 8) = DAT_00028ca0[-1];
  return 0;
}


/* ---- FUN_00028ca4 @ 00028ca4 ---- */

undefined4 FUN_00028ca4(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint local_28;
  undefined4 local_24;
  
  iVar1 = DAT_00028d24;
  if ((*(char *)(DAT_00028d24 + 2) != '\0') && (param_1 != 0)) {
    if (param_2 < 5) {
      return 7;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar4 = param_2;
      if (*(char *)(param_1 + 0x11) != '\x01') {
        uVar4 = 0;
      }
      local_28 = param_3 & 0xffffff00;
      local_24 = param_4;
      FUN_00028d4c(&local_28);
      puVar3 = (undefined *)FUN_0003872c(&local_24);
      if (puVar3 != (undefined *)0x0) {
        *puVar3 = 1;
        puVar2 = DAT_00028d28;
        *(int *)(puVar3 + 4) = param_1;
        *(undefined4 *)(puVar3 + 8) = *puVar2;
        *(uint *)(puVar3 + 0xc) = param_2;
        *(uint *)(puVar3 + 0x10) = uVar4;
        *(uint *)(puVar3 + 0x14) = param_3;
        *(undefined *)(iVar1 + 1) = (undefined)local_24;
        FUN_00028d94(local_28 & 0xff);
        FUN_00026d24(0x14);
        return 0;
      }
      FUN_00028d94(local_28 & 0xff);
      return 4;
    }
  }
  return 8;
}


/* ---- FUN_00028d2c @ 00028d2c ---- */

undefined4 FUN_00028d2c(int param_1)

{
  undefined4 uVar1;
  
  if (((*(char *)(DAT_00028d48 + 2) != '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0x14) != 0))
  {
    *(undefined *)(param_1 + 0x10) = 0;
    uVar1 = FUN_00036c88(param_1,2);
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00028d4c @ 00028d4c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028d4c(undefined *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = DAT_00028d8c;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (DAT_00028d8c[2] == 0) {
    DAT_00028d8c[2] = 1;
    uVar3 = DAT_00028d90;
    *puVar2 = _DAT_e000e180 & DAT_00028d90;
    _DAT_e000e180 = uVar3;
    puVar2[1] = _DAT_e000e184;
    _DAT_e000e184 = 0xffffffff;
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  if (iVar4 == 0) {
    enableIRQinterrupts();
  }
  return;
}


/* ---- FUN_00028d94 @ 00028d94 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028d94(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_00028dc4[2] != 0) && (param_1 == 0)) {
    iVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar2 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    _DAT_e000e100 = *DAT_00028dc4;
    _DAT_e000e104 = DAT_00028dc4[1];
    DAT_00028dc4[2] = 0;
    if (iVar2 == 0) {
      enableIRQinterrupts();
    }
  }
  return;
}


/* ---- FUN_00028de4 @ 00028de4 ---- */

void FUN_00028de4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00028e28;
  iVar2 = 100;
  do {
    (*(code *)(iVar1 + 1))(64000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = FUN_0002a200(DAT_00028e2c);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x1dd,DAT_00028e30);
  }
  iVar1 = FUN_0002a158(DAT_00028e2c);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x1e0,DAT_00028e30);
  }
  FUN_00034324(s_Notifications_Enabled__00028e34);
  return;
}


/* ---- FUN_00028e5c @ 00028e5c ---- */

undefined4 FUN_00028e5c(code **param_1,int param_2,int *param_3)

{
  code cVar1;
  ushort uVar2;
  int iVar3;
  code **ppcVar4;
  
  if ((*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8)) &&
     (*(ushort *)(param_1 + 0x39) < *(ushort *)(param_1 + 0x3f))) {
    iVar3 = *param_3;
    *param_3 = iVar3 + 1;
    cVar1 = *(code *)(param_2 + iVar3);
    uVar2 = *(ushort *)(param_1 + 0x39);
    *(ushort *)(param_1 + 0x39) = uVar2 + 1;
    param_1[0x41][uVar2] = cVar1;
  }
  if (((uint)*(ushort *)(param_1 + 0x39) != (uint)*(ushort *)(param_1 + 0x3f)) &&
     (*(ushort *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8) - 1 !=
      (uint)*(ushort *)(param_1 + 0x39))) {
    return 6;
  }
  ppcVar4 = param_1 + 0x3f;
  iVar3 = FUN_00028f10(param_1,*ppcVar4,param_1[0x40],param_1[0x41]);
  if (iVar3 != 0) {
    param_1[0x41][*(ushort *)(param_1 + 0x39)] = (code)0x0;
  }
  if (*(ushort *)(param_1 + 0x39) < *(ushort *)ppcVar4) {
    return 7;
  }
  iVar3 = FUN_00028f10(param_1,*ppcVar4,param_1[0x40],param_1[0x41]);
  if (iVar3 != 0) {
    (**param_1)(param_1 + 0x3b);
  }
  iVar3 = FUN_00027dd0(param_1);
  if (iVar3 != 0) {
    return 8;
  }
  return 3;
}


/* ---- FUN_00028f10 @ 00028f10 ---- */

char FUN_00028f10(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xd0) + param_3 * 0x10);
  if (cVar1 != '\x01') {
    cVar1 = '\0';
  }
  return cVar1;
}


/* ---- FUN_00028f22 @ 00028f22 ---- */

undefined4 FUN_00028f22(code **param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x3f) | (uint)*(byte *)(param_2 + iVar1) << 8;
  *(short *)(param_1 + 0x3f) = (short)uVar2;
  *(undefined2 *)(param_1 + 0x39) = 0;
  if (uVar2 != 0) {
    if ((*(short *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 8) != 0) &&
       (*(int *)(param_1[0x34] + (int)param_1[0x40] * 0x10 + 0xc) != 0)) {
      return 6;
    }
    return 7;
  }
  iVar1 = FUN_00028f10(param_1,param_1[0x3f],param_1[0x40],param_1[0x41]);
  if (iVar1 != 0) {
    (**param_1)(param_1 + 0x3b);
  }
  iVar1 = FUN_00027dd0(param_1);
  if (iVar1 != 0) {
    return 8;
  }
  return 3;
}


/* ---- FUN_00028f90 @ 00028f90 ---- */

void FUN_00028f90(short *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined auStack_3c [4];
  undefined4 local_38;
  undefined auStack_34 [2];
  short local_32;
  
  sVar1 = *param_1;
  bVar2 = false;
  FUN_0002a5dc(sVar1,*DAT_0002907c,0);
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    iVar3 = FUN_000330cc(sVar1 + 0x100,7,1,auStack_3c);
    if (iVar3 == 0) {
      iVar3 = FUN_0002e574(sVar1);
      if (iVar3 == 0xffff) {
        iVar3 = FUN_0002e446(local_38);
        if (iVar3 == 0xffff) {
          iVar3 = FUN_000333a8();
          if (iVar3 == 0xffff) {
            iVar3 = 4;
            goto LAB_00028fc8;
          }
          FUN_0002e534(sVar1,iVar3);
          bVar2 = true;
        }
        else {
          FUN_0002e534(sVar1,iVar3);
          iVar4 = FUN_00027de0(sVar1);
          if (iVar4 == 0) {
            FUN_00035d8c(sVar1);
            iVar4 = FUN_00027de0(sVar1);
            if (iVar4 == 0) goto LAB_00028fb0;
          }
        }
      }
      iVar4 = FUN_00033198(sVar1 + 0x100,7,iVar3);
      if (iVar4 != 0) {
        if (iVar4 != 0x86) {
          FUN_00035e2c(sVar1);
          FUN_00032eb0(param_1,0);
          if (!bVar2) {
            return;
          }
          FUN_0002e548(iVar3);
          return;
        }
        FUN_00026484(auStack_34,DAT_00029080,0x18);
        local_32 = sVar1;
        FUN_0002caf8(auStack_34);
      }
      uVar5 = 1;
      goto LAB_0002905e;
    }
LAB_00028fc8:
    FUN_00035e2c(sVar1,iVar3);
  }
LAB_00028fb0:
  uVar5 = 0;
LAB_0002905e:
  FUN_00032eb0(param_1,uVar5);
  return;
}


/* ---- FUN_00029084 @ 00029084 ---- */

uint FUN_00029084(uint param_1)

{
  uint uVar1;
  
  if (0x1fd < param_1) {
    uVar1 = param_1 >> 4;
  }
  else {
    uVar1 = (param_1 & 0x7fff) << 1;
  }
  return uVar1 | (uint)(0x1fd < param_1) << 10 | 0x3800;
}


/* ---- FUN_000290a4 @ 000290a4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000290a4(void)

{
  FUN_00034348(s_____________aw9109_clear_pdn____000290c4);
  if (*DAT_000290e8 < 1) {
    _DAT_5000050c = 0x100000;
  }
  return;
}


/* ---- FUN_000290ec @ 000290ec ---- */

undefined4
FUN_000290ec(uint param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte *pbVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((param_5 == 0) || (9 < param_1)) || (param_1 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar6 = 0;
    uVar4 = 0;
    do {
      pbVar1 = (byte *)(param_5 + uVar4);
      uVar4 = uVar4 + 1 & 0xff;
      iVar6 = iVar6 + (uint)*pbVar1;
    } while (uVar4 < 0x2a);
    if (iVar6 == 0) {
      uVar4 = 1;
      do {
        iVar6 = param_5 + uVar4 * 2;
        uVar2 = (short)uVar4 * 0x100 + 0x100U | 0xa000;
        *(ushort *)(iVar6 + -2) = uVar2;
        uVar4 = uVar4 + 1 & 0xff;
        *(ushort *)(iVar6 + 0x12) = uVar2;
      } while (uVar4 < 10);
    }
    uVar2 = (short)param_1 * 0x100 + 0x100;
    iVar6 = param_5 + param_1 * 2;
    *(ushort *)(iVar6 + -2) = param_2 | uVar2 | 0xa000;
    *(ushort *)(iVar6 + 0x12) = uVar2 | 0xa000;
    uVar3 = FUN_00029084(param_3);
    *(undefined2 *)(param_5 + 0x12) = uVar3;
    uVar3 = FUN_00029084(param_4);
    *(undefined2 *)(param_5 + 0x26) = uVar3;
    *(undefined2 *)(param_5 + 0x28) = 0;
    uVar5 = 1;
  }
  return uVar5;
}


/* ---- FUN_00029168 @ 00029168 ---- */

undefined4
FUN_00029168(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined2 *param_7)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  
  if (param_7 == (undefined2 *)0x0) {
    uVar6 = 0;
  }
  else {
    *param_7 = 0xbf00;
    fVar9 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = (short)param_1 * 0x100 + 0x100;
    fVar10 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = uVar1 | (ushort)param_2;
    puVar8 = param_7 + param_1;
    fVar9 = fVar9 / fVar10;
    puVar8[9] = uVar3 | 0xe000;
    puVar8[0x1c] = uVar3 | 0xc000;
    fVar10 = DAT_000292d4;
    uVar12 = (undefined4)DAT_000292c4;
    uVar6 = (undefined4)((ulonglong)DAT_000292c4 >> 0x20);
    uVar13 = (undefined4)DAT_000292cc;
    uVar7 = (undefined4)((ulonglong)DAT_000292cc >> 0x20);
    if ((int)fVar9 < 0x42000001) {
      uVar14 = FUN_000268e0(fVar9);
      uVar14 = FUN_00026672((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar6);
      uVar5 = FUN_00026666((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar13,uVar7);
      uVar14 = FUN_00027598(uVar5);
      bVar2 = FUN_000268ae((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar3 = bVar2 | uVar1 | 0x8000;
    }
    else {
      uVar5 = VectorFloatToUnsigned(fVar9 * DAT_000292d4 - 1.0,3);
      uVar3 = (ushort)uVar5 & 0xff | uVar1 | 0x8080;
    }
    *puVar8 = uVar3;
    fVar9 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 / fVar11;
    if ((int)fVar9 < 0x42000001) {
      uVar14 = FUN_000268e0(fVar9);
      uVar14 = FUN_00026672((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar6);
      uVar6 = FUN_00026666((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar13,uVar7);
      uVar14 = FUN_00027598(uVar6);
      bVar2 = FUN_000268ae((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      puVar8[0x13] = uVar1 | bVar2 | 0x8000;
    }
    else {
      uVar6 = FUN_000268e0(fVar9 * fVar10 - 1.0);
      uVar14 = FUN_00027598(uVar6);
      bVar2 = FUN_000268ae((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      puVar8[0x13] = uVar1 | bVar2 | 0x8080;
    }
    uVar4 = FUN_00029084(param_3 + param_5 & 0xffff);
    param_7[0x13] = uVar4;
    uVar4 = FUN_00029084(param_4 + param_6 & 0xffff);
    param_7[0x26] = uVar4;
    param_7[0x27] = 0;
    uVar6 = 1;
  }
  return uVar6;
}


/* ---- FUN_000292d8 @ 000292d8 ---- */

undefined4 FUN_000292d8(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    iVar9 = 0;
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(param_5 + uVar8);
      uVar8 = uVar8 + 1 & 0xff;
      iVar9 = iVar9 + (uint)*pbVar1;
    } while (uVar8 < 0x2a);
    if (iVar9 == 0) {
      uVar8 = 1;
      do {
        sVar2 = (short)uVar8;
        iVar9 = uVar8 * 2;
        uVar8 = uVar8 + 1 & 0xff;
        *(ushort *)(param_5 + iVar9 + 0x10) = sVar2 * 0x100 + 0x100U | 0xa000;
      } while (uVar8 < 10);
    }
    iVar9 = param_5 + param_1 * 2;
    fVar10 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    uVar4 = (short)param_1 * 0x100 + 0x100;
    uVar3 = uVar4 | (ushort)param_2;
    fVar11 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    *(ushort *)(iVar9 + 0x10) = uVar3 | 0xa000;
    fVar10 = fVar10 / fVar11;
    if ((int)fVar10 < 0x42000001) {
      uVar12 = FUN_000268e0(fVar10);
      uVar12 = FUN_00026672((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_000293d4,
                            (int)((ulonglong)DAT_000293d4 >> 0x20));
      uVar7 = FUN_00026666((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)DAT_000293dc,
                           (int)((ulonglong)DAT_000293dc >> 0x20));
      uVar12 = FUN_00027598(uVar7);
      bVar5 = FUN_000268ae((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *(ushort *)(iVar9 + -2) = uVar4 | bVar5 | 0x8000;
    }
    else {
      uVar7 = FUN_000268e0(fVar10 * DAT_000293e4 - 1.0);
      uVar12 = FUN_00027598(uVar7);
      bVar5 = FUN_000268ae((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      *(ushort *)(iVar9 + -2) = uVar4 | bVar5 | 0x8080;
    }
    *(ushort *)(iVar9 + 0x22) = uVar3 | 0xc000;
    uVar6 = FUN_00029084(param_3 + param_4 & 0xffff);
    *(undefined2 *)(param_5 + 0x36) = uVar6;
    *(undefined2 *)(param_5 + 0x38) = 0;
    uVar7 = 1;
  }
  return uVar7;
}


/* ---- FUN_000293e8 @ 000293e8 ---- */

undefined4 FUN_000293e8(uint param_1,ushort param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_4 != 0) && (param_1 < 10)) && (param_1 != 0)) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      pbVar1 = (byte *)(param_4 + uVar4);
      uVar4 = uVar4 + 1 & 0xff;
      iVar5 = iVar5 + (uint)*pbVar1;
    } while (uVar4 < 0x2a);
    if (iVar5 == 0) {
      uVar4 = 1;
      do {
        sVar2 = (short)uVar4;
        iVar5 = uVar4 * 2;
        uVar4 = uVar4 + 1 & 0xff;
        *(ushort *)(param_4 + iVar5 + -2) = sVar2 * 0x100 + 0x100U | 0xa000;
      } while (uVar4 < 10);
    }
    *(ushort *)(param_4 + param_1 * 2 + -2) = (short)param_1 * 0x100 + 0x100U | param_2 | 0xa000;
    uVar3 = FUN_00029084(param_3);
    *(undefined2 *)(param_4 + 0x12) = uVar3;
    *(undefined2 *)(param_4 + 0x14) = 0;
    return 1;
  }
  return 0;
}


/* ---- FUN_0002944e @ 0002944e ---- */

undefined4 FUN_0002944e(ushort param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  iVar1 = FUN_00029540(0x55,&local_10);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_2 == 1) {
    param_1 = (ushort)local_10 | param_1;
  }
  else {
    if (param_2 != 0) goto LAB_0002947e;
    param_1 = (ushort)local_10 & ~param_1;
  }
  local_10 = CONCAT22(local_10._2_2_,param_1);
LAB_0002947e:
  iVar1 = FUN_000295dc(0x55,local_10 & 0xffff);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}


/* ---- thunk_FUN_00030a84 @ 00029492 ---- */

void thunk_FUN_00030a84(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030aa0;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00029498 @ 00029498 ---- */

void FUN_00029498(void)

{
  FUN_00034348(s_aw9109_hardware_reset_000294cc);
  FUN_000290a4();
  thunk_FUN_00030a84(2);
  FUN_000298f4();
  *(undefined4 *)(DAT_000294e4 + 0x700) = 3;
  FUN_000298f4();
  thunk_FUN_00030a84(2);
  thunk_FUN_00030a84(2);
  return;
}


/* ---- FUN_000294e8 @ 000294e8 ---- */

undefined4 FUN_000294e8(void)

{
  int iVar1;
  
  FUN_00034348(s_aw9109_hw_init_0002950c);
  FUN_00030aa4(10);
  iVar1 = FUN_000299ec();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00034348(s_aw9109_hardware_init_failed__0002951c);
  return 0;
}


/* ---- FUN_00029540 @ 00029540 ---- */

undefined4 FUN_00029540(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  
  pcVar1 = DAT_000295b0;
  if (*DAT_000295b0 == '\0') {
    *DAT_000295b0 = '\x01';
    local_1c = param_4;
    FUN_000373ac();
    local_1c = CONCAT31(local_1c._1_3_,(char)param_1);
    FUN_00030ba4(DAT_000295b4,0x2c,&local_1c,1,0);
    uVar2 = FUN_000321d8(DAT_000295b4 + 4,0x2c,&local_1c,2);
    *param_2 = (ushort)((local_1c & 0xff) << 8) | (ushort)local_1c >> 8;
    FUN_000320a0(DAT_000295b4 + 4);
    FUN_00032240(DAT_000295b4 + 4);
    *pcVar1 = '\0';
    FUN_00034348(s_aw9109_i2c_read__x_Add__x_data___000295b8,uVar2,param_1,*param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ---- FUN_000295dc @ 000295dc ---- */

undefined4 FUN_000295dc(undefined param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint local_14;
  
  pcVar1 = DAT_00029628;
  if (*DAT_00029628 != '\0') {
    return 0;
  }
  *DAT_00029628 = '\x01';
  local_14 = (uint)CONCAT12((char)param_2,CONCAT11((char)((uint)param_2 >> 8),param_1));
  FUN_000373ac();
  uVar2 = FUN_00030ba4(DAT_0002962c,0x2c,&local_14,3,0);
  FUN_000320a0(DAT_0002962c + 4);
  FUN_00032240(DAT_0002962c + 4);
  *pcVar1 = '\0';
  return uVar2;
}


/* ---- FUN_00029630 @ 00029630 ---- */

longlong FUN_00029630(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0002992c();
  iVar1 = FUN_000297d0();
  if (iVar1 == 0xb223) {
    iVar1 = FUN_00029880(2);
    if (iVar1 == 0) {
      pcVar2 = s_aw9109_init_set_mode_error_000296d8;
    }
    else {
      iVar1 = FUN_000295dc(0x52,0x8a);
      if (iVar1 == 0) {
        iVar1 = FUN_00029754(0x7fc,1);
        if (iVar1 == 0) {
          pcVar2 = s_aw9109_init_led_enable_error_000296f4;
        }
        else {
          FUN_000264a8(&uStack_18,9,1);
          iVar1 = FUN_000297f4(&uStack_18);
          if (iVar1 == 0) {
            pcVar2 = s_aw9109_init_leds_output_error_00029714;
          }
          else {
            iVar1 = FUN_0002944e(0x7fc,0);
            if (iVar1 != 0) {
              return CONCAT44(uStack_18,1);
            }
            pcVar2 = s_aw9109_init_ctrl_source_error_00029734;
          }
        }
      }
      else {
        pcVar2 = s_aw9109_init_write_8a_error_000296bc;
      }
    }
  }
  else {
    pcVar2 = s_aw9109_init_read_id_error_000296a0;
  }
  FUN_00034348(pcVar2);
  return (ulonglong)uStack_18 << 0x20;
}


/* ---- FUN_00029754 @ 00029754 ---- */

undefined4 FUN_00029754(ushort param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4 & 0xffff0000;
  iVar1 = FUN_00029540(0x50,&local_10);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_1 = (ushort)local_10 & ~param_1;
    }
    else {
      param_1 = (ushort)local_10 | param_1;
    }
    local_10 = CONCAT22(local_10._2_2_,param_1);
    iVar1 = FUN_000295dc(0x50,param_1);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0002978c @ 0002978c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002978c(void)

{
  int iVar1;
  
  iVar1 = -((_DAT_50000504 << 0xb) >> 0x1f);
  FUN_00034348(s_________aw9109_pdn_is_high___d_000297ac,iVar1);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000297d0 @ 000297d0 ---- */

uint FUN_000297d0(void)

{
  int iVar1;
  uint in_r3;
  byte bVar2;
  uint local_10;
  
  bVar2 = 0;
  local_10 = in_r3 & 0xffff0000;
  do {
    iVar1 = FUN_00029540(0,&local_10);
    if (iVar1 == 0) {
      return local_10 & 0xffff;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  return 0;
}


/* ---- FUN_000297f4 @ 000297f4 ---- */

undefined4 FUN_000297f4(byte *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_00029540(0x57,&local_18);
  if (((iVar1 == 0) && (iVar1 = FUN_00029540(0x58,(int)&local_18 + 2), iVar1 == 0)) &&
     (iVar1 = FUN_00029540(0x59,&local_14), iVar1 == 0)) {
    local_18._0_2_ = (ushort)((param_1[1] & 0xf) << 0xc) | (ushort)*param_1 << 8;
    local_18._2_2_ =
         (ushort)param_1[2] | (ushort)param_1[5] << 0xc |
         (ushort)param_1[4] << 8 | (ushort)param_1[3] << 4;
    local_14 = CONCAT22(local_14._2_2_,
                        (ushort)param_1[8] << 8 | (ushort)param_1[7] << 4 | (ushort)param_1[6]);
    iVar1 = FUN_000295dc(0x57);
    if (((iVar1 == 0) && (iVar1 = FUN_000295dc(0x58,local_18._2_2_), iVar1 == 0)) &&
       (iVar1 = FUN_000295dc(0x59,local_14 & 0xffff), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_00029880 @ 00029880 ---- */

undefined4 FUN_00029880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_00034324(s____AW9109_MODE_SHUTDOWN____000298d8);
    FUN_000290a4();
  }
  else {
    if (param_1 == 1) {
      iVar1 = FUN_0002978c();
      if (iVar1 == 0) {
        FUN_000298f4();
        thunk_FUN_00030a84(5);
        return 1;
      }
      uVar2 = 0;
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      iVar1 = FUN_0002978c();
      if (iVar1 == 0) {
        FUN_000298f4();
        thunk_FUN_00030a84(5);
      }
      uVar2 = 1;
    }
    iVar1 = FUN_000295dc(1,uVar2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


/* ---- FUN_000298f4 @ 000298f4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000298f4(void)

{
  FUN_00034348(s_____________aw9109_set_pdn___0002990c);
  _DAT_50000508 = 0x100000;
  return;
}


/* ---- FUN_0002992c @ 0002992c ---- */

bool FUN_0002992c(void)

{
  int iVar1;
  
  FUN_00029498();
  FUN_00034348(s_aw9109_software_reset_00029964);
  FUN_000295dc(0,0x55aa);
  FUN_00030aa4(5);
  iVar1 = FUN_000295dc(0,0x55aa);
  FUN_00030aa4(5);
  return iVar1 != 0;
}


/* ---- FUN_0002997c @ 0002997c ---- */

undefined4 FUN_0002997c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (iVar1 = FUN_000295dc(0x53,0), iVar1 == 0)) &&
     ((iVar1 = FUN_000295dc(0x54,0), iVar1 == 0 && (iVar1 = FUN_000295dc(0x7e,0), iVar1 == 0)))) {
    uVar2 = 0;
    while( true ) {
      if (param_2 <= uVar2) {
        return 1;
      }
      iVar1 = FUN_000295dc(0x7f,*(undefined2 *)(param_1 + uVar2 * 2));
      if (iVar1 != 0) break;
      uVar2 = uVar2 + 1 & 0xffff;
    }
  }
  return 0;
}


/* ---- FUN_000299c4 @ 000299c4 ---- */

undefined4 FUN_000299c4(void)

{
  int iVar1;
  
  iVar1 = FUN_000295dc(0x5f,0);
  if (((iVar1 == 0) && (iVar1 = FUN_000295dc(0x54,2), iVar1 == 0)) &&
     (iVar1 = FUN_000295dc(0x53,1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000299ec @ 000299ec ---- */

undefined4 FUN_000299ec(void)

{
  FUN_00034348(s_aw9109_support_init_00029a08);
  FUN_00030e2a(0x14);
  FUN_000298f4();
  FUN_00030a84(2);
  return 1;
}


/* ---- FUN_00029a20 @ 00029a20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029a20(void)

{
  undefined uVar1;
  int iVar2;
  
  *(undefined4 *)(DAT_00029a54 + 0x700) = 0xc;
  uVar1 = FUN_0002dffc();
  *(undefined *)(_DAT_00029a58 + 9) = uVar1;
  iVar2 = FUN_00031814();
  if ((iVar2 == 0) && (iVar2 = FUN_000317a4(), iVar2 != 0)) {
    FUN_00026218(iVar2,0x20c,s__________battery_measure_c_00029a5b + 1);
  }
  FUN_00037b28();
  FUN_0003875c();
  return;
}


/* ---- FUN_00029b10 @ 00029b10 ---- */

ushort ** FUN_00029b10(char *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  short sVar4;
  ushort **ppuVar5;
  uint uVar6;
  bool bVar7;
  ushort *local_28;
  uint uStack_24;
  
  ppuVar5 = (ushort **)0x0;
  uVar6 = (uint)*param_3;
  *param_3 = 0;
  local_28 = param_3;
  uStack_24 = param_4;
  if ((param_1[0x2d] != '\0') &&
     (ppuVar5 = (ushort **)FUN_0002a744(param_2,param_3,uVar6), ppuVar5 != (ushort **)0x0)) {
    return ppuVar5;
  }
  if (param_1[2] == '\0') {
LAB_00029b84:
    if (param_1[3] != '\0') {
      cVar2 = param_1[3];
      if (uVar6 < *param_3 + 3) goto LAB_00029b46;
      *(undefined *)(param_2 + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 1;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(char *)(param_2 + (uint)(ushort)(uVar1 + 1)) = cVar2;
      *param_3 = *param_3 + 1;
    }
    if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
      uVar3 = **(undefined **)(param_1 + 4);
      if (uVar6 < *param_3 + 3) goto LAB_00029b46;
      *(undefined *)(param_2 + (uint)*param_3) = 2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 10;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = uVar3;
      *param_3 = *param_3 + 1;
    }
    if (*(short *)(param_1 + 8) == 0) goto LAB_00029c0c;
    local_28 = param_3;
    uStack_24 = uVar6;
    ppuVar5 = (ushort **)FUN_000390c4(param_1 + 8,2,6,param_2);
    bVar7 = ppuVar5 == (ushort **)0x0;
LAB_00029c0a:
    do {
      if (!bVar7) {
        return ppuVar5;
      }
LAB_00029c0c:
      if ((*(short *)(param_1 + 0x10) != 0) &&
         (local_28 = param_3, uStack_24 = uVar6,
         ppuVar5 = (ushort **)FUN_000390c4(param_1 + 0x10,3,7,param_2), ppuVar5 != (ushort **)0x0))
      {
        return ppuVar5;
      }
      if ((*(short *)(param_1 + 0x18) != 0) &&
         (local_28 = param_3, uStack_24 = uVar6,
         ppuVar5 = (ushort **)FUN_000390c4(param_1 + 0x18,0x14,0x15,param_2),
         ppuVar5 != (ushort **)0x0)) {
        return ppuVar5;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        ppuVar5 = (ushort **)FUN_0002c32e(*(int *)(param_1 + 0x20),param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_00029c0a;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        ppuVar5 = (ushort **)FUN_0002fd7c(*(int *)(param_1 + 0x24),param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_00029c0a;
      }
      if (param_1[0x2c] != '\0') {
        ppuVar5 = (ushort **)FUN_00035e54(param_1,param_2,param_3,uVar6);
        bVar7 = ppuVar5 == (ushort **)0x0;
        if (!bVar7) goto LAB_00029c0a;
      }
      if (*param_1 == '\0') {
        return ppuVar5;
      }
      ppuVar5 = (ushort **)FUN_0002fef8(param_1,param_2,param_3,uVar6);
      bVar7 = ppuVar5 == (ushort **)0x0;
    } while (!bVar7);
  }
  else {
    if (*param_3 + 4 <= uVar6) {
      software_interrupt(0x79);
      if (&local_28 != (ushort **)0x0) {
        return &local_28;
      }
      *(undefined *)(param_2 + (uint)*param_3) = 3;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x19;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar4 = FUN_00037ad8((uint)local_28 & 0xffff,(uint)(ushort)(uVar1 + 1) + param_2);
      *param_3 = sVar4 + *param_3;
      goto LAB_00029b84;
    }
LAB_00029b46:
    ppuVar5 = (ushort **)&HardFault;
  }
  return ppuVar5;
}


/* ---- FUN_00029c92 @ 00029c92 ---- */

int FUN_00029c92(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_c;
  
  local_c = param_4 & 0xffff0000;
  iVar1 = FUN_00029cb2(param_1,param_2,&local_c,param_3);
  if (iVar1 != 0) {
    iVar1 = (local_c & 0xffff) + param_1;
  }
  return iVar1;
}


/* ---- FUN_00029cb2 @ 00029cb2 ---- */

short FUN_00029cb2(int param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_3 != (ushort *)0x0)) {
    for (uVar1 = 0;
        ((uVar1 < *param_3 || (*(byte *)(param_1 + uVar1 + 1) != param_4)) && (uVar1 < param_2));
        uVar1 = uVar1 + 1 + (uint)*(byte *)(param_1 + uVar1) & 0xffff) {
    }
    if (uVar1 < param_2) {
      *param_3 = (short)uVar1 + 2;
      return *(byte *)(param_1 + uVar1) - 1;
    }
  }
  return 0;
}


/* ---- FUN_00029cea @ 00029cea ---- */

void FUN_00029cea(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 0x30) = param_2;
  return;
}


/* ---- FUN_00029cf0 @ 00029cf0 ---- */

char * FUN_00029cf0(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    pcVar1 = (char *)0xe;
  }
  else if ((((*(char *)(param_2 + 0x7a) == '\x01') && (*(char *)(param_2 + 0x98) == '\x01')) ||
           (*(int *)(param_2 + 0xa0) == 4)) || (*(int *)(param_2 + 0x9c) == 4)) {
    pcVar1 = (char *)0x7;
  }
  else {
    param_1[2] = '\0';
    FUN_00026484(param_1 + 4,param_2 + 0x78,0x2c);
    param_1[0x30] = '\0';
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined2 *)(param_1 + 0x248) = 0xffff;
    *(char **)(param_1 + 0x244) = param_1 + 0x234;
    *(undefined4 *)(param_1 + 0x24a) = 0;
    *(undefined2 *)(param_1 + 0x24e) = 0;
    param_1[0x250] = '\0';
    if (*param_1 == '\0') {
      param_1[0x54] = -1;
    }
    *(char **)(param_1 + 0x234) = param_1 + 0x55;
    if (param_1[0x24] == '\x01') {
      *(undefined2 *)(param_1 + 0x238) = 0xee;
    }
    else {
      *(undefined2 *)(param_1 + 0x238) = 0x1f;
    }
    pcVar1 = (char *)FUN_00029b10(param_2,param_1 + 0x55,param_1 + 0x238);
    if (pcVar1 == (char *)0x0) {
      if (param_2 == -0x3c) {
        *(undefined4 *)(param_1 + 0x23c) = 0;
        *(undefined2 *)(param_1 + 0x240) = 0;
      }
      else {
        *(char **)(param_1 + 0x23c) = param_1 + 0x143;
        if (param_1[0x24] == '\x01') {
          *(undefined2 *)(param_1 + 0x240) = 0xee;
        }
        else {
          *(undefined2 *)(param_1 + 0x240) = 0x1f;
        }
        pcVar1 = (char *)FUN_00029b10(param_2 + 0x3c,param_1 + 0x143,param_1 + 0x240);
        if (pcVar1 != (char *)0x0) {
          return pcVar1;
        }
      }
      param_1[0x51] = '\x01';
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x18);
      param_1[0x3c] = '\x01';
      *(undefined4 *)(param_1 + 0x40) = 0;
      param_1[0x50] = '\0';
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
      pcVar1 = param_1 + 0x54;
      software_interrupt(0x72);
      if (pcVar1 == (char *)0x0) {
        *param_1 = '\x01';
      }
    }
  }
  return pcVar1;
}


/* ---- FUN_00029e78 @ 00029e78 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00029e78(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  FUN_00034324(s_ble_advertising_start__d_0002a0dc);
  bVar6 = *DAT_0002a0f8 == '\0';
  do {
    if (!bVar6) goto LAB_0002a0d6;
    bVar6 = *DAT_0002a0fc == '\0';
  } while ((!bVar6) || (bVar6 = *_DAT_0002a100 == '\0', !bVar6));
  if (*param_1 == '\0') {
    return &NMI;
  }
  param_1[2] = (char)param_2;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  *(undefined2 *)(param_1 + 0x24e) = 0;
  param_1[0x250] = '\0';
  if (((param_1[6] != '\0') && (param_2 == 1)) ||
     ((param_1[7] != '\0' && ((param_2 == 1 || (param_2 == 2)))))) {
    if (*(code **)(param_1 + 0x34) == (code *)0x0) {
      param_1[0x251] = '\0';
    }
    else {
      param_1[0x251] = '\x01';
      (**(code **)(param_1 + 0x34))(8);
    }
  }
  uVar2 = 0;
  do {
    if (param_1[uVar2 + 0x24b] != '\0') {
      bVar6 = true;
      goto LAB_00029ef8;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  bVar6 = false;
LAB_00029ef8:
  if (param_2 == 1) {
    if (((param_1[6] == '\0') || (param_1[0x24] != '\0')) || (!bVar6)) goto LAB_00029f22;
    cVar1 = '\x01';
  }
  else if (param_2 == 2) {
LAB_00029f22:
    if ((param_1[7] == '\0') || (!bVar6)) goto LAB_00029f2c;
    cVar1 = '\x02';
  }
  else if (param_2 == 3) {
LAB_00029f2c:
    if (param_1[8] == '\0') goto LAB_00029f34;
    cVar1 = '\x03';
  }
  else {
    if (param_2 == 4) {
LAB_00029f34:
      if (param_1[9] != '\0') {
        cVar1 = '\x04';
        goto LAB_00029f3e;
      }
    }
    cVar1 = '\0';
  }
LAB_00029f3e:
  param_1[2] = cVar1;
  if ((((*(code **)(param_1 + 0x34) == (code *)0x0) || ((cVar1 != '\x03' && (cVar1 != '\x04')))) ||
      (param_1[5] == '\0')) || (param_1[0x252] != '\0')) {
    param_1[0x253] = '\0';
  }
  else {
    param_1[0x254] = '\0';
    param_1[0x253] = '\x01';
    (**(code **)(param_1 + 0x34))(7);
  }
  pcVar3 = param_1 + 0x3c;
  FUN_000264b6(pcVar3,0x18);
  param_1[0x3c] = '\x01';
  iVar4 = FUN_000336be(param_1 + 0x2c);
  if (iVar4 == 0) {
    param_1[0x51] = '\x01';
  }
  else {
    param_1[0x51] = param_1[0x2c];
  }
  if (param_1[0x24] != '\0') {
    iVar4 = FUN_000336be(param_1 + 0x2c);
    if (iVar4 == 0) {
      param_1[0x52] = '\x01';
    }
    else {
      param_1[0x52] = param_1[0x28];
    }
  }
  param_1[0x50] = '\0';
  switch(param_1[2]) {
  case '\0':
    param_1[0x31] = '\0';
    goto LAB_0002a0c0;
  case '\x01':
    param_1[0x31] = '\x01';
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(char **)(param_1 + 0x40) = param_1 + 0x24a;
    *(undefined4 *)(param_1 + 0x44) = 0;
    param_1[0x3c] = '\x02';
    *(undefined2 *)(param_1 + 0x48) = 0x80;
    break;
  case '\x02':
    param_1[0x31] = '\x02';
    if (param_1[0x24] == '\0') {
      *pcVar3 = '\x03';
    }
    else {
      *pcVar3 = '\a';
    }
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(char **)(param_1 + 0x40) = param_1 + 0x24a;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xc);
    break;
  case '\x03':
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x18);
    if (param_1[0x24] == '\0') {
      param_1[0x3c] = '\x01';
    }
    else {
      param_1[0x3c] = '\x06';
    }
    iVar4 = FUN_00038310(param_1);
    if (iVar4 == 0) {
      param_1[0x31] = '\x03';
    }
    else {
      param_1[0x50] = '\x02';
      iVar4 = FUN_0002d0c2(param_1,4);
      if (iVar4 != 0) goto switchD_00029fc6_caseD_5;
      param_1[0x31] = '\x05';
    }
    goto LAB_0002a088;
  case '\x04':
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x20);
    if (param_1[0x24] == '\0') {
      param_1[0x3c] = '\x01';
    }
    else {
      param_1[0x3c] = '\x06';
    }
    iVar4 = FUN_00038310(param_1);
    if (iVar4 == 0) {
      param_1[0x31] = '\x04';
    }
    else {
      param_1[0x50] = '\x02';
      iVar4 = FUN_0002d0c2(param_1,4);
      if (iVar4 != 0) goto switchD_00029fc6_caseD_5;
      param_1[0x31] = '\x06';
    }
LAB_0002a088:
    *(char **)(param_1 + 0x244) = param_1 + 0x234;
switchD_00029fc6_caseD_5:
    if (param_1[2] != '\0') break;
    goto LAB_0002a0c0;
  default:
    goto switchD_00029fc6_caseD_5;
  }
  pcVar5 = param_1 + 0x54;
  software_interrupt(0x72);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)(uint)(byte)param_1[0x54];
    software_interrupt(0x73);
    FUN_00034324(s_sd_ble_gap_adv_start__d_0002a103 + 1,pcVar5,pcVar3);
    if (pcVar5 == (char *)0x0) {
LAB_0002a0c0:
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_00034324(s_evt_handler__d_0002a120,param_1[0x31]);
        (**(code **)(param_1 + 0x34))(param_1[0x31]);
      }
LAB_0002a0d6:
      pcVar5 = (char *)0x0;
    }
  }
  return pcVar5;
}


/* ---- FUN_0002a134 @ 0002a134 ---- */

undefined4 FUN_0002a134(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  if (*(char *)(param_1 + 0x253) != '\0') {
    *(undefined *)(param_1 + 0x253) = 0;
    *(bool *)(param_1 + 0x254) = (param_3 | param_5) != 0;
    return 0;
  }
  return 8;
}


/* ---- FUN_0002a158 @ 0002a158 ---- */

void FUN_0002a158(int param_1)

{
  FUN_0002b798(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x36),1);
  return;
}


/* ---- FUN_0002a164 @ 0002a164 ---- */

/* WARNING: Removing unreachable block (ram,0x0002a1d0) */
/* WARNING: Removing unreachable block (ram,0x0002a1c2) */
/* WARNING: Removing unreachable block (ram,0x0002a1de) */

int FUN_0002a164(int *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) {
    iVar1 = 0xe;
  }
  else {
    *(undefined *)(param_1 + 0x37) = 0;
    param_1[0x38] = 0;
    *(undefined2 *)(param_1 + 0x39) = 0;
    param_1[0x3a] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *(undefined2 *)(param_1 + 0xe) = 0x2902;
    *(undefined2 *)(param_1 + 10) = 0x2902;
    FUN_000264b6((int)param_1 + 10,0x32);
    FUN_0003777c();
    software_interrupt(0x62);
    iVar1 = DAT_0002a1fc;
    if (DAT_0002a1fc == 0) {
      iVar1 = 0x10;
      software_interrupt(0x62);
    }
  }
  return iVar1;
}


/* ---- FUN_0002a200 @ 0002a200 ---- */

void FUN_0002a200(int param_1)

{
  FUN_0002b798(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x26),1);
  return;
}


/* ---- FUN_0002a20a @ 0002a20a ---- */

void FUN_0002a20a(short *param_1,code **param_2)

{
  short sVar1;
  undefined local_78 [12];
  short local_6c;
  
  sVar1 = *param_1;
  if (sVar1 == 0x11) {
    if (*(short *)(param_2 + 2) == param_1[2]) {
      *(undefined2 *)(param_2 + 2) = 0xffff;
    }
  }
  else if (sVar1 == 0x38) {
    if (*(short *)(param_2 + 2) == param_1[2]) {
      if ((param_1[4] != 0) && (param_1[4] == *(short *)((int)param_2 + 0x1a))) {
        local_78[0] = 6;
        local_6c = param_1[3];
        (**param_2)(local_78);
      }
      FUN_000377ec();
      return;
    }
  }
  else if ((sVar1 == 0x39) && (param_1[2] == *(short *)(param_2 + 2))) {
    if (param_1[5] == *(short *)(param_2 + 9)) {
      FUN_00032f0c(param_2,param_1 + 8,param_1[7]);
      return;
    }
    if (param_1[5] == *(short *)(param_2 + 0xd)) {
      FUN_00027fdc(param_2,param_1 + 8,param_1[7]);
      return;
    }
  }
  return;
}


/* ---- FUN_0002a29c @ 0002a29c ---- */

void FUN_0002a29c(code **param_1,char *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined local_80 [2];
  undefined2 local_7e;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 local_14;
  
  if (((*param_2 == '\0') && (*(short *)(param_2 + 4) == -0xbcf)) &&
     (param_2[6] == *(char *)(param_1 + 3))) {
    for (uVar2 = 0; uVar2 < (byte)param_2[8]; uVar2 = uVar2 + 1) {
      sVar1 = *(short *)(param_2 + uVar2 * 0x12 + 0xe);
      if (sVar1 == 0x120d) {
        puVar3 = (undefined4 *)(param_2 + uVar2 * 0x12 + 0xe);
        local_2e = *puVar3;
        local_2a = puVar3[1];
        local_26 = *(undefined2 *)(puVar3 + 2);
        local_24 = *(undefined2 *)((int)puVar3 + 10);
      }
      else if (sVar1 == -0x3917) {
        puVar3 = (undefined4 *)(param_2 + uVar2 * 0x12 + 0xe);
        local_1e = *puVar3;
        local_1a = puVar3[1];
        local_16 = *(undefined2 *)(puVar3 + 2);
        local_14 = *(undefined2 *)((int)puVar3 + 10);
      }
      else if (sVar1 == -0x270d) {
        puVar3 = (undefined4 *)(param_2 + uVar2 * 0x12 + 0xe);
        local_38 = *puVar3;
        local_34 = puVar3[1];
        local_30 = *(undefined2 *)(puVar3 + 2);
      }
    }
    local_80[0] = 0;
    local_7e = *(undefined2 *)(param_2 + 2);
  }
  else {
    local_80[0] = 1;
  }
  (**param_1)(local_80);
  return;
}


/* ---- FUN_0002a35c @ 0002a35c ---- */

undefined4 FUN_0002a35c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 local_38;
  undefined local_36;
  undefined local_34 [20];
  undefined local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined *local_18;
  
  FUN_000264b6(&local_38,0x24);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  local_1e = *(undefined2 *)(param_1 + 0x1a);
  local_18 = local_34;
  local_20 = 1;
  local_1c = 0;
  local_34[0] = 0;
  iVar2 = FUN_00037ae2(param_2,local_34 + 1);
  uVar4 = 0;
  iVar2 = iVar2 + 1;
  do {
    iVar5 = param_1 + uVar4 * 0x10;
    iVar3 = iVar2;
    if (*(char *)(iVar5 + 0x3c) == '\x01') {
      iVar3 = iVar2 + 1;
      local_34[iVar2] = (char)uVar4;
      if (((uVar4 == 1) || (uVar4 == 2)) || (uVar4 == 3)) {
        uVar1 = *(undefined2 *)(iVar5 + 0x44);
        local_34[iVar2 + 1] = (char)uVar1;
        local_34[iVar2 + 2] = (char)((ushort)uVar1 >> 8);
        iVar3 = iVar2 + 3;
      }
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    }
    uVar4 = uVar4 + 1;
    iVar2 = iVar3;
  } while (uVar4 < 8);
  local_1a = (undefined2)iVar3;
  local_38 = *(undefined2 *)(param_1 + 8);
  local_36 = 2;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
  FUN_0003778c(&local_38);
  FUN_000377ec();
  return 0;
}


/* ---- FUN_0002a3fe @ 0002a3fe ---- */

undefined4 FUN_0002a3fe(int param_1)

{
  if ((*(byte *)(param_1 + 4) < 3) && (*(byte *)(param_1 + 6) < 0xc)) {
    return 0;
  }
  return 7;
}


/* ---- FUN_0002a412 @ 0002a412 ---- */

void FUN_0002a412(undefined4 param_1,undefined4 param_2)

{
  FUN_00035c94(param_2,0x14);
  return;
}


/* ---- FUN_0002a41a @ 0002a41a ---- */

void FUN_0002a41a(undefined4 param_1,undefined4 param_2)

{
  FUN_00035d50(param_2,0xe);
  return;
}


/* ---- FUN_0002a422 @ 0002a422 ---- */

void FUN_0002a422(undefined4 param_1,undefined4 param_2)

{
  FUN_00035d2c(param_2,5);
  return;
}


/* ---- FUN_0002a42a @ 0002a42a ---- */

void FUN_0002a42a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00035d2c(param_2,param_3);
  return;
}


/* ---- FUN_0002a434 @ 0002a434 ---- */

int FUN_0002a434(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002e77c();
  if (param_2 == (undefined4 *)0x0) {
    param_2 = DAT_0002a470;
  }
  iVar2 = 0x3002;
  if ((iVar1 != 0) && (software_interrupt(0x75), iVar2 = param_1, param_1 == 0)) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined *)(iVar1 + 8) = 1;
    *(undefined4 *)(iVar1 + 10) = *param_2;
    *(undefined4 *)(iVar1 + 0xe) = param_2[1];
  }
  return iVar2;
}


/* ---- FUN_0002a474 @ 0002a474 ---- */

undefined4 * FUN_0002a474(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined4 *)0xe;
  }
  else {
    FUN_00026484(DAT_0002a4d4,param_1,0x1c);
    *DAT_0002a4d4 = (int)DAT_0002a4d8;
    puVar4 = DAT_0002a4d8;
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 == (undefined4 *)0x0) {
      software_interrupt(0x7b);
      if (DAT_0002a4d8 != (undefined4 *)0x0) {
        return DAT_0002a4d8;
      }
    }
    else {
      software_interrupt(0x7a);
      if (puVar2 != (undefined4 *)0x0) {
        return puVar2;
      }
      puVar2 = (undefined4 *)*param_1;
      *DAT_0002a4d8 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = DAT_0002a4dc;
    ppiVar3 = (int **)(DAT_0002a4d4 + -4);
    *(undefined2 *)(DAT_0002a4d4 + -5) = 0xffff;
    *ppiVar3 = DAT_0002a4d4 + -0xd;
    puVar4 = (undefined4 *)FUN_00028c28(ppiVar3,0,uVar1);
    if (puVar4 != (undefined4 *)0x0) {
      return (undefined4 *)0x3;
    }
  }
  return puVar4;
}


/* ---- FUN_0002a4e0 @ 0002a4e0 ---- */

void FUN_0002a4e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002a61c();
  if (iVar1 != 0) {
    FUN_000304b6(DAT_0002a4fc,param_1);
    return;
  }
  return;
}


/* ---- FUN_0002a500 @ 0002a500 ---- */

void FUN_0002a500(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00038328();
  if (iVar1 != 0) {
    FUN_0002d37a(*(undefined4 *)(DAT_0002a528 + param_1 * 4 + 0x18),param_2,param_3);
    return;
  }
  return;
}


/* ---- FUN_0002a52c @ 0002a52c ---- */

void FUN_0002a52c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002a61c();
  if (iVar1 != 0) {
    FUN_000304b6(DAT_0002a548,param_1);
    return;
  }
  return;
}


/* ---- FUN_0002a54c @ 0002a54c ---- */

undefined4 FUN_0002a54c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a61c();
  if (iVar1 != 0) {
    iVar1 = FUN_000304b6(DAT_0002a56c,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* ---- FUN_0002a570 @ 0002a570 ---- */

undefined4 FUN_0002a570(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002a61c();
  if (iVar1 != 0) {
    iVar1 = FUN_000304b6(DAT_0002a590,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* ---- FUN_0002a594 @ 0002a594 ---- */

uint FUN_0002a594(void)

{
  uint uVar1;
  
  uVar1 = FUN_0003046c(DAT_0002a5a8,0x18);
  if (uVar1 != 0x18) {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* ---- FUN_0002a5ac @ 0002a5ac ---- */

undefined4 FUN_0002a5ac(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00038328(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0002a61c(param_1), iVar1 != 0)) {
    uVar2 = FUN_000304b6(DAT_0002a5d8 + param_2 * 4 + 0x18,param_1);
    return uVar2;
  }
  return 0;
}


/* ---- FUN_0002a5dc @ 0002a5dc ---- */

void FUN_0002a5dc(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00038328(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0002a61c(param_1), iVar1 != 0)) {
    iVar1 = DAT_0002a618 + param_2 * 4 + 0x18;
    if (param_3 != 0) {
      FUN_0003051c(iVar1 + (param_1 >> 5) * 4,1 << (param_1 & 0x1f));
      return;
    }
    FUN_000304f2(iVar1 + (param_1 >> 5) * 4,~(1 << (param_1 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_0002a61c @ 0002a61c ---- */

undefined4 FUN_0002a61c(uint param_1)

{
  undefined4 uVar1;
  
  if (0x13 < param_1) {
    return 0;
  }
  uVar1 = FUN_000304b6(DAT_0002a62c,param_1);
  return uVar1;
}


/* ---- FUN_0002a630 @ 0002a630 ---- */

undefined4 FUN_0002a630(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_0002a668;
  if (param_1 == (undefined4 *)0x0) {
    return 0xe;
  }
  if (*DAT_0002a668 != '\0') {
    iVar2 = FUN_00035404();
    if (iVar2 == 0) {
      uVar3 = *(uint *)(pcVar1 + 0xc);
      if (5 < uVar3) {
        return 4;
      }
      *(undefined4 *)(DAT_0002a66c + uVar3 * 4) = *param_1;
      *(uint *)(pcVar1 + 0xc) = uVar3 + 1;
    }
    return 0;
  }
  return 8;
}


/* ---- FUN_0002a670 @ 0002a670 ---- */

undefined4 FUN_0002a670(int param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002a688;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0002a688 + 0xc) = 0;
    *puVar1 = 1;
    *(int *)(puVar1 + 4) = param_1;
    *(undefined4 *)(puVar1 + 8) = 0;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_0002a71c @ 0002a71c ---- */

undefined4 FUN_0002a71c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xe;
  }
  if ((*DAT_0002a740 != '\0') && (*(int *)(DAT_0002a740 + 0xc) != 0)) {
    if (*(char *)(param_1 + 0x2c7) != '\0') {
      return 0x11;
    }
    uVar1 = FUN_0002c868();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_0002a744 @ 0002a744 ---- */

byte * FUN_0002a744(int param_1,ushort *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte local_18;
  undefined3 local_17;
  undefined uStack_14;
  undefined2 local_13;
  
  uStack_14 = (undefined)param_4;
  local_13 = (undefined2)((uint)param_4 >> 8);
  pbVar2 = &local_18;
  if (param_3 < *param_2 + 9) {
    pbVar2 = &HardFault;
  }
  else {
    software_interrupt(0x6d);
    if (pbVar2 == (byte *)0x0) {
      *(undefined *)(param_1 + (uint)*param_2) = 8;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      *(undefined *)(param_1 + (uint)(ushort)(uVar1 + 1)) = 0x1b;
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      puVar3 = (undefined4 *)((uint)(ushort)(uVar1 + 1) + param_1);
      local_17 = (undefined3)(param_3 >> 8);
      *puVar3 = CONCAT13(uStack_14,local_17);
      *(undefined2 *)(puVar3 + 1) = local_13;
      uVar1 = *param_2;
      *param_2 = uVar1 + 6;
      local_18 = (byte)param_3;
      local_18 = local_18 >> 1;
      if (local_18 != 0) {
        local_18 = 1;
      }
      *(byte *)(param_1 + (uint)(ushort)(uVar1 + 6)) = local_18;
      *param_2 = *param_2 + 1;
      return (byte *)0x0;
    }
  }
  return pbVar2;
}


/* ---- FUN_0002a7a4 @ 0002a7a4 ---- */

void FUN_0002a7a4(undefined4 param_1,undefined4 param_2)

{
  FUN_00035cd0(param_2);
  return;
}


/* ---- FUN_0002a7aa @ 0002a7aa ---- */

undefined4 FUN_0002a7aa(void)

{
  software_interrupt(0x3d);
  software_interrupt(0x3c);
  FUN_00030f58(2,0xb1);
  return 0;
}


/* ---- FUN_0002a7cc @ 0002a7cc ---- */

/* WARNING: Removing unreachable block (ram,0x0002a7ea) */
/* WARNING: Removing unreachable block (ram,0x0002a7f2) */
/* WARNING: Removing unreachable block (ram,0x0002a808) */
/* WARNING: Removing unreachable block (ram,0x0002a80c) */
/* WARNING: Removing unreachable block (ram,0x0002a822) */
/* WARNING: Removing unreachable block (ram,0x0002a826) */
/* WARNING: Removing unreachable block (ram,0x0002a83c) */
/* WARNING: Removing unreachable block (ram,0x0002a840) */
/* WARNING: Removing unreachable block (ram,0x0002a856) */
/* WARNING: Removing unreachable block (ram,0x0002a85a) */
/* WARNING: Removing unreachable block (ram,0x0002a870) */
/* WARNING: Removing unreachable block (ram,0x0002a874) */
/* WARNING: Removing unreachable block (ram,0x0002a88a) */
/* WARNING: Removing unreachable block (ram,0x0002a88e) */
/* WARNING: Removing unreachable block (ram,0x0002a8ac) */
/* WARNING: Removing unreachable block (ram,0x0002a8b0) */
/* WARNING: Removing unreachable block (ram,0x0002a8c8) */
/* WARNING: Removing unreachable block (ram,0x0002a8cc) */
/* WARNING: Removing unreachable block (ram,0x0002a8f0) */

undefined4 FUN_0002a7cc(void)

{
  software_interrupt(0xa8);
  return 1;
}


/* ---- FUN_0002a8fc @ 0002a8fc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a8fc(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(DAT_0002a940 + 8) < 0x82) || (*(byte *)(DAT_0002a940 + 8) == 0xff)) {
    if (param_1 == 0) {
      return;
    }
    FUN_000342b0();
  }
  uVar1 = (uint)*(ushort *)(_DAT_0002a944 + 4);
  if (uVar1 != 0xffff) {
    uVar2 = CONCAT44(0x13,uVar1);
    software_interrupt(0x76);
    if (uVar1 != 0) {
      uVar2 = FUN_00026218(uVar1,0x1be,s__________user_ble_c_0002a947 + 1);
    }
    if (param_1 != 0) {
      FUN_000342b0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
      return;
    }
  }
  return;
}


/* ---- FUN_0002ab74 @ 0002ab74 ---- */

void FUN_0002ab74(short *param_1)

{
  code **ppcVar1;
  code *pcVar2;
  int iVar3;
  
  ppcVar1 = DAT_0002abe0;
  if (*param_1 == 0x10) {
    if (((DAT_0002abe0[1] == (code *)0x0) &&
        ((((iVar3 = FUN_0002b438(0,0,1), iVar3 != 0 && (iVar3 != 7)) ||
          ((iVar3 = FUN_0002b438(1,2,7), iVar3 != 0 && (iVar3 != 7)))) ||
         ((iVar3 = FUN_0002b438(0,2,4), iVar3 != 0 && (iVar3 != 7)))))) && (*ppcVar1 != (code *)0x0)
       ) {
      (**ppcVar1)();
    }
    ppcVar1[1] = ppcVar1[1] + 1;
  }
  else if (*param_1 == 0x11) {
    pcVar2 = DAT_0002abe0[1] + -1;
    DAT_0002abe0[1] = pcVar2;
    if (((pcVar2 == (code *)0x0) && (iVar3 = FUN_00027afa(), iVar3 != 0)) &&
       (*ppcVar1 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0002ab9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar1)();
      return;
    }
  }
  return;
}


/* ---- FUN_0002ad74 @ 0002ad74 ---- */

void FUN_0002ad74(undefined4 param_1)

{
  if (*DAT_0002ad98 != '\0') {
    FUN_0002e280(param_1);
    FUN_000362c4(param_1);
    FUN_0002de28(param_1);
    return;
  }
  return;
}


/* ---- FUN_0002ad9c @ 0002ad9c ---- */

ulonglong FUN_0002ad9c(int param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return CONCAT44(param_2,0xe);
  }
  FUN_00034324(s_sedFFA6__d_0002adf4,*param_3,param_3,param_4,param_3,param_4);
  if (*param_3 < 0x28) {
    FUN_00034328(param_2);
  }
  iVar1 = *(ushort *)(param_1 + 0x34) - 0xffff;
  if (iVar1 != 0) {
    if (0xf4 < *param_3) {
      return CONCAT44(iVar1,7);
    }
    software_interrupt(0xac);
    return (ulonglong)CONCAT24(*(undefined2 *)(param_1 + 0x24),(uint)*(ushort *)(param_1 + 0x34));
  }
  return 8;
}


/* ---- FUN_0002ae04 @ 0002ae04 ---- */

/* WARNING: Removing unreachable block (ram,0x0002ae64) */
/* WARNING: Removing unreachable block (ram,0x0002ae7a) */
/* WARNING: Removing unreachable block (ram,0x0002ae90) */
/* WARNING: Removing unreachable block (ram,0x0002aea6) */
/* WARNING: Removing unreachable block (ram,0x0002aec4) */
/* WARNING: Removing unreachable block (ram,0x0002aeda) */
/* WARNING: Removing unreachable block (ram,0x0002aeba) */

undefined4 * FUN_0002ae04(undefined *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  undefined local_16;
  
  puVar1 = &local_28;
  local_28 = *DAT_0002aef0;
  uStack_24 = DAT_0002aef0[1];
  uStack_20 = DAT_0002aef0[2];
  uStack_1c = DAT_0002aef0[3];
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)0xe;
  }
  else {
    *(undefined2 *)(param_1 + 0x34) = 0xffff;
    *(undefined4 *)(param_1 + 0x38) = *param_2;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    software_interrupt(0x62);
    FUN_00034324(s_ble_nus_init_A__x_0002aef4,&local_28);
    if (&stack0x00000000 == &Reserved4) {
      local_16 = *param_1;
      local_18 = 2;
      software_interrupt(0xa8);
      FUN_00034324(s_ble_nus_init_B__x_0002af08,1,param_1 + 2);
      puVar1 = (undefined4 *)0x1;
    }
  }
  return puVar1;
}


/* ---- FUN_0002af94 @ 0002af94 ---- */

undefined8 FUN_0002af94(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00034324(s_sendToAPP_sed_ffa6__d_0002affc,*param_3);
    if (*param_3 < 0x28) {
      FUN_00034328(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x44) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x46) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x44);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002b014 @ 0002b014 ---- */

/* WARNING: Removing unreachable block (ram,0x0002b062) */
/* WARNING: Removing unreachable block (ram,0x0002b06e) */
/* WARNING: Removing unreachable block (ram,0x0002b07a) */
/* WARNING: Removing unreachable block (ram,0x0002b090) */

undefined * FUN_0002b014(int param_1,int param_2)

{
  undefined *puVar1;
  undefined local_28 [24];
  
  puVar1 = local_28;
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined *)0xe;
  }
  else {
    *(undefined2 *)(param_1 + 0x44) = 0xffff;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x20);
    *(undefined *)(param_1 + 0x46) = 0;
    software_interrupt(0x62);
    if (&stack0x00000000 == &Reserved4) {
      puVar1 = (undefined *)0x1;
      software_interrupt(0xa8);
    }
  }
  return puVar1;
}


/* ---- FUN_0002b190 @ 0002b190 ---- */

undefined4 FUN_0002b190(void)

{
  return 0;
}


/* ---- FUN_0002b194 @ 0002b194 ---- */

undefined8 FUN_0002b194(short *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined8 uVar2;
  short *local_18;
  int local_14;
  short *psStack_10;
  short *psStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  if ((param_2 != 0) && (param_1 != (short *)0x0)) {
    sVar1 = *param_1;
    if (sVar1 == 0x10) {
      sVar1 = param_1[2];
    }
    else {
      if (sVar1 != 0x11) {
        if (sVar1 == 0x50) {
          psStack_10 = (short *)param_3;
          psStack_c = (short *)param_4;
          uVar2 = FUN_00032a24();
          return uVar2;
        }
        if (sVar1 == 0x57) {
          local_18 = *DAT_0002b1e4;
          psStack_10 = DAT_0002b1e4[2];
          psStack_c = DAT_0002b1e4[3];
          (**(code **)(param_2 + 0x38))(&local_18);
        }
        goto LAB_0002b1ca;
      }
      sVar1 = -1;
    }
    *(short *)(param_2 + 0x34) = sVar1;
    return CONCAT44(param_2,param_1);
  }
LAB_0002b1ca:
  return CONCAT44(local_14,local_18);
}


/* ---- FUN_0002b1e8 @ 0002b1e8 ---- */

undefined8 FUN_0002b1e8(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00034324(s_sendToAPP_sedFFA5__d_0002b24c,*param_3);
    if (*param_3 < 0x28) {
      FUN_00034328(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x34) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x37) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x34);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002b264 @ 0002b264 ---- */

undefined8 FUN_0002b264(int param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  int *local_1c;
  ushort *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0xe;
  }
  else {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    FUN_00034324(s_sendToAPP_sedFFA4__d_0002b2c8,*param_3);
    if (*param_3 < 0x28) {
      FUN_00034328(param_2);
    }
    param_2 = (int *)(*(ushort *)(param_1 + 0x34) - 0xffff);
    if ((param_2 == (int *)0x0) || (*(char *)(param_1 + 0x36) == '\0')) {
      uVar1 = 8;
    }
    else if (*param_3 < 0xf5) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x34);
      software_interrupt(0xae);
      param_2 = &local_20;
    }
    else {
      uVar1 = 7;
    }
  }
  return CONCAT44(param_2,uVar1);
}


/* ---- FUN_0002b2e0 @ 0002b2e0 ---- */

void FUN_0002b2e0(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_000264cc(param_2);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = param_2;
  return;
}


/* ---- FUN_0002b2f2 @ 0002b2f2 ---- */

byte FUN_0002b2f2(byte *param_1)

{
  return *param_1 & 1;
}


/* ---- FUN_0002b2fc @ 0002b2fc ---- */

void FUN_0002b2fc(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = FUN_00031368();
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x54d,DAT_0002b33c);
  }
  local_8[0] = 0;
  iVar1 = FUN_000311bc(1,local_8);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x555,DAT_0002b33c);
  }
  iVar1 = FUN_00031258(local_8);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x559,DAT_0002b33c);
  }
  return;
}


/* ---- ffa6_on_write @ 0002b368 ---- */
/* [0x10] ping; [0x88,len,frame..] batch; else process_app_cmd */

/* [0x10] ping; [0x88,len,frame..] batch; else process_app_cmd */

void ffa6_on_write(char *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  debug_printf(s_appcmd_rev__d_0002b3c0);
  FUN_00034300(param_1,param_2);
  if ((param_2 == 1) && (*param_1 == '\x10')) {
    FUN_000288cc(0,0,DAT_0002b3d0);
  }
  if (*param_1 != -0x78) {
    process_app_cmd(param_1,param_2);
    return;
  }
  iVar2 = 1;
  do {
    bVar1 = param_1[iVar2];
    process_app_cmd(param_1 + iVar2 + 1,(uint)bVar1);
    iVar2 = iVar2 + (uint)bVar1 + 1;
  } while (iVar2 < param_2);
  return;
}


/* ---- FUN_0002b3d4 @ 0002b3d4 ---- */

void FUN_0002b3d4(undefined4 param_1,undefined4 param_2)

{
  debug_printf(s_auid_rev__d_0002b3f4);
  FUN_00034300(param_1,param_2);
  FUN_000347cc(param_1,param_2);
  return;
}


/* ---- FUN_0002b404 @ 0002b404 ---- */

void FUN_0002b404(undefined4 param_1,undefined4 param_2)

{
  debug_printf(s_token_rev__d__>_0002b424);
  FUN_00034300(param_1,param_2);
  FUN_00034cdc(param_1,param_2);
  return;
}


/* ---- FUN_0002b438 @ 0002b438 ---- */

undefined4 FUN_0002b438(void)

{
  return 7;
}


/* ---- FUN_0002b43c @ 0002b43c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b43c(void)

{
  FUN_00034324(s_LED_POWER_INIT_0002b458);
  FUN_00030e1a(0xffffffff);
  _DAT_50000508 = 0;
  return;
}


/* ---- FUN_0002b46c @ 0002b46c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b46c(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00030e70(0xe);
  pcVar2 = DAT_0002b50c;
  puVar1 = DAT_0002b508;
  if (iVar3 == 0) {
    if (*DAT_0002b50c != '\0') {
      iVar3 = *(int *)(DAT_0002b50c + 8);
      *(int *)(DAT_0002b50c + 8) = iVar3 + 1;
      if (iVar3 + 1 < 2) {
        return;
      }
      *pcVar2 = '\0';
      return;
    }
    iVar3 = *(int *)(DAT_0002b50c + 0xc);
    *(int *)(DAT_0002b50c + 0xc) = iVar3 + 1;
    if (iVar3 + 1 < 0x1a) {
      return;
    }
    FUN_00034324(s_BUTTON_TAP_COUNT__d_0002b513 + 1,*(undefined4 *)(pcVar2 + 0x10));
    *(undefined4 *)(pcVar2 + 0xc) = 0;
  }
  else {
    iVar4 = FUN_00030e70(0xe);
    iVar3 = _DAT_0002b510;
    if (iVar4 != 1) {
      return;
    }
    if (*pcVar2 == '\0') {
      iVar3 = *(int *)(pcVar2 + 8);
      *(int *)(pcVar2 + 8) = iVar3 + 1;
      if (iVar3 + 1 < 2) {
        return;
      }
      *(undefined4 *)(pcVar2 + 0xc) = 0;
      *pcVar2 = '\x01';
      *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
      *(undefined4 *)(pcVar2 + 0x14) = 0;
      return;
    }
    iVar4 = *(int *)(pcVar2 + 0x14) + 1;
    *(int *)(pcVar2 + 0x14) = iVar4;
    if ((iVar4 == 0x32) || (iVar4 == 100)) {
      FUN_00034324(s_long_press__d__d_0002b52c,iVar4,*(undefined *)(iVar3 + 8),0x85);
    }
    if (*(int *)(pcVar2 + 0x14) != 0x32) {
      return;
    }
    pcVar2[1] = '\x01';
    *(undefined4 *)(pcVar2 + 0x14) = 0;
    FUN_0002b598();
  }
  *puVar1 = 1;
  return;
}


/* ---- FUN_0002b540 @ 0002b540 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b540(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0002b578 + 1) == '\0') {
    if (*DAT_0002b57c == '\0') {
      FUN_00034324(s____ACC_error_A_0002b587 + 1);
      return;
    }
    if ((*DAT_0002b580 | *_DAT_0002b584) == 0) {
      FUN_0002b46c();
      iVar1 = DAT_0002b6f8;
      *(undefined4 *)(DAT_0002b6f8 + 0x14) = 0xb4;
      if (*(char *)(iVar1 + 9) == '\0') {
        *(undefined *)(iVar1 + 9) = 1;
        FUN_0002b9d8();
        FUN_00028ca4(*(undefined4 *)(DAT_0002b6fc + 0x20),0x28f,0);
        return;
      }
      return;
    }
  }
  else {
    *(undefined *)(DAT_0002b578 + 1) = 0;
  }
  return;
}


/* ---- FUN_0002b598 @ 0002b598 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  
  FUN_00034324(s_____use_long_press_one_second____0002b630);
  iVar1 = _DAT_0002b65c;
  if (*(char *)(_DAT_0002b65c + 8) != -0x7b) {
    FUN_00027878(0x10,extraout_r1,param_3,param_4);
    return;
  }
  iVar2 = _DAT_0002b65c + 0xd;
  if (*(char *)(_DAT_0002b65c + 0x1b) != '\x01') {
    FUN_00034324(s_Double_tap_detected_in_double_ta_0002b65f + 1);
    *(undefined *)(iVar1 + 0xd) = 0x14;
    *(undefined *)(iVar1 + 0xe) = 0xff;
    *(undefined4 *)(iVar1 + 0xf) = 0;
    *(undefined4 *)(iVar1 + 0x13) = 0;
    *(undefined4 *)(iVar1 + 0x17) = 0;
    FUN_00030234(iVar2);
    motor_on(100,1000);
    FUN_0002ed00();
    FUN_00038610();
    FUN_0002ed9c(*(undefined4 *)(_DAT_0002b694 + 0x4c),0xf,500,500,0,1000);
    FUN_000385a8(1000,0);
    *(undefined *)(iVar1 + 0x31) = 0;
    return;
  }
  FUN_00034324(s_Double_tap_detected_in_double_ta_0002b697 + 1);
  *(undefined *)(iVar1 + 0xd) = 0x17;
  *(undefined *)(iVar1 + 0xe) = 0;
  *(undefined4 *)(iVar1 + 0xf) = 0;
  *(undefined4 *)(iVar1 + 0x13) = 0;
  FUN_00030234(iVar2,extraout_r1_00,param_3,param_4);
  return;
}


/* ---- FUN_0002b728 @ 0002b728 ---- */

void FUN_0002b728(void)

{
  if (*(char *)(DAT_0002b740 + 9) != '\0') {
    *(undefined *)(DAT_0002b740 + 9) = 0;
    FUN_00028d2c(*(undefined4 *)(DAT_0002b744 + 0x20));
    return;
  }
  return;
}


/* ---- FUN_0002b748 @ 0002b748 ---- */

void FUN_0002b748(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uVar1 = FUN_0002e574();
  iVar2 = FUN_000332bc(uVar1,9,&uStack_10,0);
  if (iVar2 == 5) {
    FUN_0002a5dc(param_1,*(undefined *)(DAT_0002b76c + 5),1);
  }
  return;
}


/* ---- FUN_0002b798 @ 0002b798 ---- */

undefined4 FUN_0002b798(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 local_38;
  undefined local_36;
  undefined local_34;
  undefined local_33;
  undefined local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined *local_18;
  
  FUN_000264b6(&local_38,0x24);
  local_18 = &local_34;
  local_1a = 2;
  local_1c = 0;
  local_20 = 1;
  local_34 = (undefined)param_3;
  local_36 = 2;
  local_33 = (undefined)((uint)param_3 >> 8);
  local_38 = param_1;
  local_1e = param_2;
  FUN_0003778c(&local_38);
  FUN_000377ec();
  return 0;
}


/* ---- FUN_0002b7e8 @ 0002b7e8 ---- */

void FUN_0002b7e8(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002b800;
  *(undefined4 *)(DAT_0002b800 + param_1 * 4) = 0xffffffff;
  if (7 < param_1) {
    *(undefined *)(param_1 + iVar1 + 0x48) = 0xff;
  }
  return;
}


/* ---- FUN_0002b804 @ 0002b804 ---- */

int FUN_0002b804(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_0002b848;
  if (param_3 == 0) {
    uVar3 = 8;
    uVar4 = 0xc;
  }
  else {
    uVar3 = 0;
    uVar4 = 8;
  }
  while( true ) {
    if (uVar4 <= uVar3) {
      return -1;
    }
    if (*(int *)(DAT_0002b848 + uVar3 * 4) == -1) break;
    uVar3 = uVar3 + 1;
  }
  cVar1 = (char)uVar3;
  *(char *)(DAT_0002b848 + param_1 + 0x30) = cVar1;
  *(undefined4 *)(iVar2 + uVar3 * 4) = param_2;
  if (param_3 != 0) {
    return (int)cVar1;
  }
  *(char *)(iVar2 + uVar3 + 0x48) = (char)param_1;
  return (int)cVar1;
}


/* ---- FUN_0002b84c @ 0002b84c ---- */

int FUN_0002b84c(int param_1)

{
  return (int)*(char *)(param_1 + DAT_0002b858 + 0x30);
}


/* ---- FUN_0002b85c @ 0002b85c ---- */

undefined8 FUN_0002b85c(undefined2 param_1,int param_2,int param_3,undefined2 *param_4)

{
  byte local_58 [4];
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined local_3c [20];
  uint local_28;
  undefined2 local_24;
  undefined local_22;
  
  if (param_2 == 0) {
    FUN_00026218(0,0x88,s___________________components_ble_0002b900);
  }
  if (param_3 == 0) {
    FUN_00026218(0,0x89,s___________________components_ble_0002b900);
  }
  FUN_000264b6(local_58,0x1c);
  local_4c = 0;
  local_58[0] = local_58[0] | 2;
  local_54 = 0;
  local_22 = 1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_28 = (uint)CONCAT12(2,*param_4);
  local_24 = param_1;
  FUN_000264b6(local_3c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_58,(uint)*DAT_0002b940);
}


/* ---- FUN_0002b944 @ 0002b944 ---- */

undefined8 FUN_0002b944(undefined4 param_1,undefined4 param_2)

{
  undefined local_8 [8];
  
  software_interrupt(0x9d);
  return CONCAT44(local_8,param_2);
}


/* ---- FUN_0002b986 @ 0002b986 ---- */

void FUN_0002b986(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_000358b0();
    FUN_0002df84();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  return;
}


/* ---- FUN_0002b99a @ 0002b99a ---- */

uint FUN_0002b99a(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0xffff;
  if (param_1 == 0xffff) {
    uVar1 = FUN_0003046c(param_2,0x100);
    uVar2 = (uint)uVar1;
    if (uVar2 == 0x100) {
      return 0xffff;
    }
  }
  else if (param_1 < 0x100) {
    iVar3 = FUN_0003044c(param_2,param_1);
    if (iVar3 == 1) {
      return 0xffff;
    }
    return param_1;
  }
  return uVar2;
}


/* ---- FUN_0002b9d8 @ 0002b9d8 ---- */

void FUN_0002b9d8(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002b9e8;
  *DAT_0002b9e8 = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  return;
}


/* ---- FUN_0002b9ec @ 0002b9ec ---- */

void FUN_0002b9ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)(DAT_0002ba10 + 8);
  }
  else {
    puVar2 = (undefined4 *)(DAT_0002ba10 + 0x10);
  }
  while (puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0) {
    *puVar2 = *puVar1;
    (*(code *)puVar1[1])(param_1);
  }
  return;
}


/* ---- FUN_0002ba30 @ 0002ba30 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ba30(void)

{
  int iVar1;
  
  iVar1 = _DAT_0002ba68;
  if (*DAT_0002ba64 != '\0') {
    FUN_00034324(s_closeBLE_BLEconnect_0002ba6b + 1);
    software_interrupt(0x76);
  }
  FUN_00034324(s_closeBLE__d_0002ba84,*(undefined *)(iVar1 + 2));
  if (*(char *)(iVar1 + 2) != '\0') {
    software_interrupt(0x74);
    *(undefined *)(iVar1 + 2) = 0;
  }
  return;
}


/* ---- FUN_0002ba98 @ 0002ba98 ---- */

void FUN_0002ba98(void)

{
  return;
}


/* ---- FUN_0002ba9c @ 0002ba9c ---- */

void FUN_0002ba9c(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = DAT_0002bb44;
  puVar2 = DAT_0002bb40;
  iVar1 = DAT_0002bb3c;
  if (*(uint **)(DAT_0002bb3c + 4) == (uint *)0x0) {
    FUN_00035570();
    return;
  }
  uVar7 = **(uint **)(DAT_0002bb3c + 4);
  uVar5 = *DAT_0002bb40;
  iVar8 = *(int *)(DAT_0002bb3c + 8);
  uVar6 = (uVar5 - iVar8 & 0xffffff) + 3;
  if (*(char *)(DAT_0002bb3c + 2) == '\0') {
    DAT_0002bb44[0xd1] = 0x10000;
    puVar3[0xc1] = 0x10000;
    FUN_00026cf8(0x11);
    FUN_00026d0e(0x11);
    *puVar3 = 1;
    FUN_000315f4(0x2f);
    *(undefined *)(iVar1 + 2) = 1;
  }
  if (uVar6 < uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = DAT_0002bb40 + 0xf;
  uVar6 = uVar6 + iVar8 & 0xffffff;
  *puVar4 = uVar6;
  if ((uVar6 - uVar5 & 0xffffff) < (*puVar2 - uVar5 & 0xffffff) + 3) {
    *puVar4 = *puVar2;
    FUN_000315f4(0x2f);
    FUN_00026d24(0x11);
    return;
  }
  return;
}


/* ---- config_cmd_process @ 0002bb48 ---- */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * config_cmd_process(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  local_38 = local_38 & 0xffff0000;
  bVar7 = param_1[1];
  bVar2 = *param_1;
  if (bVar7 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  *_DAT_0002bf58 = uVar6;
  pcVar8 = (char *)FUN_00034324(s_config_cmd_process__x_0002bf5b + 1,bVar2);
  iVar4 = DAT_0002bf7c;
  iVar9 = DAT_0002bf78;
  puVar3 = DAT_0002bf74;
  if (bVar2 == 0x25) {
    if (bVar7 == 1) {
      FUN_0002e7f0(param_1 + 2,_DAT_0002c264 + -0x20,4);
      pcVar8 = (char *)FUN_00034324(s_SYS_CONFIG_TOUCH_COLOR___0x_x__0002c267 + 1,
                                    *(undefined4 *)(iVar9 + 0x4c));
      return pcVar8;
    }
    goto joined_r0x0002c052;
  }
  if (0x25 < bVar2) {
    if (bVar2 == 0x33) {
      if (bVar7 == 1) {
        pbVar1 = (byte *)(DAT_0002bf78 + 0x7a);
        *pbVar1 = param_1[2];
        FUN_00034324(s_app_settings_ancsEnable__d_0002bfd0);
        pcVar8 = (char *)(uint)*pbVar1;
        if (pcVar8 != (char *)0x1) {
          return pcVar8;
        }
        if ((char *)(uint)*(byte *)(DAT_0002bfec + 4) != (char *)0x0) {
          return (char *)(uint)*(byte *)(DAT_0002bfec + 4);
        }
        pcVar8 = (char *)FUN_0003544c();
        return pcVar8;
      }
      if (bVar7 != 0x10) {
        return pcVar8;
      }
      uVar6 = *(undefined *)(DAT_0002bf78 + 0x7a);
      FUN_000264b6(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x33,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = CONCAT31(local_34._1_3_,uVar6);
      iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
      if (iVar9 == 0) {
        return (char *)0x0;
      }
      FUN_00026218(iVar9,0x25b,s__________app_misc_c_0002bf83 + 1);
      pcVar8 = (char *)FUN_00034324(s___S__failed___s___d__0002bfb8,DAT_0002bfb4,
                                    s__________app_misc_c_0002bf83 + 1,0x3e9);
      return pcVar8;
    }
    if (0x33 < bVar2) {
      iVar11 = DAT_0002bf7c + 0xd;
      if (bVar2 == 0x38) {
        *(undefined4 *)(_DAT_0002c290 + 8) = 0x201;
        *(undefined4 *)(iVar4 + 0xf) = 0x201;
        *(undefined *)(iVar4 + 0xd) = 0x18;
        *(undefined *)(iVar4 + 0xe) = 0xff;
        *(undefined4 *)(iVar4 + 0x13) = 0xffffffff;
LAB_0002c258:
        pcVar8 = (char *)FUN_00030234(iVar11);
        return pcVar8;
      }
      if (bVar2 < 0x39) {
        if (bVar2 == 0x35) {
          FUN_00034324(s_SYS_CONFIG_FACTORY_MODE_0002bf98);
          _DAT_50000508 = 0x200000;
          if (*_DAT_0002cc70 == '\0') {
            *_DAT_0002cc70 = '\x01';
            FUN_00034324(s____IN_TO_SLEEP_MODE_sleep_mode_e_0002cc73 + 1);
            FUN_00034324(s____IN_TO_SLEEP_MODE_sleep_mode_e_0002ccac);
            FUN_00034270();
            FUN_00038ff8();
            FUN_0002ba98();
            pcVar8 = (char *)FUN_0002ba30();
            return pcVar8;
          }
          return _DAT_0002cc70;
        }
        if (bVar2 == 0x36) {
          pcVar8 = (char *)FUN_00033f8c();
          return pcVar8;
        }
        if (bVar2 == 0x37) {
          pcVar8 = (char *)FUN_0003548c();
          return pcVar8;
        }
      }
      else {
        if (bVar2 == 0x39) {
          local_34 = (uint)param_1[6];
          local_38 = (uint)param_1[5];
          FUN_00034324(s_SYS_CONFIG_SHIP_CFG__d__x__x__x___0002c293 + 1,param_1[2],param_1[3],
                       param_1[4]);
          puVar5 = DAT_0002c2bc;
          bVar7 = param_1[2];
          if (bVar7 == 1) {
            *(undefined4 *)(iVar4 + 0xf) = 1;
            FUN_0002e790(2);
          }
          else if (bVar7 == 2) {
            *(undefined4 *)(iVar4 + 0xf) = 2;
            if (*(ushort *)(param_1 + 3) - 0xd49 < 599) {
              *(ushort *)(iVar9 + 0x80) = *(ushort *)(param_1 + 3);
            }
          }
          else if (bVar7 == 3) {
            if (*(int *)(param_1 + 3) - 0x12dU < DAT_0002c2c0) {
              *(int *)(iVar9 + 0x7c) = *(int *)(param_1 + 3);
            }
          }
          else if ((bVar7 != 4) && (bVar7 == 5)) {
            *(undefined2 *)(iVar9 + 0x80) = 0xe08;
            *(undefined4 *)(iVar9 + 0x7c) = DAT_0002c2c4;
            *puVar5 = 0;
          }
          pbVar1 = _DAT_0002c2c8;
          local_38 = *(uint *)(iVar9 + 0x7c);
          FUN_00034324(s_SYS_CONFIG_SHIP_CFG_OK__d__d__d___0002c2cb + 1,*_DAT_0002c2c8,*puVar5,
                       *(undefined2 *)(iVar9 + 0x80));
          *(undefined *)(iVar4 + 0xd) = 0x19;
          *(undefined *)(iVar4 + 0xe) = 0xff;
          *(uint *)(iVar4 + 0xf) = (uint)*(ushort *)(iVar9 + 0x80) + (uint)*pbVar1 * 0x1000000;
          *(undefined4 *)(iVar4 + 0x13) = *puVar5;
          *(uint *)(iVar4 + 0x17) = *(uint *)(iVar9 + 0x7c);
          goto LAB_0002c258;
        }
        if (bVar2 == 0xef) {
          FUN_00028b28();
          goto LAB_0002bf14;
        }
      }
switchD_0002bb90_caseD_1a:
      *_DAT_0002bf58 = 2;
      pcVar8 = (char *)0x0;
      goto LAB_0002bf16;
    }
    switch(bVar2) {
    case 0x26:
      if (bVar7 == 1) {
        iVar9 = _DAT_0002c264 + -0x1c;
        param_1 = param_1 + 2;
        goto LAB_0002c170;
      }
      break;
    case 0x27:
      if (bVar7 == 1) {
        iVar9 = _DAT_0002c264 + -0x18;
        param_1 = param_1 + 2;
        goto LAB_0002c170;
      }
      break;
    case 0x28:
      if (bVar7 == 1) {
        iVar9 = _DAT_0002c264 + -0x14;
        param_1 = param_1 + 2;
        goto LAB_0002c170;
      }
      break;
    case 0x29:
      if (bVar7 == 1) {
        iVar9 = _DAT_0002c264 + -0x10;
        param_1 = param_1 + 2;
        goto LAB_0002c170;
      }
      break;
    default:
      goto switchD_0002bb90_caseD_1a;
    case 0x30:
      if (bVar7 == 1) {
        bVar7 = param_1[2];
        *(byte *)(DAT_0002bf78 + 0x26) = bVar7;
        return (char *)(uint)bVar7;
      }
      if (bVar7 == 0x10) {
        uVar6 = *(undefined *)(DAT_0002bf78 + 0x26);
        FUN_000264b6(&local_38,0x14);
        local_38 = CONCAT31(local_38._1_3_,0x27);
        local_38._0_3_ = CONCAT12(0x30,(undefined2)local_38);
        local_38 = CONCAT13(0x10,(undefined3)local_38);
        local_34 = CONCAT31(local_34._1_3_,uVar6);
        iVar9 = FUN_0002a412(DAT_0002c28c,&local_38);
        if (iVar9 == 0) {
          return (char *)0x0;
        }
        uVar10 = 0x332;
        goto LAB_0002bd36;
      }
      goto LAB_0002c00a;
    case 0x31:
      if (bVar7 != 1) {
        if (bVar7 != 0x10) {
          return pcVar8;
        }
        pcVar8 = (char *)FUN_00037e44();
        return pcVar8;
      }
      bVar7 = param_1[2];
      if (bVar7 != 0) {
        bVar7 = 1;
      }
      *(byte *)(DAT_0002bf78 + 0x27) = bVar7;
      if (bVar7 == 0) {
        return (char *)0x0;
      }
      FUN_0002e7f0(param_1 + 3,_DAT_0002c264 + -0x44,2);
      FUN_0002e7f0(param_1 + 5,_DAT_0002c264 + -0x42,2);
      FUN_0002e7f0(param_1 + 7,_DAT_0002c264 + -0x40,2);
      iVar9 = _DAT_0002c264 + -0x3c;
      param_1 = param_1 + 9;
      goto LAB_0002c170;
    }
    goto joined_r0x0002c052;
  }
  switch(bVar2) {
  case 0x11:
    if (bVar7 != 1) {
      if (bVar7 != 0x10) {
        return pcVar8;
      }
      uVar10 = *(undefined4 *)(DAT_0002bf78 + 8);
      FUN_000264b6(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x11,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = uVar10;
      iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
      if (iVar9 == 0) {
        return (char *)0x0;
      }
      uVar10 = 0x236;
      break;
    }
    *(undefined4 *)(DAT_0002bf78 + 8) = *(undefined4 *)(param_1 + 2);
    goto LAB_0002bf14;
  case 0x12:
    if (bVar7 != 1) {
      if (bVar7 != 0x10) {
        return pcVar8;
      }
      FUN_000264b6(&local_38,0x14);
      local_38 = CONCAT31(local_38._1_3_,0x27);
      local_38._0_3_ = CONCAT12(0x12,(undefined2)local_38);
      local_38 = CONCAT13(0x10,(undefined3)local_38);
      local_34 = *(undefined4 *)(iVar9 + 0xc);
      local_30 = *(undefined4 *)(iVar9 + 0x10);
      iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
      if (iVar9 == 0) {
        return (char *)0x0;
      }
      uVar10 = 0x249;
      break;
    }
    *(undefined4 *)(DAT_0002bf78 + 0xc) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(param_1 + 6);
    goto LAB_0002bf14;
  case 0x13:
    if (bVar7 == 1) {
      bVar7 = param_1[2];
      *(byte *)(DAT_0002bf78 + 0x14) = bVar7;
      return (char *)(uint)bVar7;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar6 = *(undefined *)(DAT_0002bf78 + 0x14);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x13,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar6);
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x289;
    break;
  case 0x14:
    if (bVar7 == 1) {
      pcVar8 = *(char **)(param_1 + 2);
      *(char **)(DAT_0002bf78 + 0x18) = pcVar8;
      return pcVar8;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar10 = *(undefined4 *)(DAT_0002bf78 + 0x18);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x14,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = uVar10;
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x29e;
    break;
  case 0x15:
    if (bVar7 == 1) {
      pcVar8 = *(char **)(param_1 + 2);
      *(char **)(DAT_0002bf78 + 0x1c) = pcVar8;
      return pcVar8;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar10 = *(undefined4 *)(DAT_0002bf78 + 0x1c);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x15,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = uVar10;
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x2b3;
    break;
  case 0x16:
    if (bVar7 == 1) {
      pcVar8 = *(char **)(param_1 + 2);
      *(char **)(DAT_0002bf78 + 0x20) = pcVar8;
      return pcVar8;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar10 = *(undefined4 *)(DAT_0002bf78 + 0x20);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x16,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = uVar10;
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x2c8;
    break;
  case 0x17:
    if (bVar7 == 1) {
      bVar7 = param_1[2];
      *(byte *)(DAT_0002bf78 + 0x24) = bVar7;
      return (char *)(uint)bVar7;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar6 = *(undefined *)(DAT_0002bf78 + 0x24);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x17,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar6);
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x2db;
    break;
  case 0x18:
    if (bVar7 == 1) {
      bVar7 = param_1[2];
      *(byte *)(DAT_0002bf78 + 0x25) = bVar7;
      return (char *)(uint)bVar7;
    }
    if (bVar7 != 0x10) {
      return pcVar8;
    }
    uVar6 = *(undefined *)(DAT_0002bf78 + 0x25);
    FUN_000264b6(&local_38,0x14);
    local_38 = CONCAT31(local_38._1_3_,0x27);
    local_38._0_3_ = CONCAT12(0x18,(undefined2)local_38);
    local_38 = CONCAT13(0x10,(undefined3)local_38);
    local_34 = CONCAT31(local_34._1_3_,uVar6);
    iVar9 = FUN_0002a412(_DAT_0002bf80,&local_38);
    if (iVar9 == 0) {
      return (char *)0x0;
    }
    uVar10 = 0x2ee;
    break;
  case 0x19:
    if (bVar7 != 1) {
      if (bVar7 != 0x10) {
        return pcVar8;
      }
      pcVar8 = (char *)FUN_00037f58();
      return pcVar8;
    }
    *(undefined2 *)(DAT_0002bf78 + 0x34) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(iVar9 + 0x36) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(iVar9 + 0x38) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar9 + 0x3a) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(iVar9 + 0x3c) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)(iVar9 + 0x3e) = *(undefined2 *)(param_1 + 0xc);
LAB_0002bf14:
    pcVar8 = (char *)0x1;
LAB_0002bf16:
    *puVar3 = (char)pcVar8;
    return pcVar8;
  default:
    goto switchD_0002bb90_caseD_1a;
  case 0x21:
    if (bVar7 != 1) {
      if (bVar7 != 0x10) {
        return pcVar8;
      }
      FUN_000264b6(&stack0xffffffe0,0x14);
      pcVar8 = (char *)FUN_0002a412(_DAT_00037f40,&stack0xffffffe0);
      if (pcVar8 != (char *)0x0) {
        FUN_00026218(pcVar8,0x396,s__________app_misc_c_00037f43 + 1);
      }
      return pcVar8;
    }
    bVar7 = param_1[2];
    if (bVar7 != 0) {
      bVar7 = 1;
    }
    *(byte *)(DAT_0002bf78 + 100) = bVar7;
    if (bVar7 == 0) {
      return (char *)0x0;
    }
    FUN_0002e7f0(param_1 + 3,DAT_0002bf78 + 0x66,2);
    FUN_0002e7f0(param_1 + 5,DAT_0002bf78 + 0x68,2);
    FUN_0002e7f0(param_1 + 7,_DAT_0002c264,4);
    iVar9 = _DAT_0002c264 + -0xc;
    param_1 = param_1 + 0xb;
LAB_0002c170:
    pcVar8 = (char *)FUN_0002e7f0(param_1,iVar9,4);
    return pcVar8;
  case 0x22:
    if (bVar7 == 1) {
      iVar9 = _DAT_0002c264 + -0x2c;
      param_1 = param_1 + 2;
      goto LAB_0002c170;
    }
    goto LAB_0002c00a;
  case 0x23:
    if (bVar7 == 1) {
      iVar9 = _DAT_0002c264 + -0x28;
      param_1 = param_1 + 2;
      goto LAB_0002c170;
    }
    goto joined_r0x0002c052;
  case 0x24:
    if (bVar7 == 1) {
      iVar9 = _DAT_0002c264 + -0x24;
      param_1 = param_1 + 2;
      goto LAB_0002c170;
    }
joined_r0x0002c052:
    if (bVar7 != 0x10) {
LAB_0002c00a:
      if (bVar7 != 0x10) {
        return pcVar8;
      }
    }
    FUN_000264b6(&stack0xffffffe0,0x14);
    pcVar8 = (char *)FUN_0002a412(_DAT_0003800c,&stack0xffffffe0);
    if (pcVar8 != (char *)0x0) {
      FUN_00026218(pcVar8,799,s__________app_misc_c_0003800f + 1);
    }
    return pcVar8;
  }
LAB_0002bd36:
  pcVar8 = (char *)FUN_00026218(iVar9,uVar10,s__________app_misc_c_0002bf83 + 1);
  return pcVar8;
}


/* ---- FUN_0002c2f0 @ 0002c2f0 ---- */

void FUN_0002c2f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_48;
  undefined2 auStack_44 [22];
  undefined4 uStack_18;
  int local_14;
  
  local_48 = 0;
  uStack_18 = param_1;
  local_14 = param_2;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = FUN_000304b6(&local_14,uVar2);
      if (iVar1 != 0) {
        auStack_44[local_48] = (short)uVar2;
        local_48 = local_48 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
  }
  FUN_00026484(param_1,&local_48,0x2c);
  return;
}


/* ---- FUN_0002c32e @ 0002c32e ---- */

undefined4 FUN_0002c32e(ushort *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (param_4 < *param_3 + 6) {
    uVar4 = 0xc;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 7;
    if (((5 < uVar1) &&
        ((((uVar1 < 0xc81 || (uVar1 == 0xffff)) && (uVar2 = param_1[1], 5 < uVar2)) &&
         ((uVar2 < 0xc81 || (uVar2 == 0xffff)))))) &&
       ((uVar1 == 0xffff || ((uVar2 == 0xffff || (uVar1 <= uVar2)))))) {
      *(undefined *)(param_2 + (uint)*param_3) = 5;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x12;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar3 = FUN_00037ad8(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar3 + uVar1;
      sVar3 = FUN_00037ad8(param_1[1],(uint)(ushort)(sVar3 + uVar1) + param_2);
      *param_3 = sVar3 + *param_3;
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_0002c3d4 @ 0002c3d4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c3d4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  
  iVar1 = _DAT_0002c434;
  local_18 = *(undefined4 *)(_DAT_0002c434 + 8);
  FUN_00034320(s_conn_params_negotiation__d__d__d_0002c437 + 1,*(undefined *)(param_2 + 9),
               *(undefined *)(param_2 + 8),*(undefined4 *)(_DAT_0002c434 + 4));
  if (*(char *)(param_2 + 9) == '\0') {
    if (*(char *)(param_2 + 8) == '\0') {
      uVar2 = *(uint *)(iVar1 + 4);
    }
    else {
      uVar2 = *(uint *)(iVar1 + 8);
    }
    FUN_00034320(s_update_params__d__d_0002c460,uVar2,uVar2 >> 0xf);
    iVar1 = FUN_00028ca4(*(undefined4 *)(param_2 + 4),uVar2,param_1);
    if (iVar1 != 0) {
      FUN_00035db0();
      return;
    }
  }
  else {
    *(undefined *)(param_2 + 8) = 0;
    if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
      local_18 = CONCAT31(local_18._1_3_,1);
      local_18 = CONCAT22((short)param_1,(undefined2)local_18);
      (**(code **)(iVar1 + 0x14))(&local_18);
    }
  }
  return;
}


/* ---- FUN_0002c478 @ 0002c478 ---- */

void FUN_0002c478(undefined4 param_1,undefined param_2,undefined2 param_3,undefined param_4)

{
  undefined auStack_30 [2];
  undefined2 local_2e;
  undefined local_28;
  undefined2 local_26;
  undefined local_24;
  
  FUN_00026484(auStack_30,DAT_0002c4b4,0x18);
  local_2e = (undefined2)param_1;
  local_28 = param_2;
  local_26 = param_3;
  local_24 = param_4;
  FUN_0002a5dc(param_1,*DAT_0002c4b8,0);
  FUN_0002caf8(auStack_30);
  return;
}


/* ---- FUN_0002c4bc @ 0002c4bc ---- */

void FUN_0002c4bc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002c4ec;
  *(short *)(DAT_0002c4ec + 4) = (short)param_1;
  *puVar1 = 5;
  FUN_0002fea4();
  *DAT_0002c4f0 = 0;
  if (*(char *)(DAT_0002c4f4 + 0x7a) == '\x01') {
    FUN_000276bc(param_1,param_2);
    return;
  }
  return;
}


/* ---- FUN_0002c4f8 @ 0002c4f8 ---- */

uint FUN_0002c4f8(int param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == (ushort *)0x0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (uint)*param_3;
  }
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    uVar1 = (uint)*(byte *)(param_1 + uVar2) ^ (uVar1 >> 8 | uVar1 << 8);
    uVar1 = uVar1 ^ (uVar1 << 0x18) >> 0x1c;
    uVar1 = uVar1 ^ uVar1 << 0xc;
    uVar1 = uVar1 & 0xffff ^ (uVar1 & 0xff) << 5;
  }
  return uVar1;
}


/* ---- FUN_0002c52e @ 0002c52e ---- */

void FUN_0002c52e(void)

{
  software_interrupt(0x90);
  return;
}


/* ---- FUN_0002c54c @ 0002c54c ---- */

void FUN_0002c54c(undefined4 param_1)

{
  FUN_0002a29c(DAT_0002c568,param_1);
  FUN_000308d4(DAT_0002c568 + -0x20,param_1);
  return;
}


/* ---- FUN_0002c56c @ 0002c56c ---- */

void FUN_0002c56c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_28 [2];
  undefined2 local_26;
  
  iVar1 = FUN_00030512(DAT_0002c5e4,1);
  DataMemoryBarrier(0x1f);
  if (iVar1 == 0) {
    iVar1 = FUN_0002e13a(param_1);
    if (iVar1 == 0) {
      FUN_0002fa44(param_1,0);
      return;
    }
    if (iVar1 == 0x11) {
      uVar2 = 1;
    }
    else {
      if (iVar1 == 0x86) {
        FUN_00026484(auStack_28,DAT_0002c5e8,0x18);
        local_26 = (undefined2)param_1;
        FUN_0002cab0(auStack_28);
      }
      else if (iVar1 != 0x3002) {
        FUN_00035e04(param_1,iVar1);
      }
      uVar2 = 0;
    }
    FUN_0002fa44(param_1,uVar2);
    DataMemoryBarrier(0x1f);
    *DAT_0002c5e4 = 0;
  }
  return;
}


/* ---- FUN_0002c5f8 @ 0002c5f8 ---- */

int FUN_0002c5f8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  
  if (param_1 == 0) {
    cVar1 = *(char *)(param_2 + 4);
    local_20 = param_1;
    if (cVar1 == '\0') {
      *(undefined *)(param_2 + 4) = 2;
      local_18 = (undefined2 *)0x0;
      local_14 = 0;
      local_1c = *(int *)(param_2 + 0xc);
      iVar3 = FUN_000352d0(&local_1c,&local_20);
      if (iVar3 == 0) {
        iVar3 = 10;
      }
      else {
        *(undefined2 *)(param_2 + 6) = local_18[2];
        *(undefined2 *)(param_2 + 8) = *local_18;
        iVar3 = FUN_000353cc(local_18,local_20 & 0xffff);
      }
    }
    else {
      iVar3 = 0x1d1d;
      if (cVar1 == '\x01') {
        local_1c = param_2;
        local_18 = (undefined2 *)param_3;
        local_14 = param_4;
        iVar4 = FUN_00035248(param_2 + 6,0,&local_20,DAT_0002c674);
        puVar2 = DAT_0002c674;
        if (iVar4 == 0) {
          iVar4 = FUN_000353cc(local_1c,*(undefined2 *)(DAT_0002c674 + 1));
        }
        else {
          *DAT_0002c674 = 0;
          puVar2[1] = 0;
        }
        if (iVar4 != 10) {
          return iVar4;
        }
      }
      else if (cVar1 != '\x02') {
        return 0xf;
      }
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}


/* ---- FUN_0002c678 @ 0002c678 ---- */

undefined4 FUN_0002c678(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_20;
  
  iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
  uVar3 = (uint)*(byte *)(param_1 + 0x2c5);
  iVar2 = iVar4 + uVar3 * 0x12 + 10;
  uStack_20 = param_4;
  if (uVar3 + 1 == (uint)*(byte *)(iVar4 + 4)) {
    iVar2 = FUN_0002e8dc(param_1,iVar2,0,&uStack_20);
    if (iVar2 != 0) {
LAB_0002c6d8:
      *param_2 = 0;
      software_interrupt(0x9e);
      return param_3;
    }
  }
  else {
    for (; uVar3 < *(byte *)(iVar4 + 4); uVar3 = uVar3 + 1 & 0xff) {
      if (*(byte *)(iVar4 + 4) - 1 == uVar3) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar4 + uVar3 * 0x12 + 0x1c;
      }
      iVar2 = FUN_0002e8dc(param_1,iVar2,iVar1,&uStack_20);
      if (iVar2 != 0) goto LAB_0002c6d8;
      *(char *)(param_1 + 0x2c5) = *(char *)(param_1 + 0x2c5) + '\x01';
      iVar2 = iVar1;
    }
  }
  *param_2 = 1;
  return 0;
}


/* ---- FUN_0002c704 @ 0002c704 ---- */

void FUN_0002c704(void)

{
  undefined uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  pbVar2 = DAT_0002c798;
  for (uVar6 = 0; uVar6 < *pbVar2; uVar6 = uVar6 + 1 & 0xff) {
    puVar7 = (undefined *)(*(int *)(pbVar2 + 4) + uVar6 * 8);
    uVar1 = *puVar7;
    uVar8 = FUN_00026466(1,0);
    uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
    if (((uint)uVar8 & *(uint *)(pbVar2 + 0x18) | uVar3 & *(uint *)(pbVar2 + 0x1c)) != 0) {
      *(uint *)(pbVar2 + 0x18) = *(uint *)(pbVar2 + 0x18) & ~(uint)uVar8;
      *(uint *)(pbVar2 + 0x1c) = *(uint *)(pbVar2 + 0x1c) & ~uVar3;
      uVar3 = FUN_00031790(uVar1);
      uVar1 = *puVar7;
      uVar8 = FUN_00026466(1,0);
      uVar4 = *(uint *)(pbVar2 + 0x10);
      uVar5 = *(uint *)(pbVar2 + 0x14);
      lVar9 = FUN_00026466(uVar3,0,uVar1);
      if (lVar9 == CONCAT44((uint)((ulonglong)uVar8 >> 0x20) & uVar5,(uint)uVar8 & uVar4)) {
        if (*(code **)(puVar7 + 4) != (code *)0x0) {
          (**(code **)(puVar7 + 4))(uVar1,puVar7[1] != '\x01' ^ uVar3);
        }
      }
    }
  }
  return;
}


/* ---- FUN_0002c79c @ 0002c79c ---- */

void FUN_0002c79c(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_1 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
  iVar3 = FUN_00035404(param_1);
  iVar2 = DAT_0002c828;
  iVar1 = DAT_0002c824;
  if (iVar3 != 0) {
    if (*(uint *)(DAT_0002c824 + 8) < 6) {
      iVar4 = DAT_0002c828 + *(uint *)(DAT_0002c824 + 8) * 0x80;
      *(undefined2 *)(iVar4 + 2) = param_3;
      FUN_00026484(iVar4 + 4,param_1,0x76);
      if (param_2 == 0) {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x80) = 2;
      }
      else {
        *(undefined *)(iVar2 + *(int *)(iVar1 + 8) * 0x80) = 0;
      }
      iVar4 = *(int *)(iVar1 + 8) + 1;
      *(int *)(iVar2 + *(int *)(iVar1 + 8) * 0x80 + 0x7c) = iVar3;
      *(int *)(iVar1 + 8) = iVar4;
      if (iVar4 == *(int *)(iVar1 + 0xc)) {
        for (uVar5 = 0; uVar5 < *(uint *)(iVar1 + 0xc); uVar5 = uVar5 + 1) {
          (**(code **)(iVar2 + uVar5 * 0x80 + 0x7c))();
        }
        *(undefined4 *)(iVar1 + 8) = 0;
      }
    }
  }
  return;
}


/* ---- FUN_0002c82c @ 0002c82c ---- */

void FUN_0002c82c(int param_1,undefined4 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined auStack_90 [2];
  undefined2 local_8e;
  undefined4 local_8c;
  
  pcVar1 = (code *)FUN_00035404(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76);
  if (pcVar1 != (code *)0x0) {
    FUN_00026484(auStack_90,DAT_0002c864,0x7c);
    local_8e = param_3;
    local_8c = param_2;
    (*pcVar1)(auStack_90);
  }
  return;
}


/* ---- FUN_0002c868 @ 0002c868 ---- */

int FUN_0002c868(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_000264b6(param_1,0x2cc);
  iVar1 = DAT_0002c8bc;
  *(short *)((int)param_1 + 0x2ca) = (short)param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined *)((int)param_1 + 0x2c9) = 0;
  puVar2 = DAT_0002c8c0;
  *(undefined *)((int)param_1 + 0x2c6) = 0;
  *(undefined *)((int)param_1 + 0x2c5) = 0;
  *param_1 = *puVar2;
  software_interrupt(0x9b);
  if (param_2 == 0x11) {
    *(undefined *)((int)param_1 + 0x2c7) = 1;
    *(undefined *)(param_1 + 0xb2) = 1;
  }
  else {
    if (param_2 != 0) {
      return param_2;
    }
    *(undefined *)((int)param_1 + 0x2c7) = 1;
    *(undefined *)(param_1 + 0xb2) = 0;
  }
  return 0;
}


/* ---- FUN_0002c8c4 @ 0002c8c4 ---- */

undefined4 FUN_0002c8c4(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_0002c900;
  bVar1 = *DAT_0002c900;
  if (bVar1 != DAT_0002c900[1]) {
    *DAT_0002c900 = bVar1 + 1;
    if (bVar1 == 1) {
      *pbVar2 = 0;
    }
    iVar3 = *(int *)(DAT_0002c900 + (uint)*pbVar2 * 4 + 0xc);
    *param_1 = iVar3;
    *(uint *)(pbVar2 + 8) = *(int *)(pbVar2 + 8) + iVar3 & 0xffffff;
    return 1;
  }
  *param_1 = 0;
  return 0;
}


/* ---- FUN_0002c904 @ 0002c904 ---- */

void FUN_0002c904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0002c478(param_1,0,param_2,param_3);
  return;
}


/* ---- FUN_0002c95c @ 0002c95c ---- */

void FUN_0002c95c(undefined *param_1,undefined *param_2)

{
  switch(*param_1) {
  case 1:
    *param_2 = 0;
    break;
  case 2:
    *param_2 = 1;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    param_2[0x10] = 0;
    return;
  case 3:
    *param_2 = 2;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    param_2[0x10] = param_1[0x16] == '\x06';
    return;
  case 4:
    *param_2 = 3;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
    return;
  case 5:
    *param_2 = 4;
    *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(param_2 + 0xe) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  case 6:
    *param_2 = 5;
    return;
  }
  return;
}


/* ---- FUN_0002c9d0 @ 0002c9d0 ---- */

void FUN_0002c9d0(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  iVar1 = DAT_0002c9ec;
  uVar3 = 0;
  do {
    pcVar2 = *(code **)(iVar1 + uVar3 * 4);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}


/* ---- FUN_0002c9f0 @ 0002c9f0 ---- */

void FUN_0002c9f0(int *param_1,undefined4 param_2)

{
  undefined local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(*param_1 + 8) == 0) {
    return;
  }
  FUN_000264b6(local_28,0x18);
  local_14 = param_1[2];
  if (*(char *)(param_1 + 1) == '\0') {
    local_28[0] = 1;
    local_20 = param_1[4];
    local_1c = param_1[3];
  }
  else {
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_0002ca38;
    local_28[0] = 2;
    local_20 = param_1[3] << 0xc;
  }
  local_18 = param_1[5];
LAB_0002ca38:
  local_24 = param_2;
  (**(code **)(*param_1 + 8))(local_28);
  return;
}


/* ---- FUN_0002ca44 @ 0002ca44 ---- */

void FUN_0002ca44(undefined4 param_1,int param_2,byte *param_3)

{
  undefined uVar1;
  undefined local_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined local_1c;
  
  if (((param_2 != 0) && (param_2 != 0x11)) && (param_2 != 8)) {
    FUN_000264b6(local_28,0x18);
    local_26 = (undefined2)param_1;
    local_24 = FUN_0002e574(param_1);
    if (param_2 == 0xd) {
      local_28[0] = 3;
      if ((param_3 == (byte *)0x0) || ((*param_3 & 1) == 0)) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
      local_20 = CONCAT31(local_20._1_3_,uVar1);
      local_20 = CONCAT22(0x1101,(undefined2)local_20);
    }
    else {
      local_28[0] = 7;
      local_20 = param_2;
    }
    local_1c = 0;
    thunk_FUN_000340cc(local_28);
  }
  return;
}


/* ---- FUN_0002cab0 @ 0002cab0 ---- */

void FUN_0002cab0(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002e574(*(undefined2 *)(param_1 + 2));
  *(undefined2 *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0002cac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_0002cac8)(param_1);
  return;
}


/* ---- FUN_0002cacc @ 0002cacc ---- */

void FUN_0002cacc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0002caf4;
  iVar1 = DAT_0002caf0;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar2 + 3); iVar3 = iVar3 + 1) {
    (**(code **)(iVar1 + iVar3 * 4))(param_1);
  }
  return;
}


/* ---- FUN_0002caf8 @ 0002caf8 ---- */

void FUN_0002caf8(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002e574(*(undefined2 *)(param_1 + 2));
  *(undefined2 *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0002cb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_0002cb10)(param_1);
  return;
}


/* ---- thunk_FUN_000340cc @ 0002cb14 ---- */

void thunk_FUN_000340cc(void)

{
  (**DAT_0002cb1c)();
  return;
}


/* ---- cmd26_led_motor_ctrl_execute @ 0002cb20 ---- */

void cmd26_led_motor_ctrl_execute(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  uint uStack_10;
  
  if (((*(byte *)(param_1 + 1) == 0) || (100 < *(byte *)(param_1 + 1))) ||
     (*(short *)(param_1 + 2) == 0)) {
    motor_off();
  }
  else {
    motor_on();
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xf);
  local_18 = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  if (((uVar4 == 0) || (cVar1 = *(char *)(param_1 + 4), cVar1 == '\x04')) ||
     ((bVar2 = *(byte *)(param_1 + 8), 100 < bVar2 || (bVar2 == 0)))) {
    leds_off();
  }
  else {
    uVar7 = (uint)*(byte *)(param_1 + 5) << 0x10 | (uint)*(byte *)(param_1 + 6) << 8 |
            (uint)*(byte *)(param_1 + 7);
    if (cVar1 == '\x01') {
      uVar6 = 0;
      uVar5 = 0xffff;
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x02') {
          local_14 = (uint)*(ushort *)(param_1 + 0xd);
          uVar3 = *(ushort *)(param_1 + 0xb);
          leds_req_breath(uVar7,bVar2,*(undefined2 *)(param_1 + 9),*(undefined2 *)(param_1 + 9));
          local_18 = (uint)uVar3;
          uStack_10 = uVar4;
        }
        goto LAB_0002cba6;
      }
      uVar6 = *(undefined2 *)(param_1 + 0xd);
      uVar5 = *(undefined2 *)(param_1 + 0xb);
    }
    leds_req_blink(uVar7,bVar2,uVar5,uVar6);
    local_18 = uVar4;
  }
LAB_0002cba6:
  FUN_000302b0(DAT_0002cbb0,local_18,local_14,uStack_10);
  return;
}


/* ---- FUN_0002cbb4 @ 0002cbb4 ---- */

void FUN_0002cbb4(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  if (*(short *)(param_1 + 0xd) == 0) {
    motor_off();
  }
  else {
    if ((*param_1 == 0) || (100 < *param_1)) {
      motor_off();
    }
    else {
      motor_on();
    }
    if ((((param_1[1] != 0) && (param_1[1] < 0x65)) || ((param_1[2] != 0 && (param_1[2] < 0x65))))
       || ((param_1[3] != 0 && (param_1[3] < 0x65)))) {
      uStack_1c = (uint)param_1[3];
      local_18 = (uint)*(ushort *)(param_1 + 0xd);
      local_20 = (uint)param_1[2];
      FUN_00038548((uint)param_1[4] << 0x10 | (uint)param_1[5] << 8 | (uint)param_1[6],
                   (uint)param_1[7] << 0x10 | (uint)param_1[8] << 8 | (uint)param_1[9],
                   (uint)param_1[10] << 0x10 | (uint)param_1[0xb] << 8 | (uint)param_1[0xc]);
      goto LAB_0002cc30;
    }
  }
  leds_off();
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
LAB_0002cc30:
  FUN_000302b0(DAT_0002cc3c,local_20,uStack_1c,local_18);
  return;
}


/* ---- FUN_0002cce4 @ 0002cce4 ---- */

void FUN_0002cce4(void)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  
  FUN_0002ed00();
  iVar2 = DAT_0002cd38;
  *(undefined *)(DAT_0002cd38 + 0x50) = 1;
  bVar1 = *(byte *)(iVar2 + 8);
  if ((bVar1 < 0x85) || (bVar1 == 0xff)) {
    uVar3 = 0x80;
  }
  else {
    uVar3 = 0x87;
  }
  *(undefined *)(iVar2 + 8) = uVar3;
  FUN_000302b0(DAT_0002cd38 + 8);
  input_flag_clear(0);
  input_flag_set(1);
  FUN_0003907c();
  FUN_00039014(30000,DAT_0002cd3c);
  FUN_000384e4(0xffffff,100,0);
  return;
}


/* ---- FUN_0002cd40 @ 0002cd40 ---- */

void FUN_0002cd40(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined local_28 [4];
  short local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined local_14;
  
  FUN_000264b6(local_28,0x18);
  iVar1 = DAT_0002ce28;
  local_24 = *(short *)(param_1 + 0xc) + 0x4000;
  switch(*param_1) {
  default:
    goto switchD_0002cd62_caseD_0;
  case '\x01':
  case '\x02':
  case '\x03':
    iVar2 = FUN_0002d08a(*(undefined2 *)(param_1 + 0xc));
    if ((iVar2 == 0) && (0x3ffe < *(ushort *)(param_1 + 0xe) - 0xc000))
    goto switchD_0002cd62_caseD_0;
    local_1c = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 4) == 0) {
      local_28[0] = 8;
      local_18 = CONCAT31(local_18._1_3_,1);
    }
    else {
      local_28[0] = 9;
      local_18 = *(undefined4 *)(param_1 + 4);
      local_14 = 1;
    }
    break;
  case '\x04':
    iVar2 = FUN_0002d08a(*(undefined2 *)(param_1 + 0xc));
    if ((iVar2 == 0) || (*(short *)(param_1 + 0xe) != 0)) goto switchD_0002cd62_caseD_0;
    if (*(int *)(param_1 + 4) == 0) {
      local_28[0] = 10;
      FUN_000334ec(local_24);
    }
    else {
      local_28[0] = 0xb;
      local_20 = *(undefined4 *)(param_1 + 4);
      local_1c = CONCAT31(local_1c._1_3_,1);
    }
    *(undefined *)(iVar1 + 1) = 1;
    break;
  case '\x05':
    if (*(int *)(param_1 + 4) == 0) {
      local_28[0] = 0x13;
    }
    else {
      local_28[0] = 0x14;
      local_20 = *(undefined4 *)(param_1 + 4);
      local_1c = CONCAT31(local_1c._1_3_,1);
    }
    local_24 = -1;
  }
  FUN_000331d0(local_28);
switchD_0002cd62_caseD_0:
  if (*(char *)(iVar1 + 1) != '\0') {
    FUN_000333d0();
  }
  return;
}


/* ---- FUN_0002ce2c @ 0002ce2c ---- */

undefined4 FUN_0002ce2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uStack_10;
  
  if (*DAT_0002ce6c == '\0') {
    return 2;
  }
  if (param_1 != 0xffff) {
    uStack_10 = param_4;
    puVar1 = (undefined *)FUN_00034f6c(&uStack_10);
    if (puVar1 != (undefined *)0x0) {
      *puVar1 = 5;
      puVar1[4] = 1;
      *(short *)(puVar1 + 6) = (short)param_1;
      FUN_00034f88(&uStack_10);
      FUN_000350ec();
      return 0;
    }
    return 8;
  }
  return 4;
}


/* ---- FUN_0002ce70 @ 0002ce70 ---- */

undefined4 FUN_0002ce70(void)

{
  undefined *puVar1;
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  if (*DAT_0002cea4 == '\0') {
    return 2;
  }
  auStack_8[0] = in_r3;
  puVar1 = (undefined *)FUN_00034f6c(auStack_8);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 6;
    FUN_00034f88(auStack_8);
    if (*DAT_0002cea8 != '\0') {
      DAT_0002cea8[0xc] = '\x01';
    }
    FUN_000350ec();
    return 0;
  }
  return 8;
}


/* ---- FUN_0002ceac @ 0002ceac ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0002ceac(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined uVar5;
  undefined auStack_30 [20];
  undefined auStack_1c [8];
  
  FUN_000264b6(auStack_30,0x14);
  pcVar1 = DAT_0002cf68;
  if (*DAT_0002cf68 != '\0') {
LAB_0002cebe:
    FUN_0002c9d0(auStack_30);
    return 0;
  }
  iVar2 = FUN_000304e0(DAT_0002cf68 + 4);
  iVar3 = DAT_0002cf6c;
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = _DAT_10001014;
  if (_DAT_10001014 == -1) {
    iVar2 = _DAT_10000014 * _DAT_10000010;
  }
  *(int *)(DAT_0002cf6c + 0x10) = iVar2;
  *(int *)(iVar3 + 0xc) = iVar2 + -0x3000;
  iVar3 = FUN_00030c00(iVar3,DAT_0002cf70,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_000303b8(*DAT_0002cf78,DAT_0002cf74,0x8c,0x1c);
  iVar3 = FUN_00032d88();
  if ((iVar3 == 0) || (iVar3 == 2)) {
    return 0xb;
  }
  if (iVar3 == 6) {
    *pcVar1 = '\x01';
    *(undefined4 *)(pcVar1 + 4) = 0;
    goto LAB_0002cebe;
  }
  puVar4 = (undefined *)FUN_00034f6c(auStack_1c);
  if (puVar4 == (undefined *)0x0) {
    return 8;
  }
  *puVar4 = 1;
  switch(iVar3) {
  case 1:
  case 3:
    puVar4[4] = 0;
    break;
  case 5:
  case 7:
    puVar4[4] = 1;
    break;
  case 9:
  case 0xb:
    uVar5 = 3;
    goto LAB_0002cf54;
  case 10:
    uVar5 = 2;
LAB_0002cf54:
    puVar4[4] = uVar5;
  }
  FUN_00034f88(auStack_1c);
  FUN_000350ec();
  return 0;
}


/* ---- FUN_0002cf7c @ 0002cf7c ---- */

undefined4 FUN_0002cf7c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_10;
  
  if (param_1 == 0) {
    return 5;
  }
  local_10 = param_4;
  iVar1 = FUN_000352d0(param_1,&local_10);
  if (iVar1 != 0) {
    iVar1 = DAT_0002cfb8 + (local_10 & 0xffff) * 0x14;
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(char *)(param_1 + 10) != '\0')) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      *(undefined *)(param_1 + 10) = 0;
      return 0;
    }
    return 6;
  }
  return 10;
}


/* ---- FUN_0002cfbc @ 0002cfbc ---- */

void FUN_0002cfbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_00035248(&uStack_18,&uStack_14);
  return;
}


/* ---- FUN_0002cfca @ 0002cfca ---- */

void FUN_0002cfca(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00035248(0,&uStack_10,param_2,param_3);
  return;
}


/* ---- FUN_0002cfda @ 0002cfda ---- */

void FUN_0002cfda(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_00035248(&uStack_10,0,param_2,param_3);
  return;
}


/* ---- FUN_0002cfea @ 0002cfea ---- */

undefined4 FUN_0002cfea(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 5;
}


/* ---- FUN_0002cffc @ 0002cffc ---- */

undefined4 FUN_0002cffc(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    local_18 = param_4;
    iVar1 = FUN_000352d0(param_1,&local_18);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      FUN_000304e6(DAT_0002d040 + (local_18 & 0xffff) * 0x14 + 0xc,1);
      *param_2 = uVar2;
      param_2[1] = *(int *)(param_1 + 4) + 0xc;
      *(undefined *)(param_1 + 10) = 1;
      return 0;
    }
    return 10;
  }
  return 5;
}


/* ---- FUN_0002d044 @ 0002d044 ---- */

undefined4 FUN_0002d044(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00039414(param_1,param_2,0,3);
    return uVar1;
  }
  return 5;
}


/* ---- FUN_0002d052 @ 0002d052 ---- */

void FUN_0002d052(undefined4 param_1,undefined4 param_2)

{
  FUN_00039414(param_1,param_2,0,2);
  return;
}


/* ---- FUN_0002d05c @ 0002d05c ---- */

undefined4 FUN_0002d05c(undefined4 param_1)

{
  if (*(int *)(DAT_0002d080 + 0x10) != 4) {
    *(undefined4 *)(DAT_0002d084 + *(int *)(DAT_0002d080 + 0x10) * 4) = param_1;
    FUN_000304e6(DAT_0002d080 + 0x10,1);
    return 0;
  }
  return 0xc;
}


/* ---- FUN_0002d088 @ 0002d088 ---- */

void FUN_0002d088(void)

{
  return;
}


/* ---- FUN_0002d08a @ 0002d08a ---- */

undefined4 FUN_0002d08a(int param_1)

{
  if (param_1 - 0xc000U < 0x3fff) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002d09e @ 0002d09e ---- */

void FUN_0002d09e(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0002a594();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_0002d0b0 @ 0002d0b0 ---- */

void FUN_0002d0b0(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x18') {
    cVar1 = FUN_0002a594();
    *param_1 = cVar1;
  }
  return;
}


/* ---- FUN_0002d0c2 @ 0002d0c2 ---- */

undefined8 FUN_0002d0c2(int param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)
           FUN_00029c92(*(undefined4 *)(param_1 + 0x234),*(undefined2 *)(param_1 + 0x238),1);
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = param_2;
  }
  software_interrupt(0x72);
  return CONCAT44(param_1 + 0x234,param_1 + 0x54);
}


/* ---- FUN_0002d0ec @ 0002d0ec ---- */

void FUN_0002d0ec(undefined4 param_1,int param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = DAT_0002d118;
  if (param_3 == 0) {
    uVar1 = *(undefined *)(DAT_0002d118 + 1);
  }
  else {
    FUN_0002a5dc(param_1,*(undefined *)(DAT_0002d118 + 4),param_2 == 0x11);
    uVar1 = *(undefined *)(iVar2 + 1);
  }
  FUN_0002a5dc(param_1,uVar1,param_3 == 0 && param_2 == 0x11);
  return;
}


/* ---- FUN_0002d11c @ 0002d11c ---- */

short FUN_0002d11c(void)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  
  sVar3 = 0;
  uVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(uVar2 * 8 + 0x71000);
    if (cVar1 == 'x') {
      return sVar3 + 1;
    }
    if (cVar1 == -1) break;
    uVar2 = uVar2 + 1 & 0xffff;
    sVar3 = sVar3 + 1;
    if (0x1ff < uVar2) {
      return 0;
    }
  }
  return sVar3;
}


/* ---- FUN_0002d14c @ 0002d14c ---- */

int FUN_0002d14c(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00034324(s___________flashRing_read_________0002d1c0);
  iVar2 = FUN_0002d11c();
  if (iVar2 != 0) {
    uVar4 = iVar2 - 1U & 0xffff;
    iVar3 = uVar4 * 8 + 0x71000;
    thunk_FUN_00026484(param_1,iVar3,8);
    cVar1 = *(char *)((int)param_1 + 2) + *(char *)((int)param_1 + 3) +
            *(char *)(param_1 + 1) + *(char *)((int)param_1 + 5) + *(char *)((int)param_1 + 6) +
            *(char *)((int)param_1 + 7);
    FUN_00034324(s_flashRing_read_slot__d_addr__x_0002d1e4,uVar4,iVar3);
    if (*(char *)((int)param_1 + 1) == cVar1) {
      return (int)(short)(iVar2 - 1U);
    }
    FUN_00034324(s_flashRing_read_crc_error__x__x_0002d208,*(char *)((int)param_1 + 1),cVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return -1;
}


/* ---- FUN_0002d228 @ 0002d228 ---- */

undefined8
FUN_0002d228(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = (uint)*(byte *)((int)param_1 + 3);
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_00034324(s___________flashRing_write________0002d2dc,*(undefined *)param_1,
               *(undefined *)((int)param_1 + 1),*(undefined *)((int)param_1 + 2));
  uVar1 = FUN_0002d11c();
  if ((uVar1 < 0x200) && (uVar1 != 0)) {
    local_28 = 0;
    local_24 = 0;
    *(undefined *)param_1 = 0x78;
    uVar1 = uVar1 - 1 & 0xffff;
    *(char *)((int)param_1 + 1) =
         *(char *)((int)param_1 + 2) + *(char *)((int)param_1 + 3) +
         *(char *)(param_1 + 1) + *(char *)((int)param_1 + 5) + *(char *)((int)param_1 + 6) +
         *(char *)((int)param_1 + 7);
    local_20 = *param_1;
    local_1c = param_1[1];
    FUN_00034324(s_flashRing_write_B_slot__d_addr___0002d310,uVar1 + 1,DAT_0002d30c + uVar1 * 8);
    FUN_00027050(&local_28,uVar1 * 8 + 0x71000,0x10);
    return CONCAT44(local_24,local_28);
  }
  FUN_00034324(s_flashRing_full__erase_page__x_0002d334,0x71);
  FUN_00026f64(0x71);
  *(undefined *)param_1 = 0x78;
  *(char *)((int)param_1 + 1) =
       *(char *)((int)param_1 + 2) + *(char *)((int)param_1 + 3) +
       *(char *)(param_1 + 1) + *(char *)((int)param_1 + 5) + *(char *)((int)param_1 + 6) +
       *(char *)((int)param_1 + 7);
  FUN_00034324(s_flashRing_write_A_slot__d_addr___0002d354,0,0x71000);
  uVar2 = FUN_00027050(param_1,0x71000,8);
  return uVar2;
}


/* ---- FUN_0002d378 @ 0002d378 ---- */

void FUN_0002d378(void)

{
  return;
}


/* ---- FUN_0002d37a @ 0002d37a ---- */

longlong FUN_0002d37a(uint param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  code *pcStack_1c;
  undefined4 uStack_18;
  
  if (param_2 != (code *)0x0) {
    iVar3 = 0;
    local_20 = param_1;
    if (param_1 != 0) {
      uVar2 = 0;
      pcStack_1c = param_2;
      uStack_18 = param_3;
      do {
        iVar1 = FUN_000304b6(&local_20,uVar2);
        if (iVar1 != 0) {
          (*param_2)(uVar2 & 0xffff,param_3);
          iVar3 = iVar3 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x14);
    }
    return CONCAT44(local_20,iVar3);
  }
  return (ulonglong)param_1 << 0x20;
}


/* ---- FUN_0002d3b0 @ 0002d3b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d3b0(void)

{
  int iVar1;
  
  *(undefined4 *)(_DAT_0002d404 + 8) = 0x70000;
  FUN_00034324(s_fstorage_example_started_____d___0002d407 + 1,0x84);
  FUN_00034324(s_SoftDevice_is_present__0002d42c);
  iVar1 = FUN_00030c00(_DAT_0002d44c,DAT_0002d448,0);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x9a,s__________app_settings_c_0002d44f + 1);
  }
  FUN_00034324(s_Initializing_nrf_fstorage_sd_imp_0002d468,iVar1);
  FUN_0003434c(_DAT_0002d44c);
  FUN_00030a64(100,_DAT_10000010);
  return;
}


/* ---- FUN_0002d53c @ 0002d53c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d53c(void)

{
  byte local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  byte local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c [4];
  undefined auStack_18 [24];
  
  local_1c[0] = 0x11;
  software_interrupt(0x6d);
  if (&local_2c != (byte *)0x0) {
    FUN_00026218(&local_2c,0x3aa,s__________main_c_0002d62c);
  }
  local_2b = (undefined)_DAT_100000a4;
  local_2a = (undefined)((uint)_DAT_100000a4 >> 8);
  local_29 = (undefined)((uint)_DAT_100000a4 >> 0x10);
  local_28 = (undefined)((uint)_DAT_100000a4 >> 0x18);
  local_27 = (undefined)_DAT_100000a8;
  local_26 = (byte)((uint)_DAT_100000a8 >> 8) | 0xc0;
  local_2c = local_2c & 1;
  software_interrupt(0x6c);
  software_interrupt(0x78);
  FUN_00026218(0xc1,0x3b9,s__________main_c_0002d62c);
  FUN_000264f4(auStack_18,s_BOND_MINI_0002d63c);
  software_interrupt(0x7c);
  if (local_1c != (undefined *)0x0) {
    FUN_00026218(local_1c,0x3bd,s__________main_c_0002d62c);
  }
  local_20 = 0x1900000;
  local_24 = 0xf00018;
  software_interrupt(0x7a);
  if (&local_24 != (undefined4 *)0x0) {
    FUN_00026218(&local_24,0x3c6,s__________main_c_0002d62c);
  }
  FUN_00034324(s_gap_params_init_MAC__x__x__x__x__0002d648,local_2b,local_2a,local_29,local_28,
               local_27,local_26);
  return;
}


/* ---- FUN_0002d6cc @ 0002d6cc ---- */

undefined8 FUN_0002d6cc(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264b6(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff01;
  local_1c = 0x31111;
  FUN_000264b6(local_30,0x14);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002d7b8 @ 0002d7b8 ---- */

undefined8 FUN_0002d7b8(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264b6(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff05;
  local_1c = 0x31111;
  FUN_000264b6(local_30,0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002d8a4 @ 0002d8a4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002d8a4(int param_1)

{
  int iVar1;
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264b6(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *(undefined *)(param_1 + 0x20);
  local_10 = 0xff06;
  local_14 = 0x31111;
  FUN_000264b6(local_28,0x14);
  iVar1 = _DAT_0002d994;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(_DAT_0002d994 + 0x2c);
  FUN_00034322(s_gatt_ff06_char_add__d_0002d997 + 1,*(undefined2 *)(iVar1 + 0x2c));
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002d9b0 @ 0002d9b0 ---- */

undefined8 FUN_0002d9b0(int param_1,int param_2)

{
  byte local_50 [4];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30 [20];
  undefined4 local_1c;
  undefined2 local_18;
  undefined local_16;
  
  local_34 = 0x21111;
  FUN_000264b6(local_50,0x1c);
  local_4c = 0;
  local_50[0] = local_50[0] | 2;
  puStack_3c = &local_34;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_16 = *(undefined *)(param_1 + 0x20);
  local_18 = 0xff10;
  local_1c = 0x31111;
  FUN_000264b6(local_30,0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  software_interrupt(0xaa);
  return CONCAT44(local_50,(uint)*(ushort *)(param_1 + 0x22));
}


/* ---- FUN_0002da9c @ 0002da9c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002da9c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint local_10;
  
  pbVar2 = _DAT_0002db80;
  cVar1 = *param_1;
  local_10 = param_4;
  if (cVar1 == '\0') {
    FUN_00034324(DAT_0002dbd8);
    iVar3 = FUN_000307e0(_DAT_0002dbdc,*(undefined2 *)(param_1 + 2),param_1 + 4);
    if (iVar3 != 0) {
      FUN_00026218(iVar3,0x303,s__________main_c_0002dbdf + 1);
    }
    iVar3 = FUN_00033f60(*(undefined2 *)(param_1 + 2),&local_10);
    if (iVar3 != 0) {
      FUN_00026218(iVar3,0x307,s__________main_c_0002dbdf + 1);
    }
    FUN_000264b6(DAT_0002dbf0,0x76);
    FUN_00026484(DAT_0002dbf0 + 10,param_1 + 4,0x12);
    pbVar2[1] = 1;
    if ((*pbVar2 & 1) != 0) {
      iVar3 = FUN_00033ec2(local_10 & 0xffff,DAT_0002dbf0,0xec,0);
      if (iVar3 == 0x86) {
        iVar3 = FUN_0002ce70();
      }
      if (iVar3 != 0) {
        FUN_00026218(iVar3,0x317,s__________main_c_0002dbdf + 1);
      }
    }
    iVar3 = FUN_00030794(_DAT_0002dbdc,1);
    if (iVar3 != 0) {
      FUN_00026218(iVar3,0x31a,s__________main_c_0002dbdf + 1);
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_00034324(DAT_0002dbf4,param_2,param_3,param_4);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_00034324(s_GATTS_Service_client_disconnecte_0002dbf8,*(undefined2 *)(param_1 + 2),param_3,
                   param_4);
      return;
    }
    if (cVar1 == '\x03') {
      FUN_00034324(s_Service_Changed_indication_recei_0002db83 + 1);
      *pbVar2 = 0;
      pbVar2[1] = 0;
      iVar3 = FUN_0002a71c(pbVar2 + 0x24,*(undefined2 *)(param_1 + 2));
      if (iVar3 == 0x11) {
        FUN_00034324(s_NRF_BLE_GATTS_C_EVT_SRV_CHANGED_E_0002dbac,0x11);
        *(uint *)(pbVar2 + 0x18) = (uint)*(ushort *)(param_1 + 2);
        FUN_00028ca4(*(undefined4 *)(DAT_0002b350 + 0x28),0x10000,0,local_10);
        return;
      }
    }
  }
  return;
}


/* ---- FUN_0002dc34 @ 0002dc34 ---- */

short FUN_0002dc34(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 10);
  if (sVar1 != 0) {
    sVar1 = 1;
  }
  return sVar1;
}


/* ---- FUN_0002dc40 @ 0002dc40 ---- */

undefined4 FUN_0002dc40(int param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  
  puVar2 = DAT_0002dcb8;
  if (param_1 != 0) {
    return 1;
  }
  if (DAT_0002dcb8[0xc] == '\0') {
    FUN_0002dda0();
  }
  else {
    DAT_0002dcb8[0xc] = 0;
  }
  puVar3 = DAT_0002dd04;
  switch(*puVar2) {
  default:
    return 0xf;
  case 1:
    puVar8 = (undefined2 *)(DAT_0002dd04 + 2);
    uVar6 = 0;
    do {
      if (puVar3[uVar6 + 10] != '\0') {
        puVar3[uVar6 + 10] = 0;
        if ((*(int *)(puVar3 + uVar6 * 0x14 + -0x1c) == 0) &&
           (puVar3[uVar6 * 0x14 + -0x18] == '\x01')) {
          *puVar8 = (short)uVar6;
          goto LAB_0002dd7c;
        }
      }
      uVar6 = uVar6 + 1 & 0xffff;
      if (1 < uVar6) {
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        return 0x1d1d;
      }
    } while( true );
  case 2:
LAB_0002dd7c:
    iVar7 = FUN_00035370(*(undefined2 *)(DAT_0002dd9c + 2),DAT_0002dd9c + 4);
    if (iVar7 != 0) {
      uVar5 = FUN_0002dd48();
      return uVar5;
    }
    break;
  case 3:
    uVar5 = FUN_0002dd48();
    return uVar5;
  case 4:
    break;
  case 6:
    *puVar2 = 6;
    uVar5 = FUN_00032d48(*(undefined4 *)
                          (DAT_0002dcb8 + (uint)*(ushort *)(puVar2 + 2) * 0x14 + -0x24));
    return uVar5;
  case 7:
    *puVar2 = 7;
    *(undefined4 *)(puVar2 + 4) = 0;
    uVar5 = FUN_00032d64();
    return uVar5;
  }
  puVar2 = DAT_0002dd3c;
  puVar1 = (ushort *)(DAT_0002dd3c + 2);
  if (*(int *)(DAT_0002dd3c + (uint)*puVar1 * 0x14 + -0x1c) == 0) {
    *DAT_0002dd3c = 4;
    uVar5 = *(undefined4 *)(puVar2 + (uint)*puVar1 * 0x14 + -0x24);
  }
  else {
    *DAT_0002dd3c = 5;
    puVar4 = DAT_0002dd40;
    *(undefined2 *)(DAT_0002dd40 + 1) = 2;
    uVar5 = *puVar4;
  }
  uVar5 = FUN_00030bb2(DAT_0002dd44,uVar5,1,0);
  return uVar5;
}


/* ---- FUN_0002dd48 @ 0002dd48 ---- */

void FUN_0002dd48(void)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *DAT_0002dd74;
  piVar1 = (int *)(DAT_0002dd70 + 4);
  uVar2 = *(ushort *)(DAT_0002dd74 + 1);
  uVar3 = *(ushort *)(*piVar1 + 2);
  *DAT_0002dd70 = 3;
  FUN_00030cec(DAT_0002dd78,iVar4 + (uint)uVar2 * 4,*piVar1,(uVar3 + 3) * 0x10000 >> 0xe,0);
  return;
}


/* ---- FUN_0002dda0 @ 0002dda0 ---- */

void FUN_0002dda0(void)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar4 = DAT_0002de24;
  puVar3 = DAT_0002de20;
  sVar2 = *(short *)(DAT_0002de24 + 1);
  switch(*DAT_0002de20) {
  case 0:
    *(short *)(DAT_0002de20 + 8) = *(short *)(DAT_0002de20 + 8) + 1;
    *(undefined2 *)(puVar3 + 2) = 0;
    puVar3[0xc] = 0;
    uVar6 = 0;
    do {
      uVar7 = uVar6 + 1 & 0xffff;
      puVar3[uVar6 + 10] = puVar3[uVar6 * 0x14 + -0x28] == '\0';
      uVar6 = uVar7;
    } while (uVar7 < 2);
  case 7:
    *puVar3 = 1;
    return;
  default:
    return;
  case 3:
    *(short *)(DAT_0002de24 + 1) = *(short *)(*(int *)(DAT_0002de20 + 4) + 2) + 3 + sVar2;
    *puVar3 = 2;
    return;
  case 4:
    uVar8 = *DAT_0002de24;
    iVar1 = (uint)*(ushort *)(DAT_0002de20 + 2) * 0x14;
    *DAT_0002de24 = *(undefined4 *)(DAT_0002de20 + iVar1 + -0x24);
    *(undefined4 *)(puVar3 + iVar1 + -0x24) = uVar8;
    *(short *)(puVar3 + iVar1 + -0x20) = sVar2;
    *(undefined2 *)(puVar4 + 1) = 2;
    uVar5 = 6;
    break;
  case 5:
  case 6:
    uVar5 = 7;
  }
  *puVar3 = uVar5;
  return;
}


/* ---- FUN_0002de28 @ 0002de28 ---- */

void FUN_0002de28(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_0002dea8;
  sVar1 = param_1[2];
  sVar2 = *param_1;
  if (sVar2 == 0x35) {
    uVar4 = 0;
    FUN_0002a5dc(sVar1,*(undefined *)(DAT_0002dea8 + 5),0);
    if (((param_1[3] != 0x10a) && (param_1[3] == 0)) && (param_1[6] == 1)) {
      if (*(char *)(param_1 + 7) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    FUN_00036930(sVar1,uVar4);
  }
  else if (sVar2 == 0x50) {
    if (((*(char *)(param_1 + 6) == '\x01') && (*(char *)(param_1 + 5) == '\x01')) &&
       (param_1[4] == 0x2902)) {
      FUN_0002fa44(sVar1,1);
      FUN_00038028();
    }
  }
  else if (sVar2 == 0x52) {
    FUN_0002f9dc();
  }
  FUN_0002a500(*(undefined *)(iVar3 + 2),DAT_0002deac,0);
  return;
}


/* ---- FUN_0002deb0 @ 0002deb0 ---- */

void FUN_0002deb0(char *param_1)

{
  if (*param_1 == '\0') {
    FUN_0002f9dc(*(undefined2 *)(param_1 + 2));
    FUN_0002b748(*(undefined2 *)(param_1 + 2));
    FUN_00038028();
    return;
  }
  return;
}


/* ---- FUN_0002ded0 @ 0002ded0 ---- */

undefined4 FUN_0002ded0(void)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  
  puVar1 = DAT_0002df28;
  *DAT_0002df28 = 0;
  uVar2 = FUN_0002a594();
  puVar1[1] = uVar2;
  uVar2 = FUN_0002a594();
  puVar1[2] = uVar2;
  uVar2 = FUN_0002a594();
  puVar1[3] = uVar2;
  uVar2 = FUN_0002a594();
  puVar1[4] = uVar2;
  iVar3 = FUN_0002a594();
  puVar1[5] = (char)iVar3;
  if ((((puVar1[1] != '\x18') && (puVar1[2] != '\x18')) && (puVar1[3] != '\x18')) &&
     ((puVar1[4] != '\x18' && (iVar3 != 0x18)))) {
    *(undefined4 *)(puVar1 + 0xc) = 0;
    DataMemoryBarrier(0x1f);
    *puVar1 = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_0002df84 @ 0002df84 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002df84(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  
  pcVar2 = _DAT_0002dfc8;
  *_DAT_0002dfc8 = '\x01';
  iVar3 = FUN_00031e10();
  uVar4 = 60000;
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0xb8,s__________battery_measure_c_0002dfcb + 1);
  }
  do {
    if (*pcVar2 == '\0') break;
    bVar1 = 10 < uVar4;
    uVar4 = uVar4 - 1;
  } while (bVar1);
  if (*pcVar2 != '\0') {
    FUN_00034324(s_ADC_Check_timeout_0002dfe8);
  }
  FUN_00031e3c();
  _DAT_e000e280 = 0x80;
  return;
}


/* ---- FUN_0002dffc @ 0002dffc ---- */

undefined4 FUN_0002dffc(void)

{
  int iVar1;
  undefined4 unaff_r4;
  
  iVar1 = FUN_00030e60(10);
  if (iVar1 == 1) {
    unaff_r4 = 0;
  }
  else {
    iVar1 = FUN_00030e60(10);
    if (iVar1 == 0) {
      iVar1 = FUN_00030e60(6);
      if ((iVar1 == 0) && (*(uint *)(DAT_0002e034 + 8) < 0xfb4)) {
        unaff_r4 = 1;
      }
      else {
        unaff_r4 = 2;
      }
    }
  }
  return unaff_r4;
}


/* ---- FUN_0002e038 @ 0002e038 ---- */

void FUN_0002e038(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_00026466(1,0,param_1);
  iVar2 = DAT_0002e0b4;
  uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  iVar5 = FUN_00028d2c(*(undefined4 *)(DAT_0002e0b4 + 4));
  iVar3 = DAT_0002e0b8;
  if (iVar5 == 0) {
    puVar1 = (uint *)(DAT_0002e0b8 + 0x1c);
    if ((*(uint *)(DAT_0002e0b8 + 0x18) & uVar4 | *puVar1 & uVar6) == 0) {
      iVar5 = FUN_00031790(param_1);
      if (iVar5 == 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & ~uVar4;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & ~uVar6;
      }
      else {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | uVar4;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | uVar6;
      }
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | uVar4;
      *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | uVar6;
      FUN_00028ca4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar3 + 8),0);
      return;
    }
    *(uint *)(DAT_0002e0b8 + 0x18) = *(uint *)(DAT_0002e0b8 + 0x18) & ~uVar4;
    *(uint *)(iVar3 + 0x1c) = *puVar1 & ~uVar6;
  }
  return;
}


/* ---- FUN_0002e0bc @ 0002e0bc ---- */

undefined4 FUN_0002e0bc(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0002e0cc;
  *(undefined2 *)(DAT_0002e0cc + 2) = 0xffff;
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_0002e0d0 @ 0002e0d0 ---- */

undefined8 FUN_0002e0d0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_20;
  int *local_1c;
  
  uStack_20 = param_3;
  local_1c = param_4;
  iVar2 = FUN_0002e574();
  uVar3 = 0;
  iVar4 = 3;
  bVar1 = true;
  uVar5 = 0;
  if ((iVar2 != 0xffff) && (iVar2 = FUN_0003308c(iVar2,8,&uStack_20), iVar2 == 0)) {
    uVar3 = (int)local_1c + 6;
    iVar4 = *local_1c;
    uVar5 = (uint)*(ushort *)(local_1c + 1);
  }
  do {
    software_interrupt(0xb1);
    if (param_1 == 4) {
      param_1 = 0x11;
LAB_0002e11a:
      if (!bVar1) {
LAB_0002e11e:
        param_1 = 0xb;
      }
      return CONCAT44(uVar3,param_1);
    }
    if (param_1 == 8) {
      param_1 = 0;
      goto LAB_0002e11a;
    }
    if (param_1 != 0xb) goto LAB_0002e11a;
    bVar1 = false;
    if (iVar4 << 0x1e < 0) {
      iVar4 = 1;
    }
    else {
      if ((uVar3 | uVar5) == 0) goto LAB_0002e11e;
      uVar3 = 0;
      iVar4 = 3;
      uVar5 = uVar3;
    }
  } while( true );
}


/* ---- FUN_0002e13a @ 0002e13a ---- */

int FUN_0002e13a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 uStack_20;
  undefined4 *local_1c;
  
  uStack_20 = param_3;
  local_1c = param_4;
  iVar2 = FUN_0002e574();
  if (iVar2 == 0xffff) {
    iVar3 = 0x3002;
  }
  else {
    sVar5 = 1;
    do {
      bVar1 = false;
      iVar3 = FUN_000330cc(iVar2,8,sVar5,&uStack_20);
      if (iVar3 != 0) {
        if (iVar3 != 7) {
          return iVar3;
        }
        return 0xc;
      }
      *local_1c = 3;
      software_interrupt(0xb2);
      if (param_1 == 0) {
        iVar2 = FUN_00033198(iVar2,8);
        return iVar2;
      }
      iVar3 = param_1;
      if (param_1 == 0xc) {
        bVar1 = true;
      }
      else if (param_1 == 5) {
        iVar3 = 0;
      }
      iVar4 = FUN_00033184(iVar2,8,local_1c + 1);
      if (iVar4 != 0) {
        iVar3 = 3;
      }
      sVar5 = sVar5 + 1;
    } while (bVar1);
  }
  return iVar3;
}


/* ---- FUN_0002e1bc @ 0002e1bc ---- */

undefined4 FUN_0002e1bc(short *param_1,short *param_2)

{
  if (param_2 < param_1 + (uint)(ushort)param_1[1] * 2 + 6) {
    return 2;
  }
  if ((param_1[2] != -1) && (*param_1 != 0)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0002e1e2 @ 0002e1e2 ---- */

undefined4 FUN_0002e1e2(int *param_1,int *param_2)

{
  if ((param_1 < param_2) && (*param_1 != -1)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002e1f4 @ 0002e1f4 ---- */

void FUN_0002e1f4(void)

{
  FUN_0002896c();
  FUN_00030f14();
  return;
}


/* ---- FUN_0002e202 @ 0002e202 ---- */

longlong FUN_0002e202(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  if (*param_1 >> 1 == 2) {
    local_18 = CONCAT13((char)(param_2 >> 0x18),*(undefined3 *)(param_1 + 1));
    local_14 = CONCAT13((char)((uint)param_3 >> 0x18),*(undefined3 *)(param_1 + 4));
    uStack_10 = param_4;
    FUN_00027d7e(param_2,&local_14,&uStack_10);
    iVar1 = FUN_000264da(&local_18,&uStack_10,3);
    if (iVar1 == 0) {
      return CONCAT44(local_18,1);
    }
  }
  return (ulonglong)local_18 << 0x20;
}


/* ---- FUN_0002e248 @ 0002e248 ---- */

undefined4 FUN_0002e248(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_1 < 0x14) && (iVar1 = FUN_0002a61c(), iVar1 != 0)) {
    iVar1 = DAT_0002e27c + param_1 * 10;
    *param_2 = *(undefined4 *)(iVar1 + 2);
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar1 + 6);
    *(undefined *)((int)param_2 + 6) = *(undefined *)(iVar1 + 8);
    return 0;
  }
  return 0x3002;
}


/* ---- FUN_0002e280 @ 0002e280 ---- */

void FUN_0002e280(short *param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort local_58 [2];
  undefined4 local_54;
  undefined2 local_50;
  undefined local_4e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28 [2];
  int local_24;
  
  if (*param_1 == 0x10) {
    FUN_00026484(local_58,param_1 + 2,0x2c);
    uVar3 = 0xffff;
    local_28[0] = uVar3;
    if ((byte)local_54 >> 1 != 3) {
      FUN_000332ac();
      bVar1 = (byte)local_54 >> 1;
      if ((bVar1 == 0) || (bVar1 == 1)) {
        do {
          iVar2 = FUN_00033254(7,&local_2c,local_28);
          local_28[0] = uVar3;
          if (iVar2 == 0) break;
          iVar2 = FUN_00027aa2(&local_54,local_24 + 0x11);
          local_28[0] = local_2c;
        } while (iVar2 == 0);
      }
      else if (bVar1 == 2) {
        do {
          iVar2 = FUN_00033254(7,&local_2c,local_28);
          local_28[0] = uVar3;
          if (iVar2 == 0) break;
          iVar2 = FUN_0002e202(&local_54,local_24 + 1);
          local_28[0] = local_2c;
        } while (iVar2 == 0);
      }
    }
    iVar2 = DAT_0002e354;
    *(ushort *)(DAT_0002e354 + (uint)local_58[0] * 10) = local_28[0];
    iVar2 = iVar2 + (uint)local_58[0] * 10;
    *(undefined4 *)(iVar2 + 2) = local_54;
    *(undefined2 *)(iVar2 + 6) = local_50;
    *(undefined *)(iVar2 + 8) = local_4e;
    iVar2 = DAT_0002e358;
    if (local_28[0] != 0xffff) {
      local_2a = local_58[0];
      local_2c = local_2c & 0xff00;
      uVar4 = 0;
      do {
        (**(code **)(iVar2 + uVar4 * 4))(&local_2c);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
    }
  }
  return;
}


/* ---- FUN_0002e35c @ 0002e35c ---- */

uint FUN_0002e35c(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0002e398;
  if (param_1 != 0xffff) {
    uVar3 = 0;
    do {
      if ((*(ushort *)(iVar1 + uVar3 * 10) == param_1) && (iVar2 = FUN_0002a61c(uVar3), iVar2 != 0))
      {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 0x14);
  }
  return 0xffff;
}


/* ---- FUN_0002e39c @ 0002e39c ---- */

int * FUN_0002e39c(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined auStack_150 [184];
  undefined uStack_98;
  undefined auStack_97 [16];
  byte local_87;
  int local_48 [8];
  undefined auStack_28 [4];
  undefined *local_24;
  undefined2 local_20 [4];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    piVar2 = (int *)0x0;
    software_interrupt(0x6f);
  }
  else {
    local_24 = &uStack_98;
    local_20[0] = 0x50;
    FUN_000264b6(auStack_150,0xb8);
    uVar1 = 0;
    do {
      local_48[uVar1] = (int)(auStack_150 + uVar1 * 0x17);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
      FUN_000264b6(&uStack_98,0x50);
      iVar3 = FUN_000332bc(*(undefined2 *)(param_1 + uVar1 * 2),7,auStack_28,local_20);
      if ((iVar3 == 5) || (iVar3 == 7)) {
        return (int *)0x5;
      }
      if ((local_87 >> 1 != 0) && (local_87 >> 1 != 1)) {
        return (int *)0x3202;
      }
      FUN_00026484(auStack_150 + uVar1 * 0x17,auStack_97,0x17);
    }
    piVar2 = local_48;
    software_interrupt(0x6f);
  }
  return piVar2;
}


/* ---- FUN_0002e446 @ 0002e446 ---- */

ulonglong FUN_0002e446(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000332ac();
  do {
    iVar1 = FUN_00033254(7,&local_18,&uStack_14);
    if (iVar1 == 0) {
      return CONCAT44(local_18,0xffff);
    }
  } while (((local_18 & 0xffff) == param_2) || (iVar1 = FUN_0002e47e(param_1,local_10), iVar1 == 0))
  ;
  return CONCAT44(local_18,local_18) & 0xffffffff0000ffff;
}


/* ---- FUN_0002e47e @ 0002e47e ---- */

undefined4 FUN_0002e47e(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_000264da(param_1 + 1,param_2 + 1,0x10);
  if (((iVar2 == 0) && (iVar2 = FUN_0002e934(param_1 + 1), iVar2 != 0)) &&
     (iVar2 = FUN_0002e934(param_2 + 1), iVar2 != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  uVar3 = FUN_00027aa2((byte *)(param_1 + 0x11),(byte *)(param_2 + 0x11));
  bVar1 = *(byte *)(param_1 + 0x11);
  if (((bVar1 >> 1 == 2) || (bVar1 >> 1 == 3)) ||
     ((bVar1 = *(byte *)(param_2 + 0x11), bVar1 >> 1 == 2 || (bVar1 >> 1 == 3)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (((uVar3 & uVar5) == 0) && ((uVar6 & ~uVar5) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


/* ---- FUN_0002e4f0 @ 0002e4f0 ---- */

undefined4 FUN_0002e4f0(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    while (*(char *)((int)param_1 + uVar1 + 2) == '\0') {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        return 0;
      }
    }
  }
  return 1;
}


/* ---- FUN_0002e508 @ 0002e508 ---- */

int FUN_0002e508(short *param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002e4f0();
  if (iVar1 != 0) {
    if ((*param_1 == *param_2) && (iVar1 = FUN_000264da(param_1 + 1,param_2 + 1,8), iVar1 == 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_0002e534 @ 0002e534 ---- */

void FUN_0002e534(uint param_1,undefined2 param_2)

{
  if (param_1 < 0x14) {
    *(undefined2 *)(DAT_0002e544 + param_1 * 10) = param_2;
  }
  return;
}


/* ---- FUN_0002e548 @ 0002e548 ---- */

void FUN_0002e548(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0002e35c();
  iVar2 = FUN_00033092(param_1);
  if ((iVar2 == 0) && (uVar1 < 0x14)) {
    *(undefined2 *)(DAT_0002e570 + uVar1 * 10) = 0xffff;
  }
  return;
}


/* ---- FUN_0002e574 @ 0002e574 ---- */

undefined2 FUN_0002e574(uint param_1)

{
  int iVar1;
  
  if ((param_1 < 0x14) && (iVar1 = FUN_0002a61c(), iVar1 != 0)) {
    return *(undefined2 *)(DAT_0002e594 + param_1 * 10);
  }
  return 0xffff;
}


/* ---- FUN_0002e598 @ 0002e598 ---- */

ulonglong FUN_0002e598(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  int local_14;
  undefined4 local_10;
  
  uStack_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_000332ac();
  do {
    iVar1 = FUN_00033254(7,&local_10,&uStack_18);
    if (iVar1 == 0) {
      return CONCAT44(uStack_18,0xffff);
    }
    iVar1 = FUN_0002e508(param_1,local_14 + 0x46);
  } while ((iVar1 == 0) && (iVar1 = FUN_0002e508(param_1,local_14 + 0x2a), iVar1 == 0));
  return CONCAT44(uStack_18,local_10) & 0xffffffff0000ffff;
}


/* ---- FUN_0002e5d4 @ 0002e5d4 ---- */

undefined4 FUN_0002e5d4(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*DAT_0002e604;
  if (((param_2 == (uint *)0x0) || (uVar2 <= *param_2)) &&
     ((param_4 == (uint *)0x0 || (uVar2 <= *param_4)))) {
    uVar1 = FUN_000335fc(DAT_0002e608,uVar2,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 4;
}


/* ---- FUN_0002e60c @ 0002e60c ---- */

int * FUN_0002e60c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined auStack_70 [56];
  int aiStack_38 [8];
  undefined4 local_18 [2];
  
  FUN_000264b6(DAT_0002e678,0x10);
  if ((param_1 == 0) || (param_2 == 0)) {
    *DAT_0002e67c = 0;
    piVar1 = (int *)0x0;
    software_interrupt(0x6e);
  }
  else {
    *DAT_0002e67c = (char)param_2;
    FUN_00026484(DAT_0002e678,param_1,param_2 << 1);
    local_18[0] = 0;
    FUN_000264b6(auStack_70,0x38);
    piVar1 = (int *)FUN_000335fc(param_1,param_2,auStack_70,local_18,0,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = aiStack_38;
      uVar2 = 0;
      do {
        piVar1[uVar2] = (int)(auStack_70 + uVar2 * 7);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      software_interrupt(0x6e);
    }
  }
  return piVar1;
}


/* ---- FUN_0002e680 @ 0002e680 ---- */

undefined4 FUN_0002e680(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = DAT_0002e6ac;
  iVar2 = FUN_000304e0(DAT_0002e6b0);
  if (iVar2 == 0) {
    uVar1 = FUN_00031400();
    iVar2 = DAT_0002e6b0;
    *(undefined *)(DAT_0002e6b0 + 0x10) = uVar1;
    FUN_000303b8(*(undefined4 *)(DAT_0002e6ac + -4),iVar2 + -0x8c,0x8c,0x1c);
  }
  return 0;
}


/* ---- FUN_0002e6b4 @ 0002e6b4 ---- */

undefined4 FUN_0002e6b4(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  iVar4 = DAT_0002e774;
  puVar3 = DAT_0002e770;
  if (param_1 != 0) {
    *(undefined4 *)(DAT_0002e770 + 4) = 0;
    return 1;
  }
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\0') {
    *(undefined *)(param_2 + 4) = 1;
    iVar6 = FUN_00032d64();
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0;
    while (*(char *)(DAT_0002e774 + uVar5 * 0x14) != '\x02') {
      uVar5 = uVar5 + 1 & 0xffff;
      if (1 < uVar5) {
        *DAT_0002e770 = 1;
        *(undefined4 *)(puVar3 + 4) = 0;
        return 0x1d1d;
      }
    }
    *(undefined *)(DAT_0002e774 + uVar5 * 0x14) = 0;
    iVar6 = FUN_00032d48(*(undefined4 *)(iVar4 + uVar5 * 0x14 + 4));
  }
  else {
    puVar9 = (undefined4 *)(DAT_0002e770 + 8);
    if (cVar1 == '\x02') {
      *(undefined *)(param_2 + 4) = 0;
      *(undefined2 *)(puVar3 + 0xc) = 2;
      iVar6 = FUN_00030bb2(DAT_0002e778,*puVar9,1,0);
    }
    else {
      if (cVar1 != '\x03') goto LAB_0002e768;
      *(undefined *)(param_2 + 4) = 0;
      iVar6 = FUN_00032d48(*puVar9);
      uVar8 = *puVar9;
      uVar2 = *(ushort *)(DAT_0002e774 + 0x2a);
      iVar7 = iVar4 + (uint)uVar2 * 0x14;
      *puVar9 = *(undefined4 *)(iVar7 + 4);
      *(undefined4 *)(iVar7 + 4) = uVar8;
      *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(puVar3 + 0xc);
      *(undefined2 *)(puVar3 + 0xc) = 2;
      *(undefined *)(iVar4 + (uint)uVar2 * 0x14) = 0;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_0002e768:
  *(undefined4 *)(puVar3 + 4) = 0;
  return 0xe;
}


/* ---- FUN_0002e77c @ 0002e77c ---- */

ushort * FUN_0002e77c(uint param_1)

{
  ushort *puVar1;
  
  puVar1 = DAT_0002e78c;
  if (*DAT_0002e78c != param_1) {
    puVar1 = (ushort *)0x0;
  }
  return puVar1;
}


/* ---- FUN_0002e790 @ 0002e790 ---- */

void FUN_0002e790(undefined param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0002e7a4;
  *(undefined *)(DAT_0002e7a0 + 1) = param_1;
  FUN_000288cc(0,0,uVar1);
  return;
}


/* ---- FUN_0002e7f0 @ 0002e7f0 ---- */

undefined4 FUN_0002e7f0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
      *(undefined *)(param_2 + uVar1) = *(undefined *)((param_3 - uVar1) + param_1 + -1);
    }
    return 1;
  }
  return 0;
}


/* ---- FUN_0002e818 @ 0002e818 ---- */

void FUN_0002e818(int param_1,code **param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    iVar2 = uVar1 * 4 + 0x140;
    if ((*(int *)(param_1 + iVar2) != 0) && ((*(uint *)(param_1 + 0x304) & 0x10000 << uVar1) != 0))
    {
      FUN_00031544(param_1,iVar2);
      (**param_2)(iVar2,param_2[1]);
    }
  }
  return;
}


/* ---- FUN_0002e85e @ 0002e85e ---- */

undefined4 FUN_0002e85e(void)

{
  return 1;
}


/* ---- FUN_0002e864 @ 0002e864 ---- */

undefined4 FUN_0002e864(uint param_1)

{
  if ((1 << (param_1 & 0xff) & *(uint *)(DAT_0002e878 + 4)) != 0) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002e87c @ 0002e87c ---- */

undefined4 FUN_0002e87c(uint param_1)

{
  if ((uint)(1 << (param_1 & 0xff)) >> 0x11 != 0) {
    return 0;
  }
  return 1;
}


/* ---- FUN_0002e898 @ 0002e898 ---- */

undefined4 FUN_0002e898(ushort *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1[2];
  uVar1 = param_3;
  if (uVar4 <= param_3) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)param_1[3];
  uVar3 = param_4;
  if (uVar2 <= param_4) {
    uVar3 = uVar2;
  }
  if ((((*param_1 <= *(ushort *)(param_2 + 2)) && (*(ushort *)(param_2 + 2) <= param_1[1])) &&
      (uVar4 - uVar1 <= (uint)*(ushort *)(param_2 + 4))) &&
     ((((uint)*(ushort *)(param_2 + 4) <= uVar4 + param_3 &&
       (uVar2 - uVar3 <= (uint)*(ushort *)(param_2 + 6))) &&
      ((uint)*(ushort *)(param_2 + 6) <= uVar2 + param_4)))) {
    return 1;
  }
  return 0;
}


/* ---- FUN_0002e8dc @ 0002e8dc ---- */

undefined4 FUN_0002e8dc(int param_1,int param_2,int param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (param_3 == 0) {
    if ((uint)uVar1 != (uint)*(ushort *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8)) {
      *param_4 = uVar1 + 1;
      sVar2 = *(short *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8);
      goto LAB_0002e922;
    }
  }
  else {
    uVar3 = uVar1 + 1;
    if (uVar3 != *(ushort *)(param_3 + 6)) {
      *param_4 = (short)uVar3;
      sVar2 = *(short *)(param_3 + 6) + -1;
LAB_0002e922:
      param_4[1] = sVar2;
      return 1;
    }
  }
  return 0;
}


/* ---- FUN_0002e928 @ 0002e928 ---- */

int FUN_0002e928(uint param_1)

{
  int iVar1;
  
  iVar1 = (1 << (param_1 & 0xff)) << 0xf;
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0002e934 @ 0002e934 ---- */

undefined4 FUN_0002e934(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != '\0') {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return 0;
}


/* ---- FUN_0002e948 @ 0002e948 ---- */

undefined4 FUN_0002e948(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return 0;
  }
  return 1;
}


/* ---- led_motor_ctrl_queue_add @ 0002e954 ---- */

undefined4 led_motor_ctrl_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031034(DAT_0002e97c);
  if (iVar1 == 0) {
    iVar1 = FUN_00031060(DAT_0002e97c,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00026218(iVar1,0x43,s__________user_queue_c_0002e980);
  }
  return 0;
}


/* ---- FUN_0002e998 @ 0002e998 ---- */

undefined4 FUN_0002e998(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031022(DAT_0002e9c4);
  if (iVar1 == 0) {
    iVar1 = FUN_00030f94(DAT_0002e9c4,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00026218(iVar1,0x51,s__________user_queue_c_0002e9c8);
  }
  return 0;
}


/* ---- FUN_0002e9e0 @ 0002e9e0 ---- */

void FUN_0002e9e0(void)

{
  FUN_00031112(DAT_0002e9e8);
  return;
}


/* ---- led_motor_test_queue_add @ 0002e9ec ---- */

undefined4 led_motor_test_queue_add(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031034(DAT_0002ea1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00031060(DAT_0002ea1c,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00026218(iVar1,0x75,s__________user_queue_c_0002ea48);
  }
  else {
    debug_printf(s_led_motor_test_queue_is_full____t_0002ea20);
  }
  return 0;
}


/* ---- FUN_0002ea60 @ 0002ea60 ---- */

undefined4 FUN_0002ea60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031022(DAT_0002ea8c);
  if (iVar1 == 0) {
    iVar1 = FUN_00030f94(DAT_0002ea8c,param_1,0);
    if (iVar1 == 0) {
      return 1;
    }
    FUN_00026218(iVar1,0x83,s__________user_queue_c_0002ea90);
  }
  return 0;
}


/* ---- FUN_0002eaa8 @ 0002eaa8 ---- */

void FUN_0002eaa8(void)

{
  FUN_00031112(DAT_0002eab0);
  return;
}


/* ---- FUN_0002eab4 @ 0002eab4 ---- */

void FUN_0002eab4(void)

{
  char cVar1;
  
  cVar1 = *DAT_0002eacc;
  if (cVar1 != '\0') {
    *DAT_0002eacc = cVar1 + -1;
    if (cVar1 == '\x01') {
      start_execute_queue_led_motor_test();
      return;
    }
  }
  return;
}


/* ---- FUN_0002ead0 @ 0002ead0 ---- */

undefined4 FUN_0002ead0(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0002eb20;
  if (*(char *)(DAT_0002eb20 + 0x31) == '\x16') {
    FUN_0002ed00();
    FUN_00038610();
    uVar1 = *(undefined *)(iVar2 + 0x38);
    uVar3 = *(undefined4 *)(iVar2 + 0x34);
    FUN_0002ef94(uVar3,uVar3,uVar3,uVar1,uVar1,uVar1,*(undefined2 *)(iVar2 + 0x3c),
                 *(undefined2 *)(iVar2 + 0x40));
    if (*(int *)(iVar2 + 0x44) != 0) {
      FUN_000385a8(*(int *)(iVar2 + 0x44),0);
    }
    *(undefined *)(iVar2 + 0x31) = 0;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_0002eb24 @ 0002eb24 ---- */

undefined4 FUN_0002eb24(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0002eb70;
  if (*(char *)(DAT_0002eb70 + 0x31) != '\x12') {
    return 0;
  }
  FUN_0002ed00();
  iVar3 = DAT_0002eb74;
  uVar1 = *(ushort *)(DAT_0002eb74 + 0x28) >> 1;
  FUN_0002ed9c(*(undefined4 *)(DAT_0002eb74 + 0x30),*(undefined *)(iVar2 + 0x34),uVar1,uVar1,0,
               *(short *)(DAT_0002eb74 + 0x2a) + 100);
  *(undefined *)(iVar2 + 10) = 1;
  FUN_000385a8((uint)*(ushort *)(iVar3 + 0x2a) + (uint)*(ushort *)(iVar3 + 0x28) * 2,DAT_0002eb78);
  *(undefined *)(iVar2 + 0x31) = 0;
  return 1;
}


/* ---- FUN_0002eb7c @ 0002eb7c ---- */

undefined4 FUN_0002eb7c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0002ebcc;
  if (*(char *)(DAT_0002ebcc + 0x31) != '\x13') {
    return 0;
  }
  FUN_0002ed00();
  iVar2 = DAT_0002ebd0;
  *(undefined2 *)(DAT_0002ebd0 + 0x28) = 200;
  *(undefined2 *)(iVar2 + 0x68) = 0x32;
  FUN_0002ed9c(*(undefined4 *)(iVar2 + 0x60),*(undefined *)(iVar1 + 0x34),100,100,0,0x96);
  iVar2 = (uint)*(ushort *)(iVar2 + 0x28) + (uint)*(ushort *)(iVar2 + 0x68);
  if (iVar2 != 0) {
    FUN_000385a8(iVar2,0);
  }
  *(undefined *)(iVar1 + 0x31) = 0;
  return 1;
}


/* ---- FUN_0002ebd4 @ 0002ebd4 ---- */

undefined4 FUN_0002ebd4(void)

{
  int iVar1;
  
  iVar1 = DAT_0002ec28;
  if (*(char *)(DAT_0002ec28 + 0x31) != '\x11') {
    return 0;
  }
  FUN_0002ed00();
  FUN_00038610();
  FUN_0002ed9c(*(undefined4 *)(iVar1 + 0x34),*(undefined *)(iVar1 + 0x38),
               *(undefined2 *)(iVar1 + 0x3c),*(undefined2 *)(iVar1 + 0x40),
               *(undefined2 *)(iVar1 + 0x44),*(undefined2 *)(iVar1 + 0x48));
  if (*(int *)(iVar1 + 0x4c) != 0) {
    FUN_000385a8(*(int *)(iVar1 + 0x4c),0);
  }
  *(undefined *)(iVar1 + 0x31) = 0;
  return 1;
}


/* ---- FUN_0002ec2c @ 0002ec2c ---- */

undefined4 FUN_0002ec2c(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0002ec6c;
  if (*(char *)(DAT_0002ec6c + 0x31) != '\x15') {
    return 0;
  }
  FUN_0002ed00();
  FUN_00038610();
  uVar1 = *(undefined *)(iVar2 + 0x38);
  uVar3 = *(undefined4 *)(iVar2 + 0x34);
  FUN_0002f2d0(uVar3,uVar3,uVar3,uVar1,uVar1,uVar1);
  if (*(int *)(iVar2 + 0x3c) != 0) {
    FUN_000385a8(*(int *)(iVar2 + 0x3c),0);
  }
  *(undefined *)(iVar2 + 0x31) = 0;
  return 1;
}


/* ---- FUN_0002ec70 @ 0002ec70 ---- */

undefined4 FUN_0002ec70(void)

{
  int iVar1;
  
  iVar1 = DAT_0002ecb0;
  if (*(char *)(DAT_0002ecb0 + 0x31) != '\x14') {
    return 0;
  }
  FUN_0002ed00();
  FUN_00038610();
  FUN_0002f5f4(*(undefined4 *)(iVar1 + 0x34),*(undefined *)(iVar1 + 0x38),
               *(undefined2 *)(iVar1 + 0x3c),*(undefined2 *)(iVar1 + 0x40));
  if (*(int *)(iVar1 + 0x44) != 0) {
    FUN_000385a8(*(int *)(iVar1 + 0x44),0);
  }
  *(undefined *)(iVar1 + 0x31) = 0;
  return 1;
}


/* ---- FUN_0002ecb4 @ 0002ecb4 ---- */

bool FUN_0002ecb4(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_0002ecfc;
  bVar2 = *(char *)(DAT_0002ecfc + 0x31) == '\x17';
  if (bVar2) {
    FUN_0002ed00();
    FUN_0002ef94(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38),
                 *(undefined4 *)(iVar1 + 0x3c),*(undefined *)(iVar1 + 0x40),
                 *(undefined *)(iVar1 + 0x44),*(undefined *)(iVar1 + 0x48),
                 *(short *)(iVar1 + 0x4c) + 100,0);
    *(undefined *)(iVar1 + 0x31) = 0;
  }
  return bVar2;
}


/* ---- FUN_0002ed00 @ 0002ed00 ---- */

void FUN_0002ed00(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00034324(s_leds_runing_init_0002ed48);
  iVar1 = DAT_0002ed5c;
  if ((*(char *)(DAT_0002ed5c + 0x2f) != '\x01') || (*(char *)(DAT_0002ed5c + 0x30) != '\x01')) {
    FUN_0003428c();
    (*DAT_0002ed60)(0x1f400);
    iVar2 = FUN_00029630();
    if (iVar2 == 0) {
      FUN_00034324(s_func___s__failed___s___d_0002ed80,DAT_0002ed7c,s__________user_leds_c_0002ed64,
                   0x18d);
      return;
    }
    *(undefined *)(iVar1 + 0x30) = 1;
  }
  return;
}


/* ---- FUN_0002ed9c @ 0002ed9c ---- */

int FUN_0002ed9c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_ac [80];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [2];
  
  FUN_00029880(2);
  FUN_00034324(s_leds_start_color_breath__d__d__d_0002ef58,param_1,param_2,param_3,param_4,param_5,
               param_6);
  FUN_000264b6(auStack_ac,0x50);
  FUN_00038334(param_1,&local_5c,&local_58,local_54);
  uVar9 = FUN_000268e0(local_5c);
  uVar10 = FUN_00026856(param_2);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_0002ef8c >> 0x20);
  uVar8 = (undefined4)DAT_0002ef8c;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_58);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_54[0]);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_1 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_00029168(6,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(3,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(8,uVar1,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(5,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(2,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(9,uVar2,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(4,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(1,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  FUN_00029168(7,uVar3,param_3,param_4,param_5,param_6,auStack_ac);
  iVar5 = FUN_0002997c(auStack_ac,0x50);
  if ((iVar5 != 0) && (iVar5 = FUN_000299c4(), iVar5 != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}


/* ---- FUN_0002ef94 @ 0002ef94 ---- */

int FUN_0002ef94(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_74 [44];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_00029880(2);
  FUN_000264b6(auStack_74,0x2c);
  FUN_000264b6(auStack_74,0x2c);
  FUN_00038334(param_1,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_4);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_0002f2c8 >> 0x20);
  uVar8 = (undefined4)DAT_0002f2c8;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_1 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000290ec(6,uVar1,0,0,auStack_74);
  FUN_000290ec(5,uVar2,0,0,auStack_74);
  FUN_000290ec(4,uVar3,0,0,auStack_74);
  FUN_00038334(param_2,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_5);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_2 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_2 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_2 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000290ec(3,uVar1,0,0,auStack_74);
  FUN_000290ec(2,uVar2,0,0,auStack_74);
  FUN_000290ec(1,uVar3,0,0,auStack_74);
  FUN_00038334(param_3,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_6);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_3 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_3 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_3 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000290ec(8,uVar1,0,0,auStack_74);
  FUN_000290ec(9,uVar2,0,0,auStack_74);
  FUN_000290ec(7,uVar3,param_7,param_8,auStack_74);
  iVar5 = FUN_0002997c(auStack_74,0x2a);
  if ((iVar5 != 0) && (iVar5 = FUN_000299c4(), iVar5 != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}


/* ---- FUN_0002f2d0 @ 0002f2d0 ---- */

int FUN_0002f2d0(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_00029880(2);
  FUN_000264b6(auStack_60,0x18);
  FUN_000264b6(auStack_60,0x18);
  FUN_00038334(param_1,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_4);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_0002f5ec >> 0x20);
  uVar8 = (undefined4)DAT_0002f5ec;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_1 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000293e8(6,uVar1,0,auStack_60);
  FUN_000293e8(5,uVar2,0,auStack_60);
  FUN_000293e8(4,uVar3,0,auStack_60);
  FUN_00038334(param_2,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_5);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_2 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_2 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_2 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000293e8(3,uVar1,0,auStack_60);
  FUN_000293e8(2,uVar2,0,auStack_60);
  FUN_000293e8(1,uVar3,0,auStack_60);
  FUN_00038334(param_3,&local_48,&local_44,&local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_6);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_3 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_3 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_3 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000293e8(8,uVar1,0,auStack_60);
  FUN_000293e8(9,uVar2,0,auStack_60);
  FUN_000293e8(7,uVar3,15000,auStack_60);
  iVar5 = FUN_0002997c(auStack_60,0x16);
  if ((iVar5 != 0) && (iVar5 = FUN_000299c4(), iVar5 != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}


/* ---- FUN_0002f5f4 @ 0002f5f4 ---- */

int FUN_0002f5f4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auStack_84 [60];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  
  FUN_00029880(2);
  FUN_000264b6(auStack_84,0x3c);
  FUN_000264b6(auStack_84,0x3c);
  FUN_00038334(param_1,&local_48,&local_44,local_40);
  uVar9 = FUN_000268e0(local_48);
  uVar10 = FUN_00026856(param_2);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar4 = (undefined4)uVar10;
  uVar7 = (undefined4)((ulonglong)DAT_0002f788 >> 0x20);
  uVar8 = (undefined4)DAT_0002f788;
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 8) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar1 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_44);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856((param_1 << 0x10) >> 0x18);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar2 = FUN_000268ae();
  uVar9 = FUN_000268e0(local_40[0]);
  uVar10 = FUN_00026756(uVar4,uVar6,uVar8,uVar7);
  uVar11 = FUN_00026856(param_1 & 0xff);
  uVar10 = FUN_00026672((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                        (int)((ulonglong)uVar10 >> 0x20));
  FUN_00026672((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
               (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = FUN_000268ae();
  FUN_000292d8(6,uVar1,param_3,param_4,auStack_84);
  FUN_000292d8(3,uVar1,param_3,param_4,auStack_84);
  FUN_000292d8(8,uVar1,param_3,param_4,auStack_84);
  FUN_000292d8(5,uVar2,param_3,param_4,auStack_84);
  FUN_000292d8(2,uVar2,param_3,param_4,auStack_84);
  FUN_000292d8(9,uVar2,param_3,param_4,auStack_84);
  FUN_000292d8(4,uVar3,param_3,param_4,auStack_84);
  FUN_000292d8(1,uVar3,param_3,param_4,auStack_84);
  FUN_000292d8(7,uVar3,param_3,param_4,auStack_84);
  iVar5 = FUN_0002997c(auStack_84,0x3a);
  if ((iVar5 != 0) && (iVar5 = FUN_000299c4(), iVar5 != 0)) {
    iVar5 = 1;
  }
  return iVar5;
}


/* ---- FUN_0002f790 @ 0002f790 ---- */

void FUN_0002f790(undefined2 *param_1)

{
  *param_1 = 0xf7;
  param_1[1] = 0x17;
  *(undefined *)(param_1 + 2) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  *(undefined *)(param_1 + 3) = 0x1b;
  *(undefined *)((int)param_1 + 7) = 0x1b;
  return;
}


/* ---- FUN_0002f7a8 @ 0002f7a8 ---- */

undefined8 FUN_0002f7a8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = DAT_0002f844;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (param_2 == 0) {
    FUN_0002ffa0(&local_30);
    FUN_00032ee4(param_1,0,&local_30);
    iVar4 = local_30;
    if ((*pcVar1 == '\0') && (uStack_28._1_1_ == '\0')) {
      iVar3 = 5;
      goto LAB_0002f802;
    }
  }
  else {
    iVar4 = 0;
  }
  iVar2 = FUN_00036564(param_1,iVar4,param_3);
  FUN_0002d0ec(param_1,iVar2,0);
  iVar3 = iVar2;
  if (iVar2 != 0xd) {
    if (iVar2 < 0xe) {
      if (((iVar2 != 0) && (iVar2 != 8)) && (iVar2 != 0xb)) {
LAB_0002f812:
        iVar3 = 3;
      }
    }
    else if (iVar2 == 0x11) {
      FUN_0002a5dc(param_1,pcVar1[3],param_2);
      FUN_0002a5dc(param_1,pcVar1[2],param_3);
      iVar3 = 0;
    }
    else if (iVar2 != 0x3002) goto LAB_0002f812;
  }
  if (param_4 != 0) {
    FUN_0002ca44(param_1,iVar2,iVar4);
  }
LAB_0002f802:
  return CONCAT44(local_30,iVar3);
}


/* ---- FUN_0002f848 @ 0002f848 ---- */

void FUN_0002f848(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_0002f8b4;
  iVar2 = FUN_0002a5ac(param_1,*DAT_0002f8b4);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00032ea4(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0002a5ac(param_1,puVar1[2]);
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    iVar2 = FUN_00033184(param_1 + 0x100U & 0xffff,7);
    if ((iVar2 != 0) && (iVar2 != 5)) {
      FUN_00035e2c(param_1);
    }
    FUN_0002c478(param_1,uVar3,param_2,param_3);
    return;
  }
  FUN_0002c904(param_1,param_2,param_3);
  return;
}


/* ---- FUN_0002f8b8 @ 0002f8b8 ---- */

void FUN_0002f8b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0002f8e0;
  uVar2 = FUN_0002a5ac(param_1,*(undefined *)(DAT_0002f8e0 + 2));
  uVar3 = FUN_0002a5ac(param_1,*(undefined *)(iVar1 + 3));
  FUN_0002f7a8(param_1,uVar3,uVar2,1);
  return;
}


/* ---- FUN_0002f8e4 @ 0002f8e4 ---- */

undefined4 FUN_0002f8e4(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  pbVar4 = DAT_0002f9d4;
  iVar3 = DAT_0002f9d0;
  bVar2 = false;
  iVar10 = *(int *)(DAT_0002f9d0 + 4);
  do {
    if (param_1 == (int *)0x0) {
      do {
        while( true ) {
          if (*pbVar4 == pbVar4[1]) {
            if ((bVar2) || (*(int *)(iVar3 + 4) != iVar10)) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
            return uVar7;
          }
LAB_0002f904:
          uVar8 = (uint)*pbVar4;
          *pbVar4 = (byte)(uVar8 + 1);
          if ((uVar8 + 1 & 0xff) == (uint)pbVar4[2]) {
            *pbVar4 = 0;
          }
          piVar5 = *(int **)(pbVar4 + uVar8 * 0x18 + 8);
          bVar1 = pbVar4[uVar8 * 0x18 + 4];
          if (bVar1 == 1) break;
          if (bVar1 == 2) {
            iVar6 = FUN_00036c28();
            if (iVar6 != 0) {
              bVar2 = true;
            }
            *(undefined *)(piVar5 + 4) = 0;
          }
          else if (bVar1 == 3) {
            for (iVar6 = *(int *)(iVar3 + 4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x1c)) {
              *(undefined *)(iVar6 + 0x10) = 0;
            }
            *(undefined4 *)(iVar3 + 4) = 0;
          }
        }
      } while (*(char *)(piVar5 + 4) != '\0');
      piVar5[1] = *(int *)(pbVar4 + uVar8 * 0x18 + 0xc);
      piVar5[2] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x10);
      piVar5[3] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x14);
      piVar5[6] = *(int *)(pbVar4 + uVar8 * 0x18 + 0x18);
      piVar9 = param_1;
      if (*(char *)(iVar3 + 3) != '\0') {
        piVar5[1] = 0;
      }
    }
    else {
      if (param_1 == (int *)0x0) goto LAB_0002f904;
      piVar9 = (int *)param_1[7];
      piVar5 = param_1;
    }
    uVar8 = piVar5[1] - *(int *)(iVar3 + 8) & 0xffffff;
    if (uVar8 < DAT_0002f9d8) {
      iVar6 = uVar8 + piVar5[2];
LAB_0002f994:
      *piVar5 = iVar6;
    }
    else {
      uVar8 = *(int *)(iVar3 + 8) - piVar5[1] & 0xffffff;
      if (uVar8 < (uint)piVar5[2]) {
        iVar6 = piVar5[2] - uVar8;
        goto LAB_0002f994;
      }
      *piVar5 = 0;
    }
    piVar5[1] = 0;
    piVar5[2] = 0;
    *(undefined *)(piVar5 + 4) = 1;
    piVar5[7] = 0;
    FUN_00036bec(piVar5);
    param_1 = piVar9;
  } while( true );
}


/* ---- FUN_0002f9dc @ 0002f9dc ---- */

void FUN_0002f9dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined local_28 [2];
  undefined2 local_26;
  
  uVar2 = 0;
  FUN_000264b6(local_28,0x18);
  local_26 = (undefined2)param_1;
  if (param_1 == 0xffff) {
    return;
  }
  iVar1 = FUN_0002e0d0(param_1);
  if (iVar1 == 0) {
    local_28[0] = 0xe;
  }
  else {
    if (iVar1 != 0xb) {
      if (iVar1 == 0x11) {
        uVar2 = 1;
      }
      else if (iVar1 != 0x3002) {
        FUN_00035e04(param_1,iVar1);
      }
      goto LAB_0002fa18;
    }
    local_28[0] = 0xf;
  }
  FUN_0002cab0(local_28);
LAB_0002fa18:
  FUN_0002a5dc(param_1,*(undefined *)(DAT_0002fa40 + 2),uVar2);
  return;
}


/* ---- FUN_0002fa44 @ 0002fa44 ---- */

void FUN_0002fa44(undefined4 param_1,undefined4 param_2)

{
  FUN_0002a5dc(param_1,*(undefined *)(DAT_0002fa50 + 1),param_2);
  return;
}


/* ---- FUN_0002fa54 @ 0002fa54 ---- */

void FUN_0002fa54(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00034324(s_low_power_delay_ms__d_0002fa98,param_1);
  iVar1 = DAT_0002fab0;
  *(undefined *)(DAT_0002fab0 + 0xb) = 0;
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  FUN_00028ca4(*(undefined4 *)(DAT_0002fab4 + 0x2c),uVar2,0);
  while (*(char *)(iVar1 + 0xb) == '\0') {
    software_interrupt(0x41);
    FUN_0002896c();
  }
  return;
}


/* ---- FUN_0002fab8 @ 0002fab8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002fab8(void)

{
  int iVar1;
  int iVar2;
  char local_40 [32];
  undefined4 uStack_20;
  byte *pbStack_1c;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined2 uStack_12;
  undefined uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00030e06(0x15);
  _DAT_5000050c = 0x200000;
  FUN_0002754c();
  iVar1 = FUN_000289ac(8,10,DAT_0002fce8);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x681,DAT_0002fcec);
  }
  FUN_0002b2fc();
  iVar1 = FUN_00028c50();
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x2ea,DAT_0002fcec);
  }
  FUN_00038908();
  FUN_00036d9c();
  FUN_0002fa54(1000);
  FUN_00034324(s_SEGGER_RTT_Init_0002fcf0);
  FUN_0002d3b0();
  FUN_0002d378();
  FUN_0002fa54(0x14);
  FUN_00030e06(0x10);
  FUN_00030e06(0xffffffff);
  FUN_00030d52(0x13,0,0,3,0,0);
  iVar1 = FUN_00030eec();
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x69f,DAT_0002fcec);
  }
  FUN_000289e8();
  FUN_000264b6(_DAT_0002fd04,0x54);
  iVar1 = _DAT_0002fd04;
  *(undefined *)(_DAT_0002fd04 + 8) = 1;
  *(undefined *)(iVar1 + 9) = 0xff;
  *(undefined *)(iVar1 + 0x1b) = 0;
  *(undefined *)(iVar1 + 0x2e) = 0;
  *(undefined *)(iVar1 + 0x2f) = 0;
  *(undefined *)(iVar1 + 0x30) = 0;
  *(undefined *)(iVar1 + 0x31) = 0;
  *(undefined *)(iVar1 + 0x50) = 0;
  *(undefined *)(iVar1 + 0x51) = 0;
  FUN_00034324(s_Apple_Notification_Center_Servic_0002fd07 + 1);
  FUN_00027a90();
  FUN_00029a20();
  FUN_00034324(s_motor_init___0002fd44);
  FUN_0002fde0();
  FUN_0002b43c();
  FUN_000371a0();
  FUN_00034326(s_Apple_Notification_Center_Servic_0002fd07 + 1);
  FUN_000294e8();
  FUN_00038588();
  FUN_0002d53c();
  iVar2 = FUN_000305fc(DAT_0002fd58,DAT_0002fd54);
  if (iVar2 != 0) {
    FUN_00026218(iVar2,0x3e0,DAT_0002fcec);
  }
  iVar2 = FUN_000305e4(DAT_0002fd58,0xf7);
  if (iVar2 != 0) {
    FUN_00026218(iVar2,0x3e3,DAT_0002fcec);
  }
  iVar2 = FUN_0002a670(DAT_0002fd5c);
  if (iVar2 != 0) {
    FUN_00026218(iVar2,0x68a,DAT_0002fcec);
  }
  FUN_00035edc();
  FUN_00027b30();
  FUN_000264b6(&uStack_20,0x1c);
  uStack_20 = 0;
  pbStack_1c = &BYTE_00028000;
  uStack_18 = 0xf0000;
  uStack_14 = 3;
  uStack_12 = 0;
  uStack_10 = 1;
  uStack_c = 0;
  uStack_8 = DAT_0002fd60;
  iVar2 = FUN_0002a474(&uStack_20);
  if (iVar2 != 0) {
    FUN_00026218(iVar2,0x411,DAT_0002fcec);
  }
  FUN_00033578();
  FUN_0002815c();
  FUN_0002fa54(100);
  FUN_0002e1f4();
  FUN_0002fa54(100);
  FUN_0002e1f4();
  FUN_0002fa54(100);
  FUN_0002e1f4();
  FUN_00034194(1);
  *DAT_0002fd64 = *DAT_0002fd64 | 4;
  software_interrupt(0x34);
  FUN_00034324(s_powerSource___x_0002fd68,uStack_4);
  software_interrupt(0x35);
  iVar2 = 0;
  do {
    local_40[iVar2] = (char)iVar2 + '\x01';
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x16);
  FUN_0002fea4();
  FUN_00035170();
  do {
    if ((*(char *)(iVar1 + 0x50) == '\x01') &&
       ((*(char *)(iVar1 + 8) == -0x79 || (*(char *)(iVar1 + 8) == -0x80)))) {
      FUN_00034908();
    }
    switch(*(undefined *)(iVar1 + 0x31)) {
    case 0x11:
      FUN_0002ebd4();
      break;
    case 0x12:
      FUN_0002eb24();
      break;
    case 0x13:
      FUN_0002eb7c();
      break;
    case 0x14:
      FUN_0002ec70();
      break;
    case 0x15:
      FUN_0002ec2c();
      break;
    case 0x16:
      FUN_0002ead0();
      break;
    case 0x17:
      FUN_0002ecb4();
    }
    FUN_0002e1f4();
  } while( true );
}


/* ---- FUN_0002fd7c @ 0002fd7c ---- */

undefined4 FUN_0002fd7c(undefined2 *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = param_1[2];
  if ((uVar1 + 4 + (uint)*param_3 <= param_4) && (uVar1 + 2 < 0xff)) {
    *(char *)(param_2 + (uint)*param_3) = (char)uVar1 + '\x03';
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0xff;
    uVar1 = *param_3;
    *param_3 = uVar1 + 1;
    sVar2 = FUN_00037ad8(*param_1,(uint)(ushort)(uVar1 + 1) + param_2);
    uVar1 = *param_3;
    *param_3 = sVar2 + uVar1;
    if (param_1[2] != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        return 7;
      }
      FUN_00026484((uint)(ushort)(sVar2 + uVar1) + param_2);
      *param_3 = *param_3 + param_1[2];
    }
    return 0;
  }
  return 0xc;
}


/* ---- FUN_0002fde0 @ 0002fde0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002fde0(void)

{
  int iVar1;
  undefined auStack_20 [8];
  undefined local_18;
  
  FUN_00030e1a(0x10);
  _DAT_5000050c = 0x10000;
  FUN_00026484(auStack_20,DAT_0002fe20,0x14);
  local_18 = 1;
  iVar1 = FUN_00028740(DAT_0002fe20 + -8,auStack_20,0);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x94,s__________bsp_bond_c_0002fe24);
  }
  return;
}


/* ---- FUN_0002fe38 @ 0002fe38 ---- */

undefined4 FUN_0002fe38(uint param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0002fe70;
  if ((param_1 < 0x65) && (param_1 != 0)) {
    DAT_0002fe70[1] = '\x02';
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      pcVar1[2] = '\x01';
      FUN_000286c8(DAT_0002fe74);
    }
    do {
      iVar2 = FUN_000284cc(DAT_0002fe74,0,param_1);
    } while (iVar2 == 0x11);
    return 1;
  }
  return 0;
}


/* ---- FUN_0002fe78 @ 0002fe78 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002fe78(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0002fe9c;
  _DAT_5000050c = 0x10000;
  if (*DAT_0002fe9c != '\0') {
    DAT_0002fe9c[1] = '\x02';
    *pcVar1 = '\0';
    FUN_00028650(DAT_0002fea0);
    return;
  }
  return;
}


/* ---- FUN_0002fea4 @ 0002fea4 ---- */

void FUN_0002fea4(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0002fed4 + 1) == '\0') {
    *(undefined *)(DAT_0002fed4 + 1) = 1;
    iVar1 = FUN_00028ca4(*(undefined4 *)(DAT_0002fed8 + 4),0x8000,0);
    if (iVar1 != 0) {
      FUN_00026218(iVar1,0x266,s__________user_ble_c_0002fedc);
      return;
    }
  }
  return;
}


/* ---- thunk_FUN_000304b6 @ 0002fef0 ---- */

void thunk_FUN_000304b6(void)

{
  DataMemoryBarrier(0x1f);
  FUN_000304b6();
  return;
}


/* ---- FUN_0002fef8 @ 0002fef8 ---- */

longlong FUN_0002fef8(byte *param_1,int param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_18;
  
  puVar5 = &local_18;
  local_18 = (uint)*param_1;
  if ((local_18 == 1) && (param_1[1] == 0)) {
    iVar4 = 7;
    puVar5 = (uint *)0x1;
LAB_0002ff1a:
    return CONCAT44(puVar5,iVar4);
  }
  uVar3 = (uint)*param_3;
  if ((uVar3 + 2 <= param_4) &&
     ((local_18 != 1 || (local_18 = param_1[1] + uVar3 + 2, local_18 <= param_4)))) {
    uVar3 = (param_4 - uVar3) - 2;
    local_18 = uVar3 & 0xffff;
    iVar4 = param_2 + 2 + (uint)*param_3;
    software_interrupt(0x7d);
    if (iVar4 != 0) goto LAB_0002ff1a;
    if ((*param_1 == 2) || (local_18 <= param_1[1])) {
      uVar2 = 9;
    }
    else {
      uVar2 = 8;
      if ((*param_1 == 1) && ((uint)param_1[1] <= (uVar3 & 0xffff))) {
        local_18 = (uint)param_1[1];
      }
      else {
        local_18 = uVar3 & 0xffff;
      }
    }
    if (local_18 < 0xff) {
      *(char *)(param_2 + (uint)*param_3) = (char)local_18 + '\x01';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = uVar2;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *param_3 = uVar1 + 1 + (ushort)local_18;
      return (ulonglong)(ushort)local_18 << 0x20;
    }
  }
  return CONCAT44(local_18,0xc);
}


/* ---- FUN_0002ffa0 @ 0002ffa0 ---- */

void FUN_0002ffa0(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(DAT_0002ffb0 + 8);
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* ---- FUN_0002ffb4 @ 0002ffb4 ---- */

ushort FUN_0002ffb4(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == 0xffff) {
    uVar1 = 0;
  }
  else {
    uVar1 = (short)param_1 + 1;
  }
  while( true ) {
    if (0xff < uVar1) {
      return 0xffff;
    }
    iVar2 = FUN_000304b6(param_2,uVar1);
    if (iVar2 != 0) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* ---- FUN_0002ffe4 @ 0002ffe4 ---- */

void FUN_0002ffe4(ushort *param_1)

{
  ushort uVar1;
  undefined auStack_28 [32];
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    FUN_00034324(s__s___N_A__0003007c,*(undefined4 *)(DAT_00030078 + *(int *)(param_1 + 2) * 4));
  }
  else if (*(int *)(param_1 + 2) == 0) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_00026484(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    debug_printf(s_APP_NAME__d__s_00030068,*param_1,auStack_28);
    FUN_000369e8(auStack_28,*param_1);
  }
  else if (*(int *)(param_1 + 2) == 1) {
    if (0x1d < uVar1) {
      *param_1 = 0x1e;
    }
    FUN_00026484(auStack_28,*(undefined4 *)(param_1 + 4),*param_1);
    FUN_00034324(s_APP_TITLE__d__s_00030054,*param_1,auStack_28);
    FUN_0003695c(auStack_28,*param_1);
  }
  return;
}


/* ---- FUN_0003008c @ 0003008c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003008c(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_00034324(s_Notification_00030140);
  FUN_00034324(s_Event___s_00030153 + 1,
               *(undefined4 *)(_DAT_00030150 + (uint)*(byte *)(param_1 + 1) * 4));
  FUN_00034324(s_Category_ID___s_00030168,
               *(undefined4 *)(_DAT_00030150 + -0x30 + (uint)*(byte *)((int)param_1 + 6) * 4));
  FUN_00034324(s_Category_Cnt__u_0003017c,*(undefined *)((int)param_1 + 7));
  FUN_00034324(s_UID___u_00030190,*param_1);
  pcVar2 = _DAT_000301a8;
  pcVar1 = DAT_000301a4;
  FUN_00034324(s_Flags___d__d_000301ab + 1,*_DAT_000301a8,*DAT_000301a4);
  if (*pcVar2 == '\0') {
    *pcVar1 = '\x04';
    FUN_0002fea4();
  }
  if (*pcVar1 == '\0') {
    debug_printf(s_mes_get_____000301bc);
    iVar3 = FUN_000305c4(_DAT_000301d0,DAT_000301cc);
    if (iVar3 != 0) {
      FUN_00026218(iVar3,0x205,s__________main_c_000301d3 + 1);
    }
  }
  if ((*(byte *)((int)param_1 + 5) & 1) != 0) {
    FUN_00034324(s_Silent_000301e4);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1e) < 0) {
    FUN_00034324(s_Important_000301f0);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    FUN_00034324(s_Pre_existing_000301fc);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1c) < 0) {
    FUN_00034324(s_Positive_Action_0003020c);
  }
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1b) < 0) {
    FUN_00034324(s_Negative_Action_00030220);
    return;
  }
  return;
}


/* ---- FUN_00030234 @ 00030234 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00030234(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00034324(s_notify_event_to_app_00030280);
  iVar1 = _DAT_00030298;
  uVar2 = 0;
  if ((*(short *)(_DAT_00030298 + 0xaa) != -1) &&
     (uVar2 = FUN_0002a41a(_DAT_00030298,param_1), uVar2 == 0x3401)) {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xaa);
    software_interrupt(0xb1);
    if (uVar2 != 0) {
      FUN_00026218(uVar2,0x160,s__________app_misc_c_0003029b + 1,1);
    }
  }
  return uVar2;
}


/* ---- FUN_000302b0 @ 000302b0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000302b0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = _DAT_0003033c;
  iVar5 = 0;
  if (*(short *)(_DAT_0003033c + 0xaa) != -1) {
    bVar2 = param_1[2];
    bVar3 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_00034324(s__________________notify_sys_stat_0003033f + 1,*(undefined2 *)(iVar4 + 0xaa),
                 0xffff,*param_1);
    iVar4 = DAT_00030378;
    if (((*param_1 != *(byte *)(DAT_00030378 + 2)) || (param_1[4] != *(byte *)(DAT_00030378 + 3)))
       || (*param_1 < 0x85)) {
      bVar1 = param_1[1];
      param_1[1] = 0;
      iVar5 = FUN_0002a422(_DAT_0003033c,param_1);
      param_1[1] = bVar1 != 0;
    }
    *(byte *)(iVar4 + 3) = param_1[4];
    *(byte *)(iVar4 + 2) = *param_1;
    param_1[3] = bVar3;
    param_1[2] = bVar2;
    if (iVar5 != 0) {
      FUN_00034324(s_func___s__line__d_ERROR__code__0_00030380,DAT_0003037c,0x1d2,iVar5);
    }
  }
  return iVar5;
}


/* ---- FUN_000303a8 @ 000303a8 ---- */

undefined4 FUN_000303a8(void)

{
  int iVar1;
  
  iVar1 = FUN_000262ca();
  if (iVar1 != 0) {
    return 0;
  }
  return 0x11;
}


/* ---- FUN_000303b8 @ 000303b8 ---- */

undefined4 FUN_000303b8(int *param_1,int param_2,uint param_3,uint param_4)

{
  if (param_2 == 0) {
    return 0xe;
  }
  if (param_3 != param_4 * (param_3 / param_4)) {
    return 9;
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)param_3;
  *(short *)((int)param_1 + 0xe) = (short)param_4;
  return 0;
}


/* ---- FUN_000303de @ 000303de ---- */

int FUN_000303de(int *param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00026234();
  if (iVar1 != 0) {
    iVar1 = *param_1 + (uint)*param_2;
  }
  return iVar1;
}


/* ---- FUN_000303f4 @ 000303f4 ---- */

undefined4 FUN_000303f4(undefined4 param_1,short *param_2)

{
  if (*param_2 == param_2[1]) {
    FUN_000262b8();
    return 1;
  }
  return 0;
}


/* ---- FUN_0003040a @ 0003040a ---- */

int FUN_0003040a(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002627e();
  if (iVar1 != 0) {
    iVar1 = *param_1 + (uint)*(ushort *)(param_2 + 2);
  }
  return iVar1;
}


/* ---- FUN_00030420 @ 00030420 ---- */

undefined4 FUN_00030420(undefined4 param_1,short *param_2)

{
  if (*param_2 == param_2[1]) {
    FUN_0002626c();
    return 1;
  }
  return 0;
}


/* ---- FUN_0003044c @ 0003044c ---- */

uint FUN_0003044c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00030508(param_1 + (param_2 >> 5) * 4);
  uVar1 = uVar1 & 1 << (param_2 & 0x1f);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_0003046c @ 0003046c ---- */

uint FUN_0003046c(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    if ((param_2 - 1 >> 5) + 1 <= uVar7) {
      return param_2;
    }
    while( true ) {
      uVar5 = ~*(uint *)(param_1 + uVar7 * 4);
      bVar2 = (byte)uVar5;
      bVar3 = (byte)(uVar5 >> 8);
      bVar4 = (byte)(uVar5 >> 0x10);
      bVar1 = (byte)(uVar5 >> 0x18);
      uVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                    bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                      0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                      (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                       << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                    bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                       << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                    bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      if ((0x1f < uVar5) || (uVar5 = uVar5 + uVar7 * 0x20, param_2 <= uVar5)) break;
      iVar6 = FUN_0003044c(param_1,uVar5);
      if (iVar6 == 0) {
        return uVar5;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


/* ---- FUN_000304b6 @ 000304b6 ---- */

uint FUN_000304b6(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (param_2 >> 5) * 4) & 1 << (param_2 & 0x1f);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_000304e0 @ 000304e0 ---- */

void FUN_000304e0(undefined4 param_1)

{
  FUN_00030508(param_1,1);
  return;
}


/* ---- FUN_000304e6 @ 000304e6 ---- */

undefined4 FUN_000304e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_00026362(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_000304f2 @ 000304f2 ---- */

undefined4 FUN_000304f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_0002632e(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_000304fe @ 000304fe ---- */

void FUN_000304fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_00026362(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_00030508 @ 00030508 ---- */

void FUN_00030508(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_00026314(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_00030512 @ 00030512 ---- */

void FUN_00030512(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  FUN_000262fc(param_1,param_2,auStack_8);
  return;
}


/* ---- FUN_0003051c @ 0003051c ---- */

undefined4 FUN_0003051c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_00026314(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_00030528 @ 00030528 ---- */

undefined4 FUN_00030528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  FUN_0002637c(param_1,param_2,local_8);
  return local_8[0];
}


/* ---- FUN_00030534 @ 00030534 ---- */

uint FUN_00030534(uint param_1,int param_2)

{
  return 1 << (param_1 & 7) & (uint)*(byte *)(param_2 + (param_1 >> 3));
}


/* ---- FUN_00030544 @ 00030544 ---- */

void FUN_00030544(uint param_1,int param_2)

{
  *(byte *)(param_2 + (param_1 >> 3)) =
       *(byte *)(param_2 + (param_1 >> 3)) | (byte)(1 << (param_1 & 7));
  return;
}


/* ---- FUN_00030558 @ 00030558 ---- */

undefined4 FUN_00030558(int param_1,int param_2,int param_3,uint param_4)

{
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0xbc) = 1;
    *(short *)(param_1 + 0xc4) = (short)param_4;
    *(int *)(param_1 + 200) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_0003057e @ 0003057e ---- */

undefined4 FUN_0003057e(int param_1,int param_2,int param_3,uint param_4)

{
  if (param_3 == 0) {
    return 0xe;
  }
  if ((param_4 != 0) && (param_4 < 0x21)) {
    param_1 = param_1 + param_2 * 0x10;
    *(undefined *)(param_1 + 0x3c) = 1;
    *(short *)(param_1 + 0x44) = (short)param_4;
    *(int *)(param_1 + 0x48) = param_3;
    return 0;
  }
  return 9;
}


/* ---- FUN_000305a2 @ 000305a2 ---- */

undefined4 FUN_000305a2(int param_1,undefined2 param_2,int param_3)

{
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 8) = param_2;
    if (param_3 != 0) {
      *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 0x2c);
      *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_3 + 0x2a);
      *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_3 + 0x1c);
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_3 + 0x1a);
    }
    return 0;
  }
  return 0xe;
}


/* ---- FUN_000305c4 @ 000305c4 ---- */

void FUN_000305c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002a3fe(param_2);
  if (iVar1 == 0) {
    FUN_0002a35c(param_1,*param_2);
    *(undefined *)(param_1 + 0xdc) = 0;
  }
  return;
}


/* ---- FUN_000305e4 @ 000305e4 ---- */

undefined4 FUN_000305e4(undefined2 *param_1,int param_2)

{
  if (param_1 == (undefined2 *)0x0) {
    return 0xe;
  }
  if (0xe0 < param_2 - 0x17U) {
    return 7;
  }
  *param_1 = (short)param_2;
  return 0;
}


/* ---- FUN_000305fc @ 000305fc ---- */

undefined4 FUN_000305fc(undefined2 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined2 *)0x0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *param_1 = 0xf7;
    param_1[1] = 0xf7;
    *(undefined *)(param_1 + 2) = 0x1b;
    FUN_0002f790(param_1 + 3);
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00030620 @ 00030620 ---- */

/* WARNING: Removing unreachable block (ram,0x00030680) */
/* WARNING: Removing unreachable block (ram,0x00030684) */
/* WARNING: Removing unreachable block (ram,0x0003068a) */

void FUN_00030620(ushort *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  uint local_58;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar1 = DAT_00030790;
  puVar4 = &local_58;
  if (param_1[2] != 0) {
    return;
  }
  uVar2 = *param_1;
  if (uVar2 == 0x24) {
    FUN_00026484(&local_58,param_1 + 2,0x2c);
    *(char *)((int)param_2 + (local_58 & 0xffff) * 8 + 0xd) = (char)local_54;
    if (*(int *)(param_2 + 8) == 0) goto LAB_0003076c;
    local_2c = CONCAT22((undefined2)local_58,(short)puVar1[4]);
    local_28 = CONCAT31((int3)(puVar1[5] >> 8),
                        *(undefined *)((int)param_2 + (local_58 & 0xffff) * 8 + 0xd));
    pcVar5 = *(code **)(param_2 + 8);
    puVar4 = &local_2c;
  }
  else {
    if (uVar2 < 0x25) {
      if (uVar2 == 0x10) {
        *(undefined *)(param_2 + 6) = *(undefined *)(param_2 + 2);
        if (*(char *)((int)param_1 + 0xf) == '\x01') {
          uVar2 = *param_2;
LAB_00030670:
          param_2[3] = uVar2;
        }
        else if (*(char *)((int)param_1 + 0xf) == '\x02') {
          uVar2 = param_2[1];
          goto LAB_00030670;
        }
        if (param_2[4] < param_2[3]) {
          software_interrupt(0xa5);
          *(undefined *)((int)param_2 + 0xb) = 1;
        }
        bVar3 = *(byte *)(param_2 + 6);
        if (bVar3 <= *(byte *)((int)param_2 + 0xd)) goto LAB_0003076c;
      }
      else {
        if (uVar2 == 0x11) {
          FUN_0002f790(param_2 + 3);
          goto LAB_0003076c;
        }
        if (uVar2 != 0x23) goto LAB_0003076c;
        bVar3 = *(byte *)(param_1 + 4);
        if (*(byte *)(param_2 + 6) < *(byte *)(param_1 + 4)) {
          bVar3 = *(byte *)(param_2 + 6);
        }
      }
      FUN_0002c52e(0,bVar3);
      goto LAB_0003076c;
    }
    if (uVar2 == 0x3a) {
      uVar2 = param_1[5];
      if (param_2[3] <= param_1[5]) {
        uVar2 = param_2[3];
      }
      param_2[4] = uVar2;
      if (uVar2 < 0x17) {
        uVar2 = 0x17;
      }
      param_2[4] = uVar2;
      if ((*(int *)(param_2 + 8) != 0) && (*(char *)((int)param_2 + 0xb) != '\0')) {
        local_58 = *puVar1 & 0xffff;
        local_54._2_2_ = (undefined2)(puVar1[1] >> 0x10);
        local_54 = CONCAT22(local_54._2_2_,param_2[4]);
        (**(code **)(param_2 + 8))(param_2,&local_58);
      }
      *(undefined *)((int)param_2 + 0xb) = 0;
      *(undefined *)(param_2 + 5) = 0;
      return;
    }
    if (uVar2 != 0x55) goto LAB_0003076c;
    uVar2 = param_1[3];
    if (uVar2 < 0x17) {
      uVar2 = 0x17;
    }
    if (param_2[3] <= uVar2) {
      uVar2 = param_2[3];
    }
    param_2[4] = uVar2;
    *(undefined *)(param_2 + 5) = 0;
    software_interrupt(0xb5);
    if ((*(char *)((int)param_2 + 0xb) != '\0') || (*(int *)(param_2 + 8) == 0)) goto LAB_0003076c;
    local_58 = puVar1[2] & 0xffff;
    local_54._2_2_ = (undefined2)(puVar1[3] >> 0x10);
    local_54 = CONCAT22(local_54._2_2_,param_2[4]);
    pcVar5 = *(code **)(param_2 + 8);
  }
  (*pcVar5)(param_2,puVar4);
LAB_0003076c:
  if (*(char *)(param_2 + 5) != '\0') {
    software_interrupt(0xa5);
    *(undefined *)(param_2 + 5) = 0;
    *(undefined *)((int)param_2 + 0xb) = 1;
  }
  return;
}


/* ---- FUN_00030794 @ 00030794 ---- */

undefined2 FUN_00030794(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (((*param_1 == '\0') || (*(short *)(param_1 + 0x14) == -1)) ||
     (iVar2 = FUN_0002dc34(param_1), iVar2 == 0)) {
    uVar1 = 8;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x14);
    software_interrupt(0xa3);
  }
  return uVar1;
}


/* ---- FUN_000307e0 @ 000307e0 ---- */

undefined4 FUN_000307e0(char *param_1,undefined2 param_2,int param_3)

{
  if (param_1 == (char *)0x0) {
    return 0xe;
  }
  if (*param_1 != '\0') {
    *(undefined2 *)(param_1 + 0x14) = param_2;
    if (param_3 != 0) {
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_3 + 10);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_3 + 0xc);
      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_3 + 0x10);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_3 + 0xe);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_3 + 8);
    }
    return 0;
  }
  return 8;
}


/* ---- FUN_0003080c @ 0003080c ---- */

int FUN_0003080c(undefined *param_1,int *param_2)

{
  int iVar1;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) {
    FUN_000264b6(param_1,0x20);
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
    *(int *)(param_1 + 0x18) = *param_2;
    iVar1 = FUN_0002a630(DAT_00030840);
    if (iVar1 == 0) {
      *param_1 = 1;
    }
    return iVar1;
  }
  return 0xe;
}


/* ---- FUN_00030844 @ 00030844 ---- */

void FUN_00030844(short *param_1,char *param_2)

{
  int iVar1;
  undefined local_28 [2];
  short local_26;
  short local_24;
  short local_22;
  
  if (((*param_2 != '\0') && (param_2 != (char *)0x0)) && (param_1 != (short *)0x0)) {
    if (*param_1 == 0x11) {
      if (*(short *)(param_2 + 0x14) == param_1[2]) {
        *(undefined2 *)(param_2 + 0x14) = 0xffff;
        iVar1 = FUN_0002dc34(param_2);
        if (iVar1 != 0) {
          local_28[0] = 2;
          (**(code **)(param_2 + 0x18))(local_28);
          *(undefined2 *)(param_2 + 10) = 0;
          *(undefined2 *)(param_2 + 0xc) = 0;
          *(undefined2 *)(param_2 + 0xe) = 0;
          *(undefined2 *)(param_2 + 0x12) = 0;
          *(undefined2 *)(param_2 + 0x10) = 0;
        }
      }
    }
    else if (((*param_1 == 0x39) && (param_1[5] == *(short *)(param_2 + 10))) &&
            (*(int *)(param_2 + 0x18) != 0)) {
      software_interrupt(0xa4);
      if ((param_1[2] != 0) && (*(code **)(param_2 + 0x1c) != (code *)0x0)) {
        (**(code **)(param_2 + 0x1c))();
      }
      local_24 = param_1[8];
      local_22 = param_1[9];
      local_28[0] = 3;
      local_26 = param_1[2];
      (**(code **)(param_2 + 0x18))(local_28);
    }
  }
  return;
}


/* ---- FUN_000308d4 @ 000308d4 ---- */

void FUN_000308d4(char *param_1,char *param_2)

{
  uint uVar1;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined auStack_2c [24];
  
  if (*param_1 != '\0') {
    local_30[0] = 1;
    if (((*param_2 == '\0') && (*(short *)(param_2 + 4) == 0x1801)) && (param_2[6] == '\x01')) {
      for (uVar1 = 0; uVar1 < (byte)param_2[8]; uVar1 = uVar1 + 1) {
        if ((*(short *)(param_2 + uVar1 * 0x12 + 0xe) == 0x2a05) &&
           ((int)((uint)(byte)param_2[uVar1 * 0x12 + 0x12] << 0x1a) < 0)) {
          FUN_00026484(auStack_2c,param_2 + uVar1 * 0x12 + 0xe,0x12);
          local_30[0] = 0;
          break;
        }
      }
    }
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      local_2e = *(undefined2 *)(param_2 + 2);
      (**(code **)(param_1 + 0x18))(local_30);
    }
  }
  return;
}


/* ---- FUN_0003096a @ 0003096a ---- */

undefined4 FUN_0003096a(char *param_1,undefined4 *param_2)

{
  if ((param_1 != (char *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (*param_1 != -0x22) {
      *(undefined4 *)(param_1 + 4) = *param_2;
      *param_1 = -0x22;
      *(undefined2 *)(param_1 + 2) = 0xffff;
      return 0;
    }
    return 8;
  }
  return 0xe;
}


/* ---- FUN_0003098e @ 0003098e ---- */

ulonglong FUN_0003098e(short *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  short *local_20;
  undefined2 local_1c;
  
  local_1c = SUB42(param_2,0);
  local_20 = param_1;
  if (((param_2 != (char *)0x0) && (param_1 != (short *)0x0)) && (*param_2 == -0x22)) {
    if (param_1[2] == *(short *)(param_2 + 2)) {
      FUN_00038658(param_2);
    }
    sVar2 = *param_1;
    if (sVar2 == 1) {
      if ((*(char *)(param_1 + 4) == '\x01') && (param_1[2] == *(short *)(param_2 + 2))) {
        param_2[8] = '\x01';
        uVar3 = FUN_00038658();
        return uVar3;
      }
    }
    else if (sVar2 != 2) {
      if (sVar2 == 0x11) {
        if (param_1[2] == *(short *)(param_2 + 2)) {
          *(undefined2 *)(param_2 + 2) = 0xffff;
          return (ulonglong)CONCAT24(local_1c,param_1);
        }
      }
      else if (((sVar2 == 0x51) && (param_1[2] == *(short *)(param_2 + 2))) &&
              ((*(char *)(param_1 + 3) == '\x02' &&
               (((cVar1 = *(char *)(param_1 + 7), cVar1 == '\x04' || (cVar1 == '\x06')) ||
                (cVar1 == '\x05')))))) {
        local_20 = (short *)0x2;
        local_1c = 0x180;
        if (*(char *)(param_1 + 7) == '\x05') {
          local_1c = 0;
        }
        software_interrupt(0xb0);
        if (param_1[2] != 0) {
          (**(code **)(param_2 + 4))();
        }
      }
    }
  }
  return (ulonglong)CONCAT24(local_1c,local_20);
}


/* ---- FUN_00030a44 @ 00030a44 ---- */

int FUN_00030a44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40000000);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00030a52 @ 00030a52 ---- */

void FUN_00030a52(int param_1)

{
  *(undefined4 *)(param_1 + 0x40000000) = 0;
  return;
}


/* ---- FUN_00030a64 @ 00030a64 ---- */

void FUN_00030a64(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030a80;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00030a84 @ 00030a84 ---- */

void FUN_00030a84(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030aa0;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00030aa4 @ 00030aa4 ---- */

void FUN_00030aa4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030ac0;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00030ac4 @ 00030ac4 ---- */

void FUN_00030ac4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00030ae0;
  if (param_1 != 0) {
    do {
      (*(code *)(iVar1 + 1))(64000);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* ---- FUN_00030ae4 @ 00030ae4 ---- */

undefined4 FUN_00030ae4(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00030b14;
  if (*DAT_00030b14 == '\0') {
    *(undefined4 *)(DAT_00030b14 + 8) = 0;
    *(undefined4 *)(pcVar1 + 4) = 0;
    *(undefined4 *)(pcVar1 + 0x10) = 0;
    *(undefined4 *)(pcVar1 + 0xc) = 0;
    uVar3 = FUN_00031598(DAT_00030b18);
    iVar2 = FUN_00031400();
    if (iVar2 == 0) {
      FUN_00031568();
    }
    *pcVar1 = '\x01';
  }
  else {
    uVar3 = 0x85;
  }
  return uVar3;
}


/* ---- FUN_00030b1c @ 00030b1c ---- */

void FUN_00030b1c(void)

{
  int iVar1;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3 & 0xffffff00;
  FUN_00028d4c(&local_10);
  iVar1 = DAT_00030b48;
  *(int *)(DAT_00030b48 + 0xc) = *(int *)(DAT_00030b48 + 0xc) + -1;
  if (*(int *)(iVar1 + 0xc) == 0) {
    FUN_000315b8();
    *(undefined *)(iVar1 + 2) = 0;
  }
  FUN_00028d94(local_10 & 0xff);
  return;
}


/* ---- FUN_00030b4c @ 00030b4c ---- */

undefined4 FUN_00030b4c(void)

{
  if (*DAT_00030b60 != '\0') {
    return 0x85;
  }
  *DAT_00030b60 = '\x01';
  return 0;
}


/* ---- FUN_00030b64 @ 00030b64 ---- */

void FUN_00030b64(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00030b9c;
  uVar3 = (uint)*param_1;
  *(int *)(DAT_00030b9c + uVar3 * 4) = param_3;
  *(undefined4 *)(iVar1 + 8 + uVar3 * 4) = param_4;
  if (*(char *)(param_2 + 0xd) != '\0') {
    FUN_00037204(param_2);
  }
  uVar2 = DAT_00030ba0;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  FUN_000320f8(param_1 + 4,param_2,uVar2,uVar3);
  return;
}


/* ---- FUN_00030ba4 @ 00030ba4 ---- */

void FUN_00030ba4(int param_1)

{
  FUN_00032208(param_1 + 4);
  return;
}


/* ---- FUN_00030bb2 @ 00030bb2 ---- */

undefined4 FUN_00030bb2(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xe;
  }
  else if (*param_1 == 0) {
    uVar2 = 8;
  }
  else if (param_3 == 0) {
    uVar2 = 9;
  }
  else {
    if (((*(int *)param_1[1] - 1U & param_2) == 0) &&
       (iVar1 = FUN_00027ad4(param_1,param_2,param_3 * *(int *)param_1[1]), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00030bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0x10;
  }
  return uVar2;
}


/* ---- FUN_00030c00 @ 00030c00 ---- */

undefined4 FUN_00030c00(int *param_1,code **param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != (code **)0x0)) {
    *param_1 = (int)param_2;
                    /* WARNING: Could not recover jumptable at 0x00030c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**param_2)(param_1,param_3);
    return uVar1;
  }
  return 0xe;
}


/* ---- FUN_00030c48 @ 00030c48 ---- */

uint FUN_00030c48(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_00030ce4;
  if (((param_1 != 2) && (uVar2 = param_1, param_1 != 3)) ||
     (uVar2 = (uint)*(byte *)(DAT_00030ce4 + 8), uVar2 == 0)) {
    return uVar2;
  }
  if ((uVar2 == 1) || (uVar2 != 2)) goto LAB_00030cc8;
  iVar3 = *DAT_00030ce8;
  if (param_1 == 2) {
    *(undefined4 *)(DAT_00030ce4 + 0xc) = 0;
    if (*(char *)(iVar3 + 4) == '\0') {
      uVar2 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x18);
      if (0xfff < uVar2) {
        uVar2 = 0x1000;
      }
      iVar4 = uVar2 + *(int *)(iVar3 + 0x18);
      *(int *)(iVar3 + 0x18) = iVar4;
      if (iVar4 != *(int *)(iVar3 + 0x14)) goto LAB_00030cc8;
      goto LAB_00030cb8;
    }
    if ((*(char *)(iVar3 + 4) != '\x01') ||
       (iVar4 = *(int *)(iVar3 + 0x10) + 1, *(int *)(iVar3 + 0x10) = iVar4,
       iVar4 != *(int *)(iVar3 + 0x14))) goto LAB_00030cc8;
    *(undefined *)(iVar1 + 8) = 0;
LAB_00030cd4:
    uVar5 = 0;
  }
  else {
    if ((param_1 != 3) ||
       (uVar2 = *(int *)(DAT_00030ce4 + 0xc) + 1, *(uint *)(DAT_00030ce4 + 0xc) = uVar2, uVar2 < 9))
    goto LAB_00030cc8;
    *(undefined4 *)(iVar1 + 0xc) = 0;
LAB_00030cb8:
    *(undefined *)(iVar1 + 8) = 0;
    if (param_1 == 2) goto LAB_00030cd4;
    uVar5 = 0xd;
  }
  FUN_0002c9f0(iVar3,uVar5);
  FUN_00034f98();
LAB_00030cc8:
  if (*(char *)(iVar1 + 0x11) == '\0') {
    uVar2 = FUN_0003504c();
    return uVar2;
  }
  if (DAT_00031424[2] == '\0') {
    return 8;
  }
  if (*DAT_00031424 == '\0') {
    uVar2 = FUN_00031368();
    return uVar2;
  }
  uVar2 = FUN_00031314();
  return uVar2;
}


/* ---- FUN_00030cec @ 00030cec ---- */

undefined4 FUN_00030cec(int *param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (param_3 == 0)) {
    uVar1 = 0xe;
  }
  else if (*param_1 == 0) {
    uVar1 = 8;
  }
  else if ((param_4 == 0) ||
          (param_4 != *(uint *)(param_1[1] + 4) * (param_4 / *(uint *)(param_1[1] + 4)))) {
    uVar1 = 9;
  }
  else {
    iVar2 = FUN_00027ac8(param_2);
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_00027ac8(param_3), iVar2 == 0 ||
        (iVar2 = FUN_00027ad4(param_1,param_2,param_4), iVar2 == 0)))) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar1;
}


/* ---- FUN_00030d52 @ 00030d52 ---- */

void FUN_00030d52(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00030d76 @ 00030d76 ---- */

void FUN_00030d76(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00030d9a @ 00030d9a ---- */

void FUN_00030d9a(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00030dbe @ 00030dbe ---- */

void FUN_00030dbe(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  *(uint *)(param_1 * 4 + 0x50000700) =
       param_2 | param_3 << 1 | param_4 << 2 | param_5 << 8 | param_6 << 0x10;
  return;
}


/* ---- FUN_00030de2 @ 00030de2 ---- */

void FUN_00030de2(undefined4 param_1)

{
  FUN_00030d9a(param_1,0,1,0,0,0);
  return;
}


/* ---- FUN_00030df4 @ 00030df4 ---- */

void FUN_00030df4(undefined4 param_1)

{
  FUN_00030dbe(param_1,0,1,0,0,0);
  return;
}


/* ---- FUN_00030e06 @ 00030e06 ---- */

void FUN_00030e06(undefined4 param_1)

{
  FUN_00030d52(param_1,1,1,0,0,0);
  return;
}


/* ---- FUN_00030e1a @ 00030e1a ---- */

void FUN_00030e1a(int param_1)

{
  *(undefined4 *)(param_1 * 4 + 0x50000700) = 3;
  return;
}


/* ---- FUN_00030e2a @ 00030e2a ---- */

void FUN_00030e2a(undefined4 param_1)

{
  FUN_00030d76(param_1,1,1,0,0,0);
  return;
}


/* ---- FUN_00030e3e @ 00030e3e ---- */

void FUN_00030e3e(int param_1,int param_2)

{
  param_1 = param_1 * 4;
  *(uint *)(param_1 + 0x50000700) = *(uint *)(param_1 + 0x50000700) & 0xfffcffff;
  *(uint *)(param_1 + 0x50000700) = *(uint *)(param_1 + 0x50000700) | param_2 << 0x10;
  return;
}


/* ---- FUN_00030e60 @ 00030e60 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00030e60(uint param_1)

{
  return _DAT_50000510 >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00030e70 @ 00030e70 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00030e70(uint param_1)

{
  return _DAT_50000510 >> (param_1 & 0xff) & 1;
}


/* ---- FUN_00030e90 @ 00030e90 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030e90(uint param_1)

{
  _DAT_50000508 = 1 << (param_1 & 0xff);
  return;
}


/* ---- FUN_00030ea0 @ 00030ea0 ---- */

void FUN_00030ea0(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int local_c;
  
  uVar1 = param_2 + param_1;
  local_c = *DAT_00030ec4;
  for (; param_1 < uVar1; param_1 = param_1 + 1) {
    *param_3 = *(undefined4 *)((&local_c)[param_1] + 0x510);
    param_3 = param_3 + 1;
  }
  return;
}


/* ---- FUN_00030ec8 @ 00030ec8 ---- */

void FUN_00030ec8(int param_1)

{
  *(undefined4 *)(param_1 + DAT_00030ed8) = 0;
  return;
}


/* ---- FUN_00030edc @ 00030edc ---- */

int FUN_00030edc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_00030ee8);
  if (iVar1 != 1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* ---- FUN_00030eec @ 00030eec ---- */

undefined4 FUN_00030eec(void)

{
  int iVar1;
  
  iVar1 = DAT_00030f08;
  *(undefined *)(DAT_00030f08 + 1) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  DataMemoryBarrier(0x1f);
  FUN_000314a8(DAT_00030f10,DAT_00030f0c);
  return 0;
}


/* ---- FUN_00030f14 @ 00030f14 ---- */

void FUN_00030f14(void)

{
  int iVar1;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3 & 0xffffff00;
  FUN_00028d4c(local_8);
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(DAT_00030f54 + 0x280) = 0x40;
  FUN_00028d94(local_8[0] & 0xff);
  iVar1 = FUN_00031400();
  if (iVar1 != 0) {
    software_interrupt(0x41);
    return;
  }
  WaitForEvent();
  WaitForEvent();
  return;
}


/* ---- FUN_00030f58 @ 00030f58 ---- */

void FUN_00030f58(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_00030512(DAT_00030f90,1);
  puVar1 = DAT_00030f90;
  DataMemoryBarrier(0x1f);
  if (iVar2 != 0) {
    return;
  }
  if (param_1 != 4) {
    if (*(char *)((int)DAT_00030f90 + -3) != '\0') goto LAB_00030f7c;
    *(char *)(DAT_00030f90 + -1) = (char)param_1;
    *(undefined *)((int)puVar1 + -3) = 1;
  }
  FUN_000360f4();
LAB_00030f7c:
  DataMemoryBarrier(0x1f);
  *puVar1 = 0;
  return;
}


/* ---- FUN_00030f94 @ 00030f94 ---- */

undefined4 FUN_00030f94(int **param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint local_20;
  
  uVar4 = 0;
  local_20 = param_4 & 0xffffff00;
  FUN_00028d4c(&local_20);
  iVar1 = FUN_00031022(param_1);
  if (iVar1 == 0) {
    iVar1 = **param_1;
    if (param_3 == 0) {
      iVar2 = FUN_00031052(param_1,**param_1);
      **param_1 = iVar2;
    }
    piVar3 = param_1[3];
    if (piVar3 == (int *)0x1) {
      *(undefined *)param_2 = *(undefined *)((int)param_1[1] + iVar1);
    }
    else if (piVar3 == (int *)0x2) {
      *(undefined2 *)param_2 = *(undefined2 *)((int)param_1[1] + iVar1 * 2);
    }
    else if (piVar3 == (int *)&Reset) {
      *param_2 = param_1[1][iVar1];
    }
    else if (piVar3 == (int *)&NMI) {
      piVar3 = param_1[1] + iVar1 * 2;
      iVar1 = piVar3[1];
      *param_2 = *piVar3;
      param_2[1] = iVar1;
    }
    else {
      FUN_00026484(param_2,(int *)(iVar1 * (int)piVar3 + (int)param_1[1]));
    }
  }
  else {
    uVar4 = 5;
  }
  FUN_00028d94(local_20 & 0xff);
  return uVar4;
}


/* ---- FUN_00031022 @ 00031022 ---- */

undefined4 FUN_00031022(int **param_1)

{
  if (**param_1 == (*param_1)[1]) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00031034 @ 00031034 ---- */

undefined4 FUN_00031034(int **param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*param_1)[1];
  if (piVar1 < param_1[2]) {
    iVar2 = (int)piVar1 + 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == **param_1) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00031052 @ 00031052 ---- */

int FUN_00031052(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    return param_2 + 1;
  }
  return 0;
}


/* ---- FUN_00031060 @ 00031060 ---- */

undefined4 FUN_00031060(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_20;
  
  uVar6 = 0;
  local_20 = param_4 & 0xffffff00;
  FUN_00028d4c(&local_20);
  iVar1 = FUN_00031034(param_1);
  if ((iVar1 == 0) || (*(char *)(param_1 + 4) == '\0')) {
    iVar5 = *(int *)(*param_1 + 4);
    uVar2 = FUN_00031052(param_1,*(undefined4 *)(*param_1 + 4));
    *(undefined4 *)(*param_1 + 4) = uVar2;
    if (iVar1 != 0) {
      uVar2 = FUN_00031052(param_1,*(undefined4 *)*param_1);
      *(undefined4 *)*param_1 = uVar2;
    }
    iVar1 = param_1[3];
    if (iVar1 == 1) {
      *(undefined *)(param_1[1] + iVar5) = *(undefined *)param_2;
    }
    else if (iVar1 == 2) {
      *(undefined2 *)(param_1[1] + iVar5 * 2) = *(undefined2 *)param_2;
    }
    else if (iVar1 == 4) {
      *(undefined4 *)(param_1[1] + iVar5 * 4) = *param_2;
    }
    else if (iVar1 == 8) {
      uVar2 = param_2[1];
      puVar4 = (undefined4 *)(param_1[1] + iVar5 * 8);
      *puVar4 = *param_2;
      puVar4[1] = uVar2;
    }
    else {
      FUN_00026484(iVar5 * iVar1 + param_1[1],param_2);
    }
    uVar3 = FUN_0003512c(param_1);
    if (*(uint *)(*param_1 + 8) < uVar3) {
      *(uint *)(*param_1 + 8) = uVar3;
    }
  }
  else {
    uVar6 = 4;
  }
  FUN_00028d94(local_20 & 0xff);
  return uVar6;
}


/* ---- FUN_00031112 @ 00031112 ---- */

void FUN_00031112(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4 & 0xffffff00;
  FUN_00028d4c(&local_10);
  param_1 = (undefined4 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00028d94(local_10 & 0xff);
  return;
}


/* ---- FUN_00031150 @ 00031150 ---- */

void FUN_00031150(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0003115c;
  *DAT_0003115c = param_1;
  puVar1[1] = param_2;
  return;
}


/* ---- FUN_00031160 @ 00031160 ---- */

void FUN_00031160(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_00031170 + param_1 * 0x10;
  *(undefined4 *)(iVar1 + 0x514) = param_3;
  *(undefined4 *)(iVar1 + 0x510) = param_2;
  return;
}


/* ---- FUN_00031174 @ 00031174 ---- */

int FUN_00031174(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + DAT_00031180);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_00031184 @ 00031184 ---- */

void FUN_00031184(int param_1)

{
  *(undefined4 *)(param_1 + DAT_00031194) = 0;
  return;
}


/* ---- FUN_00031198 @ 00031198 ---- */

int FUN_00031198(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x80;
  }
  else {
    iVar1 = 0x40;
  }
  return iVar1 << ((param_1 & 0x7f) << 1);
}


/* ---- FUN_000311a8 @ 000311a8 ---- */

undefined4 FUN_000311a8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *DAT_000311b8;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_000311bc @ 000311bc ---- */

undefined8 FUN_000311bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  
  iVar1 = FUN_000311a8(param_2);
  local_20 = param_2;
  if (iVar1 == 0) {
    software_interrupt(0x69);
    software_interrupt(0x69);
    software_interrupt(0x69);
    software_interrupt(0x69);
    software_interrupt(0x69);
    local_20 = 0;
    software_interrupt(0x69);
    iVar1 = 0;
  }
  return CONCAT44(local_20,iVar1);
}


/* ---- FUN_00031258 @ 00031258 ---- */

void FUN_00031258(int param_1)

{
  software_interrupt(0x60);
  if (param_1 == 0) {
    *DAT_00031268 = 1;
  }
  return;
}


/* ---- FUN_0003126c @ 0003126c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003126c(void)

{
  undefined auStack_210 [508];
  code **local_14;
  undefined2 local_10;
  
  if (*_DAT_000312cc != '\0') {
    while( true ) {
      local_10 = 500;
      software_interrupt(0x61);
      if (&stack0x00000000 != (undefined *)0x210) break;
      FUN_000314a8(500,DAT_00031310);
      while (local_14 != (code **)0x0) {
        (**local_14)(0,local_14[1]);
        FUN_000314d6(500);
      }
    }
    if (&stack0x00000000 != (undefined *)0x215) {
      FUN_00026218(auStack_210,0x139,s___________________components_sof_000312cf + 1);
      return;
    }
  }
  return;
}


/* ---- FUN_00031314 @ 00031314 ---- */

int FUN_00031314(void)

{
  char *pcVar1;
  int iVar2;
  uint in_r3;
  uint local_18;
  
  pcVar1 = DAT_00031364;
  if (*DAT_00031364 == '\0') {
    return 8;
  }
  DAT_00031364[2] = '\x01';
  local_18 = in_r3;
  iVar2 = FUN_00035a50();
  if (iVar2 != 0x11) {
    FUN_00035a80(2);
    local_18 = local_18 & 0xffffff00;
    iVar2 = FUN_00028d4c(&local_18);
    software_interrupt(0x11);
    *pcVar1 = '\0';
    FUN_00028d94(local_18 & 0xff);
    if (iVar2 != 0) {
      return iVar2;
    }
    pcVar1[2] = '\0';
    FUN_00036694();
    FUN_00035a80(3);
  }
  return 0;
}


/* ---- FUN_00031368 @ 00031368 ---- */

undefined4 * FUN_00031368(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18;
  undefined4 local_14;
  
  pcVar1 = DAT_000313d0;
  if (*DAT_000313d0 != '\0') {
    return (undefined4 *)&NMI;
  }
  DAT_000313d0[2] = '\x01';
  local_18 = param_3;
  local_14 = param_4;
  iVar3 = FUN_00035a50(0);
  if (iVar3 != 0x11) {
    FUN_00035a80(0);
    local_14 = *DAT_000313d4;
    local_18 = local_18 & 0xffffff00;
    FUN_00028d4c(&local_18);
    uVar2 = DAT_000313d8;
    software_interrupt(0x10);
    *pcVar1 = &local_14 == (undefined4 *)0x0;
    FUN_00028d94(local_18 & 0xff,uVar2);
    if (&local_14 != (undefined4 *)0x0) {
      return &local_14;
    }
    pcVar1[2] = '\0';
    pcVar1[1] = '\0';
    FUN_0003670c();
    FUN_00035a80(1);
  }
  return (undefined4 *)0x0;
}


/* ---- FUN_000313dc @ 000313dc ---- */

void FUN_000313dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  code **local_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  local_8 = param_4;
  FUN_000314a8(&uStack_10,DAT_000313fc);
  while (local_8 != (code **)0x0) {
    (**local_8)(local_8[1]);
    FUN_000314d6(&uStack_10);
  }
  return;
}


/* ---- FUN_00031400 @ 00031400 ---- */

undefined FUN_00031400(void)

{
  return *DAT_00031408;
}


/* ---- FUN_000314a8 @ 000314a8 ---- */

void FUN_000314a8(int **param_1,int *param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  *param_1 = param_2;
  param_1[1] = (int *)*param_2;
  ppiVar1 = (int **)param_1[1];
  while (ppiVar1 != *(int ***)((int)*param_1 + 4)) {
    piVar2 = *ppiVar1;
    if (piVar2 != ppiVar1[1]) goto LAB_000314cc;
    ppiVar1 = ppiVar1 + 2;
    param_1[1] = (int *)ppiVar1;
  }
  piVar2 = (int *)0x0;
LAB_000314cc:
  param_1[2] = piVar2;
  return;
}


/* ---- FUN_000314b2 @ 000314b2 ---- */

void FUN_000314b2(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  while (piVar1 != *(int **)(*param_1 + 4)) {
    iVar2 = *piVar1;
    if (iVar2 != piVar1[1]) goto LAB_000314cc;
    piVar1 = piVar1 + 2;
    param_1[1] = (int)piVar1;
  }
  iVar2 = 0;
LAB_000314cc:
  param_1[2] = iVar2;
  return;
}


/* ---- FUN_000314d6 @ 000314d6 ---- */

void FUN_000314d6(int *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    iVar1 = *(int *)(*param_1 + 8) + param_1[2];
    param_1[2] = iVar1;
    if (iVar1 == *(int *)(param_1[1] + 4)) {
      param_1[1] = param_1[1] + 8;
      FUN_000314b2();
      return;
    }
  }
  return;
}


/* ---- FUN_000314f8 @ 000314f8 ---- */

uint FUN_000314f8(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = DAT_0003152c;
  puVar1 = DAT_0003152c + 0x4a;
  while( true ) {
    do {
      puVar3 = puVar1;
      if (puVar3 <= puVar2) {
        return 0;
      }
      puVar1 = puVar2 + (((int)puVar3 - (int)puVar2 >> 3) - ((int)puVar3 - (int)puVar2 >> 0x1f) >> 1
                        ) * 2;
    } while (param_1 < *puVar1);
    if (param_1 <= *puVar1) break;
    puVar2 = puVar1 + 2;
    puVar1 = puVar3;
  }
  return puVar1[1];
}


/* ---- FUN_00031530 @ 00031530 ---- */

int FUN_00031530(void)

{
  int iVar1;
  
  iVar1 = FUN_000314f8();
  if (iVar1 == 0) {
    iVar1 = DAT_00031540;
  }
  return iVar1;
}


/* ---- FUN_00031544 @ 00031544 ---- */

void FUN_00031544(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2) = 0;
  return;
}


/* ---- FUN_00031550 @ 00031550 ---- */

int FUN_00031550(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_0003155a @ 0003155a ---- */

void FUN_0003155a(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + param_2) = 0;
  return;
}


/* ---- FUN_00031568 @ 00031568 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031568(void)

{
  if ((*DAT_00031590 & 1) == 0) {
    DAT_e000e400 = 0xc0;
    _DAT_e000e280 = 1;
    _DAT_e000e100 = 1;
  }
  *DAT_00031594 = 1;
  return;
}


/* ---- FUN_00031598 @ 00031598 ---- */

undefined4 FUN_00031598(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_000315b4;
  if (*(char *)(DAT_000315b4 + 1) != '\0') {
    return 0x85;
  }
  *DAT_000315b4 = param_1;
  *(undefined *)(puVar1 + 1) = 1;
  *(undefined *)((int)puVar1 + 5) = 0;
  return 0;
}


/* ---- FUN_000315b8 @ 000315b8 ---- */

void FUN_000315b8(void)

{
  *DAT_000315cc = 1;
  do {
  } while (*DAT_000315d0 << 0xf < 0);
  return;
}


/* ---- FUN_000315d4 @ 000315d4 ---- */

void FUN_000315d4(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000315dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_000315e0)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_000315e4 @ 000315e4 ---- */

void FUN_000315e4(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000315ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_000315f0)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_000315f4 @ 000315f4 ---- */

void FUN_000315f4(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000315fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00031600)(param_1 << 6);
    return;
  }
  return;
}


/* ---- FUN_00031604 @ 00031604 ---- */

int FUN_00031604(void)

{
  int iVar1;
  
  iVar1 = FUN_0002b84c();
  return (iVar1 * 4 + 0x60U & 0xff) + DAT_00031618;
}


/* ---- FUN_0003161c @ 0003161c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003161c(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00033700();
  iVar2 = DAT_000316b8;
  if (iVar3 == 0) {
    iVar3 = FUN_00033718(param_1);
    if (iVar3 != 0) {
      uVar4 = FUN_0002b84c(param_1);
      iVar3 = DAT_000316bc;
      iVar5 = DAT_000316bc + uVar4 * 4;
      *(uint *)(iVar5 + 0x510) = *(uint *)(iVar5 + 0x510) | 1;
      FUN_00030ec8(uVar4 * 4 + 0x100 & 0xffff);
      if ((param_2 != 0) && (iVar5 = FUN_0002b84c(param_1), *(int *)(iVar2 + iVar5 * 4) != 0)) {
        *(int *)(iVar3 + 0x304) = 1 << (uVar4 & 0xff);
      }
    }
    return;
  }
  iVar3 = FUN_0002b84c();
  bVar1 = *(byte *)(iVar3 + iVar2 + 0x48) >> 6;
  if (bVar1 == 3) {
    if ((_DAT_50000510 >> (param_1 & 0xff) & 1) == 0) goto LAB_00031662;
  }
  else if (bVar1 == 1) {
LAB_00031662:
    uVar6 = 2;
    goto LAB_00031658;
  }
  uVar6 = 3;
LAB_00031658:
  FUN_00030e3e(param_1,uVar6);
  return;
}


/* ---- FUN_000316c0 @ 000316c0 ---- */

undefined4 FUN_000316c0(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_00031784;
  uVar5 = 0;
  if (*(char *)(DAT_00031784 + param_1 + 0x30) < '\0') {
    iVar3 = FUN_0002b804(param_1,param_3,((uint)param_2[2] << 0x1e) >> 0x1f,param_3,param_3,param_4)
    ;
    if (iVar3 == -1) {
      uVar5 = 4;
    }
    else {
      if (-1 < (int)((uint)param_2[2] << 0x1d)) {
        if ((param_2[2] & 1) == 0) {
          FUN_00030dbe(param_1,0,0,param_2[1],0,0);
        }
        else {
          *(uint *)(param_1 * 4 + 0x50000700) = *(uint *)(param_1 * 4 + 0x50000700) & 0xfffffffd;
        }
        FUN_00030544(param_1,DAT_00031784 + 0x54);
      }
      if ((int)((uint)param_2[2] << 0x1e) < 0) {
        bVar2 = *param_2;
        iVar4 = DAT_00031788 + iVar3 * 4;
        *(uint *)(iVar4 + 0x510) = *(uint *)(iVar4 + 0x510) & DAT_0003178c;
        *(uint *)(iVar4 + 0x510) =
             (param_1 & 0x1f) << 8 | (bVar2 & 3) << 0x10 | *(uint *)(iVar4 + 0x510);
      }
      else {
        pbVar1 = (byte *)(iVar4 + iVar3 + 0x48);
        *pbVar1 = *pbVar1 | *param_2 << 6;
      }
    }
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_00031790 @ 00031790 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00031790(uint param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_50000510 >> (param_1 & 0xff) & 1;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ---- FUN_000317a4 @ 000317a4 ---- */

undefined4 FUN_000317a4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = DAT_00031808;
  if (*(char *)(DAT_00031808 + 0x58) != '\0') {
    return 8;
  }
  uVar2 = 0;
  do {
    iVar3 = iVar1 + uVar2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined *)(iVar3 + 0x30) = 0xff;
  } while (uVar2 < 0x20);
  bVar4 = 0;
  do {
    FUN_0002b7e8(bVar4);
    iVar3 = DAT_0003180c;
    bVar4 = bVar4 + 1;
  } while (bVar4 < 0xc);
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined *)(iVar3 + 0x400) = 0xc0;
  *(undefined4 *)(iVar3 + 0x27a) = 0x40;
  *(undefined4 *)(iVar3 + 0xfa) = 0x40;
  FUN_00030ec8(0x17c);
  *(undefined4 *)(DAT_00031810 + 0x304) = 0x80000000;
  *(undefined *)(iVar1 + 0x58) = 1;
  return 0;
}


/* ---- FUN_00031814 @ 00031814 ---- */

char FUN_00031814(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00031824 + 0x58);
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


/* ---- FUN_00031828 @ 00031828 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00031828(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(char *)(DAT_000318dc + param_1 + 0x30) == -1) {
    if (param_2[2] == 0) {
      *(undefined *)(DAT_000318dc + param_1 + 0x30) = 0xfe;
    }
    else {
      iVar3 = FUN_0002b804(param_1,0,1,param_4,param_3,param_4);
      if (iVar3 == -1) {
        return 4;
      }
      bVar1 = *param_2;
      iVar3 = DAT_000318e0 + iVar3 * 4;
      bVar2 = param_2[1];
      *(uint *)(iVar3 + 0x510) = *(uint *)(iVar3 + 0x510) & DAT_000318e4;
      *(uint *)(iVar3 + 0x510) =
           *(uint *)(iVar3 + 0x510) | (param_1 & 0x1f) << 8 |
           (bVar1 & 3) << 0x10 | (bVar2 & 1) << 0x14;
    }
    iVar4 = 1 << (param_1 & 0xff);
    iVar3 = iVar4;
    if (param_2[1] != 1) {
      iVar3 = _DAT_50000508;
      _DAT_5000050c = iVar4;
    }
    _DAT_50000508 = iVar3;
    FUN_00030dbe(param_1,1,1,0,0,0);
    FUN_00030544(param_1,DAT_000318dc + 0x54);
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_000318e8 @ 000318e8 ---- */

void FUN_000318e8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00031908 + *(char *)(param_1 + DAT_00031904 + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) & 0xfffffffc;
  return;
}


/* ---- FUN_0003190c @ 0003190c ---- */

void FUN_0003190c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003192c + *(char *)(param_1 + DAT_00031928 + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) | 3;
  return;
}


/* ---- FUN_00031930 @ 00031930 ---- */

void FUN_00031930(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_2 = 1;
  }
  iVar1 = DAT_00031954 + *(char *)(param_1 + DAT_00031950 + 0x30) * 4;
  *(uint *)(iVar1 + 0x510) = *(uint *)(iVar1 + 0x510) & 0xffefffff | (param_2 & 1) << 0x14;
  return;
}


/* ---- FUN_00031958 @ 00031958 ---- */

void FUN_00031958(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = FUN_00033718();
  if (iVar2 != 0) {
    uVar1 = FUN_0002b84c(param_1);
    FUN_0002b7e8(uVar1);
    iVar2 = FUN_0002b84c(param_1);
    *(undefined4 *)(DAT_000319a8 + iVar2 * 4 + 0x510) = 0;
  }
  *(undefined *)(DAT_000319ac + param_1 + 0x30) = 0xff;
  iVar2 = FUN_000336d0(param_1);
  if (iVar2 != 0) {
    FUN_00030df4(param_1);
    FUN_000336e4(param_1);
    return;
  }
  return;
}


/* ---- FUN_000319b0 @ 000319b0 ---- */

int FUN_000319b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0002b84c();
  return (iVar1 * 4 + 0x30U & 0xff) + DAT_000319c4;
}


/* ---- FUN_000319c8 @ 000319c8 ---- */

undefined4 FUN_000319c8(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  
  uVar2 = 0;
  uVar3 = DAT_00031a2c;
  local_28 = param_4;
  while( true ) {
    local_28 = local_28 & 0xffffff00;
    FUN_00028d4c(&local_28);
    if (((1 << uVar2 & uVar3) != 0) && (iVar1 = FUN_0002e864(uVar2), iVar1 == 0)) break;
    FUN_00028d94(local_28 & 0xff);
    uVar3 = uVar3 & ~(1 << uVar2);
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar3 == 0) {
      return 4;
    }
  }
  *(uint *)(DAT_00031a30 + 4) = 1 << uVar2 | *(uint *)(DAT_00031a30 + 4);
  *param_1 = (char)uVar2;
  FUN_00028d94(local_28 & 0xff);
  return 0;
}


/* ---- FUN_00031a34 @ 00031a34 ---- */

undefined4 FUN_00031a34(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0xe;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_0002e928();
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else {
      iVar1 = FUN_0002e864(param_1);
      if (iVar1 == 0) {
        uVar2 = 8;
      }
      else {
        iVar1 = DAT_00031a74 + param_1 * 8;
        *(int *)(iVar1 + 0x510) = param_2;
        *(int *)(iVar1 + 0x514) = param_3;
      }
    }
  }
  return uVar2;
}


/* ---- FUN_00031a78 @ 00031a78 ---- */

undefined4 FUN_00031a78(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002e87c();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_0002e928(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0002e864(param_1), iVar1 != 0)) {
      *DAT_00031aa8 = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_00031aac @ 00031aac ---- */

undefined4 FUN_00031aac(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0002e87c();
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    iVar1 = FUN_0002e928(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_0002e864(param_1), iVar1 != 0)) {
      *DAT_00031adc = 1 << (param_1 & 0xff);
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}


/* ---- FUN_00031ae0 @ 00031ae0 ---- */

undefined4 FUN_00031ae0(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_18;
  
  uVar3 = 0;
  local_18 = param_4;
  iVar1 = FUN_0002e928();
  if (iVar1 == 0) {
    uVar3 = 7;
  }
  else {
    uVar2 = 1 << (param_1 & 0xff);
    *DAT_00031b18 = uVar2;
    local_18 = local_18 & 0xffffff00;
    FUN_00028d4c(&local_18);
    *(uint *)(DAT_00031b1c + 4) = *(uint *)(DAT_00031b1c + 4) & ~uVar2;
    FUN_00028d94(local_18 & 0xff);
  }
  return uVar3;
}


/* ---- FUN_00031b20 @ 00031b20 ---- */

undefined4 FUN_00031b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint local_10;
  
  local_10 = param_4;
  puVar1 = (undefined4 *)FUN_00034dbc();
  if (puVar1 != (undefined4 *)0x0) {
    local_10 = local_10 & 0xffffff00;
    FUN_00028d4c(&local_10);
    if (*(char *)(puVar1 + 1) != '\0') {
      FUN_00028d94(local_10 & 0xff);
      return 0x11;
    }
    *puVar1 = param_2;
    *(undefined *)(puVar1 + 1) = 1;
    FUN_00028d94(local_10 & 0xff);
  }
  return 0;
}


/* ---- FUN_00031b5a @ 00031b5a ---- */

void FUN_00031b5a(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00034dbc();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined *)(puVar1 + 1) = 0;
  }
  return;
}


/* ---- FUN_00031b6c @ 00031b6c ---- */

undefined4 FUN_00031b6c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_00031c08;
  DAT_00031c08[0xc2] = 0x12;
  iVar4 = DAT_00031c0c;
  if (*(char *)(DAT_00031c0c + 0x10) == '\x02') {
    uVar5 = 0x12;
LAB_00031bc0:
    puVar3[0xc1] = uVar5;
    uVar5 = 0x11;
  }
  else {
    cVar1 = *(char *)(DAT_00031c0c + 0x2e);
    uVar2 = (undefined2)param_2;
    if (*(char *)(DAT_00031c0c + 0x10) == '\x01') {
      if (*(int *)(DAT_00031c0c + 0xc) != 0) {
        uVar5 = 2;
        goto LAB_00031bc0;
      }
      *(undefined4 *)(DAT_00031c0c + 0xc) = param_1;
      *(undefined2 *)(iVar4 + 0x18) = uVar2;
      if (cVar1 == '\0') {
        do {
          iVar4 = FUN_00031174(0x100);
        } while (iVar4 == 0);
        FUN_00031184(0x100);
        FUN_00031150(param_1,param_2);
      }
      puVar3[0xc1] = 2;
    }
    else {
      puVar3[0xc1] = 2;
      *(undefined *)(iVar4 + 0x10) = 1;
      *(undefined4 *)(iVar4 + 4) = param_1;
      *(undefined2 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      if (cVar1 == '\0') {
        FUN_00031150(param_1,param_2);
        FUN_00031184(0x100);
        *puVar3 = 1;
      }
      else {
        *(undefined2 *)(iVar4 + 0x1a) = uVar2;
        FUN_00031150(param_1,*(undefined *)(iVar4 + 0x2d));
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* ---- FUN_00031c10 @ 00031c10 ---- */

undefined4 FUN_00031c10(int param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = DAT_00031cb4;
  iVar2 = DAT_00031cb0;
  if (*(char *)(DAT_00031cb0 + 0x10) != '\0') {
    return 0x11;
  }
  if ((param_2[4] == 0) || (param_2[4] == 1)) {
    *DAT_00031cb4 = 0;
  }
  iVar4 = iVar2 + param_1 * 2;
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    pcVar1 = (char *)(iVar2 + 0x2d);
    *pcVar1 = *pcVar1 + '\x01';
  }
  *(byte *)(iVar4 + 0x1c) = param_2[7];
  *(byte *)(iVar4 + 0x1d) = param_2[8];
  *(uint *)(DAT_00031cb8 + param_1 * 0x10 + 0x518) =
       *param_2 & 3 | (param_2[1] & 3) << 4 | (param_2[2] & 7) << 8 | (param_2[3] & 1) << 0xc |
       (param_2[4] & 7) << 0x10 | (param_2[5] & 1) << 0x14 | (param_2[6] & 1) << 0x18;
  FUN_00031160(param_1,param_2[7],param_2[8]);
  if ((param_2[4] == 0) || (param_2[4] == 1)) {
    *puVar3 = 1;
  }
  return 0;
}


/* ---- FUN_00031cbc @ 00031cbc ---- */

undefined4 FUN_00031cbc(int param_1)

{
  int iVar1;
  
  if (*(char *)(DAT_00031cfc + 0x10) != '\0') {
    return 0x11;
  }
  iVar1 = DAT_00031cfc + param_1 * 2;
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    *(char *)(DAT_00031cfc + 0x2d) = *(char *)(DAT_00031cfc + 0x2d) + -1;
  }
  *(undefined *)(iVar1 + 0x1c) = 0;
  *(undefined *)(iVar1 + 0x1d) = 0;
  FUN_00031160(param_1,0,0);
  FUN_00031d90(param_1,0xfffff800);
  return 0;
}


/* ---- FUN_00031d00 @ 00031d00 ---- */

undefined4 FUN_00031d00(byte *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar1 = DAT_00031d80;
  if (*(char *)(DAT_00031d80 + 0xb) == '\0') {
    puVar6 = DAT_00031d80 + 4;
    *DAT_00031d80 = param_2;
    puVar2 = DAT_00031d84;
    *DAT_00031d84 = (uint)*param_1;
    puVar2[1] = (uint)param_1[1];
    *(byte *)((int)puVar1 + 0x2e) = param_1[3];
    *(undefined *)(puVar1 + 0xb) = 1;
    *(undefined *)puVar6 = 0;
    *(undefined *)((int)puVar1 + 0x2d) = 0;
    puVar1[5] = 0;
    iVar3 = DAT_00031d88;
    *(undefined *)((int)puVar1 + 0x2f) = 0;
    *(undefined4 *)(iVar3 + 0x308) = 0x7fffffff;
    FUN_00031184(0x104);
    FUN_00031184(iVar3 >> 0x16);
    iVar4 = DAT_00031d8c;
    *(byte *)(DAT_00031d8c + 0x400) = param_1[2] << 5;
    *(undefined4 *)(iVar4 + 0x279) = 0x80;
    *(undefined4 *)(iVar4 + 0xf9) = 0x80;
    *(undefined4 *)(iVar3 + 0x304) = 2;
    if (*(char *)((int)puVar1 + 0x2e) != '\0') {
      *(undefined4 *)(iVar3 + 0x304) = 1;
    }
    DAT_00031d84[-0x3c] = 1;
    uVar5 = 0;
  }
  else {
    uVar5 = 8;
  }
  return uVar5;
}


/* ---- FUN_00031d90 @ 00031d90 ---- */

void FUN_00031d90(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = DAT_00031e08;
  *(uint *)(DAT_00031e08 + param_1 * 0x10 + 0x51c) = param_2 & 0xffff | param_3 << 0x10;
  uVar3 = FUN_00031198(param_1,0);
  iVar2 = DAT_00031e0c;
  uVar4 = 0x80000000 >> (param_1 * 2 + 1 & 0xff);
  if (param_2 == 0xfffff800) {
    *(uint *)(DAT_00031e0c + 0x14) = *(uint *)(DAT_00031e0c + 0x14) & ~uVar4;
    *(undefined4 *)(iVar1 + 0x308) = uVar3;
  }
  else {
    *(uint *)(DAT_00031e0c + 0x14) = *(uint *)(DAT_00031e0c + 0x14) | uVar4;
    *(undefined4 *)(iVar1 + 0x304) = uVar3;
  }
  uVar3 = FUN_00031198(param_1,1);
  uVar4 = 0x80000000 >> ((param_1 & 0x7f) << 1);
  if (param_3 == 0x7ff) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & ~uVar4;
    *(undefined4 *)(iVar1 + 0x308) = uVar3;
  }
  else {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | uVar4;
    *(undefined4 *)(iVar1 + 0x304) = uVar3;
  }
  return;
}


/* ---- FUN_00031e10 @ 00031e10 ---- */

undefined4 FUN_00031e10(void)

{
  undefined4 *puVar1;
  
  if (*(char *)(DAT_00031e34 + 0x10) != '\x01') {
    return 8;
  }
  puVar1 = DAT_00031e38;
  if (*(char *)(DAT_00031e34 + 0x2e) == '\0') {
    puVar1 = DAT_00031e38 + 1;
  }
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_00031e3c @ 00031e3c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031e3c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(DAT_00031e9c + 0x308) = 0x7fffffff;
  _DAT_e000e180 = 0x80;
  *(undefined4 *)(DAT_00031e9c + 8) = 1;
  iVar2 = 10000;
  do {
    iVar1 = FUN_00031174(0x114);
    if (iVar1 != 0) break;
    FUN_000315e4(0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *DAT_00031ea0 = 0;
  iVar2 = DAT_00031ea4;
  *(undefined *)(DAT_00031ea4 + 0x10) = 0;
  uVar3 = 0;
  do {
    if (*(char *)(iVar2 + uVar3 * 2 + 0x1c) != '\0') {
      FUN_00031cbc(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  *(undefined *)(iVar2 + 0x2c) = 0;
  return;
}


/* ---- FUN_00031ea8 @ 00031ea8 ---- */

void FUN_00031ea8(int *param_1)

{
  *(undefined4 *)(*param_1 + 0xc) = 1;
  return;
}


/* ---- FUN_00031eb0 @ 00031eb0 ---- */

void FUN_00031eb0(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x10000 << (param_2 & 0xff);
  if (param_4 == 0) {
    *(int *)(*param_1 + 0x308) = iVar1;
  }
  else {
    FUN_00031544(*param_1,param_2 * 4 + 0x140);
    *(int *)(*param_1 + 0x304) = iVar1;
  }
  *(undefined4 *)(*param_1 + param_2 * 4 + 0x540) = param_3;
  return;
}


/* ---- FUN_00031eea @ 00031eea ---- */

int FUN_00031eea(int *param_1,int param_2)

{
  return (param_2 * 4 + 0x140U & 0xffff) + *param_1;
}


/* ---- FUN_00031efa @ 00031efa ---- */

void FUN_00031efa(int *param_1,uint param_2)

{
  *(int *)(*param_1 + 0x308) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00031f08 @ 00031f08 ---- */

void FUN_00031f08(int *param_1,uint param_2)

{
  FUN_00031544(*param_1,param_2 * 4 + 0x140 & 0xffff);
  *(int *)(*param_1 + 0x304) = 0x10000 << (param_2 & 0xff);
  return;
}


/* ---- FUN_00031f2c @ 00031f2c ---- */

void FUN_00031f2c(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x10) = 1;
  *(undefined *)(DAT_00031f44 + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 1;
  return;
}


/* ---- FUN_00031f48 @ 00031f48 ---- */

void FUN_00031f48(undefined4 *param_1)

{
  *(undefined4 *)*param_1 = 1;
  *(undefined *)(DAT_00031f60 + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 2;
  return;
}


/* ---- FUN_00031f64 @ 00031f64 ---- */

void FUN_00031f64(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) & ~(0x101 << (param_2 & 0xff));
  *(uint *)(*param_1 + 0x200) = *(uint *)(*param_1 + 0x200) | param_4;
  FUN_00031eb0();
  return;
}


/* ---- FUN_00031f90 @ 00031f90 ---- */

undefined4 FUN_00031f90(int *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(DAT_0003204c + (uint)*(byte *)(param_1 + 1) * 0xc);
  if (*(char *)(puVar5 + 2) == '\0') {
    *puVar5 = param_3;
    puVar5[1] = *(undefined4 *)(param_2 + 4);
    for (uVar4 = 0; uVar4 < *(byte *)((int)param_1 + 5); uVar4 = uVar4 + 1 & 0xff) {
      FUN_00031544(*param_1,uVar4 * 4 + 0x140);
    }
    uVar4 = (*param_1 << 0xc) >> 0x18;
    if ((int)uVar4 < 0) {
      *(byte *)((uVar4 & 0xf) + 0xe000ed14) = param_2[3] << 5;
    }
    else {
      (&DAT_e000e400)[uVar4] = param_2[3] << 5;
    }
    uVar4 = (*param_1 << 0xc) >> 0x18;
    iVar3 = 1 << (uVar4 & 0x1f);
    iVar2 = (uVar4 >> 5) * 4;
    *(int *)(&DAT_e000e280 + iVar2) = iVar3;
    *(int *)(&DAT_e000e100 + iVar2) = iVar3;
    *(uint *)(*param_1 + 0x504) = *(uint *)(*param_1 + 0x504) & 0xfffffffc | param_2[1] & 3;
    *(uint *)(*param_1 + 0x508) = *(uint *)(*param_1 + 0x508) & 0xfffffffc | param_2[2] & 3;
    *(uint *)(*param_1 + 0x510) = *(uint *)(*param_1 + 0x510) & 0xfffffff0 | *param_2 & 0xf;
    *(undefined *)(puVar5 + 2) = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_00032050 @ 00032050 ---- */

void FUN_00032050(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*param_1 << 0xc) >> 0x18;
  *(int *)(&DAT_e000e180 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  uVar3 = *(undefined4 *)(*param_1 + 0x200);
  *(undefined4 *)(*param_1 + 0x200) = 0;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x308) = 0xffffffff;
  FUN_00031f2c(param_1,iVar2,uVar3);
  *(undefined *)(DAT_0003209c + (uint)*(byte *)(param_1 + 1) * 0xc + 8) = 0;
  return;
}


/* ---- FUN_000320a0 @ 000320a0 ---- */

void FUN_000320a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = DAT_000320d0 + (uint)*(byte *)(param_1 + 1) * 0x3c;
  *(undefined4 *)(iVar1 + 0x308) = DAT_000320d4;
  *(uint *)(iVar1 + 0x200) = *(uint *)(iVar1 + 0x200) & 0xfffffffc;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  *(undefined *)(iVar2 + 0x2d) = 1;
  return;
}


/* ---- FUN_000320d8 @ 000320d8 ---- */

void FUN_000320d8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000320f4 + (uint)*(byte *)(param_1 + 1) * 0x3c;
  *(undefined4 *)(*param_1 + 0x500) = 5;
  *(undefined *)(iVar1 + 0x2d) = 2;
  return;
}


/* ---- FUN_000320f8 @ 000320f8 ---- */

undefined4 FUN_000320f8(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(DAT_000321d0 + (uint)*(byte *)(param_1 + 1) * 0x3c);
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar2 = FUN_00031b20(*param_1,*(undefined4 *)(DAT_000321d4 + (uint)*(byte *)(param_1 + 1) * 4),
                         DAT_000321d0,param_4,param_3,param_4);
    if (iVar2 == 0) {
      *piVar5 = param_3;
      piVar5[1] = param_4;
      piVar5[2] = 0;
      *(undefined *)(piVar5 + 0xc) = 0;
      *(undefined *)((int)piVar5 + 0x2f) = 0;
      *(undefined *)(piVar5 + 0xe) = *(undefined *)((int)param_2 + 0xd);
      FUN_00030d9a(*param_2,0,0,3,6,0);
      FUN_00030d9a(param_2[1],0,0,3,6,0);
      uVar1 = param_2[1];
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x508) = *param_2;
      *(undefined4 *)(iVar2 + 0x50c) = uVar1;
      *(undefined4 *)(iVar2 + 0x524) = param_2[2];
      if (*piVar5 != 0) {
        uVar3 = (*param_1 << 0xc) >> 0x18;
        if ((int)uVar3 < 0) {
          *(char *)((uVar3 & 0xf) + 0xe000ed14) = *(char *)(param_2 + 3) << 5;
        }
        else {
          (&DAT_e000e400)[uVar3] = *(char *)(param_2 + 3) << 5;
        }
        uVar3 = (*param_1 << 0xc) >> 0x18;
        iVar4 = 1 << (uVar3 & 0x1f);
        iVar2 = (uVar3 >> 5) * 4;
        *(int *)(&DAT_e000e280 + iVar2) = iVar4;
        *(int *)(&DAT_e000e100 + iVar2) = iVar4;
      }
      *(undefined *)((int)piVar5 + 0x2d) = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0x11;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


/* ---- FUN_000321d8 @ 000321d8 ---- */

void FUN_000321d8(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uStack_28;
  undefined local_27;
  undefined4 local_24;
  undefined4 local_1c;
  
  FUN_00026484(&uStack_28,DAT_00032204,0x14);
  local_27 = param_2;
  local_24 = param_4;
  local_1c = param_3;
  FUN_000322a0(param_1,&uStack_28,0);
  return;
}


/* ---- FUN_00032208 @ 00032208 ---- */

void FUN_00032208(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined uStack_30;
  undefined local_2f;
  undefined4 local_2c;
  undefined4 local_24;
  
  FUN_000264b6(&uStack_30,0x14);
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
  }
  local_2f = param_2;
  local_2c = param_4;
  local_24 = param_3;
  FUN_000322a0(param_1,&uStack_30,uVar1);
  return;
}


/* ---- FUN_00032240 @ 00032240 ---- */

void FUN_00032240(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0003229c + (uint)*(byte *)(param_1 + 1) * 0x3c);
  if (*piVar2 != 0) {
    uVar1 = (*param_1 << 0xc) >> 0x18;
    *(int *)(&DAT_e000e180 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  }
  FUN_000320a0(param_1);
  FUN_00031b5a(*param_1);
  if (*(char *)(piVar2 + 0xe) == '\0') {
    FUN_00030de2(*(undefined4 *)(*param_1 + 0x508));
    FUN_00030de2(*(undefined4 *)(*param_1 + 0x50c));
  }
  *(undefined *)((int)piVar2 + 0x2d) = 0;
  return;
}


/* ---- FUN_000322a0 @ 000322a0 ---- */

void FUN_000322a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000376e8(DAT_000322c0 + (uint)*(byte *)(param_1 + 1) * 0x3c,*param_1,param_2,param_3);
  return;
}


/* ---- FUN_000322c4 @ 000322c4 ---- */

void FUN_000322c4(char *param_1)

{
  undefined auStack_28 [32];
  
  if (*param_1 == '\0') {
    FUN_00034324(s_rev_data__000322ec);
    FUN_00034328(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
    FUN_00026484(auStack_28,*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
  }
  return;
}


/* ---- FUN_00032478 @ 00032478 ---- */

void FUN_00032478(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  
  puVar1 = DAT_00032588;
  if (*param_2 != *(short *)(param_1 + 0x2ca)) {
    return;
  }
  iVar3 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
  local_28 = param_4;
  if (param_2[1] == 0) {
    uVar2 = (uint)*(byte *)(iVar3 + 4);
    if (uVar2 + ((ushort)param_2[3] & 0xff) < 7) {
      cVar4 = (char)param_2[3] + *(byte *)(iVar3 + 4);
    }
    else {
      cVar4 = '\x06';
    }
    *(char *)(iVar3 + 4) = cVar4;
    iVar6 = 0;
    for (; uVar2 < *(byte *)(iVar3 + 4); uVar2 = uVar2 + 1) {
      iVar5 = iVar3 + uVar2 * 0x12;
      *(undefined4 *)(iVar5 + 10) = *(undefined4 *)(param_2 + iVar6 * 5 + 4);
      *(undefined4 *)(iVar5 + 0xe) = *(undefined4 *)(param_2 + iVar6 * 5 + 6);
      *(short *)(iVar5 + 0x12) = param_2[iVar6 * 5 + 8];
      *(undefined2 *)(iVar5 + 0x14) = 0;
      *(undefined2 *)(iVar5 + 0x16) = 0;
      *(undefined2 *)(iVar5 + 0x18) = 0;
      *(undefined2 *)(iVar5 + 0x1a) = 0;
      iVar6 = iVar6 + 1;
    }
    if ((*(ushort *)(iVar3 + uVar2 * 0x12) <
         *(ushort *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76 + 8)) &&
       (*(char *)(iVar3 + 4) != '\x06')) {
      *(char *)(param_1 + 0x2c5) = *(char *)(iVar3 + 4);
      iVar3 = FUN_0002b944(param_1,*param_2);
      if (iVar3 == 0) {
        return;
      }
      goto LAB_00032554;
    }
  }
  *(undefined *)(param_1 + 0x2c5) = 0;
  iVar3 = FUN_0002c678(param_1,&local_28,*param_2);
  if (iVar3 == 0) {
    if ((char)local_28 == '\0') {
      return;
    }
    FUN_0002c79c(param_1,1,*param_2);
    FUN_0003284c(param_1,*param_2);
    return;
  }
LAB_00032554:
  *(undefined *)(param_1 + 0x2c7) = 0;
  FUN_0002c82c(param_1,iVar3,*param_2);
  *puVar1 = 3;
  *(short *)(puVar1 + 2) = *param_2;
  return;
}


/* ---- FUN_0003258c @ 0003258c ---- */

void FUN_0003258c(int param_1)

{
  undefined2 uVar1;
  undefined uVar2;
  int iVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  iVar3 = FUN_0002e77c(uVar1);
  FUN_00034320(s___conn_params_on_conn_params_upd_000325d0);
  if (iVar3 != 0) {
    uVar2 = FUN_0002e898(iVar3 + 10,param_1 + 8,499,0xffff);
    *(undefined *)(iVar3 + 9) = uVar2;
    FUN_00034320(s___conn_params_on_conn_params_upd_000325fc);
    FUN_0002c3d4(uVar1,iVar3);
    *DAT_00032628 = 0;
  }
  return;
}


/* ---- FUN_0003262c @ 0003262c ---- */

void FUN_0003262c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0x1900000;
  local_10 = CONCAT22(param_3,param_2);
  FUN_0002a434(param_1,&local_10);
  return;
}


/* ---- FUN_00032650 @ 00032650 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032650(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined uVar3;
  undefined2 *puVar4;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  if (*(char *)(param_1 + 0xf) == '\x01') {
    puVar4 = (undefined2 *)FUN_0002e77c(0xffff);
    if (puVar4 == (undefined2 *)0x0) {
      FUN_00035db0(4);
      return;
    }
    *puVar4 = uVar1;
    *(undefined *)(puVar4 + 4) = 0;
    iVar2 = DAT_000326c0;
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(DAT_000326c0 + 4);
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(iVar2 + 8);
    uVar3 = FUN_0002e898(puVar4 + 5,param_1 + 0x10,499,0xffff);
    iVar2 = _DAT_000326c4;
    *(undefined *)((int)puVar4 + 9) = uVar3;
    FUN_00034320(s____conn_params_on_connect______x_000326c7 + 1,*(undefined2 *)(iVar2 + 0xe),0);
    if (*(short *)(iVar2 + 0xe) == 0) {
      FUN_0002c3d4(uVar1,puVar4);
      return;
    }
  }
  return;
}


/* ---- FUN_000326f0 @ 000326f0 ---- */

void FUN_000326f0(int param_1,short *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 local_18;
  
  if (*param_2 == *(short *)(param_1 + 0x2ca)) {
    puVar6 = (ushort *)(param_2 + 3);
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76;
    uVar4 = (uint)(ushort)param_2[1];
    iVar3 = iVar5 + (uint)*(byte *)(param_1 + 0x2c5) * 0x12;
    if (uVar4 == 0) {
      for (; uVar4 < *puVar6; uVar4 = uVar4 + 1) {
        uVar1 = puVar6[uVar4 * 3 + 2];
        if (uVar1 == 0x2900) {
          *(ushort *)(iVar3 + 0x16) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2901) {
          *(ushort *)(iVar3 + 0x18) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2902) {
          *(ushort *)(iVar3 + 0x14) = puVar6[uVar4 * 3 + 1];
        }
        else if (uVar1 == 0x2908) {
          *(ushort *)(iVar3 + 0x1a) = puVar6[uVar4 * 3 + 1];
        }
        if ((((*(short *)(iVar3 + 0x14) != 0) && (*(short *)(iVar3 + 0x16) != 0)) &&
            (*(short *)(iVar3 + 0x18) != 0)) && (*(short *)(iVar3 + 0x1a) != 0)) break;
      }
    }
    local_18 = param_4 & 0xffffff00;
    uVar4 = *(byte *)(param_1 + 0x2c5) + 1;
    if (uVar4 == *(byte *)(iVar5 + 4)) {
      local_18 = CONCAT31((int3)(param_4 >> 8),1);
LAB_000327c6:
      FUN_0002c79c(param_1,1,*param_2);
      FUN_0003284c(param_1,*param_2);
      return;
    }
    *(char *)(param_1 + 0x2c5) = (char)uVar4;
    iVar3 = FUN_0002c678(param_1,&local_18,*param_2);
    if (iVar3 == 0) {
      if ((char)local_18 != '\0') goto LAB_000327c6;
    }
    else {
      *(undefined *)(param_1 + 0x2c7) = 0;
      FUN_0002c82c(param_1,iVar3,*param_2);
      puVar2 = DAT_000327dc;
      *DAT_000327dc = 3;
      *(short *)(puVar2 + 2) = *param_2;
    }
  }
  return;
}


/* ---- FUN_000327e0 @ 000327e0 ---- */

void FUN_000327e0(int param_1,short *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x2c6) * 0x76);
  if (*param_2 == *(short *)(param_1 + 0x2ca)) {
    if (param_2[1] != 0) {
      FUN_0002c79c(param_1,0);
      FUN_0003284c(param_1,*param_2);
      return;
    }
    *puVar3 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((int)puVar3 + 6) = *(undefined4 *)(param_2 + 6);
    iVar2 = FUN_0002b944(param_1,*param_2);
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 0x2c7) = 0;
      FUN_0002c82c(param_1,iVar2,*param_2);
      puVar1 = DAT_00032848;
      *DAT_00032848 = 3;
      *(short *)(puVar1 + 2) = *param_2;
    }
  }
  return;
}


/* ---- FUN_0003284c @ 0003284c ---- */

void FUN_0003284c(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_000328c0;
  bVar3 = *(char *)(param_1 + 0x2c9) + 1;
  *(byte *)(param_1 + 0x2c9) = bVar3;
  puVar2 = DAT_000328c4;
  if ((uint)bVar3 < *(uint *)(iVar1 + 0xc)) {
    *(undefined *)(param_1 + 0x2c5) = 0;
    bVar3 = *(char *)(param_1 + 0x2c6) + 1;
    puVar4 = (undefined4 *)(param_1 + (uint)bVar3 * 0x76);
    *(byte *)(param_1 + 0x2c6) = bVar3;
    *puVar4 = *(undefined4 *)(puVar2 + (uint)bVar3 * 4 + -0x18);
    *(undefined *)(puVar4 + 1) = 0;
    software_interrupt(0x9b);
    if (param_2 == 0) {
      return;
    }
    *(undefined *)(param_1 + 0x2c7) = 0;
    FUN_0002c82c(param_1,param_2,param_2);
  }
  else {
    *(undefined *)(param_1 + 0x2c7) = 0;
  }
  *puVar2 = 3;
  *(short *)(puVar2 + 2) = (short)param_2;
  return;
}


/* ---- FUN_000328c8 @ 000328c8 ---- */

void FUN_000328c8(int param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_2 == 0x26) &&
     ((*(char *)(param_2 + 4) == '\x01' || (*(char *)(param_2 + 4) == '\x02')))) {
    uVar1 = FUN_00027aec(*(undefined *)(param_1 + 2));
    FUN_00034324(s____on_terminated_begin__d__d_00032918,*(undefined *)(param_1 + 2),uVar1);
    uVar1 = FUN_00027aec(*(undefined *)(param_1 + 2));
    iVar2 = FUN_00029e78(param_1,uVar1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x38) != 0)) {
      FUN_00034324(s_on_terminated___err_0003293c);
                    /* WARNING: Could not recover jumptable at 0x00032912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x38))(iVar2);
      return;
    }
  }
  return;
}


/* ---- FUN_00032954 @ 00032954 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032954(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_000329b8;
  FUN_00034320(s____conn_params_on_write______x___000329bb + 1,*(undefined2 *)(param_1 + 6),
               *(undefined2 *)(_DAT_000329b8 + 0xe),*(undefined2 *)(param_1 + 0x10));
  if ((*(short *)(param_1 + 6) == *(short *)(iVar2 + 0xe)) && (*(short *)(param_1 + 0x10) == 2)) {
    uVar1 = *(undefined2 *)(param_1 + 4);
    iVar2 = FUN_0002e77c(uVar1);
    if (iVar2 != 0) {
      iVar3 = FUN_0002b2f2(param_1 + 0x12);
      if (iVar3 != 0) {
        FUN_00034320(s___conn_params_on_write___A____000329e4);
        FUN_0002c3d4(uVar1,iVar2);
        return;
      }
      FUN_00034320(s___conn_params_on_write___B____00032a04);
      iVar2 = FUN_00028d2c(*(undefined4 *)(iVar2 + 4));
      if (iVar2 != 0) {
        FUN_00035db0();
        return;
      }
    }
  }
  return;
}


/* ---- FUN_00032a24 @ 00032a24 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032a24(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  
  psVar6 = (short *)(param_2 + 6);
  FUN_00034324(s____ble_server_nus_on_write__x_le_00032aec,*psVar6,*(undefined2 *)(param_2 + 0x10),
               *(undefined *)(param_2 + 0x12),*(undefined *)(param_2 + 0x13),param_4);
  uVar5 = (uint)*(ushort *)(param_1 + 0x24);
  uVar2 = (uint)*(ushort *)(param_1 + 0x1c);
  FUN_00034324(s____ble_server_nus__x__x__x__x__x_00032b20,*(undefined2 *)(param_1 + 4),
               *(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0x14));
  if (*(short *)(param_2 + 0x10) == 0) {
    return;
  }
  iVar7 = param_2 + 0x12;
  if (*(short *)(param_2 + 0x10) == 2) {
    if (*psVar6 == *(short *)(param_1 + 0x18)) {
      iVar3 = FUN_0002b2f2(iVar7);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0x36) = 0;
        pcVar4 = s_on_write_FFA4_Enable_false_00032b60;
      }
      else {
        *_DAT_00032b44 = 4;
        *(undefined *)(param_1 + 0x36) = 1;
        pcVar4 = s_on_write_FFA4_Enable_00032b47 + 1;
      }
    }
    else {
      if (*psVar6 != *(short *)(param_1 + 0x20)) goto LAB_00032aae;
      iVar3 = FUN_0002b2f2(iVar7);
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0x37) = 0;
        pcVar4 = s_on_write_FFA5_Enable_false_00032b94;
      }
      else {
        *(undefined *)(param_1 + 0x37) = 1;
        pcVar4 = s_on_write_FFA5_Enable_00032b7c;
      }
    }
    FUN_00034324(pcVar4);
  }
LAB_00032aae:
  sVar1 = *psVar6;
  if (sVar1 == *(short *)(param_1 + 4)) {
    FUN_0002b404(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
    return;
  }
  if (sVar1 != *(short *)(param_1 + 0xc)) {
    if (sVar1 != *(short *)(param_1 + 0x24)) {
      return;
    }
    ffa6_on_write(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
    return;
  }
  FUN_0002b3d4(iVar7,*(undefined2 *)(param_2 + 0x10),uVar2,uVar5);
  return;
}


/* ---- FUN_00032bb0 @ 00032bb0 ---- */

void FUN_00032bb0(void)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = DAT_00032c44;
  cVar1 = *DAT_00032c40;
  if (cVar1 != '\0') {
    *DAT_00032c40 = cVar1 + -1;
    if (cVar1 == '\x01') {
      *puVar2 = 1;
      puVar2[1] = 0;
    }
  }
  FUN_00035ca8();
  if (*DAT_00032c48 != '\0') {
    *DAT_00032c48 = *DAT_00032c48 + -1;
  }
  FUN_0003420c();
  FUN_0002eab4();
  if (((0 < *DAT_00032c4c) && (iVar3 = *DAT_00032c4c + -1, *DAT_00032c4c = iVar3, iVar3 == 0)) &&
     (*DAT_00032c50 != '\0')) {
    FUN_0003262c(*DAT_00032c58,*(undefined2 *)(DAT_00032c54 + 0x38),
                 *(undefined2 *)(DAT_00032c54 + 0x3a));
  }
  if (*DAT_00032c5c != '\0') {
    if (puVar2[2] != '\0') {
      FUN_00027d54();
    }
    puVar2[2] = puVar2[2] ^ 1;
  }
  iVar3 = *(int *)(puVar2 + 8);
  *(uint *)(puVar2 + 8) = iVar3 + 1U;
  if ((iVar3 + 1U) % 10 == 0) {
    FUN_000288cc(0,0,DAT_00032c60);
    return;
  }
  return;
}


/* ---- FUN_00032c64 @ 00032c64 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032c64(void)

{
  int iVar1;
  
  iVar1 = _DAT_00032c88;
  FUN_00034324(s_openBLE__d_00032c8b + 1,*(undefined *)(_DAT_00032c88 + 2));
  if (*(char *)(iVar1 + 2) == '\0') {
    *(undefined *)(iVar1 + 2) = 1;
    FUN_00029e78(DAT_00032c98,3);
    return;
  }
  return;
}


/* ---- FUN_00032c9c @ 00032c9c ---- */

int FUN_00032c9c(int *param_1)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != DAT_00032cb8)) ||
     ((iVar1 = param_1[1] + DAT_00032cbc, iVar1 != 0 && (iVar1 != 1)))) {
    iVar1 = 3;
  }
  return iVar1;
}


/* ---- FUN_00032cc0 @ 00032cc0 ---- */

void FUN_00032cc0(int param_1,int param_2)

{
  if (2 < *(byte *)(param_2 + 0x16)) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + *(short *)(param_2 + 6) + 3;
  }
  *(short *)(param_1 + 10) = (*(short *)(param_1 + 10) - *(short *)(param_2 + 6)) + -3;
  return;
}


/* ---- FUN_00032cdc @ 00032cdc ---- */

void FUN_00032cdc(int param_1,short *param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 2;
  iVar1 = DAT_00032d44;
  iVar3 = param_1 + 8;
  do {
    iVar2 = FUN_0002e1e2(iVar3,param_1 + 0x1000);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_0002e1bc(iVar3,param_1 + 0x1000);
    if (iVar2 == 0) {
      if (*(uint *)(iVar1 + 0x14) < *(uint *)(iVar3 + 8)) {
        *(uint *)(iVar1 + 0x14) = *(uint *)(iVar3 + 8);
      }
    }
    else {
      if (param_3 != (undefined *)0x0) {
        *param_3 = 1;
      }
      if (iVar2 == 2) {
        *param_2 = 0x400;
        return;
      }
    }
    *param_2 = *param_2 + *(short *)(iVar3 + 2) + 3;
    iVar3 = iVar3 + (uint)*(ushort *)(iVar3 + 2) * 4 + 0xc;
  } while( true );
}


/* ---- FUN_00032d48 @ 00032d48 ---- */

void FUN_00032d48(undefined4 param_1)

{
  FUN_00030cec(DAT_00032d60,param_1,DAT_00032d5c,8,0);
  return;
}


/* ---- FUN_00032d64 @ 00032d64 ---- */

void FUN_00032d64(void)

{
  FUN_00030cec(DAT_00032d84,*DAT_00032d7c,DAT_00032d80,8,0);
  return;
}


/* ---- FUN_00032d88 @ 00032d88 ---- */

byte FUN_00032d88(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  
  iVar3 = DAT_00032e9c;
  iVar2 = DAT_00032e98;
  bVar10 = 0;
  uVar9 = 0;
  uVar5 = 3;
  bVar1 = false;
  uVar12 = 0;
  do {
    iVar11 = *(int *)(iVar2 + 0xc) + uVar12 * 0x1000;
    iVar6 = FUN_00032c9c(iVar11);
    piVar8 = DAT_00032ea0;
    if (iVar6 == 0) {
      *(undefined *)(iVar3 + uVar9 * 0x14) = 0;
      iVar6 = iVar3 + uVar9 * 0x14;
      *(int *)(iVar6 + 4) = iVar11;
      FUN_00032cdc(iVar11,iVar6 + 8,iVar6 + 0x10);
      bVar10 = bVar10 | 2;
LAB_00032de0:
      uVar9 = uVar9 + 1 & 0xffff;
    }
    else if (iVar6 == 1) {
      if (bVar1) {
        *(undefined *)(iVar3 + uVar9 * 0x14) = 2;
        iVar6 = iVar3 + uVar9 * 0x14;
        *(int *)(iVar6 + 4) = *piVar8;
        *(undefined2 *)(iVar6 + 8) = 2;
        uVar9 = uVar9 + 1 & 0xffff;
      }
      piVar8 = DAT_00032ea0 + 1;
      *DAT_00032ea0 = iVar11;
      FUN_00032cdc(iVar11,piVar8,0);
      if (*(short *)(DAT_00032ea0 + 1) == 2) {
        bVar4 = 4;
      }
      else {
        bVar4 = 8;
      }
      bVar10 = bVar10 | bVar4;
    }
    else if (iVar6 == 3) {
      uVar7 = 0;
      do {
        if (*(int *)(iVar11 + uVar7 * 4) != -1) {
          uVar5 = uVar5 - 1;
          *(int *)(iVar3 + uVar9 * 0x14 + 4) = iVar11;
          *(undefined *)(iVar3 + uVar9 * 0x14) = 3;
          goto LAB_00032de0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x400);
      if (*DAT_00032ea0 == 0) {
        *DAT_00032ea0 = iVar11;
        *(undefined2 *)(piVar8 + 1) = 2;
        bVar1 = true;
      }
      else {
        *(undefined *)(iVar3 + uVar9 * 0x14) = 2;
        iVar6 = iVar3 + uVar9 * 0x14;
        *(int *)(iVar6 + 4) = iVar11;
        *(undefined2 *)(iVar6 + 8) = 2;
        *(short *)(DAT_00032e9c + 0x2a) = (short)uVar9;
        uVar9 = uVar9 + 1 & 0xffff;
      }
      bVar10 = bVar10 | 1;
    }
    uVar12 = uVar12 + 1 & 0xffff;
    if (2 < uVar12) {
      if (uVar5 < 2) {
        bVar10 = 0;
      }
      return bVar10;
    }
  } while( true );
}


/* ---- FUN_00032ea4 @ 00032ea4 ---- */

void FUN_00032ea4(undefined4 param_1)

{
  FUN_0002a5ac(param_1,*(undefined *)(DAT_00032eac + 1));
  return;
}


/* ---- FUN_00032eb0 @ 00032eb0 ---- */

void FUN_00032eb0(undefined2 *param_1,undefined param_2)

{
  undefined local_20 [2];
  undefined2 local_1e;
  undefined local_18;
  undefined local_17;
  
  local_20[0] = 2;
  local_1e = *param_1;
  if ((int)((uint)*(byte *)((int)param_1 + 5) << 0x1d) < 0) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  local_17 = param_2;
  FUN_0002caf8(local_20);
  return;
}


/* ---- FUN_00032ee4 @ 00032ee4 ---- */

void FUN_00032ee4(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_28 [2];
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_28[0] = 5;
  local_26 = param_1;
  local_24 = FUN_0002e574();
  local_20 = param_2;
  uStack_1c = param_3;
  thunk_FUN_000340cc(local_28);
  return;
}


/* ---- FUN_00032f0c @ 00032f0c ---- */

void FUN_00032f0c(code **param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined local_88 [4];
  undefined4 local_84;
  undefined local_80;
  byte local_7f;
  undefined local_7e;
  undefined local_7d;
  
  if (param_3 != 8) {
    local_88[0] = 3;
    (**param_1)(local_88);
  }
  local_80 = *param_2;
  local_7f = local_7f & 0xe0 | param_2[1] & 1 | (byte)(((byte)param_2[1] >> 1 & 1) << 1) |
             (byte)(((byte)param_2[1] >> 2 & 1) << 2) | (byte)(((byte)param_2[1] >> 3 & 1) << 3) |
             (byte)(((byte)param_2[1] >> 4 & 1) << 4);
  local_7e = param_2[2];
  local_7d = param_2[3];
  local_84 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_0002a3fe(&local_84);
  if (iVar1 == 0) {
    local_88[0] = 2;
  }
  else {
    local_88[0] = 3;
  }
  (**param_1)(local_88);
  return;
}


/* ---- FUN_00032fa4 @ 00032fa4 ---- */

void FUN_00032fa4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00032fbc;
  uVar2 = 0;
  do {
    (**(code **)(iVar1 + uVar2 * 4))(param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}


/* ---- FUN_00032fc0 @ 00032fc0 ---- */

undefined4 FUN_00032fc0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00033004;
  uVar2 = 0;
  do {
    FUN_000393cc(iVar1 + uVar2 * 0xc);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  iVar1 = FUN_00033794(DAT_0003300c + 0x140,DAT_0003300c,0x140,DAT_00033008,4,0x50);
  if (iVar1 != 0) {
    return 3;
  }
  *(undefined *)(DAT_00033008 + -3) = 1;
  return 0;
}


/* ---- FUN_0003308c @ 0003308c ---- */

void FUN_0003308c(void)

{
  FUN_000332bc();
  return;
}


/* ---- FUN_00033092 @ 00033092 ---- */

int FUN_00033092(undefined4 param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_0003939c(param_1,&local_10);
    if (iVar1 == 0) break;
    iVar1 = FUN_00033184(param_1,*(undefined *)(iVar1 + 2));
    if ((iVar1 != 0) && (iVar1 != 5)) goto LAB_000330c8;
    local_10 = local_10 + 1;
  }
  iVar1 = FUN_000333b0(param_1);
  if ((iVar1 != 0) && (iVar1 != 7)) {
LAB_000330c8:
    iVar1 = 3;
  }
  return iVar1;
}


/* ---- FUN_000330cc @ 000330cc ---- */

undefined4 FUN_000330cc(undefined4 param_1,int param_2,uint param_3,short *param_4)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_4 == (short *)0x0) {
    return 0xe;
  }
  if ((((param_2 != 7) && (param_2 != 8)) || (param_3 == 0)) || (4 < param_3)) {
    return 7;
  }
  bVar1 = false;
  puVar2 = (undefined2 *)FUN_00039368(param_1);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)FUN_00039368(0xffff,0xff);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_1;
      *(char *)(puVar2 + 1) = (char)param_2;
      goto LAB_00033120;
    }
LAB_00033128:
    uVar4 = 0x11;
  }
  else {
    if (*(byte *)(puVar2 + 4) != param_3) {
      return 0xf;
    }
LAB_00033120:
    if (*(char *)((int)puVar2 + 9) == -1) {
      iVar3 = FUN_00033730(DAT_00033180,param_3);
      *(char *)((int)puVar2 + 9) = (char)iVar3;
      if (iVar3 == 0xff) {
        FUN_000393cc(puVar2);
        goto LAB_00033128;
      }
      bVar1 = true;
    }
    *(char *)(puVar2 + 4) = (char)param_3;
    iVar3 = FUN_000337b8(DAT_00033180,*(undefined *)((int)puVar2 + 9));
    if (iVar3 == 0) {
      uVar4 = 3;
    }
    else {
      FUN_000334a0(param_4,param_2,iVar3,param_3 & 0xffff);
      if ((bVar1) && (param_2 == 8)) {
        *(short *)(*(int *)(param_4 + 2) + 4) = *param_4 * 4 + -6;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* ---- FUN_00033184 @ 00033184 ---- */

undefined4 FUN_00033184(void)

{
  int iVar1;
  
  iVar1 = FUN_00039368();
  if (iVar1 != 0) {
    FUN_000393e8();
    return 0;
  }
  return 5;
}


/* ---- FUN_00033198 @ 00033198 ---- */

undefined4 FUN_00033198(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  if (((param_2 == 7) || (param_2 == 8)) && (iVar1 = thunk_FUN_00033550(param_3), iVar1 != 0)) {
    puVar2 = (undefined2 *)FUN_00039368(param_1,param_2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = (short)param_3;
      *(char *)(puVar2 + 1) = (char)param_2;
      uVar3 = FUN_000392c0();
      return uVar3;
    }
    return 5;
  }
  return 7;
}


/* ---- FUN_000331d0 @ 000331d0 ---- */

void FUN_000331d0(int param_1)

{
  *(undefined2 *)(param_1 + 2) = 0xffff;
                    /* WARNING: Could not recover jumptable at 0x000331da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**DAT_000331dc)();
  return;
}


/* ---- FUN_000331e0 @ 000331e0 ---- */

undefined4 FUN_000331e0(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined auStack_18 [12];
  
  iVar2 = FUN_0002d05c(DAT_00033244);
  if (iVar2 == 0) {
    iVar2 = FUN_0002ceac();
    if (iVar2 == 0) {
      FUN_00033544();
      local_20 = 0;
      local_1c = 0;
      while (iVar2 = FUN_0002cfca(0xc007,auStack_18,&local_20), iVar2 == 0) {
        FUN_0002cffc(auStack_18,local_28);
        sVar1 = *(short *)(local_28[0] + 4);
        FUN_0002cf7c(auStack_18);
        FUN_000334bc(sVar1 + 0x4000);
      }
      *DAT_00033248 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = 0x86;
    }
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}


/* ---- thunk_FUN_00033508 @ 0003324c ---- */

void thunk_FUN_00033508(undefined4 param_1)

{
  FUN_0002ffb4(param_1,DAT_00033510);
  return;
}


/* ---- thunk_FUN_00033514 @ 00033250 ---- */

int thunk_FUN_00033514(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002ffb4(param_1,DAT_00033540);
  while( true ) {
    if (iVar1 == 0xffff) {
      return 0xffff;
    }
    iVar2 = FUN_00033564();
    if (iVar2 == 0) break;
    iVar1 = FUN_0002ffb4(iVar1,DAT_00033540);
  }
  return iVar1;
}


/* ---- FUN_00033254 @ 00033254 ---- */

undefined4 FUN_00033254(short param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined auStack_28 [12];
  int local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_0003347c();
  if (iVar1 != 0) {
    iVar1 = FUN_0002cfca(param_1 + -0x4000,auStack_28,DAT_000332a8);
    if ((iVar1 != 0) || (iVar1 = FUN_0002cffc(auStack_28,&local_1c), iVar1 != 0)) {
      return 0;
    }
    *(char *)(param_3 + 1) = (char)param_1;
    *param_3 = *(undefined2 *)(local_1c + 2);
    *(undefined4 *)(param_3 + 2) = local_18;
    *param_2 = *(short *)(local_1c + 4) + 0x4000;
    FUN_0002cf7c(auStack_28);
  }
  return 1;
}


/* ---- FUN_000332ac @ 000332ac ---- */

void FUN_000332ac(void)

{
  int iVar1;
  
  iVar1 = DAT_000332b8;
  *(undefined4 *)(DAT_000332b8 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}


/* ---- FUN_000332bc @ 000332bc ---- */

undefined4 FUN_000332bc(uint param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_28;
  undefined4 local_24;
  undefined auStack_20 [12];
  
  if ((param_1 < 0x100) && (iVar2 = FUN_0003347c(param_2), iVar2 != 0)) {
    iVar2 = FUN_0003344c(param_1,param_2,auStack_20);
    if ((iVar2 == 0) && (iVar2 = FUN_0002cffc(auStack_20,&local_28), iVar2 == 0)) {
      *(char *)(param_3 + 1) = (char)param_2;
      uVar1 = *(ushort *)(local_28 + 2);
      *param_3 = uVar1;
      if (param_4 == (ushort *)0x0) {
        *(undefined4 *)(param_3 + 2) = local_24;
      }
      else {
        uVar4 = (uint)uVar1 << 2;
        uVar5 = uVar4;
        if ((uint)*param_4 < (uint)uVar1 << 2) {
          uVar5 = (uint)*param_4;
        }
        FUN_00026484(*(undefined4 *)(param_3 + 2),local_24,uVar5);
        if (uVar5 < uVar4) {
          return 0xc;
        }
      }
      FUN_0002cf7c(auStack_20);
      uVar3 = 0;
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}


/* ---- FUN_0003332e @ 0003332e ---- */

undefined4 FUN_0003332e(uint param_1,ushort *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_28;
  short local_26;
  undefined4 local_24;
  uint local_20;
  undefined auStack_1c [12];
  
  if ((param_1 < 0x100) && (iVar1 = FUN_0003347c(*(undefined *)(param_2 + 1)), iVar1 != 0)) {
    local_28 = (short)param_1 + -0x4000;
    local_26 = *(byte *)(param_2 + 1) + 0xc000;
    local_24 = *(undefined4 *)(param_2 + 2);
    local_20 = (uint)*param_2;
    iVar1 = FUN_0003344c(param_1,*(undefined *)(param_2 + 1),auStack_1c);
    if (iVar1 == 5) {
      iVar1 = FUN_0002d052(auStack_1c,&local_28);
    }
    else {
      iVar1 = FUN_0002d044();
    }
    if (iVar1 == 0) {
      if (param_3 != 0) {
        FUN_0002cfea(auStack_1c,param_3);
      }
      uVar2 = 0;
    }
    else if (iVar1 == 7) {
      uVar2 = 0x86;
    }
    else if ((iVar1 == 8) || (iVar1 == 0xe)) {
      uVar2 = 0x11;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


/* ---- FUN_000333a8 @ 000333a8 ---- */

void FUN_000333a8(void)

{
  FUN_000334bc(0xffff);
  return;
}


/* ---- FUN_000333b0 @ 000333b0 ---- */

undefined4 FUN_000333b0(uint param_1)

{
  if (0xff < param_1) {
    return 7;
  }
  FUN_000334c8();
  FUN_000333d0();
  return 0;
}


/* ---- thunk_FUN_00033550 @ 000333c6 ---- */

undefined4 thunk_FUN_00033550(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_000304b6(DAT_00033560,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- thunk_FUN_00033564 @ 000333ca ---- */

undefined4 thunk_FUN_00033564(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_000304b6(DAT_00033574,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_000333d0 @ 000333d0 ---- */

void FUN_000333d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_40 [4];
  undefined2 local_3c;
  int local_38;
  undefined local_34;
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [16];
  
  iVar1 = DAT_00033444;
  *(undefined *)(DAT_00033444 + 1) = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = 0xffff;
  while( true ) {
    iVar2 = FUN_00033508(iVar2);
    if (iVar2 == 0xffff) {
      return;
    }
    iVar3 = FUN_0002cfda(iVar2 + 0xc000U & 0xffff,auStack_20,&local_28);
    if (iVar3 != 10) break;
    FUN_000334ec(iVar2);
  }
  local_38 = FUN_0002ce2c(iVar2 + 0xc000U & 0xffff);
  if (local_38 != 8) {
    if (local_38 == 0) {
      return;
    }
    FUN_00026484(auStack_40,DAT_00033448,0x18);
    local_3c = (undefined2)iVar2;
    local_34 = 1;
    FUN_000331d0(auStack_40);
    return;
  }
  *(undefined *)(iVar1 + 1) = 1;
  return;
}


/* ---- FUN_0003344c @ 0003344c ---- */

int FUN_0003344c(short param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  FUN_0003347c(param_2);
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_0002cfbc(param_1 + -0x4000,param_2 + 0xc000U & 0xffff,param_3,&local_18);
  if (iVar1 != 0) {
    iVar1 = 5;
  }
  return iVar1;
}


/* ---- FUN_0003347c @ 0003347c ---- */

undefined4 FUN_0003347c(int param_1)

{
  if ((((param_1 != 7) && (param_1 != 1)) && (param_1 != 8)) &&
     (((param_1 != 5 && (param_1 != 6)) && ((param_1 != 9 && (param_1 != 4)))))) {
    return 0;
  }
  return 1;
}


/* ---- FUN_000334a0 @ 000334a0 ---- */

void FUN_000334a0(undefined2 *param_1,undefined param_2,undefined4 param_3,int param_4)

{
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = (short)((param_4 * 0x50 & 0xffffU) + 3 >> 2);
  return;
}


/* ---- FUN_000334bc @ 000334bc ---- */

void FUN_000334bc(undefined4 param_1)

{
  FUN_0002b99a(param_1,DAT_000334c4);
  return;
}


/* ---- FUN_000334c8 @ 000334c8 ---- */

undefined4 FUN_000334c8(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0xffff) && (iVar1 = FUN_0002b99a(param_1,DAT_000334e8), iVar1 == param_1)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_000334ec @ 000334ec ---- */

void FUN_000334ec(undefined4 param_1)

{
  FUN_0003543c(param_1,DAT_00033504);
  FUN_0003543c(param_1,DAT_00033504 + 0x20);
  return;
}


/* ---- FUN_00033508 @ 00033508 ---- */

void FUN_00033508(undefined4 param_1)

{
  FUN_0002ffb4(param_1,DAT_00033510);
  return;
}


/* ---- FUN_00033514 @ 00033514 ---- */

int FUN_00033514(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0002ffb4(param_1,DAT_00033540);
  while( true ) {
    if (iVar1 == 0xffff) {
      return 0xffff;
    }
    iVar2 = FUN_00033564();
    if (iVar2 == 0) break;
    iVar1 = FUN_0002ffb4(iVar1,DAT_00033540);
  }
  return iVar1;
}


/* ---- FUN_00033544 @ 00033544 ---- */

void FUN_00033544(void)

{
  FUN_000264b6(DAT_0003354c,0x40);
  return;
}


/* ---- FUN_00033550 @ 00033550 ---- */

undefined4 FUN_00033550(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_000304b6(DAT_00033560,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_00033564 @ 00033564 ---- */

undefined4 FUN_00033564(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = FUN_000304b6(DAT_00033574,param_1);
    return uVar1;
  }
  return 0;
}


/* ---- FUN_00033578 @ 00033578 ---- */

void FUN_00033578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_00033d88();
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x42c,DAT_000335f4);
  }
  local_10 = 0x3100731;
  local_c = 3;
  iVar1 = FUN_000340b8(&local_10);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x43f,DAT_000335f4);
  }
  iVar1 = FUN_0003408c(DAT_000335f8);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x442,DAT_000335f4);
  }
  return;
}


/* ---- FUN_000335fc @ 000335fc ---- */

undefined4 FUN_000335fc(int param_1,uint param_2,int param_3,int *param_4,int param_5,int *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined uStack_90;
  undefined auStack_8f [16];
  undefined4 local_7f;
  undefined2 local_7b;
  undefined local_79;
  undefined4 local_40;
  undefined *local_3c;
  undefined2 local_38 [2];
  int local_34;
  uint uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  local_3c = &uStack_90;
  bVar1 = false;
  local_38[0] = 0x50;
  bVar2 = false;
  if ((param_3 != 0) && (param_4 != (int *)0x0)) {
    bVar1 = true;
    *param_4 = 0;
  }
  if ((param_5 != 0) && (param_6 != (int *)0x0)) {
    bVar2 = true;
    *param_6 = 0;
  }
  local_40 = 0;
  uVar5 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  while( true ) {
    if (param_2 <= uVar5) {
      return 0;
    }
    FUN_000264b6(&uStack_90,0x50);
    iVar3 = FUN_000332bc(*(undefined2 *)(local_34 + uVar5 * 2),7,&local_40,local_38);
    if ((iVar3 == 5) || (iVar3 == 7)) break;
    if (((byte)local_7f >> 1 != 0) && ((byte)local_7f >> 1 != 1)) {
      return 0x3202;
    }
    if (bVar1) {
      puVar4 = (undefined4 *)(uVar5 * 7 + param_3);
      *puVar4 = local_7f;
      *(undefined2 *)(puVar4 + 1) = local_7b;
      *(undefined *)((int)puVar4 + 6) = local_79;
      *param_4 = *param_4 + 1;
    }
    if (bVar2) {
      FUN_00026484(param_5 + uVar5 * 0x10,auStack_8f,0x10);
      *param_6 = *param_6 + 1;
    }
    uVar5 = uVar5 + 1;
  }
  return 5;
}


/* ---- FUN_000336be @ 000336be ---- */

undefined4 FUN_000336be(int *param_1)

{
  if ((*param_1 != 1) && (*param_1 != 2)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_000336d0 @ 000336d0 ---- */

int FUN_000336d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00030534(param_1,DAT_000336e0);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


/* ---- FUN_000336e4 @ 000336e4 ---- */

void FUN_000336e4(uint param_1)

{
  *(byte *)(DAT_000336fc + (param_1 >> 3)) =
       *(byte *)(DAT_000336fc + (param_1 >> 3)) & ~(byte)(1 << (param_1 & 7));
  return;
}


/* ---- FUN_00033700 @ 00033700 ---- */

undefined4 FUN_00033700(int param_1)

{
  if ('\a' < *(char *)(param_1 + DAT_00033714 + 0x30)) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00033718 @ 00033718 ---- */

undefined4 FUN_00033718(int param_1)

{
  if (*(byte *)(param_1 + DAT_0003372c + 0x30) < 8) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00033730 @ 00033730 ---- */

uint FUN_00033730(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    uVar2 = 0xff;
    for (uVar3 = 0; uVar3 < (uint)param_1[2]; uVar3 = uVar3 + 1 & 0xff) {
      iVar1 = FUN_0003044c(param_1[1],uVar3);
      DataMemoryBarrier(0x1f);
      if (iVar1 == 1) {
        if (uVar2 != 0xff) {
          for (; uVar2 < uVar3; uVar2 = uVar2 + 1 & 0xff) {
            FUN_000337e0(param_1,uVar2);
          }
          uVar2 = 0xff;
        }
      }
      else {
        if (uVar2 == 0xff) {
          uVar2 = uVar3;
        }
        if ((uVar3 - uVar2) + 1 == param_2) {
          return uVar2;
        }
      }
    }
  }
  return 0xff;
}


/* ---- FUN_00033794 @ 00033794 ---- */

undefined4 FUN_00033794(int *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) &&
     ((((uint)(param_5 * param_6) < param_3 || param_5 * param_6 - param_3 == 0 && (param_5 != 0))
      && (param_6 != 0)))) {
    *param_1 = param_2;
    param_1[1] = param_4;
    param_1[2] = param_5;
    param_1[3] = param_6;
    return 0;
  }
  return 7;
}


/* ---- FUN_000337b8 @ 000337b8 ---- */

int FUN_000337b8(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = thunk_FUN_000304b6(), iVar1 != 0)))) {
    return param_2 * param_1[3] + *param_1;
  }
  return 0;
}


/* ---- FUN_000337e0 @ 000337e0 ---- */

void FUN_000337e0(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_2 != 0xff && (iVar1 = thunk_FUN_000304b6(), iVar1 != 0)))) {
    DataMemoryBarrier(0x1f);
    FUN_000304f2(param_1[1] + (param_2 >> 5) * 4,~(1 << (param_2 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_00033812 @ 00033812 ---- */

void FUN_00033812(undefined4 param_1,undefined *param_2)

{
  if (param_2 != (undefined *)0x0) {
    FUN_0002a5dc(param_1,*(undefined *)(DAT_00036514 + 3),*param_2);
    return;
  }
  return;
}


/* ---- FUN_0003381c @ 0003381c ---- */

undefined4 FUN_0003381c(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*DAT_00033890 == '\0') {
    return 8;
  }
  if (param_2 != (byte *)0x0) {
    iVar2 = FUN_0002a570(param_1);
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        bVar1 = *param_2 | 1;
      }
      else {
        bVar1 = *param_2 & 0xfe;
      }
      *param_2 = bVar1;
      iVar2 = FUN_0002e574(param_1);
      if (iVar2 == 0xffff) {
        bVar1 = *param_2 & 0xf7;
      }
      else {
        bVar1 = *param_2 | 8;
      }
      *param_2 = bVar1;
      uVar3 = FUN_0002a4e0(param_1);
      *param_2 = *param_2 & 0xfd | (byte)((uVar3 & 1) << 1);
      uVar3 = FUN_0002a52c(param_1);
      *param_2 = *param_2 & 0xfb | (byte)((uVar3 & 1) << 2);
      return 0;
    }
    return 0x3002;
  }
  return 0xe;
}


/* ---- FUN_00033894 @ 00033894 ---- */

int FUN_00033894(void)

{
  int iVar1;
  
  if (*DAT_000338ac != '\0') {
    iVar1 = FUN_00036330();
    if (iVar1 == 8) {
      iVar1 = 0x11;
    }
    return iVar1;
  }
  return 8;
}


/* ---- FUN_000338b0 @ 000338b0 ---- */

undefined4 FUN_000338b0(void)

{
  undefined4 uVar1;
  
  if (*DAT_000338c0 != '\0') {
    uVar1 = FUN_0002e39c();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_000338c4 @ 000338c4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000338c4(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined auStack_2c [20];
  undefined2 local_18 [2];
  
  FUN_00033cfc();
  FUN_00033ba0(param_1);
  puVar2 = DAT_00033abc;
  bVar1 = *param_1;
  if (bVar1 == 4) {
    local_60[0] = *DAT_00033b98;
    FUN_00033812(*(undefined2 *)(DAT_00033abc + 4),local_60);
  }
  else if (bVar1 < 5) {
    if (bVar1 == 0) {
      if (*(short *)(param_1 + 4) != -1) {
        local_18[0] = 0xec;
        iVar4 = FUN_00033eb8(*(short *)(param_1 + 4),_DAT_00033ad4,local_18);
        if (iVar4 == 5) {
          FUN_00034324(s_Could_not_find_the_remote_databa_00033afc);
          iVar4 = FUN_000307e0(_DAT_00033ac0,*(undefined2 *)(param_1 + 2),0);
          if (iVar4 != 0) {
            FUN_00026218(iVar4,0x160,s__________main_c_00033ac3 + 1);
          }
          puVar3 = DAT_00033abc;
          *puVar2 = 0;
          puVar2[1] = 0;
          FUN_000264b6(puVar3 + 0x24,0x2cc);
          iVar4 = FUN_0002a71c(DAT_00033abc + 0x24,*(undefined2 *)(param_1 + 2));
          if (iVar4 == 0) {
            return;
          }
          uVar5 = 0x167;
        }
        else {
          if (iVar4 != 0) {
            FUN_00026218(iVar4,0x16d,s__________main_c_00033ac3 + 1);
          }
          FUN_00034324(s_Remote_Database_loaded_from_flas_00033ad7 + 1);
          FUN_00026484(auStack_2c,_DAT_00033ad4 + 10,0x12);
          iVar4 = FUN_000307e0(_DAT_00033ac0,*(undefined2 *)(param_1 + 2),auStack_2c);
          if (iVar4 != 0) {
            FUN_00026218(iVar4,0x175,s__________main_c_00033ac3 + 1);
          }
          FUN_00030794(_DAT_00033ac0,1);
          local_58 = *(undefined4 *)(_DAT_00033ad4 + 0x80);
          local_54 = *(undefined4 *)(_DAT_00033ad4 + 0x84);
          local_50 = *(undefined2 *)(_DAT_00033ad4 + 0x88);
          local_4e = *(undefined4 *)(_DAT_00033ad4 + 0x92);
          local_4a = *(undefined4 *)(_DAT_00033ad4 + 0x96);
          local_46 = *(undefined2 *)(_DAT_00033ad4 + 0x9a);
          local_44 = *(undefined2 *)(_DAT_00033ad4 + 0x9c);
          local_3e = *(undefined4 *)(_DAT_00033ad4 + 0xa4);
          local_3a = *(undefined4 *)(_DAT_00033ad4 + 0xa8);
          local_36 = *(undefined2 *)(_DAT_00033ad4 + 0xac);
          local_34 = *(undefined2 *)(_DAT_00033ad4 + 0xae);
          iVar4 = FUN_000305a2(_DAT_00033ac0 + 0x20,*(undefined2 *)(param_1 + 2),local_60);
          if (iVar4 == 0) {
            return;
          }
          uVar5 = 0x187;
        }
        FUN_00026218(iVar4,uVar5,s__________main_c_00033ac3 + 1);
      }
    }
    else if (bVar1 == 2) {
      iVar4 = FUN_000307e0(_DAT_00033ac0,*(undefined2 *)(param_1 + 2),0);
      if (iVar4 != 0) {
        FUN_00026218(iVar4,0x195,s__________main_c_00033ac3 + 1);
      }
      puVar3 = DAT_00033abc;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_000264b6(puVar3 + 0x24,0x2cc);
      iVar4 = FUN_0002a71c(DAT_00033abc + 0x24,*(undefined2 *)(param_1 + 2));
      if (iVar4 != 0) {
        uVar5 = 0x19c;
LAB_00033aa0:
        FUN_00026218(iVar4,uVar5,s__________main_c_00033ac3 + 1);
        return;
      }
    }
  }
  else if (bVar1 == 8) {
    if (((param_1[0x10] & 1) != 0) && (param_1[8] == 7)) {
      FUN_00034324(s_New_Bond__add_the_peer_to_the_wh_00033b2c);
      FUN_00034324(s_m_whitelist_peer_cnt__d__MAX_PEE_00033b64,*(int *)(puVar2 + 0x14) + 1,8);
      iVar4 = DAT_00033b94;
      uVar6 = *(uint *)(puVar2 + 0x14);
      if (uVar6 < 8) {
        *(undefined2 *)(DAT_00033b94 + uVar6 * 2) = *(undefined2 *)(param_1 + 4);
        *(uint *)(puVar2 + 0x14) = uVar6 + 1;
        iVar4 = FUN_000338b0(iVar4);
        if (iVar4 != 6) {
          if (iVar4 == 0x3205) {
            return;
          }
          if (iVar4 != 0) {
            FUN_00026218(iVar4,0x1bc,s__________main_c_00033ac3 + 1);
          }
        }
        iVar4 = FUN_00034104(DAT_00033b94,*(undefined4 *)(puVar2 + 0x14));
        if (iVar4 != 0) {
          uVar5 = 0x1c1;
          goto LAB_00033aa0;
        }
      }
    }
  }
  else if (bVar1 == 0xc) {
    FUN_00027c40(0);
    return;
  }
  return;
}


/* ---- FUN_00033ba0 @ 00033ba0 ---- */

void FUN_00033ba0(undefined *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_18;
  
  iVar3 = DAT_00033cd8;
  iVar5 = DAT_00033cd8 + 0xc;
  local_18 = param_4;
  switch(*param_1) {
  case 0:
    iVar4 = FUN_00033f84(*(undefined2 *)(param_1 + 4));
    if ((iVar4 == 0x86) || (iVar4 == 0x11)) {
      iVar4 = *(int *)(iVar3 + 8);
      *(undefined2 *)(iVar5 + iVar4 * 2) = *(undefined2 *)(param_1 + 4);
      *(int *)(iVar3 + 8) = (iVar4 + 1) % 8;
      goto LAB_00033cd0;
    }
    if (iVar4 == 6) {
      return;
    }
    if (iVar4 == 7) {
      return;
    }
    if (iVar4 == 0x13) {
      return;
    }
    if (iVar4 == 0) {
      return;
    }
    uVar1 = 0x14e;
    goto LAB_00033c7c;
  case 2:
    if ((param_1[8] == '\x01') || (param_1[8] == '\0')) {
      FUN_00035144(*(undefined2 *)(param_1 + 4),*param_1,param_3,param_4);
      return;
    }
    break;
  case 6:
    if (*(char *)(DAT_00033cd8 + 1) != '\0') {
      return;
    }
    if (*(char *)(DAT_00033cd8 + 2) == '\0') {
      iVar5 = FUN_00033f88(0,0,&local_18);
      if (iVar5 == 0) {
        iVar5 = FUN_00033f4c(local_18 & 0xffff);
        if (iVar5 == 0) {
          *(undefined *)(iVar3 + 2) = 1;
          goto LAB_00033c6c;
        }
        FUN_00026218(iVar5,0x176,DAT_00033cdc);
        *(undefined *)(iVar3 + 2) = 1;
      }
      if ((iVar5 != 5) && (iVar5 != 6)) {
        FUN_00026218(iVar5,0x183,DAT_00033cdc);
      }
    }
    else {
LAB_00033c6c:
      iVar4 = FUN_0002ce70();
      if (iVar4 == 0) {
        *(undefined *)(iVar3 + 1) = 1;
        return;
      }
      if (iVar4 != 8) {
        uVar1 = 400;
LAB_00033c7c:
        FUN_00026218(iVar4,uVar1,DAT_00033cdc,local_18);
        return;
      }
    }
    break;
  case 8:
  case 10:
    *(undefined *)(DAT_00033cd8 + 2) = 1;
    return;
  case 0x13:
    *(undefined *)(DAT_00033cd8 + 1) = 0;
    *(undefined *)(iVar3 + 2) = 0;
    iVar4 = *(int *)(iVar3 + 8);
    iVar3 = 0;
    do {
      psVar2 = (short *)(iVar5 + ((iVar3 + iVar4) % 8) * 2);
      if (*psVar2 != -1) {
        *psVar2 = -1;
        FUN_00035144();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    return;
  case 0x14:
    *(undefined *)(DAT_00033cd8 + 1) = 0;
    if ((param_1[0xc] == '\0') || ((*(int *)(param_1 + 8) != 0xe && (*(int *)(param_1 + 8) != 1))))
    {
      return;
    }
LAB_00033cd0:
    FUN_00033ce0();
    return;
  }
  return;
}


/* ---- FUN_00033ce0 @ 00033ce0 ---- */

void FUN_00033ce0(void)

{
  undefined auStack_20 [32];
  
  FUN_00026484(auStack_20,DAT_00033cf8,0x18);
  FUN_00033ba0(auStack_20);
  return;
}


/* ---- FUN_00033cfc @ 00033cfc ---- */

void FUN_00033cfc(char *param_1)

{
  if (*param_1 == '\0') {
    FUN_0002c4bc(*(undefined2 *)(param_1 + 2),0);
    return;
  }
  if ((*param_1 == '\a') && (*(int *)(param_1 + 8) != 0)) {
    FUN_00026218(*(int *)(param_1 + 8),0x119,DAT_00033d20);
    return;
  }
  return;
}


/* ---- FUN_00033d24 @ 00033d24 ---- */

void FUN_00033d24(short *param_1)

{
  if (*param_1 == 0x10) {
    FUN_00034324(s_Connected__securing_connection__c_00033d44,param_1[2]);
    FUN_0002c4bc(param_1[2],0);
    return;
  }
  return;
}


/* ---- thunk_FUN_0002cacc @ 00033d84 ---- */

void thunk_FUN_0002cacc(void)

{
  FUN_0002cacc();
  return;
}


/* ---- FUN_00033d88 @ 00033d88 ---- */

undefined4 FUN_00033d88(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_000331e0();
  if ((((iVar2 == 0) && (iVar2 = FUN_00032fc0(), iVar2 == 0)) &&
      (iVar2 = FUN_000362f4(), iVar2 == 0)) &&
     (((iVar2 = FUN_00036518(), iVar2 == 0 && (iVar2 = FUN_0002ded0(), iVar2 == 0)) &&
      (iVar2 = FUN_0002e0bc(), puVar1 = DAT_00033dc8, iVar2 == 0)))) {
    *(undefined2 *)(DAT_00033dc8 + 4) = 0xffff;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1[1] = 0;
    *puVar1 = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_00033dcc @ 00033dcc ---- */

undefined4 FUN_00033dcc(undefined4 param_1)

{
  int iVar1;
  
  if (*DAT_00033df0 != '\0') {
    do {
      param_1 = thunk_FUN_00033514(param_1);
      iVar1 = thunk_FUN_00033564();
    } while (iVar1 != 0);
    return param_1;
  }
  return 0xffff;
}


/* ---- FUN_00033df4 @ 00033df4 ---- */

void FUN_00033df4(char *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  undefined4 local_28;
  char local_24;
  
  uVar2 = FUN_0002e35c(*(undefined2 *)(param_1 + 4));
  *(undefined2 *)(param_1 + 2) = uVar2;
  iVar1 = DAT_00033e8c;
  if (*param_1 == '\n') {
    if (((*(char *)(DAT_00033e8c + 2) != '\0') &&
        (iVar3 = thunk_FUN_00033514(0xffff), iVar3 == 0xffff)) &&
       (iVar3 = thunk_FUN_00033508(0xffff), iVar3 == 0xffff)) {
      *(undefined *)(iVar1 + 2) = 0;
      FUN_000264b6(local_30,0x18);
      local_30[0] = 0xc;
      goto LAB_00033e6e;
    }
  }
  else if ((*param_1 == '\v') && (*(char *)(DAT_00033e8c + 2) != '\0')) {
    *(undefined *)(DAT_00033e8c + 2) = 0;
    FUN_000264b6(local_30,0x18);
    local_30[0] = 0xd;
    local_28 = *(undefined4 *)(param_1 + 8);
    local_24 = param_1[0xc];
LAB_00033e6e:
    local_2c = 0xffff;
    local_2e = 0xffff;
    FUN_0002cacc(param_1);
    FUN_0002cacc(local_30);
    return;
  }
  FUN_0002cacc(param_1);
  return;
}


/* ---- FUN_00033e90 @ 00033e90 ---- */

undefined4 FUN_00033e90(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  int iStack_c;
  
  if (*DAT_00033eb4 == '\0') {
    return 8;
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    local_10 = 0;
    iStack_c = param_3;
    uVar1 = FUN_000332bc(param_1,param_2,&local_10);
    return uVar1;
  }
  return 0xe;
}


/* ---- FUN_00033eb8 @ 00033eb8 ---- */

void FUN_00033eb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00033e90(param_1,5,param_2,param_3);
  return;
}


/* ---- FUN_00033ec2 @ 00033ec2 ---- */

void FUN_00033ec2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00033ed4(param_1,5,param_2,param_3,param_4);
  return;
}


/* ---- FUN_00033ed4 @ 00033ed4 ---- */

undefined4 FUN_00033ed4(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  
  if (*DAT_00033f48 == '\0') {
    uVar1 = 8;
  }
  else if (param_3 == 0) {
    uVar1 = 0xe;
  }
  else if ((param_4 - (param_4 + -1) % 4) + 3 == param_4) {
    if ((param_2 == 7) &&
       (local_20 = param_3, local_1c = param_4, iVar2 = FUN_0002e446(param_3,param_1),
       iVar2 != 0xffff)) {
      uVar1 = 0xf;
    }
    else {
      local_20 = (uint)CONCAT12((char)param_2,(short)(param_4 + 3U >> 2));
      local_1c = param_3;
      uVar1 = FUN_0003332e(param_1,&local_20,param_5);
    }
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}


/* ---- FUN_00033f4c @ 00033f4c ---- */

undefined4 FUN_00033f4c(void)

{
  undefined4 uVar1;
  
  if (*DAT_00033f5c != '\0') {
    uVar1 = FUN_0002e548();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00033f60 @ 00033f60 ---- */

undefined4 FUN_00033f60(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  if (*DAT_00033f80 == '\0') {
    return 8;
  }
  if (param_2 != (undefined2 *)0x0) {
    uVar1 = FUN_0002e574();
    *param_2 = uVar1;
    return 0;
  }
  return 0xe;
}


/* ---- FUN_00033f84 @ 00033f84 ---- */

undefined4 FUN_00033f84(void)

{
  return 6;
}


/* ---- FUN_00033f88 @ 00033f88 ---- */

undefined4 FUN_00033f88(void)

{
  return 6;
}


/* ---- FUN_00033f8c @ 00033f8c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00033f8c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*_DAT_00034004 == '\0') {
    return 8;
  }
  _DAT_00034004[2] = '\x01';
  FUN_00034324(s___pm_peers_delete__A_00034007 + 1);
  iVar1 = thunk_FUN_00033514(0xffff);
  if (iVar1 == 0xffff) {
    FUN_00034324(s___pm_peers_delete__B_00034020);
    FUN_00034324(s___pm_peers_delete__C_00034038);
  }
  else {
    FUN_00034324(s___pm_peers_delete__C_00034038);
    while (iVar1 != 0xffff) {
      iVar2 = FUN_00033f4c(iVar1);
      if (iVar2 != 0) {
        uVar3 = FUN_00031530();
        FUN_00034324(DAT_00034054,DAT_00034050,uVar3,iVar1);
        return 3;
      }
      iVar1 = thunk_FUN_00033514(iVar1);
      FUN_00034324(s___pm_peers_delete__D__d_00034058,iVar1);
    }
  }
  FUN_00034324(s___pm_peers_delete__E_00034074);
  return 0;
}


/* ---- FUN_0003408c @ 0003408c ---- */

undefined4 FUN_0003408c(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = DAT_000340b0;
  if (*DAT_000340b0 == '\0') {
    return 8;
  }
  bVar1 = DAT_000340b0[3];
  if (2 < bVar1) {
    return 4;
  }
  *(undefined4 *)(DAT_000340b4 + (uint)bVar1 * 4) = param_1;
  pcVar2[3] = bVar1 + 1;
  return 0;
}


/* ---- FUN_000340b8 @ 000340b8 ---- */

undefined4 FUN_000340b8(void)

{
  undefined4 uVar1;
  
  if (*DAT_000340c8 != '\0') {
    uVar1 = FUN_00036380();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_000340cc @ 000340cc ---- */

void FUN_000340cc(int param_1)

{
  if (param_1 != 0) {
    FUN_0002cacc();
    return;
  }
  return;
}


/* ---- FUN_000340d8 @ 000340d8 ---- */

undefined4 FUN_000340d8(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*DAT_00034100 == '\0') {
    uVar1 = 8;
  }
  else {
    if ((((param_1 | param_3) != 0) && ((param_1 == 0 || (param_2 != 0)))) &&
       ((param_3 == 0 || (param_4 != 0)))) {
      uVar1 = FUN_0002e5d4();
      return uVar1;
    }
    uVar1 = 0xe;
  }
  return uVar1;
}


/* ---- FUN_00034104 @ 00034104 ---- */

undefined4 FUN_00034104(void)

{
  undefined4 uVar1;
  
  if (*DAT_00034114 != '\0') {
    uVar1 = FUN_0002e60c();
    return uVar1;
  }
  return 8;
}


/* ---- FUN_00034118 @ 00034118 ---- */

void FUN_00034118(undefined *param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  if (param_2 == (undefined *)0x0) {
    FUN_00026218(0,0x66,s___________________components_ble_00034154);
  }
  if (param_1 == (undefined *)0x0) {
    FUN_00026218(0,0x67,s___________________components_ble_00034154);
  }
  *param_1 = *param_2;
  uVar1 = *(undefined2 *)(param_2 + 2);
  param_1[1] = (char)uVar1;
  param_1[2] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_2 + 4);
  param_1[3] = (char)uVar1;
  param_1[4] = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_2 + 6);
  param_1[5] = (char)uVar1;
  param_1[6] = (char)((ushort)uVar1 >> 8);
  return;
}


/* ---- FUN_00034194 @ 00034194 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034194(int param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  
  iVar1 = _DAT_000341e8;
  if (*(char *)(_DAT_000341e8 + 0x50) != '\x01') {
    cVar3 = FUN_0002dffc();
    FUN_00034324(s_____get_charge_state___x_000341eb + 1,cVar3);
    puVar2 = DAT_00034208;
    *(char *)(iVar1 + 9) = cVar3;
    if (cVar3 == '\x01') {
      *puVar2 = 1;
      FUN_000349f4();
      return;
    }
    if (cVar3 == '\x02') {
      *puVar2 = 1;
      FUN_000348dc();
      return;
    }
    if ((cVar3 == '\0') && (param_1 != 0)) {
      FUN_00027c40(0);
      return;
    }
  }
  return;
}


/* ---- FUN_0003420c @ 0003420c ---- */

void FUN_0003420c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_00034268 != '\0') {
    iVar3 = FUN_00030e60(6);
    iVar2 = DAT_0003426c;
    if (iVar3 == 0) {
      if (*(char *)(DAT_0003426c + 2) == '\0') {
        if (0x1022 < *(uint *)(DAT_0003426c + 8)) {
          *(undefined *)(DAT_0003426c + 2) = 1;
          FUN_000348dc();
        }
      }
      else if (*(uint *)(DAT_0003426c + 8) < 0x1022) {
        *(undefined *)(DAT_0003426c + 2) = 0;
        FUN_000349f4();
      }
      *(undefined *)(iVar2 + 4) = 5;
    }
    else {
      cVar1 = *(char *)(DAT_0003426c + 4);
      if (cVar1 != '\0') {
        *(char *)(DAT_0003426c + 4) = cVar1 + -1;
        if (cVar1 == '\x01') {
          *(undefined *)(iVar2 + 2) = 1;
          FUN_000348dc();
          return;
        }
      }
    }
  }
  return;
}


/* ---- FUN_00034270 @ 00034270 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034270(void)

{
  int iVar1;
  
  iVar1 = DAT_00034288;
  _DAT_5000050c = 0;
  *(undefined *)(DAT_00034288 + 0x2f) = 0;
  *(undefined *)(iVar1 + 0x30) = 0;
  FUN_000290a4();
  return;
}


/* ---- FUN_0003428c @ 0003428c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003428c(void)

{
  FUN_00030e1a(0xffffffff);
  _DAT_50000508 = 0;
  *(undefined *)(DAT_000342ac + 0x2f) = 1;
  return;
}


/* ---- FUN_000342b0 @ 000342b0 ---- */

void FUN_000342b0(void)

{
  FUN_00034324(s______The_device_will_reboot_now__000342d0);
  DataSynchronizationBarrier(0xf);
  *DAT_000342f4 = *DAT_000342f4 & 0x700 | DAT_000342f8;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- debug_printf @ 000342fc ---- */

void debug_printf(void)

{
  return;
}


/* ---- FUN_00034300 @ 00034300 ---- */

void FUN_00034300(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    FUN_00034324(&LAB_0003431c,*(undefined *)(param_1 + iVar1));
  }
  return;
}


/* ---- FUN_00034320 @ 00034320 ---- */

void FUN_00034320(void)

{
  return;
}


/* ---- FUN_00034322 @ 00034322 ---- */

void FUN_00034322(void)

{
  return;
}


/* ---- FUN_00034324 @ 00034324 ---- */

void FUN_00034324(void)

{
  return;
}


/* ---- FUN_00034326 @ 00034326 ---- */

void FUN_00034326(void)

{
  return;
}


/* ---- FUN_00034328 @ 00034328 ---- */

void FUN_00034328(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    FUN_00034324(&LAB_00034344,*(undefined *)(param_1 + iVar1));
  }
  return;
}


/* ---- FUN_00034348 @ 00034348 ---- */

void FUN_00034348(void)

{
  return;
}


/* ---- FUN_0003434c @ 0003434c ---- */

void FUN_0003434c(int param_1)

{
  FUN_00034324(s___________flash_info___________00034374);
  FUN_00034324(s_erase_unit___d_bytes_00034398,**(undefined4 **)(param_1 + 4));
  FUN_00034324(s_program_unit___d_bytes_000343b0,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  FUN_00034324(s________________________________000343cc);
  return;
}


/* ---- process_app_cmd @ 000343f0 ---- */
/* 0x25..0x35 (0x35 = [0x35,0,0x88] toggles two input flags) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* 0x25..0x35 (0x35 = [0x35,0,0x88] toggles two input flags) */

void process_app_cmd(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_1 == (undefined *)0x0) && (param_2 != 0)) {
    return;
  }
  debug_printf(s_process_app_cmd__x_00034638,*param_1);
  puVar2 = DAT_00034654;
  iVar5 = DAT_00034650;
  iVar7 = DAT_00034650 + 8;
  switch(*param_1) {
  case 0x25:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      iVar5 = FUN_000264da(param_1 + 2,DAT_00034658,4);
      if (iVar5 != 0) {
        return;
      }
      uVar4 = debug_printf(s_Goto_DFU_mode__Restart_now__0003465c);
      FUN_0002a7aa(uVar4,param_2,param_3,param_4);
      return;
    }
    goto LAB_00034456;
  case 0x26:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      *(undefined *)(DAT_00034650 + 0x1c) = 0;
      input_flag_clear(1);
      input_flag_set(0);
      *(undefined *)(iVar5 + 8) = 0x85;
      FUN_000302b0(iVar7);
      pcVar6 = param_1 + 2;
      if (*pcVar6 != '\x01') {
        cmd26_led_motor_ctrl_execute(pcVar6,param_2,param_3,param_4);
        return;
      }
      debug_printf(s_add_APP_CMD_LED_MOTOR_CTRL_packe_000346b0);
      iVar5 = led_motor_ctrl_queue_add(pcVar6);
      if (iVar5 != 0) {
        return;
      }
      pcVar6 = s_led_motor_ctrl_queue_add_ERROR__000346e0;
      goto LAB_0003460a;
    }
    goto LAB_00034456;
  case 0x27:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      config_cmd_process(param_1 + 2,param_2,param_3,param_4);
      return;
    }
    FUN_00034324(s_BondTouch_has_not_been_certified_0003467c,param_2,param_3,param_4);
    return;
  case 0x29:
    if (((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) &&
       (iVar5 = FUN_000264da(param_1 + 2,DAT_00034658,4), iVar5 != 0)) {
      FUN_0002cce4(iVar5,param_2,param_3,param_4);
      return;
    }
    break;
  case 0x2a:
    if (((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) &&
       (iVar5 = FUN_000264da(param_1 + 2,DAT_00034658,4), iVar5 == 0)) {
      FUN_000342b0(0,param_2,param_3,param_4);
      return;
    }
    break;
  case 0x31:
    if (((*(char *)(DAT_00034650 + 8) == -0x7c) && (*(char *)(DAT_00034650 + 0xd) == '\x13')) &&
       (iVar3 = FUN_000264da(param_1 + 2,DAT_00034658,4), iVar3 == 0)) {
      FUN_0003907c();
      iVar3 = DAT_00034704;
      *(undefined4 *)(DAT_00034704 + 8) = *(undefined4 *)(iVar5 + 0x20);
      *_DAT_00034708 = 0;
      FUN_00038024(iVar3 + 8);
      input_flag_set(0);
      input_flag_clear(1);
      leds_req_breath(0xffffff,0x1e,200);
      motor_on(0x50,300);
      *(undefined *)(iVar5 + 8) = 0x85;
      FUN_000302b0(iVar7,0x32,0x32,1000);
      return;
    }
    break;
  case 0x32:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      *DAT_00034654 = 0;
      if (param_1[2] == '\x11') {
        uVar4 = debug_printf(s_CMD_EXECUTE_QUEUE_LED_MOTOR_CTRL_00034754);
        start_execute_queue_led_motor_ctrl(uVar4,param_2,param_3,param_4);
        return;
      }
      if (param_1[2] != '\"') {
        return;
      }
      uVar4 = debug_printf(s_CMD_EXECUTE_QUEUE_LED_MOTOR_TEST_0003470b + 1);
      start_execute_queue_led_motor_test(uVar4,param_2,param_3,param_4);
      return;
    }
    pcVar6 = s_BondTouch_has_not_been_certified_00034730;
    goto LAB_0003460a;
  case 0x33:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      debug_printf(s_add_APP_CMD_MOTOR_LED_TEST_packe_00034778);
      *puVar2 = 2;
      iVar5 = led_motor_test_queue_add(param_1 + 2);
      if (iVar5 != 0) {
        return;
      }
      pcVar6 = s_led_motor_test_queue_add_ERROR__000347a8;
      goto LAB_0003460a;
    }
LAB_00034456:
    pcVar6 = s_BondTouch_has_not_been_certified_0003467c;
LAB_0003460a:
    debug_printf(pcVar6,param_2,param_3,param_4);
    return;
  case 0x34:
    if ((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) {
      if (param_1[2] == '\x11') {
        *(undefined *)(DAT_00034650 + 0x1b) = 1;
      }
      else if (param_1[2] == '\"') {
        *(undefined *)(DAT_00034650 + 0x1b) = 0;
      }
    }
    break;
  case 0x35:
    if (((0x84 < *(byte *)(DAT_00034650 + 8)) && (*(byte *)(DAT_00034650 + 8) != 0xff)) &&
       (param_1[2] == -0x78)) {
      bVar1 = DAT_00034654[1];
      DAT_00034654[1] = bVar1 ^ 1;
      if ((bVar1 ^ 1) == 0) {
        input_flag_set(0);
        input_flag_set(1,param_2,param_3,param_4);
        return;
      }
      input_flag_clear();
      input_flag_clear(1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}


/* ---- FUN_000347cc @ 000347cc ---- */

void FUN_000347cc(ushort *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0003485c;
  if ((param_1 != (ushort *)0x0) || (param_2 == 4)) {
    uVar4 = ((*param_1 & 0xff) << 8 | (uint)(*param_1 >> 8)) << 0x10 |
            (uint)*(byte *)(param_1 + 1) << 8 | (uint)*(byte *)((int)param_1 + 3);
    *(uint *)(DAT_0003485c + 0x20) = uVar4;
    if (*(char *)(iVar1 + 8) == -0x7d) {
      FUN_0003907c();
      if (*(uint *)(DAT_00034860 + 8) == uVar4) {
        input_flag_set(0);
        input_flag_clear(1);
        *(undefined *)(iVar1 + 8) = 0x85;
        uVar3 = 0x11;
        local_20 = param_2;
        uStack_1c = param_3;
        local_18 = param_4;
      }
      else {
        local_20 = 1000;
        uStack_1c = 500;
        local_18 = 30000;
        leds_req_breath(*(undefined4 *)(DAT_00034860 + 0x40),0x1e,0xfa);
        FUN_00039014(30000,DAT_00034864);
        *(undefined *)(iVar1 + 8) = 0x84;
        uVar3 = 0x12;
      }
      *(undefined *)(iVar1 + 0xd) = uVar3;
      *(undefined *)(iVar1 + 0xe) = 0;
      iVar2 = DAT_0003485c;
      *(undefined4 *)(iVar1 + 0xf) = 0;
      *(undefined4 *)(iVar1 + 0x13) = 0;
      FUN_00030234(iVar2 + 0xd);
      FUN_000302b0(DAT_0003485c + 8,local_20,uStack_1c,local_18);
      return;
    }
  }
  return;
}


/* ---- FUN_00034868 @ 00034868 ---- */

void FUN_00034868(void)

{
  int iVar1;
  
  iVar1 = DAT_000348c8;
  *(undefined *)(DAT_000348c8 + 8) = 1;
  input_flag_set(0);
  input_flag_clear(1);
  motor_off();
  leds_off();
  FUN_000386e4();
  FUN_00038610();
  FUN_000388bc();
  FUN_0003907c();
  FUN_0002e9e0();
  FUN_0002eaa8();
  *(undefined *)(iVar1 + 0x1b) = 0;
  FUN_00027a9a();
  if (((*(char *)(DAT_000348cc + 0x27) == '\x01') && (*(char *)(iVar1 + 9) == '\0')) &&
     (*DAT_000348d0 == '\0')) {
    FUN_00038394(100);
    return;
  }
  return;
}


/* ---- FUN_000348dc @ 000348dc ---- */

void FUN_000348dc(void)

{
  leds_off();
  FUN_000384e4(0xffffff,0x1e,0);
  input_flag_clear(0);
  input_flag_clear(1);
  FUN_000302b0(DAT_00034904);
  return;
}


/* ---- FUN_00034908 @ 00034908 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034908(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000349c4;
  cVar1 = *(char *)(DAT_000349c4 + 0x51);
  if (cVar1 == '\x01') {
LAB_000349a4:
    uVar3 = 0xff0000;
  }
  else {
    uVar3 = 0xff00;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        uVar3 = 0xff;
      }
      else {
        if (cVar1 == '\x04') {
          FUN_0002fe38(0x50);
          *(undefined *)(iVar2 + 0xb) = 1;
LAB_00034988:
          leds_off();
          goto LAB_0003494c;
        }
        if (cVar1 == '\x05') {
          FUN_0002fe78();
          iVar2 = FUN_0002e85e();
          if (iVar2 == 0) goto LAB_000349a4;
        }
        else {
          if (cVar1 == '\x06') goto LAB_00034988;
          if (cVar1 != '\a') goto LAB_0003494c;
          uVar3 = 0xffffff;
        }
      }
    }
  }
  FUN_0002f2d0(uVar3,uVar3,uVar3,100,100,100);
LAB_0003494c:
  FUN_000302b0(DAT_000349c4 + 8);
  if ((_DAT_50000510 << 0x12) >> 0x1f == -0x19) {
    return;
  }
  DataSynchronizationBarrier(0xf);
  *DAT_000349c8 = *DAT_000349c8 & 0x700 | DAT_000349cc;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_000349d0 @ 000349d0 ---- */

void FUN_000349d0(void)

{
  *(char *)(DAT_000349ec + 0x1c) = *(char *)(DAT_000349ec + 0x1c) + '\x01';
  FUN_0003907c();
  FUN_00039014(30000,DAT_000349f0);
  return;
}


/* ---- FUN_000349f4 @ 000349f4 ---- */

void FUN_000349f4(void)

{
  undefined4 uVar1;
  
  *DAT_00034a28 = 0;
  leds_req_breath(0xffffff,0x1e,400,400);
  input_flag_clear(0);
  uVar1 = input_flag_clear(1);
  FUN_0002ba30(uVar1,0,200,0);
  return;
}


/* ---- FUN_00034a2c @ 00034a2c ---- */

void FUN_00034a2c(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00034324(s_process_msg_double_tap_detected__00034a74);
  iVar1 = DAT_00034aa4;
  *(undefined *)(DAT_00034aa4 + 0x1c) = 0;
  *(undefined *)(iVar1 + 8) = 0x86;
  input_flag_set(1);
  iVar1 = DAT_00034aa8;
  FUN_00039014(*(undefined4 *)(DAT_00034aa8 + 0x20),DAT_00034aac);
  FUN_000302b0(DAT_00034aa4 + 8);
  iVar2 = *(int *)(iVar1 + 0x20);
  leds_req_breath(*(undefined4 *)(iVar1 + 0x48),0x3c,500,iVar2 - 500U & 0xffff,0x32,0x32,iVar2);
  return;
}


/* ---- FUN_00034ab0 @ 00034ab0 ---- */

void FUN_00034ab0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = DAT_00034b1c;
  cVar1 = *(char *)(DAT_00034b1c + 0x1c);
  if (cVar1 != *(char *)(DAT_00034b20 + 0x14)) {
    *(undefined *)(DAT_00034b1c + 0xd) = 0x15;
    if (cVar1 == '\0') {
      *(undefined *)(iVar2 + 0xe) = 0;
    }
    else {
      *(char *)(iVar2 + 0xe) = cVar1 + '\x01';
    }
    *(undefined4 *)(iVar2 + 0xf) = 0;
    *(undefined4 *)(iVar2 + 0x13) = 0;
    *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
    FUN_00030234(DAT_00034b1c + 0xd);
  }
  FUN_0003880c();
  input_flag_set(0);
  input_flag_clear(1);
  motor_off();
  leds_off();
  pcVar3 = DAT_00034b24;
  *(undefined *)(iVar2 + 0x1c) = 0;
  if (*pcVar3 != '\0') {
    *(undefined *)(iVar2 + 8) = 0x85;
    FUN_000302b0(DAT_00034b1c + 8);
    return;
  }
  return;
}


/* ---- FUN_00034b28 @ 00034b28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034b28(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar3 = _DAT_00034bd4;
  iVar2 = DAT_00034bd0;
  uVar4 = *(undefined4 *)(DAT_00034bd0 + 0x20);
  FUN_00034324(s_process_msg_touch_release_event___00034bd7 + 1,*(undefined *)(_DAT_00034bd4 + 0x1c)
               ,*(undefined *)(DAT_00034bd0 + 0x14));
  bVar1 = *(byte *)(iVar3 + 0x1c);
  local_24 = param_3;
  uStack_20 = param_4;
  if (bVar1 < *(byte *)(iVar2 + 0x14)) {
    *(undefined *)(iVar3 + 0xd) = 0x14;
    *(byte *)(iVar3 + 0xe) = bVar1;
    *(undefined4 *)(iVar3 + 0xf) = param_1;
    if (bVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x13) = 0;
    }
    else {
      *(uint *)(iVar3 + 0x13) = param_2;
    }
    *(undefined4 *)(iVar3 + 0x17) = 0;
    local_28 = *(uint *)(iVar2 + 0x20);
    FUN_00038510(*(undefined4 *)(iVar2 + 0x4c),0xf,local_28 & 0xffff,100);
  }
  else {
    local_28 = param_2;
    if (bVar1 == *(byte *)(iVar2 + 0x14)) {
      *(undefined *)(iVar3 + 0xd) = 0x14;
      *(byte *)(iVar3 + 0xe) = bVar1;
      *(undefined4 *)(iVar3 + 0xf) = param_1;
      *(uint *)(iVar3 + 0x13) = param_2;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      input_flag_clear(0);
      input_flag_clear(1);
      uVar4 = 3000;
      local_28 = 0;
      local_24 = 0x96;
      uStack_20 = 3000;
      leds_req_breath(*(undefined4 *)(iVar2 + 0x50),0x3c,0x1c2,0x1c2);
    }
  }
  FUN_00039014(uVar4,DAT_00034c00);
  FUN_00030234(_DAT_00034bd4 + 0xd);
  FUN_000302b0(_DAT_00034bd4 + 8,local_28,local_24,uStack_20);
  return;
}


/* ---- FUN_00034c04 @ 00034c04 ---- */

void FUN_00034c04(void)

{
  FUN_00034324(s_process_no_ouid_double_tap_detec_00034c2c);
  FUN_00027d50();
  leds_req_breath(0xffffff,0x1e,200,200,0x32,0x96,0x44c);
  return;
}


/* ---- FUN_00034c54 @ 00034c54 ---- */

void FUN_00034c54(void)

{
  int iVar1;
  
  FUN_00034324(s_Doube_tap_detected_in_OOBE_mode__00034cac);
  iVar1 = DAT_00034cd0;
  *(undefined *)(DAT_00034cd0 + 0xd) = 0x13;
  *(undefined *)(iVar1 + 0xe) = 0;
  *(undefined4 *)(iVar1 + 0xf) = 0;
  *(undefined4 *)(iVar1 + 0x13) = 0;
  FUN_00030234(iVar1 + 0xd);
  leds_req_breath(*(undefined4 *)(DAT_00034cd4 + 0x44),0x1e,200,200,0x32,0x32,1000);
  motor_on(0x50,2000);
  FUN_0003907c();
  FUN_00039014(10000,DAT_00034cd8);
  return;
}


/* ---- FUN_00034cdc @ 00034cdc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034cdc(undefined *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_00034d48;
  if ((param_1 != (undefined *)0x0) || (param_2 == 8)) {
    FUN_00034324(s_process_token__x_00034d4b + 1,*(undefined *)(_DAT_00034d48 + 8));
    uVar2 = _DAT_00034d60;
    if (*(char *)(iVar1 + 8) == -0x7e) {
      FUN_00034324(s_Recv_TOKEN__0x_x___s_00034d63 + 1,*param_1);
      iVar3 = FUN_00026506(param_1,uVar2,8);
      if (iVar3 != 0) {
        FUN_00034324(s_TOKEN_ERROR__Sleep_now__00034d7c);
        FUN_0002a8fc(0);
        FUN_00036164();
        return;
      }
      FUN_00034324(s_TOKEN_OK__STATE_WATING_AUID__00034d98);
      *(undefined *)(iVar1 + 8) = 0x83;
      FUN_000302b0(_DAT_00034d48 + 8);
      FUN_0003907c();
      FUN_00039014(30000,DAT_00034db8);
      return;
    }
  }
  return;
}


/* ---- FUN_00034dbc @ 00034dbc ---- */

undefined4 FUN_00034dbc(int param_1)

{
  if (param_1 == DAT_00034dcc) {
    return DAT_00034dd0;
  }
  return 0;
}


/* ---- FUN_00034dd4 @ 00034dd4 ---- */

void FUN_00034dd4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  FUN_00031ae0(*(undefined *)(iVar3 + 0x20));
  uVar2 = 0;
  do {
    uVar1 = 0;
    iVar4 = iVar3 + uVar2 * 0xc;
    do {
      iVar5 = iVar4 + uVar1;
      if (*(char *)(iVar5 + 8) != -1) {
        FUN_00031ae0();
        *(undefined *)(iVar5 + 8) = 0xff;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 2);
    if (*(int *)(iVar3 + uVar2 * 0xc) != -1) {
      FUN_00031958();
      *(undefined4 *)(iVar3 + uVar2 * 0xc) = 0xffffffff;
    }
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined *)(iVar4 + 0xb) = 0;
  } while (uVar2 < 2);
  FUN_00032050(param_1[1]);
  return;
}


/* ---- FUN_00034e3c @ 00034e3c ---- */

void FUN_00034e3c(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = true;
  uVar2 = 0;
  iVar4 = DAT_00034e90 + 0xc;
  iVar3 = DAT_00034e90 + param_2 * 2;
  do {
    if (*(char *)(iVar3 + uVar2) != '\0') {
      *(char *)(iVar3 + uVar2) = *(char *)(iVar3 + uVar2) + -1;
      if (*(char *)(iVar3 + uVar2) == '\0') {
        (**(code **)(**(int **)(iVar4 + param_2 * 4) + 0x1c))(param_2);
      }
      else {
        bVar1 = false;
      }
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  if (bVar1) {
    FUN_00031efa(*(undefined4 *)(*(int *)(iVar4 + param_2 * 4) + 4),2);
    return;
  }
  return;
}


/* ---- FUN_00034e94 @ 00034e94 ---- */

void FUN_00034e94(int *param_1,int param_2,uint param_3)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = *param_1;
  puVar7 = (undefined4 *)(iVar8 + param_2 * 0xc);
  FUN_00031a78(*(undefined *)(iVar8 + 0x20));
  iVar2 = DAT_00034f64;
  if (param_3 == 0) {
    FUN_00031a78(*(undefined *)((int)puVar7 + 9));
    uVar1 = *(undefined *)(puVar7 + 2);
  }
  else {
    uVar3 = *(uint *)(iVar8 + 0x18);
    if (param_3 < uVar3) {
      uVar6 = puVar7[1];
      if (((uVar6 == uVar3) || (uVar6 == 0)) || (uVar6 <= param_3)) {
        *(undefined *)(DAT_00034f64 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
      }
      else {
        FUN_00031eb0(param_1[1],3,uVar6,0);
        if (*(char *)((int)puVar7 + 10) == '\0') {
          uVar4 = FUN_000319b0(*puVar7);
        }
        else {
          uVar4 = FUN_00031604();
        }
        uVar5 = FUN_00031eea(param_1[1],3);
        FUN_00031a34(*(undefined *)(iVar8 + 0x20),uVar5,uVar4);
        FUN_00031aac(*(undefined *)(iVar8 + 0x20));
        *(char *)(iVar2 + (uint)*(byte *)(param_1[1] + 4)) = (char)param_2;
        *(uint *)(DAT_00034f68 + (uint)*(byte *)(param_1[1] + 4) * 4) = param_3;
      }
      FUN_00031eb0(param_1[1],param_2,param_3,0);
      FUN_00031aac(*(undefined *)(puVar7 + 2));
      FUN_00031aac(*(undefined *)((int)puVar7 + 9));
      goto LAB_00034f5c;
    }
    param_3 = uVar3 & 0xffff;
    FUN_00031a78(*(undefined *)(puVar7 + 2));
    uVar1 = *(undefined *)((int)puVar7 + 9);
  }
  FUN_00031aac(uVar1);
  *(undefined *)(iVar2 + (uint)*(byte *)(param_1[1] + 4)) = 0xff;
LAB_00034f5c:
  puVar7[1] = param_3;
  return;
}


/* ---- FUN_00034f6c @ 00034f6c ---- */

undefined4 FUN_00034f6c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000303de(*DAT_00034f84,param_1);
  FUN_000264b6(uVar1,0x1c);
  return uVar1;
}


/* ---- FUN_00034f88 @ 00034f88 ---- */

void FUN_00034f88(undefined4 param_1)

{
  FUN_00030420(*DAT_00034f94,param_1);
  return;
}


/* ---- FUN_00034f98 @ 00034f98 ---- */

void FUN_00034f98(void)

{
  FUN_000303f4(*DAT_00034fa8,DAT_00034fa4);
  return;
}


/* ---- FUN_00034fac @ 00034fac ---- */

void FUN_00034fac(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined auStack_28 [4];
  int local_24;
  
  puVar2 = DAT_00035048;
  iVar1 = DAT_00035044;
  do {
    puVar3 = *(undefined **)(iVar1 + 4);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)FUN_0003040a(*puVar2,DAT_00035044 + 8);
      *(undefined **)(iVar1 + 4) = puVar3;
    }
    switch(*puVar3) {
    default:
      iVar4 = 0xf;
      goto LAB_00035002;
    case 1:
      iVar4 = FUN_0002e6b4(param_1);
      break;
    case 2:
    case 3:
      iVar4 = FUN_000394fc(param_1);
      break;
    case 4:
    case 5:
      iVar4 = FUN_0002c5f8(param_1);
      break;
    case 6:
      iVar4 = FUN_0002dc40(param_1,puVar3);
    }
    if (iVar4 == 0) {
      return;
    }
LAB_00035002:
    FUN_000264b6(auStack_28,0x14);
    if (iVar4 == 0x1d1d) {
      iVar4 = 0;
    }
    local_24 = iVar4;
    FUN_0002c95c(*(undefined4 *)(iVar1 + 4),auStack_28);
    FUN_0002c9d0(auStack_28);
    iVar4 = DAT_00035044;
    *(undefined4 *)(iVar1 + 4) = 0;
    param_1 = 0;
    FUN_000303f4(*puVar2,iVar4 + 8);
    iVar4 = FUN_00030528(DAT_00035044 + 0xc,1);
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}


/* ---- FUN_0003504c @ 0003504c ---- */

void FUN_0003504c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_000350e4;
  iVar1 = DAT_000350e0;
  if (*(char *)(DAT_000350e0 + 8) == '\0') {
    iVar3 = FUN_0003040a(*DAT_000350e8,DAT_000350e4 + 1);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      return;
    }
  }
  *(undefined *)(iVar1 + 8) = 2;
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 4) == '\0') {
    iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 0x18);
    software_interrupt(0x29);
  }
  else {
    if (*(char *)(iVar3 + 4) != '\x01') goto LAB_000350b6;
    iVar3 = *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10);
    software_interrupt(0x28);
  }
  if (iVar3 == 0) {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00030c48(2,0);
      return;
    }
  }
  else {
    if (iVar3 != 0x11) {
LAB_000350b6:
      FUN_0002c9f0(*piVar2,3);
      *(undefined *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_00034f98();
      return;
    }
    *(undefined *)(iVar1 + 8) = 1;
  }
  return;
}


/* ---- FUN_000350ec @ 000350ec ---- */

void FUN_000350ec(void)

{
  int iVar1;
  
  iVar1 = FUN_000304fe(DAT_00035104,1);
  if (iVar1 == 0) {
    FUN_00034fac();
    return;
  }
  return;
}


/* ---- FUN_00035108 @ 00035108 ---- */

void FUN_00035108(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00035128;
  iVar2 = FUN_000304e0(DAT_00035128 + 4);
  if ((iVar2 == 0) && (*(char *)(iVar1 + 0x11) == '\0')) {
    FUN_0003504c();
    return;
  }
  return;
}


/* ---- FUN_0003512c @ 0003512c ---- */

int FUN_0003512c(uint **param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = **param_1;
  uVar1 = (*param_1)[1];
  if (uVar2 <= uVar1) {
    return uVar1 - uVar2;
  }
  return (int)param_1[2] + (uVar1 - uVar2) + 1;
}


/* ---- FUN_00035144 @ 00035144 ---- */

void FUN_00035144(undefined2 param_1)

{
  undefined auStack_20 [4];
  undefined2 local_1c;
  
  FUN_000264b6(auStack_20,0x18);
  local_1c = param_1;
  FUN_00033ba0(auStack_20);
  return;
}


/* ---- FUN_00035160 @ 00035160 ---- */

undefined4 FUN_00035160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00026484(param_3,param_2,param_4);
  return 0;
}


/* ---- FUN_00035170 @ 00035170 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uStack_10;
  undefined local_e;
  undefined4 local_d;
  undefined uStack_9;
  
  uStack_9 = (undefined)((uint)param_4 >> 0x18);
  uStack_10 = (undefined2)param_3;
  local_e = (undefined)((uint)param_3 >> 0x10);
  iVar2 = FUN_0002d14c(&uStack_10);
  iVar1 = _DAT_0003519c;
  if (iVar2 == -1) {
    uVar3 = 0;
    *(undefined *)(_DAT_0003519c + 1) = 0;
  }
  else {
    *(undefined *)(_DAT_0003519c + 1) = local_e;
    uVar3 = local_d;
  }
  *(undefined4 *)(iVar1 + 4) = uVar3;
  FUN_00034324(s______SHIP_PAR_READ__d__d_0003519f + 1,*(undefined *)(iVar1 + 1),uVar3);
  return;
}


/* ---- FUN_000351bc @ 000351bc ---- */

void FUN_000351bc(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined local_38 [2];
  undefined2 local_36;
  undefined2 local_34;
  int local_30;
  undefined local_2c;
  
  iVar3 = DAT_00035244;
  pcVar2 = DAT_00035240;
  if (*DAT_00035240 != '\0') {
    *DAT_00035240 = '\0';
    uVar5 = 0;
    do {
      puVar6 = (undefined2 *)(iVar3 + uVar5 * 0xc);
      bVar1 = *(byte *)(puVar6 + 5);
      if (((((int)((uint)bVar1 << 0x1e) < 0) || ((bVar1 & 1) != 0)) &&
          ((*pcVar2 = '\x01', (int)((uint)bVar1 << 0x1e) < 0 || (param_1 != 0)))) &&
         (iVar4 = FUN_000392c0(puVar6), iVar4 != 0)) {
        local_36 = 0xffff;
        local_34 = *puVar6;
        if (iVar4 == 0x86) {
          local_38[0] = 6;
        }
        else {
          local_38[0] = 7;
          local_2c = 0;
          local_30 = iVar4;
        }
        FUN_00032fa4(local_38);
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
  }
  return;
}


/* ---- FUN_00035248 @ 00035248 ---- */

undefined4 FUN_00035248(short *param_1,short *param_2,undefined4 *param_3,short **param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_000352cc;
  if (*DAT_000352c8 == '\0') {
    uVar4 = 2;
  }
  else if ((param_3 == (undefined4 *)0x0) || (param_4 == (short **)0x0)) {
    uVar4 = 5;
  }
  else {
    while (*(ushort *)(param_4 + 1) < 2) {
      if (*(char *)(iVar1 + (uint)*(ushort *)(param_4 + 1) * 0x14) == '\0') {
        while (iVar3 = FUN_00035370(*(undefined2 *)(param_4 + 1),param_4), iVar3 != 0) {
          psVar2 = *param_4;
          if (((param_1 == (short *)0x0) || (psVar2[2] == *param_1)) &&
             ((param_2 == (short *)0x0 || (*psVar2 == *param_2)))) {
            *param_3 = *(undefined4 *)(psVar2 + 4);
            param_3[1] = *param_4;
            *(undefined2 *)(param_3 + 2) = *(undefined2 *)(DAT_000352cc + 0x30);
            return 0;
          }
        }
        *param_4 = (short *)0x0;
      }
      *(short *)(param_4 + 1) = *(short *)(param_4 + 1) + 1;
    }
    uVar4 = 10;
  }
  return uVar4;
}


/* ---- FUN_000352d0 @ 000352d0 ---- */

undefined4 FUN_000352d0(int *param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  
  iVar2 = DAT_00035368;
  uVar3 = param_1[1];
  if (((((uVar3 == 0) || (uVar3 < *(uint *)(DAT_0003536c + 0xc))) ||
       (*(uint *)(DAT_0003536c + 0x10) < uVar3)) ||
      ((local_18 = param_4, iVar4 = FUN_0002e948(), iVar4 == 0 ||
       (*(short *)(param_1 + 2) != *(short *)(iVar2 + 8))))) ||
     (uVar3 = param_1[1], *param_1 != *(int *)(uVar3 + 8))) {
    *param_2 = 0;
    do {
      local_18 = 0;
      while (iVar4 = FUN_00035370(*param_2,&local_18), iVar4 != 0) {
        if (*(int *)(local_18 + 8) == *param_1) {
          param_1[1] = local_18;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar2 + 8);
          return 1;
        }
      }
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
    } while ((ushort)(uVar1 + 1) < 2);
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = *(uint *)(iVar2 + uVar5 * 0x14 + -0x24);
      if ((uVar6 < uVar3) && (uVar3 < uVar6 + 0x1000)) {
        *param_2 = (ushort)uVar5;
        return 1;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
  }
  return 0;
}


/* ---- FUN_00035370 @ 00035370 ---- */

undefined4 FUN_00035370(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_000353c8 + param_1 * 0x14 + 4);
  iVar1 = *param_2;
  iVar3 = iVar2 + 0x1000;
  if (iVar1 == 0) {
    iVar1 = iVar2 + 8;
    goto LAB_000353b6;
  }
  iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2) * 4;
  do {
    iVar1 = iVar1 + 0xc;
LAB_000353b6:
    while( true ) {
      iVar2 = FUN_0002e1e2(iVar1,iVar3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_0002e1bc(iVar1,iVar3);
      if (iVar2 == 0) {
        *param_2 = iVar1;
        return 1;
      }
      if (iVar2 == 1) break;
      if (iVar2 == 2) {
        return 0;
      }
    }
    iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + 2) * 4;
  } while( true );
}


/* ---- FUN_000353cc @ 000353cc ---- */

undefined4 FUN_000353cc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00030cec(DAT_000353fc,param_1,DAT_000353f8,4,0);
  if (iVar1 != 0) {
    return 0xe;
  }
  *(undefined *)(DAT_00035400 + param_2 * 0x14 + 0x10) = 1;
  return 0;
}


/* ---- FUN_00035404 @ 00035404 ---- */

undefined4 FUN_00035404(short *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00035438 + 0xc) <= uVar1) {
      return 0;
    }
    if ((*(char *)(DAT_00035434 + uVar1 * 4 + 2) == *(char *)(param_1 + 1)) &&
       (*(short *)(DAT_00035434 + uVar1 * 4) == *param_1)) break;
    uVar1 = uVar1 + 1;
  }
  return *(undefined4 *)(DAT_00035438 + 4);
}


/* ---- FUN_0003543c @ 0003543c ---- */

void FUN_0003543c(uint param_1,int param_2)

{
  if (param_1 < 0x100) {
    FUN_000304f2(param_2 + (param_1 >> 5) * 4,~(1 << (param_1 & 0x1f)));
    return;
  }
  return;
}


/* ---- FUN_0003544c @ 0003544c ---- */

void FUN_0003544c(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0003547c;
  *DAT_0003547c = 6;
  FUN_0002fea4();
  *DAT_00035480 = 0;
  if (*(char *)(DAT_00035484 + 0x7a) == '\x01') {
    *DAT_00035488 = 1;
    FUN_000276bc(*(undefined2 *)(puVar1 + 4),0);
    return;
  }
  return;
}


/* ---- FUN_0003548c @ 0003548c ---- */

void FUN_0003548c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = DAT_000354f8;
  local_10 = param_3;
  uStack_c = param_4;
  if (*(char *)(DAT_000354f8 + 10) == '\0') {
    *(undefined *)(DAT_000354f8 + 10) = 1;
    *(undefined4 *)(iVar1 + 0x18) = 0x50;
    FUN_00028ca4(*(undefined4 *)(DAT_000354fc + 0x24),0x666,0);
    motor_on(100,900);
    FUN_0002ed00();
    FUN_00038610();
    local_10 = 0;
    uStack_c = 800;
    FUN_0002ed9c(*(undefined4 *)(DAT_00035500 + 0x4c),0xf,400,400);
  }
  iVar1 = DAT_00035504;
  *(undefined *)(DAT_00035504 + 0xd) = 0x14;
  *(undefined *)(iVar1 + 0xe) = 0xfe;
  *(undefined4 *)(iVar1 + 0xf) = 0;
  *(undefined4 *)(iVar1 + 0x13) = 0;
  *(undefined4 *)(iVar1 + 0x17) = 0;
  FUN_00030234(iVar1 + 0xd,0xfe,local_10,uStack_c);
  return;
}


/* ---- FUN_00035508 @ 00035508 ---- */

void FUN_00035508(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00035544;
  iVar2 = *(int *)(DAT_00035544 + 0x18);
  if (0 < iVar2) {
    if ((iVar2 == 0x32) || (iVar2 == 0x14)) {
      motor_on(100,900);
    }
    iVar2 = *(int *)(iVar1 + 0x18) + -1;
    *(int *)(iVar1 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_0003554c();
      *(undefined *)(DAT_00035548 + 0x31) = 0;
      leds_off();
      return;
    }
  }
  return;
}


/* ---- FUN_0003554c @ 0003554c ---- */

void FUN_0003554c(void)

{
  if (*(char *)(DAT_00035564 + 10) != '\0') {
    *(undefined *)(DAT_00035564 + 10) = 0;
    FUN_00028d2c(*(undefined4 *)(DAT_00035568 + 0x24));
    return;
  }
  return;
}


/* ---- FUN_00035570 @ 00035570 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035570(void)

{
  int iVar1;
  
  iVar1 = DAT_000355a4;
  _DAT_e000e180 = 0x20000;
  *(undefined4 *)(DAT_000355a4 + 0x348) = 0x10000;
  *(undefined4 *)(iVar1 + 0x308) = 0x10000;
  *(undefined4 *)(iVar1 + 4) = 1;
  FUN_000315f4(0x2f);
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = DAT_000355a8;
  *(undefined4 *)(DAT_000355a8 + 8) = 0;
  FUN_000315f4(0x2f);
  *(undefined *)(iVar1 + 2) = 0;
  return;
}


/* ---- FUN_000355ac @ 000355ac ---- */

undefined8 FUN_000355ac(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264b6(local_48,0x1c);
  local_48[0] = local_48[0] & 0xf7 | 6;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa6;
  local_18 = 0x31111;
  FUN_000264b6(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_00035654 @ 00035654 ---- */

undefined8 FUN_00035654(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264b6(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfd | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa1;
  local_18 = 0x31111;
  FUN_000264b6(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_000356fa @ 000356fa ---- */

undefined8 FUN_000356fa(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  undefined local_12;
  
  FUN_000264b6(local_48,0x1c);
  local_48[0] = local_48[0] & 0xfd | 0xc;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_12 = *param_1;
  local_14 = 0xffa2;
  local_18 = 0x31111;
  FUN_000264b6(local_2c,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_000357a4 @ 000357a4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000357a4(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (*param_1 == '\0') {
    sVar3 = **(short **)(param_1 + 4);
    iVar6 = FUN_00031b6c(*(short **)(param_1 + 4),1);
    if (iVar6 != 0) {
      FUN_00026218(iVar6,0x4f,s__________battery_measure_c_00035868);
    }
    uVar10 = FUN_00026834(sVar3 * 0x2d0);
    FUN_00026756((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)DAT_00035884,
                 (int)((ulonglong)DAT_00035884 >> 0x20));
    iVar6 = FUN_00026870();
    puVar4 = DAT_0003588c;
    *DAT_0003588c = 0;
    if ((puVar4[3] != '\0') && (0xc80 < iVar6)) {
      *(undefined4 *)(puVar4 + 8) = 0x1068;
      puVar4[3] = 0;
    }
    puVar4[3] = 0;
    iVar5 = _DAT_00035890;
    uVar8 = *(uint *)(puVar4 + 0xc) + 1;
    *(short *)(_DAT_00035890 + (*(uint *)(puVar4 + 0xc) % 0x14) * 2) = (short)iVar6;
    *(uint *)(puVar4 + 0xc) = uVar8;
    if ((uVar8 % 0x14 == 0) && (uVar8 != 0)) {
      iVar6 = 0;
      do {
        iVar7 = 0;
        do {
          iVar9 = iVar5 + iVar7 * 2;
          uVar2 = *(ushort *)(iVar5 + iVar7 * 2);
          uVar1 = *(ushort *)(iVar9 + 2);
          if (uVar2 < uVar1) {
            *(ushort *)(iVar5 + iVar7 * 2) = uVar1;
            *(ushort *)(iVar9 + 2) = uVar2;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x13);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x14);
      iVar7 = 0;
      iVar6 = 5;
      do {
        iVar9 = iVar6 * 2;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + (uint)*(ushort *)(iVar5 + iVar9);
      } while (iVar6 < 0xf);
      *(int *)(puVar4 + 8) = iVar7 / 10;
      FUN_00034322(s_POWER_GET_OK____________d_00035893 + 1);
      puVar4[1] = 0;
    }
  }
  return;
}


/* ---- FUN_000358b0 @ 000358b0 ---- */

undefined8 FUN_000358b0(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = *DAT_0003591c;
  uStack_14 = DAT_0003591c[1];
  uStack_10 = DAT_0003591c[2];
  local_c = CONCAT13((char)((uint)in_r3 >> 0x18),0x30002);
  iVar1 = FUN_00031d00(&local_c,DAT_00035920);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0xa3,s__________battery_measure_c_00035924);
  }
  iVar1 = FUN_00031c10(0,&local_18);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0xa6,s__________battery_measure_c_00035924);
  }
  iVar1 = FUN_00031b6c(DAT_00035940,1);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0xa9,s__________battery_measure_c_00035924);
  }
  iVar1 = FUN_00031b6c(DAT_00035940 + 2,1);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0xac,s__________battery_measure_c_00035924);
  }
  return CONCAT44(uStack_14,local_18);
}


/* ---- FUN_00035944 @ 00035944 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035944(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_000289d8();
  puVar1 = _DAT_00035998;
  *_DAT_00035998 = uVar2;
  iVar3 = 0;
  do {
    if (*(char *)((int)puVar1 + iVar3 + 0x84) != *(char *)((int)puVar1 + iVar3)) break;
    if (iVar3 == 0x83) {
      FUN_00034324(s_______________no_need_save_0003599b + 1);
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x84);
  FUN_00026484(_DAT_00035998 + 0x21,_DAT_00035998,0x84);
  FUN_00026f64(0x70);
  FUN_00027050(_DAT_00035998,0x70000,0x84);
  return;
}


/* ---- FUN_000359b8 @ 000359b8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000359b8(void)

{
  int iVar1;
  undefined2 local_10;
  undefined uStack_e;
  undefined4 uStack_d;
  undefined uStack_9;
  
  iVar1 = _DAT_000359e0;
  local_10 = 0;
  uStack_9 = 0;
  uStack_e = *(undefined *)(_DAT_000359e0 + 1);
  uStack_d = *(undefined4 *)(_DAT_000359e0 + 4);
  FUN_0002d228(&local_10);
  FUN_00034324(s______SHIP_PAR_WRITE__d__d_000359e3 + 1,*(undefined *)(iVar1 + 1),
               *(undefined4 *)(iVar1 + 4));
  return;
}


/* ---- FUN_00035a50 @ 00035a50 ---- */

longlong FUN_00035a50(undefined4 param_1,uint param_2,undefined4 param_3,code **param_4)

{
  int iVar1;
  uint uStack_18;
  undefined4 uStack_14;
  code **local_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000314a8(&uStack_18,DAT_00035a7c);
  while( true ) {
    if (local_10 == (code **)0x0) {
      return (ulonglong)uStack_18 << 0x20;
    }
    iVar1 = (**local_10)(param_1,local_10[1]);
    if (iVar1 == 0) break;
    FUN_000314d6(&uStack_18);
  }
  return CONCAT44(uStack_18,0x11);
}


/* ---- FUN_00035a80 @ 00035a80 ---- */

void FUN_00035a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,code **param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  code **local_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_000314a8(&uStack_18,DAT_00035aa8);
  while (local_10 != (code **)0x0) {
    (**local_10)(param_1,local_10[1]);
    FUN_000314d6(&uStack_18);
  }
  return;
}


/* ---- FUN_00035aac @ 00035aac ---- */

void FUN_00035aac(short *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  int local_1c;
  
  iVar3 = 0;
  uStack_20 = param_3;
  local_1c = param_4;
  iVar1 = FUN_0002e598();
  if (iVar1 == 0xffff) {
    iVar1 = FUN_0002e574();
  }
  else {
    FUN_0002e534(*param_1,iVar1);
  }
  FUN_00035c10(*param_1,1,0);
  if ((iVar1 != 0xffff) && (iVar1 = FUN_0003308c(iVar1,7,&uStack_20), iVar1 == 0)) {
    iVar1 = local_1c + 0x34;
    if (((*(byte *)(local_1c + 0x44) & 1) != 0) ||
       (iVar2 = FUN_0002e508(local_1c + 0x46,param_1 + 6), iVar2 != 0)) {
      iVar3 = iVar1;
    }
  }
  software_interrupt(0x86);
  if (*param_1 == 0) {
    if (iVar3 == 0) {
      FUN_0002c904(*param_1,0x1006,0);
    }
  }
  else {
    FUN_00035e2c(*param_1,*param_1,0);
  }
  return;
}


/* ---- FUN_00035b34 @ 00035b34 ---- */

undefined4 FUN_00035b34(int param_1,undefined param_2,int param_3,int *param_4)

{
  int iVar1;
  int iStack_20;
  int *local_1c;
  
  if (param_4 != (int *)0x0) {
    iStack_20 = param_3;
    local_1c = param_4;
    iVar1 = FUN_000330cc(param_1 + 0x100U & 0xffff,7,1,&iStack_20);
    if (iVar1 == 0x11) {
      return 0x11;
    }
    if (iVar1 == 0) {
      FUN_000264b6(local_1c,0x50);
      *(undefined *)local_1c = param_2;
      param_4[3] = param_3;
      *param_4 = (int)(local_1c + 0xd);
      param_4[4] = (int)(local_1c + 6);
      param_4[5] = (int)local_1c + 1;
      param_4[7] = DAT_00035b94;
      iVar1 = FUN_0002e248(param_1,(int)local_1c + 0x11);
      if (iVar1 == 0) {
        return 0;
      }
      return 8;
    }
  }
  return 3;
}


/* ---- FUN_00035b98 @ 00035b98 ---- */

byte * FUN_00035b98(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (byte *)0x0) {
    uVar3 = (uint)*param_1;
    if (((((int)(uVar3 << 0x1e) < 0) || (-1 < (int)(uVar3 << 0x18))) &&
        (uVar2 = (uVar3 << 0x19) >> 0x1d, uVar2 < 5)) &&
       (((-1 < (int)(uVar3 << 0x1e) || (uVar2 != 3)) || ((int)(uVar3 << 0x18) < 0)))) {
      if (((param_1[1] <= param_1[2]) && (6 < param_1[1])) &&
         ((param_1[2] < 0x11 && (uVar3 = (uint)param_1[3], -1 < (int)(uVar3 << 0x1d))))) {
        bVar1 = param_1[4];
        uVar2 = (uint)bVar1;
        if (((-1 < (int)(uVar2 << 0x1d)) && (-1 < (int)(uVar3 << 0x1c))) &&
           (-1 < (int)(uVar2 << 0x1c))) {
          if ((*param_1 & 1) == 0) {
            if (((uVar3 << 0x1f == 0) && (-1 < (int)(uVar3 << 0x1e))) &&
               (((bVar1 & 1) == 0 && (-1 < (int)(uVar2 << 0x1e))))) {
              return (byte *)0x1;
            }
          }
          else if (((uVar3 << 0x1f != 0) || ((int)(uVar3 << 0x1e) < 0)) ||
                  (((bVar1 & 1) != 0 || ((int)(uVar2 << 0x1e) < 0)))) {
            return (byte *)0x1;
          }
        }
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}


/* ---- FUN_00035c10 @ 00035c10 ---- */

void FUN_00035c10(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined auStack_30 [2];
  undefined2 local_2e;
  undefined local_28;
  
  puVar1 = DAT_00035c68;
  FUN_0002a5dc(param_1,*DAT_00035c68,param_2);
  if (param_2 != 0) {
    FUN_0002a5dc(param_1,puVar1[1],param_3 != 0);
    FUN_0002a5dc(param_1,puVar1[2],param_3 == 1);
    FUN_00026484(auStack_30,DAT_00035c6c,0x18);
    local_2e = (undefined2)param_1;
    local_28 = (undefined)param_3;
    FUN_0002caf8(auStack_30);
  }
  return;
}


/* ---- FUN_00035c74 @ 00035c74 ---- */

void FUN_00035c74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  if (*DAT_00035c8c != '\0') {
    uStack_c = param_2;
    FUN_0002b190(DAT_00035c90,param_1,&uStack_c,param_4,param_1);
  }
  return;
}


/* ---- FUN_00035c94 @ 00035c94 ---- */

void FUN_00035c94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_0002ad9c(DAT_00035ca4,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_00035ca8 @ 00035ca8 ---- */

void FUN_00035ca8(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_00035cc8 + 3);
  if (cVar1 != '\0') {
    *(char *)(DAT_00035cc8 + 3) = cVar1 + -1;
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      FUN_000302b0(DAT_00035ccc);
      return;
    }
  }
  return;
}


/* ---- FUN_00035cd0 @ 00035cd0 ---- */

void FUN_00035cd0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = CONCAT22((short)((uint)param_3 >> 0x10),2);
  local_c = param_4;
  FUN_00034324(s_sendDevinfoFF06___x_00035cfc,*param_1);
  if (*DAT_00035d14 != '\0') {
    local_c = CONCAT22(local_c._2_2_,*param_1);
    FUN_0002af94(DAT_00035d18,&local_c,&local_10);
  }
  return;
}


/* ---- FUN_00035d2c @ 00035d2c ---- */

void FUN_00035d2c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  if (*param_1 == -0x7d) {
    param_1[1] = *(char *)(DAT_00035d48 + 0xc);
  }
  uStack_c = param_2;
  FUN_0002b264(DAT_00035d4c,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_00035d50 @ 00035d50 ---- */

void FUN_00035d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_2;
  FUN_0002b1e8(DAT_00035d60,param_1,&uStack_c,param_4,param_1);
  return;
}


/* ---- FUN_00035d64 @ 00035d64 ---- */

void FUN_00035d64(void)

{
  int iVar1;
  
  iVar1 = DAT_00035d84;
  *(undefined *)(DAT_00035d84 + 7) = 0;
  if (*(char *)(iVar1 + 8) == '\0') {
    *(undefined *)(iVar1 + 8) = 1;
    FUN_00028ca4(*(undefined4 *)(DAT_00035d88 + 0x1c),0x8000,0);
    return;
  }
  return;
}


/* ---- FUN_00035d8c @ 00035d8c ---- */

void FUN_00035d8c(undefined2 param_1)

{
  undefined local_20 [2];
  undefined2 local_1e;
  
  FUN_000264b6(local_20,0x18);
  local_20[0] = 4;
  local_1e = param_1;
  FUN_0002caf8(local_20);
  return;
}


/* ---- FUN_00035db0 @ 00035db0 ---- */

void FUN_00035db0(void)

{
  if (*(code **)(DAT_00035dbc + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00035db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00035dbc + 0x18))();
    return;
  }
  return;
}


/* ---- FUN_00035dc0 @ 00035dc0 ---- */

void FUN_00035dc0(void)

{
  int iVar1;
  
  iVar1 = DAT_00035df8;
  if (*(byte *)(DAT_00035df8 + 7) < 0x32) {
    *(byte *)(DAT_00035df8 + 7) = *(byte *)(DAT_00035df8 + 7) + 1;
    FUN_000288cc(0,0,DAT_00035dfc);
    if ((9 < *(byte *)(iVar1 + 7)) && (*(char *)(iVar1 + 8) != '\0')) {
      *(undefined *)(iVar1 + 8) = 0;
      FUN_00028d2c(*(undefined4 *)(DAT_00035e00 + 0x1c));
      return;
    }
  }
  return;
}


/* ---- FUN_00035e04 @ 00035e04 ---- */

void FUN_00035e04(undefined2 param_1,undefined4 param_2)

{
  undefined auStack_28 [2];
  undefined2 local_26;
  undefined4 local_20;
  
  FUN_00026484(auStack_28,DAT_00035e28,0x18);
  local_26 = param_1;
  local_20 = param_2;
  FUN_0002cab0(auStack_28);
  return;
}


/* ---- FUN_00035e2c @ 00035e2c ---- */

void FUN_00035e2c(undefined2 param_1,undefined4 param_2)

{
  undefined auStack_28 [2];
  undefined2 local_26;
  undefined4 local_20;
  
  FUN_00026484(auStack_28,DAT_00035e50,0x18);
  local_26 = param_1;
  local_20 = param_2;
  FUN_0002caf8(auStack_28);
  return;
}


/* ---- FUN_00035e54 @ 00035e54 ---- */

undefined4 FUN_00035e54(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_00035ed8:
    uVar3 = 7;
  }
  else {
    for (uVar4 = 0; uVar4 < *(byte *)(param_1 + 0x2c); uVar4 = uVar4 + 1 & 0xff) {
      puVar5 = (undefined2 *)(*(int *)(param_1 + 0x28) + uVar4 * 0xc);
      if (0xfe < (ushort)puVar5[2] + 2) {
        return 0xc;
      }
      *(char *)(param_2 + (uint)*param_3) = (char)puVar5[2] + '\x03';
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      *(undefined *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0x16;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      sVar2 = FUN_00037ad8(*puVar5,(uint)(ushort)(uVar1 + 1) + param_2);
      uVar1 = *param_3;
      *param_3 = sVar2 + uVar1;
      if (puVar5[2] != 0) {
        if (*(int *)(puVar5 + 4) == 0) goto LAB_00035ed8;
        FUN_00026484((uint)(ushort)(sVar2 + uVar1) + param_2);
        *param_3 = *param_3 + puVar5[2];
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00035edc @ 00035edc ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035edc(void)

{
  int iVar1;
  undefined2 local_84 [2];
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined auStack_60 [8];
  undefined auStack_58 [8];
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  undefined auStack_40 [28];
  undefined local_24;
  undefined local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = 0;
  FUN_000264b6(auStack_60,0x40);
  FUN_0002b2e0(auStack_60,s_Bond_Touch__Inc__00036070);
  FUN_0002b2e0(auStack_58,s_Bond004_00036084);
  FUN_0002b2e0(auStack_50,s_1234567890_0003608c);
  FUN_0002b2e0(auStack_48,s_Bond4_Rev_B3_00036098);
  FUN_00027570(_DAT_000360b4,s__d__d__d_000360a8,1,2,0);
  FUN_0002b2e0(auStack_40,_DAT_000360b4);
  local_24 = 0x11;
  local_23 = 0;
  iVar1 = FUN_0002a7cc(auStack_60);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5b4,s__________main_c_000360b7 + 1);
  }
  local_18 = DAT_000360c8;
  iVar1 = FUN_0003096a(DAT_000360cc,&local_18);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5ba,s__________main_c_000360b7 + 1);
  }
  local_14 = DAT_000360d0;
  uStack_10 = 0;
  iVar1 = FUN_0003080c(DAT_000360d4,&local_14);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5c2,s__________main_c_000360b7 + 1);
  }
  local_20 = 0;
  local_1c = 0;
  iVar1 = FUN_0003057e(_DAT_000360b4 + -0x460,0,_DAT_000360b4 + -0x60,0x20);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5cb,s__________main_c_000360b7 + 1);
  }
  iVar1 = FUN_00030558(_DAT_000360b4 + -0x460,0,_DAT_000360b4 + -0x20,0x20);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5d1,s__________main_c_000360b7 + 1);
  }
  iVar1 = FUN_0003057e(_DAT_000360b4 + -0x460,1,_DAT_000360b4 + -0x40,0x20);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x5d7,s__________main_c_000360b7 + 1);
  }
  local_20 = DAT_000360d8;
  local_1c = DAT_000360dc;
  iVar1 = FUN_0002a164(DAT_000360d4 + 0x20,&local_20);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x601,s__________main_c_000360b7 + 1);
  }
  FUN_000264b6(local_84,0x24);
  local_84[0] = *(undefined2 *)(DAT_000360e0 + 0x2c);
  *(undefined2 *)(DAT_000360d4 + -0x4a) = local_84[0];
  local_80 = *DAT_000360e4;
  local_7c = *(undefined2 *)(DAT_000360e4 + 1);
  local_76 = DAT_000360e4[1];
  local_6c = *(undefined4 *)(DAT_000360e8 + 8);
  local_68 = 0x45;
  local_64 = DAT_000360ec;
  local_7a = local_80;
  iVar1 = FUN_0002b014(DAT_000360d4 + -0x4c,local_84);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x619,s__________main_c_000360b7 + 1);
  }
  local_c = DAT_000360f0;
  iVar1 = FUN_0002ae04(DAT_000360d4 + -0x88,&local_c);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x620,s__________main_c_000360b7 + 1);
  }
  return;
}


/* ---- FUN_000360f4 @ 000360f4 ---- */

void FUN_000360f4(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = DAT_00036154;
  iVar4 = DAT_00036150;
  while (*(code ***)(iVar4 + 8) != (code **)0x0) {
    iVar3 = (***(code ***)(iVar4 + 8))(*pcVar2);
    if (iVar3 == 0) {
      return;
    }
    FUN_000314d6(DAT_00036150);
  }
  cVar1 = *pcVar2;
  if ((cVar1 != '\x03') && (cVar1 != '\x02')) {
    iVar4 = FUN_00031400();
    if (iVar4 != 0) {
      software_interrupt(0x33);
    }
    *DAT_00036158 = 1;
    DataSynchronizationBarrier(0xf);
    do {
      WaitForEvent();
    } while( true );
  }
  DataSynchronizationBarrier(0xf);
  *DAT_0003615c = *DAT_0003615c & 0x700 | DAT_00036160;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ---- FUN_00036164 @ 00036164 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036164(void)

{
  int iVar1;
  
  do {
  } while (*_DAT_000361b0 != '\x02');
  input_flag_set(0);
  input_flag_set(1);
  input_flag_set(2);
  FUN_00034270();
  iVar1 = FUN_00038ff8();
  software_interrupt(0x33);
  if ((iVar1 != 0x2006) &&
     (FUN_00034324(s_sd_power_system_off_return_ERROR_000361b3 + 1,iVar1), iVar1 == 0)) {
    return;
  }
  FUN_00026218(iVar1,0xed,s__________app_misc_c_000361dc);
  return;
}


/* ---- FUN_000361f0 @ 000361f0 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000361f0(void)

{
  int iVar1;
  
  iVar1 = _DAT_00036228;
  FUN_00034324(s____sleep_mode_enter_for_power____0003622b + 1,*(undefined *)(_DAT_00036228 + 1));
  if (*(char *)(iVar1 + 1) == '\0') {
    *(undefined *)(iVar1 + 1) = 1;
    FUN_00034324(s____IN_TO_SLEEP_MODE_sleep_mode_e_00036254);
    FUN_00034324(s____IN_TO_SLEEP_MODE_sleep_mode_e_0003628c);
    FUN_00034270();
    FUN_00038ff8();
    FUN_0002ba98();
    FUN_0002ba30();
    return;
  }
  return;
}


/* ---- FUN_000362c4 @ 000362c4 ---- */

void FUN_000362c4(void)

{
  int iVar1;
  
  FUN_00036414();
  iVar1 = DAT_000362e8;
  FUN_0002a500(*(undefined *)(DAT_000362e8 + 4),DAT_000362e4,0);
  FUN_0002a500(*(undefined *)(iVar1 + 1),DAT_000362ec,0);
  return;
}


/* ---- FUN_000362f4 @ 000362f4 ---- */

undefined4 FUN_000362f4(void)

{
  FUN_0002d0b0(DAT_0003632c);
  FUN_0002d0b0(DAT_0003632c + 1);
  FUN_0002d0b0(DAT_0003632c + 2);
  FUN_0002d0b0(DAT_0003632c + 3);
  if (*(char *)(DAT_0003632c + 3) != '\x18') {
    *(undefined *)(DAT_0003632c + 4) = 1;
    return 0;
  }
  return 3;
}


/* ---- FUN_00036330 @ 00036330 ---- */

void FUN_00036330(undefined4 param_1,undefined4 param_2)

{
  FUN_0002f7a8(param_1,0,param_2);
  return;
}


/* ---- FUN_0003633c @ 0003633c ---- */

void FUN_0003633c(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_00036378;
  bVar1 = *param_1;
  if (bVar1 != 10) {
    if (bVar1 < 0xb) {
      if ((bVar1 != 8) && (bVar1 != 9)) {
        return;
      }
    }
    else if ((bVar1 != 0xb) && (bVar1 != 0x13)) {
      return;
    }
  }
  FUN_0002a500(*(undefined *)(DAT_00036378 + 4),DAT_00036374,0);
  FUN_0002a500(*(undefined *)(iVar2 + 1),DAT_0003637c,0);
  return;
}


/* ---- FUN_00036380 @ 00036380 ---- */

undefined4 FUN_00036380(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = DAT_000363b0;
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar2 = FUN_00035b98();
    if (iVar2 == 0) {
      return 7;
    }
    *(undefined4 *)(puVar1 + 0x10) = *param_1;
    puVar1[0x14] = *(undefined *)(param_1 + 1);
    puVar3 = puVar1 + 0x10;
  }
  *(undefined **)(puVar1 + 8) = puVar3;
  *puVar1 = 1;
  return 0;
}


/* ---- FUN_00036414 @ 00036414 ---- */

void FUN_00036414(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined local_28 [2];
  ushort local_26;
  ushort *local_20;
  
  uVar2 = *param_1;
  if (uVar2 == 0x14) {
    FUN_00035aac(param_1 + 2);
    return;
  }
  if (uVar2 < 0x15) {
    if (uVar2 == 0x11) {
      if (*(char *)(param_1 + 4) == '=') {
        uVar4 = 0x103d;
      }
      else {
        uVar4 = 0x1100;
      }
      uVar2 = param_1[2];
      bVar5 = 0;
LAB_000364da:
      FUN_0002f848(uVar2,uVar4,bVar5);
      return;
    }
    if (uVar2 != 0x13) {
      return;
    }
    puVar1 = param_1 + 2;
    iVar3 = FUN_0002a54c(*puVar1);
    if (iVar3 == 1) {
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      FUN_00035c10(*puVar1,1,uVar6);
    }
    uVar2 = *puVar1;
    FUN_00026484(local_28,DAT_00036504,0x18);
    local_26 = uVar2;
    local_20 = param_1 + 4;
  }
  else {
    if (uVar2 == 0x19) {
      uVar4 = (uint)*(byte *)(param_1 + 4);
      if (uVar4 == 0) {
        FUN_00028f90();
        return;
      }
      uVar2 = param_1[2];
      bVar5 = *(byte *)((int)param_1 + 9) & 3;
      goto LAB_000364da;
    }
    if (uVar2 != 0x1a) {
      return;
    }
    iVar3 = FUN_00032ea4(param_1[2]);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_0002a4e0(param_1[2]);
    if (iVar3 == 0) {
      FUN_0002c904(param_1[2],0x1006,1);
      return;
    }
    FUN_0002a5dc(param_1[2],*DAT_00036500,0);
    local_28[0] = 2;
    local_26 = param_1[2];
    local_20 = (ushort *)((uint)local_20 & 0xffff0000);
  }
  FUN_0002caf8(local_28);
  return;
}


/* ---- FUN_00036518 @ 00036518 ---- */

undefined4 FUN_00036518(void)

{
  FUN_0002d09e(DAT_00036560);
  FUN_0002d09e(DAT_00036560 + 1);
  FUN_0002d09e(DAT_00036560 + 2);
  FUN_0002d09e(DAT_00036560 + 3);
  if ((((*DAT_00036560 != '\x18') && (DAT_00036560[1] != '\x18')) && (DAT_00036560[2] != '\x18')) &&
     (DAT_00036560[3] != '\x18')) {
    DAT_00036560[4] = '\x01';
    return 0;
  }
  return 3;
}


/* ---- FUN_00036564 @ 00036564 ---- */

int FUN_00036564(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002a54c();
  if (iVar1 == 1) {
    iVar1 = 0;
    if ((param_2 != 0) && (software_interrupt(0x7e), iVar1 = param_1, param_1 == 4)) {
      return 0x11;
    }
  }
  else {
    iVar1 = 0x3002;
  }
  return iVar1;
}


/* ---- FUN_0003658c @ 0003658c ---- */

int FUN_0003658c(int param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_38 [32];
  
  iVar1 = FUN_0002a54c();
  iVar3 = 0;
  FUN_000264b6(auStack_38,0x20);
  if (iVar1 == 1) {
    FUN_0002a5dc(param_1,*(undefined *)(DAT_00036634 + 3),0);
  }
  else if (iVar1 == 0) {
    return 0x3002;
  }
  if (param_2 != (byte *)0x0) {
    iVar2 = FUN_0002e574(param_1);
    if (((iVar2 != 0xffff) && (iVar1 == 1)) && (iVar2 = FUN_00027de0(param_1), iVar2 == 0)) {
      FUN_00035d8c(param_1);
      iVar2 = FUN_00027de0(param_1);
      if (iVar2 == 0) {
        iVar3 = 0x85;
      }
    }
    if ((((*param_2 & 1) != 0) && (iVar3 != 0x85)) &&
       (iVar3 = FUN_00035b34(param_1,iVar1,param_3,auStack_38), iVar3 != 0)) {
      return iVar3;
    }
  }
  if (iVar1 == 1) {
    software_interrupt(0x7f);
  }
  else {
    software_interrupt(0x7f);
  }
  return param_1;
}


/* ---- FUN_0003663c @ 0003663c ---- */

void FUN_0003663c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_0002ffa0(&local_18);
  FUN_00032ee4(param_1,param_2,&local_18);
  uVar1 = FUN_0003658c(param_1,local_18,*(undefined4 *)(DAT_00036678 + 0xc));
  FUN_0002d0ec(param_1,uVar1,1);
  FUN_0002ca44(param_1,uVar1,local_18);
  return;
}


/* ---- FUN_00036694 @ 00036694 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036694(void)

{
  int iVar1;
  
  iVar1 = FUN_00027698(0x16);
  if (iVar1 == 0) {
    FUN_00026218(0x2001,0xad,s___________________components_sof_000366cf + 1);
    return;
  }
  if (_DAT_000366cc[2] != 0) {
    *_DAT_000366cc = *_DAT_000366cc & 0xffbfffff;
    return;
  }
  _DAT_e000e180 = 0x400000;
  return;
}


/* ---- FUN_0003670c @ 0003670c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003670c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00027698(0x16);
  if (iVar1 == 0) {
    uVar3 = 0x2001;
  }
  else {
    uVar2 = (uint)(*(byte *)(DAT_00036760 + 0x400) >> 5);
    if ((uVar2 < 8) && ((1 << uVar2 & 0xecU) != 0)) {
      if (_DAT_00036764[2] != 0) {
        *_DAT_00036764 = *_DAT_00036764 | 0x400000;
        return;
      }
      _DAT_e000e100 = 0x400000;
      return;
    }
    uVar3 = 0x2002;
  }
  FUN_00026218(uVar3,0xa1,s___________________components_sof_00036767 + 1);
  return;
}


/* ---- start_execute_queue_led_motor_ctrl @ 000367a4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_execute_queue_led_motor_ctrl(void)

{
  int iVar1;
  int iVar2;
  undefined auStack_20 [2];
  ushort local_1e;
  ushort local_11;
  
  iVar2 = FUN_0002e998(auStack_20);
  iVar1 = DAT_00036814;
  if (iVar2 == 0) {
    debug_printf(s_led_motor_ctrl_queue_get_NONE__S_0003686c);
    FUN_000388bc();
    iVar2 = FUN_00027a9a();
    if (iVar2 == 0) {
      debug_printf(s_accel_switch_double_tap_error____000368a0,DAT_00036818);
    }
    *(undefined *)(iVar1 + 8) = 0x85;
    thunk_FUN_00035d64();
  }
  else {
    iVar2 = FUN_00027a9e();
    if (iVar2 == 0) {
      debug_printf(s_accel_switch_single_tap_error____0003681c,DAT_00036818);
    }
    cmd26_led_motor_ctrl_execute(auStack_20);
    if (local_11 <= local_1e) {
      local_11 = local_1e;
    }
    FUN_00038854(local_11,_DAT_00036844);
    *(undefined *)(iVar1 + 8) = 0x88;
    debug_printf(s_Func___s__STATE_QUEUE_EXECUTING__00036847 + 1,DAT_00036818);
  }
  FUN_000302b0(DAT_00036814 + 8);
  return;
}


/* ---- start_execute_queue_led_motor_test @ 000368c8 ---- */

undefined8
start_execute_queue_led_motor_test
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar2 = FUN_0002ea60(&uStack_18);
  iVar1 = DAT_00036928;
  if (iVar2 == 0) {
    FUN_000388bc();
    FUN_00027a9a();
    motor_off();
    leds_off();
    *(undefined *)(iVar1 + 8) = 0x85;
    thunk_FUN_00035d64();
  }
  else {
    if (uStack_c._1_2_ == 0) {
      FUN_000388bc();
      return CONCAT44(uStack_14,uStack_18);
    }
    FUN_00027a9e();
    FUN_0002cbb4(&uStack_18);
    uVar3 = uStack_c >> 8 & 0xffff;
    if (uVar3 == 0xffff) {
      uVar3 = 0xffffffff;
    }
    FUN_00038854(uVar3,DAT_0003692c);
    *(undefined *)(iVar1 + 8) = 0x88;
  }
  FUN_000302b0(DAT_00036928 + 8);
  return CONCAT44(uStack_14,uStack_18);
}


/* ---- FUN_00036930 @ 00036930 ---- */

void FUN_00036930(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(DAT_00036958 + 0xc);
  if (param_2 == 0) {
    local_c = DAT_00036958 + 8;
  }
  else {
    local_c = DAT_00036958 + 4;
  }
  uVar1 = FUN_0002e574();
  FUN_0003332e(uVar1,&local_10,0);
  return;
}


/* ---- FUN_0003695c @ 0003695c ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003695c(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_000264b6(&local_28,0x14);
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  local_28 = 0x50;
  local_27 = 2;
  local_26 = (undefined)param_2;
  if (param_2 < 0x12) {
    puVar1 = auStack_25;
  }
  else {
    FUN_00026484(auStack_25,param_1,0x11);
    FUN_0002a42a(_DAT_000369dc,&local_28,0x14);
    FUN_000264b6(&local_28,0x14);
    local_27 = 3;
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  local_28 = 0x50;
  FUN_00026484(puVar1,param_1,param_2);
  uVar2 = FUN_0002a42a(_DAT_000369dc,&local_28,0x14);
  FUN_00034324(s_SR___d_000369df + 1,uVar2);
  return;
}


/* ---- FUN_000369e8 @ 000369e8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000369e8(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined auStack_25 [17];
  
  FUN_000264b6(&local_28,0x14);
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  local_28 = 0x50;
  local_27 = 0;
  local_26 = (undefined)param_2;
  bVar3 = 0x11 < param_2;
  if (bVar3) {
    FUN_00026484(auStack_25,param_1,0x11);
    FUN_0002a42a(_DAT_00036a68,&local_28,0x14);
    FUN_000264b6(&local_28,0x14);
    param_2 = param_2 - 0x11;
    param_1 = param_1 + 0x11;
    puVar1 = &local_26;
  }
  else {
    puVar1 = auStack_25;
  }
  local_28 = 0x50;
  local_27 = bVar3;
  FUN_00026484(puVar1,param_1,param_2);
  uVar2 = FUN_0002a42a(_DAT_00036a68,&local_28,0x14);
  FUN_00034324(s_SR___d_00036a6b + 1,uVar2);
  return;
}


/* ---- FUN_00036a74 @ 00036a74 ---- */

void FUN_00036a74(undefined *param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    FUN_00026218(0,0x4e,s___________________components_ble_00036ac0);
  }
  if (param_1 == (undefined *)0x0) {
    FUN_00026218(0,0x4f,s___________________components_ble_00036ac0);
  }
  *param_1 = *(undefined *)param_2;
  param_1[1] = (char)((ushort)*(undefined2 *)param_2 >> 8);
  param_1[2] = (char)((uint)*param_2 >> 0x10);
  param_1[3] = (char)((uint)*param_2 >> 0x18);
  param_1[4] = *(undefined *)(param_2 + 1);
  param_1[5] = *(undefined *)(param_2 + 2);
  param_1[6] = (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8);
  param_1[7] = (char)((uint)param_2[2] >> 0x10);
  return;
}


/* ---- FUN_00036b6c @ 00036b6c ---- */

void FUN_00036b6c(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint in_r3;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_28;
  
  iVar1 = DAT_00036be8;
  uVar8 = *(undefined4 *)(DAT_00036be8 + 4);
  iVar7 = *(int *)(DAT_00036be8 + 8);
  local_28 = in_r3;
  iVar2 = FUN_0002c8c4(&local_28);
  if (iVar2 == 0) {
    iVar2 = FUN_0002f8e4(0);
    if (iVar2 == 0) goto LAB_00036be0;
  }
  else {
    iVar2 = 0;
    puVar3 = *(uint **)(iVar1 + 4);
    uVar5 = local_28;
    puVar6 = (uint *)0x0;
    while (puVar4 = puVar3, puVar4 != (uint *)0x0) {
      uVar9 = *puVar4;
      if (uVar5 < uVar9) {
        *puVar4 = uVar9 - uVar5;
        break;
      }
      uVar5 = uVar5 - uVar9;
      iVar2 = iVar2 + uVar9;
      *puVar4 = 0;
      puVar3 = (uint *)puVar4[7];
      if (puVar4[3] != 0) {
        puVar4[1] = iVar7 + iVar2 & 0xffffff;
        puVar4[2] = puVar4[3];
        puVar4[7] = (uint)puVar6;
        puVar6 = puVar4;
      }
    }
    *(uint **)(iVar1 + 4) = puVar4;
    FUN_0002f8e4(puVar6);
  }
  FUN_0002ba9c(uVar8);
LAB_00036be0:
  *(undefined *)(iVar1 + 3) = 0;
  return;
}


/* ---- FUN_00036bec @ 00036bec ---- */

void FUN_00036bec(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = DAT_00036c24;
  puVar2 = *(uint **)(DAT_00036c24 + 4);
  if (puVar2 != (uint *)0x0) {
    uVar4 = *param_1;
    puVar3 = puVar2;
    if (*puVar2 < uVar4) {
      do {
        puVar5 = puVar3;
        uVar6 = *puVar5;
        if (uVar4 <= uVar6) {
          *puVar5 = uVar6 - uVar4;
          puVar3 = puVar5;
          puVar5 = puVar2;
          break;
        }
        puVar3 = (uint *)puVar5[7];
        uVar4 = uVar4 - uVar6;
        puVar2 = puVar5;
      } while (puVar3 != (uint *)0x0);
      *param_1 = uVar4;
      param_1[7] = (uint)puVar3;
      puVar5[7] = (uint)param_1;
      return;
    }
    *puVar2 = *puVar2 - uVar4;
    param_1[7] = (uint)puVar2;
  }
  *(uint **)(iVar1 + 4) = param_1;
  return;
}


/* ---- FUN_00036c28 @ 00036c28 ---- */

undefined4 FUN_00036c28(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_00036c80;
  piVar6 = *(int **)(DAT_00036c80 + 4);
  piVar3 = piVar6;
  piVar5 = piVar6;
  while( true ) {
    piVar4 = piVar3;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if (piVar4 == param_1) break;
    piVar3 = (int *)piVar4[7];
    piVar5 = piVar4;
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if ((piVar5 == piVar4) && (iVar2 = piVar6[7], *(int *)(DAT_00036c80 + 4) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(DAT_00036c84 + 8) = 1;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined *)(iVar1 + 3) = 1;
    FUN_000315f4(0x2f);
  }
  iVar2 = *piVar4;
  piVar3 = (int *)piVar4[7];
  piVar5[7] = (int)piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar2 + *piVar3;
  }
  if (piVar6 == *(int **)(iVar1 + 4)) {
    return 0;
  }
  return 1;
}


/* ---- FUN_00036c88 @ 00036c88 ---- */

undefined4 FUN_00036c88(undefined4 param_1,undefined param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  local_18 = param_3 & 0xffffff00;
  local_14 = param_4;
  FUN_00028d4c(&local_18);
  puVar2 = (undefined *)FUN_0003872c(&local_14);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = 4;
    FUN_00028d94(local_18 & 0xff);
  }
  else {
    *puVar2 = param_2;
    iVar1 = DAT_00036ccc;
    *(undefined4 *)(puVar2 + 4) = param_1;
    *(undefined *)(iVar1 + 1) = (undefined)local_14;
    FUN_00028d94(local_18 & 0xff);
    FUN_00026d24(0x14);
  }
  return uVar3;
}


/* ---- FUN_00036cd0 @ 00036cd0 ---- */

void FUN_00036cd0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint local_20;
  uint local_1c;
  
  pcVar3 = DAT_00036d54;
  if (*(uint **)(DAT_00036d54 + 4) == (uint *)0x0) {
    return;
  }
  iVar9 = 0;
  uVar8 = *DAT_00036d58 - *(int *)(DAT_00036d54 + 8) & 0xffffff;
  puVar6 = *(uint **)(DAT_00036d54 + 4);
  local_20 = param_3;
  local_1c = param_4;
  do {
    uVar4 = *puVar6;
    if (uVar8 < uVar4) break;
    uVar8 = uVar8 - uVar4;
    iVar9 = iVar9 + uVar4;
    puVar7 = (uint *)puVar6[7];
    if (*(char *)(puVar6 + 4) != '\0') {
      *(undefined *)(puVar6 + 4) = 0;
      local_20 = puVar6[5];
      local_1c = puVar6[6];
      iVar5 = FUN_000288cc(&local_20,8,DAT_00036d5c);
      if (iVar5 != 0) {
        FUN_00026218(iVar5,0x187,s___________________components_lib_00036d60);
      }
    }
    puVar6 = puVar7;
  } while (puVar7 != (uint *)0x0);
  cVar1 = pcVar3[1];
  if ((*pcVar3 == cVar1) && (pcVar3[1] = cVar1 + '\x01', cVar1 == '\x01')) {
    pcVar3[1] = '\0';
  }
  bVar2 = pcVar3[1];
  *(int *)(DAT_00036d54 + (uint)bVar2 * 4 + 0xc) = iVar9;
  FUN_00026d24(0x14,(uint)bVar2,local_20,local_1c);
  return;
}


/* ---- FUN_00036d9c @ 00036d9c ---- */

void FUN_00036d9c(void)

{
  int iVar1;
  
  iVar1 = FUN_00028c28(DAT_00036dd8,0,DAT_00036dd4);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x272,s__________user_ble_c_00036ddc);
  }
  iVar1 = FUN_00028c28(DAT_00036dd8 + 4,1,DAT_00036df0);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x277,s__________user_ble_c_00036ddc);
  }
  FUN_0002fea4();
  return;
}


/* ---- FUN_00036df4 @ 00036df4 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036df4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  FUN_0002b540();
  iVar6 = FUN_00030e70(0xe);
  iVar2 = DAT_00036ff0;
  if (iVar6 == 0) {
    *(undefined *)(DAT_00036ff0 + 0xc) = 0;
  }
  if (((*DAT_00036ff4 != '\0') && ((*DAT_00036ff8 | *DAT_00036ffc) == 0)) && (param_1 == 0xe)) {
    iVar7 = FUN_00030e70(0xe);
    iVar3 = _DAT_00037004;
    iVar6 = DAT_00037000;
    iVar11 = DAT_00036ff0 + 8;
    if (iVar7 == 1) {
      uVar8 = FUN_00038388();
      FUN_00034324(s_Touch_press___d_00037020,uVar8);
      *(undefined *)(iVar2 + 0xc) = 1;
      if (*(char *)(iVar2 + 8) == -0x7a) {
        FUN_00034324(s_MSG_Touch_press__cnt____d__d___00037034,*(undefined *)(iVar2 + 0x1c),
                     *(undefined *)(iVar6 + 0x14));
        uVar9 = FUN_00038388();
        *(uint *)(iVar3 + 0x18) = uVar9;
        if (*(char *)(iVar2 + 0x1c) == '\0') {
          *(undefined4 *)(iVar3 + 0x24) = 0;
        }
        else {
          uVar10 = *(uint *)(iVar3 + 0x1c);
          if (uVar9 < uVar10) {
            iVar7 = 0x20000 - uVar10;
          }
          else {
            iVar7 = -uVar10;
          }
          *(uint *)(iVar3 + 0x24) = iVar7 + uVar9;
          FUN_00034324(s_press_time_ms__d_release_time_ms_00037058,uVar9,uVar10,iVar7 + uVar9);
          if ((*(uint *)(iVar6 + 0x20) < *(uint *)(iVar3 + 0x24)) && (*(char *)(iVar2 + 8) == -0x7a)
             ) {
            FUN_00034324(s_release_duration_ms_ERROR___d__d_000370b8);
            return;
          }
        }
        FUN_0003907c();
        iVar2 = _DAT_00037004;
        *(undefined *)(iVar3 + 3) = 0x16;
        puVar1 = (undefined4 *)(iVar6 + 0x1c);
        FUN_000387a4(*puVar1,iVar2 + 3);
        FUN_000302b0(iVar11);
        FUN_00034324(s_app_motor_enable____d__d__x_00037098,*(undefined *)(iVar6 + 0x25),*puVar1,
                     *(undefined4 *)(iVar6 + 0x4c));
        motor_on(*(undefined *)(iVar6 + 0x25),*puVar1);
        FUN_000384e4(*(undefined4 *)(iVar6 + 0x4c),0x50,*puVar1);
        *(undefined *)(iVar3 + 2) = 1;
      }
    }
    else {
      iVar7 = FUN_00031790(0xe);
      if (iVar7 == 0) {
        uVar8 = FUN_00038388();
        FUN_00034324(s_Touch_release___d_00037007 + 1,uVar8);
        *(undefined *)(iVar2 + 0xc) = 0;
        if ((*(char *)(iVar2 + 0x50) == '\x01') &&
           (bVar4 = *(char *)(iVar2 + 0x51) + 1, *(byte *)(iVar2 + 0x51) = bVar4, 6 < bVar4)) {
          *(undefined *)(iVar2 + 0x51) = 1;
        }
        cVar5 = *(char *)(iVar2 + 8);
        if ((cVar5 == -0x79) || (cVar5 == -0x80)) {
          FUN_000349d0();
          if (*(char *)(iVar2 + 8) == -0x79) {
            FUN_000302b0(iVar11);
            return;
          }
        }
        else {
          if (cVar5 == -0x7a) {
            motor_off();
            if ((*(byte *)(iVar2 + 0x1c) | *(byte *)(iVar3 + 2)) == 0) {
              FUN_00034324(s_This_touch_release_have_NOT_a_to_000370dc);
              return;
            }
            uVar9 = FUN_00038388();
            *(uint *)(iVar3 + 0x1c) = uVar9;
            uVar10 = *(uint *)(iVar3 + 0x18);
            if (uVar9 < uVar10) {
              iVar7 = 0x20000 - uVar10;
            }
            else {
              iVar7 = -uVar10;
            }
            *(uint *)(iVar3 + 0x20) = iVar7 + uVar9;
            FUN_00034324(s_release_time_ms__d_press_time_ms_0003711c,uVar9,uVar10,iVar7 + uVar9);
            if (*(uint *)(iVar6 + 0x1c) < *(uint *)(iVar3 + 0x20)) {
              FUN_00034324(DAT_00037158);
              *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar6 + 0x1c);
            }
            uVar9 = *(uint *)(iVar3 + 0x20);
            if (uVar9 < *(uint *)(iVar6 + 0x18)) {
              FUN_00034324(s_Touch_duration_time____dms_is_to_0003715c,uVar9);
              leds_off();
              FUN_0003880c();
              motor_off();
              FUN_00039014(*(undefined4 *)(iVar6 + 0x20),_DAT_00037004 + 4);
            }
            else {
              cVar5 = *(char *)(iVar2 + 0x1c) + '\x01';
              *(char *)(iVar2 + 0x1c) = cVar5;
              FUN_00034324(DAT_0003719c,cVar5,uVar9,*(undefined4 *)(iVar3 + 0x24));
              FUN_0003880c();
              motor_off();
              FUN_00034b28(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x24));
              if (*(char *)(iVar2 + 0x2e) == '\x01') {
                *(undefined *)(iVar2 + 0x2e) = 0;
              }
            }
            *(undefined *)(iVar3 + 2) = 0;
          }
          if (*(char *)(iVar2 + 0x1c) == *(char *)(iVar6 + 0x14)) {
            *(undefined4 *)(iVar3 + 0x24) = 0;
            input_flag_clear(1);
            return;
          }
        }
      }
    }
  }
  return;
}


/* ---- FUN_000371a0 @ 000371a0 ---- */

void FUN_000371a0(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8;
  
  local_8 = in_r3;
  iVar1 = FUN_00031814();
  if ((iVar1 == 0) && (iVar1 = FUN_000317a4(), iVar1 != 0)) {
    FUN_00026218(iVar1,0x1c2,s__________user_touch_c_000371e4);
  }
  local_8._0_2_ = (ushort)(byte)*DAT_000371fc;
  iVar1 = FUN_000316c0(0xe,&local_8,DAT_00037200);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x1c9,s__________user_touch_c_000371e4);
  }
  FUN_0003161c(0xe,1);
  return;
}


/* ---- FUN_00037204 @ 00037204 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037204(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*param_1 * 4 + 0x50000700) = 0x60c;
  *(undefined4 *)(param_1[1] * 4 + 0x50000700) = 0x60c;
  FUN_00030e90(*param_1);
  FUN_00030e90(param_1[1]);
  *(undefined4 *)(*param_1 * 4 + 0x50000700) = 0x60d;
  *(undefined4 *)(param_1[1] * 4 + 0x50000700) = 0x60d;
  FUN_000315d4(4);
  iVar1 = 0;
  do {
    if ((_DAT_50000510 >> (uint)*(byte *)(param_1 + 1) & 1) != 0) {
      if (iVar1 == 0) {
        return;
      }
      break;
    }
    _DAT_5000050c = 1 << (uint)*(byte *)param_1;
    FUN_000315d4(4);
    FUN_00030e90(*param_1);
    FUN_000315d4(4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  _DAT_5000050c = 1 << *(byte *)(param_1 + 1);
  FUN_000315d4(4);
  FUN_00030e90(param_1[1]);
  return;
}


/* ---- FUN_000372f0 @ 000372f0 ---- */

void FUN_000372f0(int param_1,code **param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 local_28;
  uint auStack_24 [6];
  
  auStack_24[0] = (uint)*(byte *)(param_2 + 0xb);
  local_28 = param_2[10];
  iVar3 = FUN_00037514(param_1,(int)param_2 + 0x2e,param_2 + 0xd,param_2[9]);
  if (iVar3 != 0) {
    return;
  }
  if ((*(char *)((int)param_2 + 0x2e) == '\0') &&
     (((cVar1 = *(char *)(param_2 + 3), cVar1 == '\x02' || (cVar1 == '\x03')) &&
      (param_2[9] == param_2[6])))) {
    param_2[9] = param_2[7];
    param_2[10] = param_2[5];
    *(byte *)(param_2 + 0xb) = (byte)(((uint)*(byte *)(param_2 + 8) << 0x1a) >> 0x1f);
    if (cVar1 == '\x03') {
      local_28 = (code *)(((uint)*(byte *)(param_2 + 8) << 0x1a) >> 0x1f);
      FUN_00037618(param_2,param_1);
      return;
    }
    FUN_00037424(param_2,param_1);
    return;
  }
  FUN_00026484(auStack_24,param_2 + 3,0x14);
  if (*(char *)((int)param_2 + 0x2e) == '\0') {
    local_28 = (code *)((uint)local_28._1_3_ << 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c4);
    *(int *)(param_1 + 0x4c4) = iVar3;
    if (iVar3 << 0x1e < 0) {
      uVar2 = 1;
    }
    else {
      if (-1 < iVar3 << 0x1d) goto LAB_00037394;
      uVar2 = 2;
    }
    local_28 = (code *)CONCAT31(local_28._1_3_,uVar2);
  }
LAB_00037394:
  *(undefined *)((int)param_2 + 0x2f) = 0;
  if (-1 < (int)((uint)*(byte *)(param_2 + 8) << 0x1d)) {
    (**param_2)(&local_28,param_2[1]);
  }
  return;
}


/* ---- FUN_000373ac @ 000373ac ---- */

undefined8 FUN_000373ac(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *DAT_000373dc;
  uStack_14 = DAT_000373dc[1];
  uStack_10 = DAT_000373dc[2];
  uStack_c = DAT_000373dc[3];
  iVar1 = FUN_00030b64(DAT_000373dc + -4,&local_18,0);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x3f,s__________aw9109_aw9109_support_c_000373e0);
    return CONCAT44(uStack_14,local_18);
  }
  FUN_000320d8(DAT_000373dc + -3);
  return CONCAT44(uStack_14,local_18);
}


/* ---- FUN_00037404 @ 00037404 ---- */

undefined4 FUN_00037404(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x8200;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    uVar1 = 0x8201;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    uVar1 = 0x8202;
  }
  return uVar1;
}


/* ---- FUN_00037424 @ 00037424 ---- */

undefined8 FUN_00037424(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_28;
  
  local_28 = DAT_000374e8;
  uVar3 = 0;
  puVar4 = param_2;
  FUN_0003155a(param_2,0x104);
  FUN_0003155a(param_2,0x124);
  FUN_0003155a(param_2,0x11c);
  FUN_0003155a(param_2,0x108);
  param_1[0xd] = 0;
  *(undefined *)((int)param_1 + 0x2e) = 0;
  if (param_4 == (undefined4 *)0x1) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  param_2[0x80] = uVar2;
  param_2[8] = 1;
  *param_2 = 1;
  if (*param_1 == 0) {
    for (; 0 < local_28; local_28 = local_28 + -1) {
      puVar4 = param_4;
      iVar1 = FUN_00037514(param_2,(int)param_1 + 0x2e,param_1 + 0xd,param_3,param_4,0);
      if (iVar1 == 0) break;
    }
    if (*(char *)((int)param_1 + 0x2e) != '\0') {
      iVar1 = param_2[0x131];
      param_2[0x131] = iVar1;
      if (iVar1 != 0) {
        uVar3 = FUN_00037404();
      }
    }
    if (local_28 < 1) {
      param_2[0x140] = 0;
      param_2[0x140] = 5;
      uVar3 = 3;
    }
  }
  else {
    param_1[2] = 0x286;
    param_2[0xc1] = param_1[2];
  }
  return CONCAT44(puVar4,uVar3);
}


/* ---- FUN_000374ec @ 000374ec ---- */

undefined4 FUN_000374ec(int param_1,int param_2,uint param_3,uint *param_4,int param_5)

{
  if (*param_4 < param_3) {
    *(uint *)(param_1 + 0x51c) = (uint)*(byte *)(param_2 + *param_4);
    *param_4 = *param_4 + 1;
  }
  else {
    if (param_5 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return 1;
}


/* ---- FUN_00037514 @ 00037514 ---- */

undefined4
FUN_00037514(int param_1,char *param_2,uint *param_3,int param_4,uint param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*param_2 == '\0') && (*param_3 != param_5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*param_2 != '\0') {
    FUN_0003155a(param_1);
    FUN_0003155a(param_1,0x11c);
    FUN_0003155a(param_1,0x108);
    goto LAB_000375f0;
  }
  iVar2 = FUN_00031550(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00031550(param_1,0x11c);
    if (iVar2 == 0) {
      iVar2 = FUN_00031550(param_1,0x108);
      if (iVar2 == 0) goto LAB_000375f0;
      FUN_0003155a(param_1,0x108);
      iVar2 = FUN_00031550(param_1,0x124);
      if (iVar2 == 0) {
        if (*param_3 < param_5) {
          *(char *)(param_4 + *param_3) = (char)*(undefined4 *)(param_1 + 0x518);
          uVar4 = *param_3 + 1;
          *param_3 = uVar4;
          if (uVar4 == param_5 - 1) {
            *(undefined4 *)(param_1 + 0x200) = 2;
          }
          else if (uVar4 == param_5) goto LAB_000375f0;
          *(undefined4 *)(param_1 + 0x20) = 1;
        }
        goto LAB_000375f0;
      }
    }
    else {
      FUN_0003155a(param_1,0x11c);
      iVar2 = FUN_00031550(param_1,0x124);
      if (iVar2 == 0) {
        iVar2 = FUN_000374ec(param_1,param_4,param_5,param_3,param_6);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_000375f0;
      }
    }
  }
  FUN_0003155a(param_1,0x124);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *param_2 = '\x01';
LAB_000375f0:
  if ((bVar1) && (iVar2 = FUN_00031550(param_1,0x104), iVar2 != 0)) {
    FUN_0003155a(param_1,0x104);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* ---- FUN_00037618 @ 00037618 ---- */

undefined4
FUN_00037618(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  
  local_30 = DAT_000376e4;
  uVar2 = 0;
  FUN_0003155a(param_2,0x104);
  FUN_0003155a(param_2,0x124);
  FUN_0003155a(param_2,0x11c);
  FUN_0003155a(param_2,0x108);
  *(undefined4 *)(param_2 + 0x200) = 0;
  param_1[0xd] = 0;
  *(undefined *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)(param_2 + 0x20) = 1;
  *(undefined4 *)(param_2 + 8) = 1;
  FUN_000374ec(param_2,param_3,param_4,param_1 + 0xd,param_5);
  if (*param_1 == 0) {
    for (; 0 < local_30; local_30 = local_30 + -1) {
      iVar1 = FUN_00037514(param_2,(int)param_1 + 0x2e,param_1 + 0xd,param_3,param_4,param_5);
      if (iVar1 == 0) break;
    }
    if (*(char *)((int)param_1 + 0x2e) != '\0') {
      iVar1 = *(int *)(param_2 + 0x4c4);
      *(int *)(param_2 + 0x4c4) = iVar1;
      if (iVar1 != 0) {
        uVar2 = FUN_00037404();
      }
    }
    if (local_30 < 1) {
      *(undefined4 *)(param_2 + 0x500) = 0;
      *(undefined4 *)(param_2 + 0x500) = 5;
      uVar2 = 3;
    }
  }
  else {
    param_1[2] = 0x286;
    *(int *)(param_2 + 0x304) = param_1[2];
  }
  return uVar2;
}


/* ---- FUN_000376e8 @ 000376e8 ---- */

undefined4 FUN_000376e8(int *param_1,int param_2,char *param_3,int param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x308) = DAT_00037778;
  if (*(char *)((int)param_1 + 0x2f) == '\0') {
    *(char *)((int)param_1 + 0x2f) = (char)((param_4 << 0x1d) >> 0x1f) + '\x01';
    param_1[8] = param_4;
    FUN_00026484(param_1 + 3,param_3,0x14,param_4,param_4);
    param_1[10] = *(int *)(param_3 + 4);
    param_1[9] = *(int *)(param_3 + 0xc);
    *(uint *)(param_2 + 0x588) = (uint)(byte)param_3[1];
    if (*param_3 == '\x01') {
      *(undefined *)(param_1 + 0xb) = 0;
      uVar2 = FUN_00037424(param_1,param_2,*(undefined4 *)(param_3 + 0xc),
                           *(undefined4 *)(param_3 + 4));
    }
    else {
      if ((*param_3 == '\0') && (-1 < param_4 << 0x1a)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0xb) = uVar1;
      uVar2 = FUN_00037618(param_1,param_2,*(undefined4 *)(param_3 + 0xc),
                           *(undefined4 *)(param_3 + 4),uVar1);
    }
    if (*param_1 == 0) {
      *(undefined *)((int)param_1 + 0x2f) = 0;
    }
  }
  else {
    *(int *)(param_2 + 0x304) = param_1[2];
    uVar2 = 0x11;
  }
  return uVar2;
}


/* ---- FUN_0003777c @ 0003777c ---- */

void FUN_0003777c(void)

{
  FUN_000264b6(DAT_00037788,0x120);
  return;
}


/* ---- FUN_0003778c @ 0003778c ---- */

void FUN_0003778c(undefined2 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_000377e8;
  puVar1 = DAT_000377e4;
  uVar3 = *DAT_000377e4;
  puVar4 = (undefined4 *)(DAT_000377e8 + uVar3 * 0x24);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined2 *)(iVar2 + uVar3 * 0x24) = *param_1;
  *(undefined *)((int)puVar4 + 2) = *(undefined *)(param_1 + 1);
  *(undefined2 *)((int)puVar4 + 0x1a) = param_1[0xd];
  *(undefined2 *)((int)puVar4 + 0x1e) = param_1[0xf];
  *(undefined *)(puVar4 + 6) = *(undefined *)(param_1 + 0xc);
  *(undefined *)((int)puVar4 + 0x19) = *(undefined *)((int)param_1 + 0x19);
  puVar4[8] = puVar4 + 1;
  *(undefined2 *)(puVar4 + 7) = param_1[0xe];
  if (*(char *)(param_1 + 1) == '\x02') {
    FUN_00026484(puVar4 + 1,param_1 + 2,0x14);
  }
  *puVar1 = *(byte *)puVar1 + 1 & 7;
  return;
}


/* ---- FUN_000377ec @ 000377ec ---- */

void FUN_000377ec(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = DAT_0003782c[1];
  if (iVar2 != *DAT_0003782c) {
    if (*(char *)(DAT_00037830 + iVar2 * 0x24 + 2) == '\x01') {
      sVar1 = *(short *)(DAT_00037830 + iVar2 * 0x24);
      software_interrupt(0xa1);
    }
    else {
      sVar1 = *(short *)(DAT_00037830 + iVar2 * 0x24);
      software_interrupt(0xa3);
    }
    if (sVar1 == 0) {
      DAT_0003782c[1] = *(byte *)(DAT_0003782c + 1) + 1 & 7;
    }
  }
  return;
}


/* ---- FUN_00037834 @ 00037834 ---- */

undefined8 FUN_00037834(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264b6(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa4;
  local_14 = 0x31111;
  FUN_000264b6(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_0003791c @ 0003791c ---- */

undefined8 FUN_0003791c(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x21111;
  FUN_000264b6(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa5;
  local_14 = 0x31111;
  FUN_000264b6(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_000379fa @ 000379fa ---- */

undefined8 FUN_000379fa(undefined *param_1)

{
  byte local_48 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [20];
  undefined4 local_14;
  undefined2 local_10;
  undefined local_e;
  
  local_2c = 0x22111;
  FUN_000264b6(local_48,0x1c);
  local_44 = 0;
  local_48[0] = local_48[0] | 0x12;
  puStack_34 = &local_2c;
  local_38 = 0;
  local_3c = 0;
  local_30 = 0;
  local_e = *param_1;
  local_10 = 0xffa8;
  local_14 = 0x32111;
  FUN_000264b6(local_28,0x14);
  software_interrupt(0xaa);
  return CONCAT44(local_48,(uint)*(ushort *)(param_1 + 2));
}


/* ---- FUN_00037ad8 @ 00037ad8 ---- */

undefined4 FUN_00037ad8(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  return 2;
}


/* ---- FUN_00037ae2 @ 00037ae2 ---- */

undefined4 FUN_00037ae2(undefined4 param_1,undefined *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return 4;
}


/* ---- FUN_00037af4 @ 00037af4 ---- */

undefined4 FUN_00037af4(void)

{
  FUN_000264b6(DAT_00037b0c,0x14);
  FUN_000303a8(*DAT_00037b10);
  return 0;
}


/* ---- thunk_FUN_00035d64 @ 00037b14 ---- */

void thunk_FUN_00035d64(void)

{
  int iVar1;
  
  iVar1 = DAT_00035d84;
  *(undefined *)(DAT_00035d84 + 7) = 0;
  if (*(char *)(iVar1 + 8) == '\0') {
    *(undefined *)(iVar1 + 8) = 1;
    FUN_00028ca4(*(undefined4 *)(DAT_00035d88 + 0x1c),0x8000,0);
    return;
  }
  return;
}


/* ---- FUN_00037b28 @ 00037b28 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037b28(void)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  FUN_0002b986();
  iVar2 = _DAT_00037cb0;
  uVar1 = *(ushort *)(DAT_00037cac + 8);
  if (uVar1 < 0x11f9) {
    if (uVar1 < 4000) {
      if (uVar1 < 0xf82) {
        if (uVar1 < 0xf5f) {
          if (uVar1 < 0xf3c) {
            if (uVar1 < 0xf0a) {
              if (uVar1 < 0xedd) {
                if (uVar1 < 0xeb9) {
                  if (uVar1 < 0xe9a) {
                    if (uVar1 < 0xe7e) {
                      if (uVar1 < 0xe51) {
                        if (uVar1 < 0xe08) {
                          uVar3 = 1;
                        }
                        else {
                          uVar3 = 5;
                        }
                      }
                      else {
                        uVar3 = 10;
                      }
                    }
                    else {
                      uVar3 = 0x14;
                    }
                  }
                  else {
                    uVar3 = 0x1e;
                  }
                }
                else {
                  uVar3 = 0x28;
                }
              }
              else {
                uVar3 = 0x32;
              }
            }
            else {
              uVar3 = 0x3c;
            }
          }
          else {
            uVar3 = 0x46;
          }
        }
        else {
          uVar3 = 0x50;
        }
      }
      else {
        uVar3 = 0x5a;
      }
    }
    else {
      uVar3 = 100;
    }
    FUN_00034322(s_Battery_voltage____dmV___d___00037cdc,uVar1,uVar3);
    if ((uVar3 == 1) && (uVar1 != 0)) {
      FUN_00034322(s_Battery_voltage_is_too_low__shut_00037cfc,1,uVar1);
      _DAT_50000508 = 0x200000;
      FUN_000361f0();
    }
    else if ((*DAT_00037d30 != '\0') && ((*_DAT_00037d34 != '\0' && (0x13 < uVar3)))) {
      *DAT_00037d30 = '\0';
      FUN_00034324(s____EXIT_LOW_MODE____00037d37 + 1);
      FUN_00034324(s____EXIT_LOW_MODE____00037d50);
      DataSynchronizationBarrier(0xf);
      *DAT_00037d68 = *DAT_00037d68 & 0x700 | DAT_00037d6c;
      DataSynchronizationBarrier(0xf);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    FUN_00034322(s_Battery_measure_result_ERROR___d_00037cb3 + 1,uVar1);
    uVar3 = (ushort)*(byte *)(iVar2 + 0x2c);
  }
  *(ushort *)(iVar2 + 0x2c) = uVar3;
  FUN_00034324(s_______________________________d_00037d70,uVar3);
  if ((0x84 < *(byte *)(iVar2 + 8)) && (*(byte *)(iVar2 + 8) != 0xff)) {
    FUN_00034322(s_Notify_to_APP__battery____d__00037d94,uVar3);
    iVar2 = FUN_0002a7a4(DAT_00037db4,_DAT_00037cb0 + 0x2c);
    if (iVar2 != 0) {
      FUN_00034322(s_func___s__line__d_ERROR__code__0_00037dbc,DAT_00037db8,0x1bb,iVar2);
      if (iVar2 == 8) {
        FUN_00034322(DAT_00037e40,8);
        return;
      }
      if (iVar2 == 0x3401) {
        FUN_00034322(s_BLE_ERROR_GATTS_SYS_ATTR_MISSING_00037de4);
        software_interrupt(0xb1);
        if (*(short *)(DAT_00037db4 + 0x5c) != 0) {
          FUN_00026218(*(short *)(DAT_00037db4 + 0x5c),0x1c7,s__________battery_measure_c_00037e24,2
                      );
          return;
        }
      }
    }
  }
  return;
}


/* ---- FUN_00037e44 @ 00037e44 ---- */

int FUN_00037e44(void)

{
  int iVar1;
  undefined local_20 [2];
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined2 local_1b;
  undefined2 local_19;
  undefined2 local_17;
  undefined4 local_15;
  
  FUN_000264b6(local_20,0x14);
  local_20[0] = 0x27;
  local_1e = 0x31;
  local_1d = 0x10;
  local_1b = *(undefined2 *)(DAT_00037ea0 + 0x28);
  local_19 = *(undefined2 *)(DAT_00037ea0 + 0x2a);
  local_17 = *(undefined2 *)(DAT_00037ea0 + 0x2c);
  local_15 = *(undefined4 *)(DAT_00037ea0 + 0x30);
  local_1c = *(undefined *)(DAT_00037ea0 + 0x27);
  iVar1 = FUN_0002a412(DAT_00037ea4,local_20);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x367,DAT_00037ea8);
  }
  return iVar1;
}


/* ---- FUN_00037f58 @ 00037f58 ---- */

int FUN_00037f58(void)

{
  int iVar1;
  undefined local_28 [2];
  undefined local_26;
  undefined local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  FUN_000264b6(local_28,0x14);
  local_28[0] = 0x27;
  local_26 = 0x19;
  local_25 = 0x10;
  local_24 = *(undefined4 *)(DAT_00037fc0 + 0x34);
  local_20 = *(undefined4 *)(DAT_00037fc0 + 0x38);
  uStack_1c = *(undefined4 *)(DAT_00037fc0 + 0x3c);
  iVar1 = FUN_0002a412(DAT_00037fc4,local_28);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x30a,DAT_00037fc8);
  }
  return iVar1;
}


/* ---- FUN_00038024 @ 00038024 ---- */

void FUN_00038024(void)

{
  return;
}


/* ---- FUN_00038028 @ 00038028 ---- */

void FUN_00038028(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00038050;
  iVar2 = FUN_0002a500(*(undefined *)(DAT_00038050 + 1),DAT_0003804c,0);
  if (iVar2 == 0) {
    FUN_0002a500(*(undefined *)(iVar1 + 5),DAT_00038054,0);
    return;
  }
  return;
}


/* ---- FUN_00038310 @ 00038310 ---- */

undefined4 FUN_00038310(int param_1)

{
  if (((*(char *)(param_1 + 5) != '\0') && (*(char *)(param_1 + 0x252) == '\0')) &&
     (*(char *)(param_1 + 0x254) != '\0')) {
    return 1;
  }
  return 0;
}


/* ---- FUN_00038328 @ 00038328 ---- */

void FUN_00038328(undefined4 param_1)

{
  FUN_000304b6(DAT_00038330,param_1);
  return;
}


/* ---- FUN_00038334 @ 00038334 ---- */

undefined4 FUN_00038334(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(DAT_00038384 + uVar2 * 0x10) == param_1) {
      iVar1 = DAT_00038384 + uVar2 * 0x10;
      *param_2 = *(undefined4 *)(iVar1 + 4);
      *param_3 = *(undefined4 *)(iVar1 + 8);
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
      return 1;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x14);
  *param_2 = 0x3f800000;
  *param_3 = 0x3f800000;
  *param_4 = 0x3f800000;
  return 0;
}


/* ---- FUN_00038388 @ 00038388 ---- */

uint FUN_00038388(void)

{
  uint uVar1;
  
  uVar1 = FUN_00028c1c();
  return uVar1 >> 5;
}


/* ---- FUN_00038394 @ 00038394 ---- */

void FUN_00038394(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_000383b0,0x1c);
  puVar1 = DAT_000383b0;
  *DAT_000383b0 = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x12;
  return;
}


/* ---- FUN_000383b4 @ 000383b4 ---- */

void FUN_000383b4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_000383d4,0x1c);
  puVar1 = DAT_000383d4;
  *DAT_000383d4 = param_1;
  *(undefined *)((int)puVar1 + -3) = 0x13;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- leds_off @ 000383d8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void leds_off(void)

{
  int iVar1;
  
  iVar1 = _DAT_00038410;
  FUN_00034324(s_user_leds_off__d__d_00038413 + 1,*(undefined *)(_DAT_00038410 + 0x2f),
               *(undefined *)(_DAT_00038410 + 10));
  if (*(char *)(iVar1 + 0x2f) == '\x01') {
    FUN_00029880();
  }
  FUN_00038610();
  *(undefined *)(iVar1 + 10) = 0;
  if (*(char *)(iVar1 + 0xb) != '\x01') {
    FUN_00034270();
  }
  FUN_000290a4();
  return;
}


/* ---- leds_req_blink @ 0003842c ---- */

void leds_req_blink(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_00038460,0x1c);
  puVar1 = DAT_00038460;
  *DAT_00038460 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x16;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- leds_req_breath @ 00038464 ---- */

undefined8
leds_req_breath(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_4;
  uVar3 = param_5;
  FUN_00034324(s_user_leds_on_breath__d__d__d__d___000384b0,param_1,param_2,param_3,param_4,param_5,
               param_6,param_7);
  FUN_000264b6(DAT_000384e0,0x1c);
  puVar1 = DAT_000384e0;
  DAT_000384e0[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x11;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return CONCAT44(uVar3,uVar2);
}


/* ---- FUN_000384e4 @ 000384e4 ---- */

void FUN_000384e4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_0003850c,0x1c);
  puVar1 = DAT_0003850c;
  *DAT_0003850c = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x15;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- FUN_00038510 @ 00038510 ---- */

void FUN_00038510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_00038544,0x1c);
  puVar1 = DAT_00038544;
  *DAT_00038544 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined *)((int)puVar1 + -3) = 0x14;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- FUN_00038548 @ 00038548 ---- */

void FUN_00038548(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  FUN_000264b6(DAT_00038584,0x1c);
  puVar1 = DAT_00038584;
  DAT_00038584[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  puVar1[6] = param_7;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined *)((int)puVar1 + -3) = 0x17;
  *(undefined *)((int)puVar1 + -0x2a) = 1;
  return;
}


/* ---- FUN_00038588 @ 00038588 ---- */

void FUN_00038588(void)

{
  leds_req_breath(0xffffff,0x1e,500,500,0,0x32,0x3fc);
  return;
}


/* ---- FUN_000385a8 @ 000385a8 ---- */

void FUN_000385a8(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_000385f0;
  if (*(char *)(DAT_000385f0 + 2) != '\0') {
    FUN_00038610();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = FUN_00028ca4(*(undefined4 *)(DAT_000385f4 + 8),uVar2,param_2);
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0x156,s__________user_timer_c_000385f8);
    return;
  }
  *(undefined *)(iVar1 + 2) = 1;
  return;
}


/* ---- FUN_00038610 @ 00038610 ---- */

void FUN_00038610(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00038638;
  if (*(char *)(DAT_00038638 + 2) != '\0') {
    iVar2 = FUN_00028d2c(*(undefined4 *)(DAT_0003863c + 8));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x163,s__________user_timer_c_00038640);
      return;
    }
    *(undefined *)(iVar1 + 2) = 0;
  }
  return;
}


/* ---- FUN_00038658 @ 00038658 ---- */

void FUN_00038658(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    sVar1 = *(short *)(param_1 + 2);
    software_interrupt(0x66);
    if (sVar1 != 0) {
      if (sVar1 != 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00038672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 4))();
        return;
      }
      sVar1 = 1;
    }
    *(char *)(param_1 + 8) = (char)sVar1;
  }
  return;
}


/* ---- FUN_0003867c @ 0003867c ---- */

void FUN_0003867c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_000386c4;
  if (*(char *)(DAT_000386c4 + 3) != '\0') {
    FUN_000386e4();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = FUN_00028ca4(*(undefined4 *)(DAT_000386c8 + 0xc),uVar2,0);
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0x1a1,s__________user_timer_c_000386cc);
    return;
  }
  *(undefined *)(iVar1 + 3) = 1;
  return;
}


/* ---- FUN_000386e4 @ 000386e4 ---- */

void FUN_000386e4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0003870c;
  if (*(char *)(DAT_0003870c + 3) != '\0') {
    iVar2 = FUN_00028d2c(*(undefined4 *)(DAT_00038710 + 0xc));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x1ae,s__________user_timer_c_00038714);
      return;
    }
    *(undefined *)(iVar1 + 3) = 0;
  }
  return;
}


/* ---- FUN_0003872c @ 0003872c ---- */

char * FUN_0003872c(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = DAT_00038758;
  cVar2 = DAT_00038758[1] + '\x01';
  if (DAT_00038758[2] == cVar2) {
    cVar2 = '\0';
  }
  if (*DAT_00038758 == cVar2) {
    return (char *)0x0;
  }
  *param_1 = cVar2;
  return pcVar1 + (uint)(byte)pcVar1[1] * 0x18 + 4;
}


/* ---- FUN_0003875c @ 0003875c ---- */

void FUN_0003875c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = DAT_00038784;
  iVar2 = FUN_00028ca4(*DAT_00038788,&BYTE_00028000,0);
  if (iVar2 != 0) {
    FUN_00026218(iVar2,0xb8,s__________user_timer_c_0003878c);
    return;
  }
  *puVar1 = 1;
  return;
}


/* ---- FUN_000387a4 @ 000387a4 ---- */

void FUN_000387a4(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_000387ec;
  if (*(char *)(DAT_000387ec + 5) != '\0') {
    FUN_0003880c();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = FUN_00028ca4(*(undefined4 *)(DAT_000387f0 + 0x14),uVar2,param_2);
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0x1fd,s__________user_timer_c_000387f4);
    return;
  }
  *(undefined *)(iVar1 + 5) = 1;
  return;
}


/* ---- FUN_0003880c @ 0003880c ---- */

void FUN_0003880c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00038834;
  if (*(char *)(DAT_00038834 + 5) != '\0') {
    iVar2 = FUN_00028d2c(*(undefined4 *)(DAT_00038838 + 0x14));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x20b,s__________user_timer_c_0003883c);
      return;
    }
    *(undefined *)(iVar1 + 5) = 0;
  }
  return;
}


/* ---- FUN_00038854 @ 00038854 ---- */

void FUN_00038854(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003889c;
  if (*(char *)(DAT_0003889c + 4) != '\0') {
    FUN_000388bc();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = FUN_00028ca4(*(undefined4 *)(DAT_000388a0 + 0x10),uVar2,param_2);
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0x1c9,s__________user_timer_c_000388a4);
    return;
  }
  *(undefined *)(iVar1 + 4) = 1;
  return;
}


/* ---- FUN_000388bc @ 000388bc ---- */

void FUN_000388bc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000388e4;
  if (*(char *)(DAT_000388e4 + 4) != '\0') {
    iVar2 = FUN_00028d2c(*(undefined4 *)(DAT_000388e8 + 0x10));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x1d6,s__________user_timer_c_000388ec);
      return;
    }
    *(undefined *)(iVar1 + 4) = 0;
  }
  return;
}


/* ---- FUN_00038908 @ 00038908 ---- */

void FUN_00038908(void)

{
  int iVar1;
  
  iVar1 = FUN_00028c28(DAT_00038a34,0,DAT_00038a30);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x32f,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x2c,1,DAT_00038a50);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x335,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x28,0,DAT_00038a54);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x33b,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x24,0,DAT_00038a58);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x341,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x20,0,DAT_00038a5c);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x347,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x1c,0,DAT_00038a60);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x34d,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x18,0,DAT_00038a64);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x353,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x14,0,DAT_00038a68);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x359,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0x10,1,DAT_00038a6c);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x35e,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -0xc,1,DAT_00038a70);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x363,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -8,1,DAT_00038a74);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x369,s__________user_timer_c_00038a38);
  }
  iVar1 = FUN_00028c28(DAT_00038a34 + -4,0,DAT_00038a78);
  if (iVar1 != 0) {
    FUN_00026218(iVar1,0x36e,s__________user_timer_c_00038a38);
    return;
  }
  return;
}


/* ---- FUN_00038b90 @ 00038b90 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038b90(void)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uStack_24;
  
  FUN_0002d088();
  FUN_00028bfc(0x22);
  iVar5 = _DAT_00038c98;
  iVar7 = DAT_00038c94;
  pcVar2 = DAT_00038c90;
  puVar1 = DAT_00038c8c;
  uStack_24 = *DAT_00038c8c;
  FUN_00034322(s_user_timer_power_repeat_handler_A_00038c9b + 1,*(undefined *)(_DAT_00038c98 + 100),
               *(undefined *)(DAT_00038c94 + 9),*(undefined2 *)(DAT_00038c94 + 0x2c),*DAT_00038c90);
  iVar3 = DAT_00038cd8;
  if ((*(char *)(iVar5 + 100) == '\0') || (*pcVar2 != '\0')) {
    *(undefined2 *)(DAT_00038cd8 + 0x10) = 0;
  }
  else {
    uStack_24 = *(uint *)(iVar5 + 0x6c);
    FUN_00034322(s_user_timer_power_repeat_handler_B_00038cdf + 1,*(undefined2 *)(iVar7 + 0x2c),
                 *(undefined *)(iVar5 + 0x24),5000,*(undefined2 *)(DAT_00038cd8 + 0x10));
    if ((*puVar1 < (uint)*(ushort *)(iVar5 + 0x80)) && (*pcVar2 == '\0')) {
      FUN_00034322(s___________into_ship_mode_1__d__d_00038d14);
      FUN_0002e790(1);
    }
    if (*(ushort *)(iVar7 + 0x2c) < 0x15) {
      *(short *)(iVar3 + 0x10) = *(short *)(iVar3 + 0x10) + 1;
      FUN_00034322(s_SHOW_LOW_BATTERY_LEDs_effcet__00038d3c);
      *(undefined2 *)(iVar3 + 0x10) = 0;
      FUN_000383b4(0x1e);
    }
  }
  pcVar4 = _DAT_00038cdc;
  iVar5 = *(int *)(iVar3 + 0x20);
  uVar6 = iVar5 + 1;
  *(uint *)(iVar3 + 0x20) = uVar6;
  if (*pcVar4 != '\0') {
    *pcVar4 = '\0';
    if (uVar6 < 4) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
    }
    else {
      *(int *)(iVar3 + 0x20) = iVar5 + -3;
    }
  }
  uVar6 = (uint)*(byte *)(iVar7 + 0x31);
  iVar7 = *(int *)(iVar3 + 0x1c);
  *(int *)(iVar3 + 0x1c) = iVar7 + 1;
  FUN_00034324(s_one_second__d__d_cnt_2__d__d_00038d5c,*pcVar2,iVar7,*(undefined4 *)(iVar3 + 0x20));
  if (*(byte *)(iVar3 + 0xc) < 4) {
    *(byte *)(iVar3 + 0xc) = *(byte *)(iVar3 + 0xc) + 1;
    FUN_00034194(0);
  }
  uVar8 = CONCAT44(DAT_00038d7c,*(int *)(iVar3 + 0x20) * 0x271);
  if (DAT_00038d7c <= (uint)(*(int *)(iVar3 + 0x20) * 5000)) {
    *(undefined4 *)(iVar3 + 0x20) = 0;
    uVar8 = FUN_00037b28();
  }
  FUN_00039254((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,uStack_24);
  return;
}


/* ---- FUN_00038ff8 @ 00038ff8 ---- */

void FUN_00038ff8(void)

{
  FUN_0003907c();
  FUN_000386e4();
  FUN_00038610();
  FUN_000388bc();
  FUN_0003880c();
  return;
}


/* ---- FUN_00039014 @ 00039014 ---- */

void FUN_00039014(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0003905c;
  if (*(char *)(DAT_0003905c + 1) != '\0') {
    FUN_0003907c();
  }
  uVar2 = FUN_00026404(param_1 * 0x8000 + 500,
                       (param_1 >> 0x11) + (uint)(0xfffffe0b < param_1 * 0x8000),1000,0);
  iVar3 = FUN_00028ca4(*(undefined4 *)(DAT_00039060 + 4),uVar2,param_2);
  if (iVar3 != 0) {
    FUN_00026218(iVar3,0x137,s__________user_timer_c_00039064);
    return;
  }
  *(undefined *)(iVar1 + 1) = 1;
  return;
}


/* ---- FUN_0003907c @ 0003907c ---- */

void FUN_0003907c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000390a4;
  if (*(char *)(DAT_000390a4 + 1) != '\0') {
    iVar2 = FUN_00028d2c(*(undefined4 *)(DAT_000390a8 + 4));
    if (iVar2 != 0) {
      FUN_00026218(iVar2,0x143,s__________user_timer_c_000390ac);
      return;
    }
    *(undefined *)(iVar1 + 1) = 0;
  }
  return;
}


/* ---- FUN_000390c4 @ 000390c4 ---- */

void FUN_000390c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_000390f4(param_1,param_2,2,param_4,param_5,param_6);
  if (iVar1 == 0) {
    FUN_000390f4(param_1,param_3,0x10,param_4,param_5,param_6);
  }
  return;
}


/* ---- FUN_000390f4 @ 000390f4 ---- */

undefined8
FUN_000390f4(ushort *param_1,byte *param_2,uint param_3,int param_4,ushort *param_5,byte *param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte local_30 [4];
  undefined local_2c [4];
  
  pbVar7 = local_30;
  bVar2 = false;
  uVar1 = *param_5;
  pbVar6 = param_2;
  for (iVar8 = 0; iVar8 < (int)(uint)*param_1; iVar8 = iVar8 + 1) {
    puVar4 = local_2c;
    software_interrupt(100);
    if (puVar4 != (undefined *)0x0) goto LAB_00039186;
    local_30[0] = (byte)param_3;
    pbVar6 = pbVar7;
    if ((param_3 & 0xff) == param_3) {
      if (bVar2) {
        iVar5 = 0;
      }
      else {
        iVar5 = 2;
      }
      pbVar6 = (byte *)((uint)*param_5 + (param_3 & 0xff) + iVar5);
      if (param_6 < pbVar6) goto LAB_00039184;
      if (!bVar2) {
        uVar3 = *param_5 + 1;
        *param_5 = (ushort)uVar3;
        *(char *)(param_4 + (uVar3 & 0xffff)) = (char)param_2;
        *param_5 = *param_5 + 1;
        bVar2 = true;
      }
      puVar4 = local_2c;
      software_interrupt(100);
      if (puVar4 != (undefined *)0x0) goto LAB_00039186;
      pbVar6 = (byte *)(param_3 & 0xff);
      *param_5 = *param_5 + (ushort)local_30[0];
    }
  }
  if (bVar2) {
    uVar3 = ((uint)*param_5 - (uint)uVar1) - 1 & 0xffff;
    if (0xff < uVar3) {
LAB_00039184:
      puVar4 = &HardFault;
      pbVar7 = pbVar6;
      goto LAB_00039186;
    }
    *(char *)(param_4 + (uint)uVar1) = (char)uVar3;
  }
  puVar4 = (undefined *)0x0;
  pbVar7 = pbVar6;
LAB_00039186:
  return CONCAT44(pbVar7,puVar4);
}


/* ---- input_flag_clear @ 00039194 ---- */

void input_flag_clear(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined *)(DAT_000391a8 + 3) = 0;
    }
    return;
  }
  *(undefined *)(DAT_000391a8 + 4) = 0;
  return;
}


/* ---- input_flag_set @ 000391ac ---- */

void input_flag_set(int param_1)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(undefined *)(DAT_000391c0 + 3) = 1;
    }
    return;
  }
  *(undefined *)(DAT_000391c0 + 4) = 1;
  return;
}


/* ---- FUN_00039204 @ 00039204 ---- */

undefined4
FUN_00039204(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  
  puVar1 = DAT_00039250;
  uStack_28 = param_4;
  puVar2 = (undefined4 *)FUN_000303de(*DAT_00039250,&uStack_28);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 4;
  }
  else {
    FUN_000264b6(puVar2,0x1c);
    *(undefined *)(puVar2 + 1) = 0;
    *puVar2 = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_4;
    puVar2[2] = param_5;
    puVar2[3] = param_3;
    FUN_00030420(*puVar1,&uStack_28);
    FUN_00035108();
    uVar3 = 0;
  }
  return uVar3;
}


/* ---- FUN_00039254 @ 00039254 ---- */

void FUN_00039254(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_000392b4;
  if (*DAT_000392b0 == '\0') {
    uVar2 = *(int *)(DAT_000392b4 + 4) + 5;
    *(uint *)(DAT_000392b4 + 4) = uVar2;
    if (uVar2 % 600 == 0x253) {
      FUN_000288cc(0,0,DAT_000392b8);
    }
    if (*(uint *)(DAT_000392bc + 0x7c) <= *(uint *)(iVar1 + 4)) {
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_0002e790(3);
      return;
    }
  }
  else if (*(int *)(DAT_000392b4 + 4) != 0) {
    *(undefined4 *)(DAT_000392b4 + 4) = 0;
    FUN_000288cc(0,0,DAT_000392b8);
    return;
  }
  return;
}


/* ---- FUN_000392c0 @ 000392c0 ---- */

undefined4 FUN_000392c0(undefined2 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = (uint)*(byte *)(param_1 + 1) << 0x10;
  iVar4 = FUN_000337b8(DAT_00039360,*(undefined *)((int)param_1 + 9));
  if (iVar4 == 0) {
    return 3;
  }
  FUN_000334a0(&local_18,*(undefined *)(param_1 + 1),iVar4,*(undefined *)(param_1 + 4));
  cVar2 = local_18._2_1_;
  bVar5 = local_18._2_1_ == '\x01';
  if ((bVar5) || (cVar2 == '\x06')) {
    local_18 = CONCAT22(local_18._2_2_,1);
  }
  else {
    if (cVar2 == '\a') {
      uVar3 = 0x14;
    }
    else {
      if (cVar2 != '\b') goto LAB_00039314;
      uVar3 = (undefined2)(*(ushort *)(local_14 + 4) + 9 >> 2);
    }
    local_18 = CONCAT22(local_18._2_2_,uVar3);
  }
LAB_00039314:
  iVar4 = FUN_0003332e(*param_1,&local_18,param_1 + 2);
  puVar1 = DAT_00039364;
  if (iVar4 == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
    return 0;
  }
  if (iVar4 == 7) {
    return 7;
  }
  if (iVar4 == 0x11) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe | 2;
    *puVar1 = 1;
    return 0;
  }
  if (iVar4 != 0x86) {
    return 3;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfd | 1;
  *puVar1 = 1;
  return 0x86;
}


/* ---- FUN_00039368 @ 00039368 ---- */

void FUN_00039368(undefined4 param_1,uint param_2)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_0003939c(param_1,&local_10);
    if ((iVar1 == 0) ||
       ((((*(byte *)(iVar1 + 2) == param_2 && (-1 < (int)((uint)*(byte *)(iVar1 + 10) << 0x1e))) &&
         ((*(byte *)(iVar1 + 10) & 1) == 0)) && (*(int *)(iVar1 + 4) == 0)))) break;
    local_10 = local_10 + 1;
  }
  return;
}


/* ---- FUN_0003939c @ 0003939c ---- */

int FUN_0003939c(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  while( true ) {
    if (3 < uVar2) {
      return 0;
    }
    if (*(ushort *)(DAT_000393c8 + uVar2 * 0xc) == param_1) break;
    uVar2 = uVar2 + 1;
  }
  iVar1 = DAT_000393c8 + uVar2 * 0xc;
  *param_2 = uVar2;
  return iVar1;
}


/* ---- FUN_000393cc @ 000393cc ---- */

void FUN_000393cc(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined *)(param_1 + 1) = 0xff;
  *(undefined *)((int)param_1 + 9) = 0xff;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


/* ---- FUN_000393e8 @ 000393e8 ---- */

void FUN_000393e8(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(byte *)(param_1 + 8); uVar1 = uVar1 + 1) {
    FUN_000337e0(DAT_00039410,*(byte *)(param_1 + 9) + uVar1 & 0xff);
  }
  FUN_000393cc(param_1);
  return;
}


/* ---- FUN_00039414 @ 00039414 ---- */

int FUN_00039414(undefined4 *param_1,short *param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 local_28;
  int iStack_24;
  
  if (*DAT_000394f4 == '\0') {
    iVar1 = 2;
  }
  else if (param_2 == (short *)0x0) {
    iVar1 = 5;
  }
  else if ((*param_2 == -1) || (param_2[1] == 0)) {
    iVar1 = 4;
  }
  else {
    local_28 = param_3;
    iStack_24 = param_4;
    iVar1 = FUN_0002e948(*(undefined4 *)(param_2 + 2));
    if (iVar1 == 0) {
      iVar1 = 3;
    }
    else {
      if (param_3 == (undefined2 *)0x0) {
        sVar4 = param_2[4];
        iVar1 = FUN_00039608(sVar4,&local_28);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      else {
        local_28 = (undefined2 *)CONCAT22(local_28._2_2_,*param_3);
        sVar4 = param_3[1];
      }
      puVar2 = (undefined *)FUN_00034f6c(&iStack_24);
      if (puVar2 == (undefined *)0x0) {
        FUN_000395f0(sVar4,(uint)local_28 & 0xffff);
        iVar1 = 8;
      }
      else {
        *puVar2 = (char)param_4;
        puVar2[0x16] = 0;
        *(undefined2 *)(puVar2 + 0x14) = (undefined2)local_28;
        *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(param_2 + 2);
        uVar3 = FUN_000304e6(DAT_000394f4 + -0xc,1);
        *(undefined4 *)(puVar2 + 0xc) = uVar3;
        *(short *)(puVar2 + 8) = *param_2;
        *(short *)(puVar2 + 4) = param_2[1];
        *(short *)(puVar2 + 6) = sVar4;
        if (param_4 == 3) {
          puVar2[0x16] = 4;
          *(undefined4 *)(puVar2 + 0x18) = *param_1;
        }
        *(undefined2 *)(puVar2 + 10) = 0;
        FUN_00034f88(&iStack_24);
        if (param_1 != (undefined4 *)0x0) {
          param_1[1] = 0;
          iVar1 = DAT_000394f8;
          *param_1 = *(undefined4 *)(puVar2 + 0xc);
          *(undefined *)((int)param_1 + 10) = 0;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 8);
        }
        FUN_000350ec();
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


/* ---- FUN_000394fc @ 000394fc ---- */

int FUN_000394fc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = DAT_000395e4;
  iVar6 = DAT_000395e4 + (uint)*(ushort *)(param_2 + 0x14) * 0x14;
  if (param_1 != 0) {
    FUN_00032cc0(iVar6,param_2);
    return 1;
  }
  iVar5 = 0;
  iVar7 = *(int *)(iVar6 + 4) + (uint)*(ushort *)(iVar6 + 8) * 4;
  puVar2 = (undefined4 *)(DAT_000395e4 + -0xa8);
  switch(param_2[0x16]) {
  case '\x01':
    if (*param_2 == '\x03') {
      cVar1 = '\x05';
    }
    else {
      cVar1 = '\x06';
    }
    param_2[0x16] = cVar1;
    iVar3 = 4;
    pcVar4 = param_2 + 8;
    iVar7 = iVar7 + 4;
    break;
  case '\x02':
    if (*(int *)(param_2 + 0x10) == 0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\x03';
    }
    param_2[0x16] = cVar1;
    iVar3 = 4;
    pcVar4 = param_2 + 0xc;
    iVar7 = iVar7 + 8;
    break;
  case '\x03':
    param_2[0x16] = '\x01';
    iVar7 = iVar7 + 0xc;
    iVar3 = (uint)*(ushort *)(param_2 + 6) << 2;
    pcVar4 = *(char **)(param_2 + 0x10);
    break;
  case '\x04':
    *(undefined4 *)(DAT_000395e4 + -0xa4) = 0;
    *puVar2 = *(undefined4 *)(param_2 + 0x18);
    iVar3 = FUN_000352d0(DAT_000395e4 + -0xa8,DAT_000395e8);
    if (iVar3 == 0) {
      return 10;
    }
  case '\0':
    param_2[0x16] = '\x02';
    iVar3 = 4;
    pcVar4 = param_2 + 4;
    break;
  case '\x05':
    param_2[0x16] = '\x06';
    iVar5 = FUN_000353cc(*(undefined4 *)(iVar3 + -0xa4),*DAT_000395e8,iVar3,param_4,param_4);
    if (iVar5 == 0) {
      return 0;
    }
    goto LAB_000395d6;
  case '\x06':
    iVar5 = 0x1d1d;
    goto LAB_000395d6;
  default:
    iVar5 = 0xf;
    goto LAB_000395d6;
  }
  iVar3 = FUN_00030cec(DAT_000395ec,iVar7,pcVar4,iVar3,0);
  if (iVar3 != 0) {
    iVar5 = 0xe;
LAB_000395d6:
    FUN_00032cc0(iVar6,param_2);
  }
  return iVar5;
}


/* ---- FUN_000395f0 @ 000395f0 ---- */

void FUN_000395f0(short param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00039604 + param_2 * 0x14;
  *(short *)(iVar1 + 10) = (*(short *)(iVar1 + 10) - param_1) + -3;
  return;
}


/* ---- FUN_00039608 @ 00039608 ---- */

undefined4 FUN_00039608(short param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00039660;
  uVar1 = param_1 + 3;
  if (0x3fd < uVar1) {
    return 9;
  }
  uVar2 = 0;
  while ((*(char *)(DAT_00039660 + uVar2 * 0x14) != '\0' ||
         (iVar4 = DAT_00039660 + uVar2 * 0x14,
         0x3ff < (ushort)(*(short *)(iVar4 + 8) + uVar1 + *(short *)(iVar4 + 10))))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      return 7;
    }
  }
  *param_2 = (short)uVar2;
  iVar3 = iVar3 + uVar2 * 0x14;
  *(ushort *)(iVar3 + 10) = *(short *)(iVar3 + 10) + uVar1;
  return 0;
}


/* ---- FUN_00039680 @ 00039680 ---- */

void FUN_00039680(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_000397c0 @ 000397c0 ---- */

void FUN_000397c0(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_00039920 @ 00039920 ---- */

void FUN_00039920(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_00039930 @ 00039930 ---- */

void FUN_00039930(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_00039960 @ 00039960 ---- */

void FUN_00039960(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


/* ---- FUN_00039970 @ 00039970 ---- */

void FUN_00039970(uint param_1)

{
  bool bVar1;
  
  do {
    bVar1 = 2 < param_1;
    param_1 = param_1 - 3;
  } while (bVar1 && param_1 != 0);
  return;
}


