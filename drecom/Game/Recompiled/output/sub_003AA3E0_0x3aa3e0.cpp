#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA3E0
// Address: 0x3aa3e0 - 0x3aa700
void sub_003AA3E0_0x3aa3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA3E0_0x3aa3e0");
#endif

    switch (ctx->pc) {
        case 0x3aa610u: goto label_3aa610;
        case 0x3aa6b0u: goto label_3aa6b0;
        default: break;
    }

    ctx->pc = 0x3aa3e0u;

    // 0x3aa3e0: 0x342fe0  .word       0x00342FE0                   # add         $a1, $at, $s4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa3e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x3aa3e4: 0x344840  .word       0x00344840                   # sll         $t1, $s4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x3aa3e8: 0x34faf0  tge         $at, $s4, 1003
    ctx->pc = 0x3aa3e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa3ec: 0x351050  .word       0x00351050                   # mfhi        $v0 # 00350040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa3ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3aa3f0: 0x0  nop
    ctx->pc = 0x3aa3f0u;
    // NOP
    // 0x3aa3f4: 0x0  nop
    ctx->pc = 0x3aa3f4u;
    // NOP
    // 0x3aa3f8: 0x0  nop
    ctx->pc = 0x3aa3f8u;
    // NOP
    // 0x3aa3fc: 0x0  nop
    ctx->pc = 0x3aa3fcu;
    // NOP
    // 0x3aa400: 0x351cd0  .word       0x00351CD0                   # mfhi        $v1 # 003504C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3aa404: 0x0  nop
    ctx->pc = 0x3aa404u;
    // NOP
    // 0x3aa408: 0x0  nop
    ctx->pc = 0x3aa408u;
    // NOP
    // 0x3aa40c: 0x0  nop
    ctx->pc = 0x3aa40cu;
    // NOP
    // 0x3aa410: 0x344900  .word       0x00344900                   # sll         $t1, $s4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa410u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3aa414: 0x344b80  .word       0x00344B80                   # sll         $t1, $s4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa414u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 14));
    // 0x3aa418: 0x345150  .word       0x00345150                   # mfhi        $t2 # 00340140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa418u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x3aa41c: 0x345600  .word       0x00345600                   # sll         $t2, $s4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa41cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x3aa420: 0x3458f0  tge         $at, $s4, 355
    ctx->pc = 0x3aa420u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa424: 0x3460f0  tge         $at, $s4, 387
    ctx->pc = 0x3aa424u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa428: 0x346a50  .word       0x00346A50                   # mfhi        $t5 # 00340240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa428u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x3aa42c: 0x347340  .word       0x00347340                   # sll         $t6, $s4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa42cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 20), 13));
    // 0x3aa430: 0x347c00  .word       0x00347C00                   # sll         $t7, $s4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa430u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x3aa434: 0x348510  .word       0x00348510                   # mfhi        $s0 # 00340500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa434u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3aa438: 0x348ef0  tge         $at, $s4, 571
    ctx->pc = 0x3aa438u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa43c: 0x349720  .word       0x00349720                   # add         $s2, $at, $s4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa43cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x3aa440: 0x349f60  .word       0x00349F60                   # add         $s3, $at, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa440u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x3aa444: 0x34a220  .word       0x0034A220                   # add         $s4, $at, $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa444u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x3aa448: 0x34a670  tge         $at, $s4, 665
    ctx->pc = 0x3aa448u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa44c: 0x34ab70  tge         $at, $s4, 685
    ctx->pc = 0x3aa44cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa450: 0x34b360  .word       0x0034B360                   # add         $s6, $at, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa450u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x3aa454: 0x34b500  .word       0x0034B500                   # sll         $s6, $s4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa454u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 20));
    // 0x3aa458: 0x34b740  .word       0x0034B740                   # sll         $s6, $s4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa458u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 29));
    // 0x3aa45c: 0x34be90  .word       0x0034BE90                   # mfhi        $s7 # 00340680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa45cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x3aa460: 0x34d230  tge         $at, $s4, 840
    ctx->pc = 0x3aa460u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa464: 0x34d8d0  .word       0x0034D8D0                   # mfhi        $k1 # 003400C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa464u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    // 0x3aa468: 0x34e5e0  .word       0x0034E5E0                   # add         $gp, $at, $s4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa468u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
    // 0x3aa46c: 0x34e8a0  .word       0x0034E8A0                   # add         $sp, $at, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa46cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x3aa470: 0x34f590  .word       0x0034F590                   # mfhi        $fp # 00340580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa470u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x3aa474: 0x0  nop
    ctx->pc = 0x3aa474u;
    // NOP
    // 0x3aa478: 0x0  nop
    ctx->pc = 0x3aa478u;
    // NOP
    // 0x3aa47c: 0x0  nop
    ctx->pc = 0x3aa47cu;
    // NOP
    // 0x3aa480: 0x344a00  .word       0x00344A00                   # sll         $t1, $s4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa480u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x3aa484: 0x345010  .word       0x00345010                   # mfhi        $t2 # 00340000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa484u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x3aa488: 0x3453f0  tge         $at, $s4, 335
    ctx->pc = 0x3aa488u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa48c: 0x345630  tge         $at, $s4, 344
    ctx->pc = 0x3aa48cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa490: 0x345900  .word       0x00345900                   # sll         $t3, $s4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa490u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3aa494: 0x346100  .word       0x00346100                   # sll         $t4, $s4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa494u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3aa498: 0x346a60  .word       0x00346A60                   # add         $t5, $at, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa498u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    // 0x3aa49c: 0x347350  .word       0x00347350                   # mfhi        $t6 # 00340340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa49cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x3aa4a0: 0x347c10  .word       0x00347C10                   # mfhi        $t7 # 00340400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4a0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x3aa4a4: 0x348520  .word       0x00348520                   # add         $s0, $at, $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x3aa4a8: 0x348f30  tge         $at, $s4, 572
    ctx->pc = 0x3aa4a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa4ac: 0x349750  .word       0x00349750                   # mfhi        $s2 # 00340740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4acu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x3aa4b0: 0x349f90  .word       0x00349F90                   # mfhi        $s3 # 00340780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4b0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x3aa4b4: 0x34a4b0  tge         $at, $s4, 658
    ctx->pc = 0x3aa4b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa4b8: 0x34a9a0  .word       0x0034A9A0                   # add         $s5, $at, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x3aa4bc: 0x34aba0  .word       0x0034ABA0                   # add         $s5, $at, $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x3aa4c0: 0x34b390  .word       0x0034B390                   # mfhi        $s6 # 00340380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4c0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x3aa4c4: 0x34b530  tge         $at, $s4, 724
    ctx->pc = 0x3aa4c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa4c8: 0x34b750  .word       0x0034B750                   # mfhi        $s6 # 00340740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4c8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x3aa4cc: 0x34bea0  .word       0x0034BEA0                   # add         $s7, $at, $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x3aa4d0: 0x34d240  .word       0x0034D240                   # sll         $k0, $s4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 20), 9));
    // 0x3aa4d4: 0x34d900  .word       0x0034D900                   # sll         $k1, $s4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4d4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3aa4d8: 0x34e610  .word       0x0034E610                   # mfhi        $gp # 00340600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4d8u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x3aa4dc: 0x34eb30  tge         $at, $s4, 940
    ctx->pc = 0x3aa4dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa4e0: 0x34f690  .word       0x0034F690                   # mfhi        $fp # 00340680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4e0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x3aa4e4: 0x0  nop
    ctx->pc = 0x3aa4e4u;
    // NOP
    // 0x3aa4e8: 0x262523  .word       0x00262523                   # subu        $a0, $at, $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3aa4ec: 0x0  nop
    ctx->pc = 0x3aa4ecu;
    // NOP
    // 0x3aa4f0: 0x262523  .word       0x00262523                   # subu        $a0, $at, $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3aa4f4: 0x0  nop
    ctx->pc = 0x3aa4f4u;
    // NOP
    // 0x3aa4f8: 0x0  nop
    ctx->pc = 0x3aa4f8u;
    // NOP
    // 0x3aa4fc: 0x0  nop
    ctx->pc = 0x3aa4fcu;
    // NOP
    // 0x3aa500: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa504: 0x0  nop
    ctx->pc = 0x3aa504u;
    // NOP
    // 0x3aa508: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x3aa508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa50c: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa50cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AA50C raw=0x42700000");
    // 0x3aa510: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa510u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AA510 raw=0x42200000");
    // 0x3aa514: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa514u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AA514 raw=0x41A00000");
    // 0x3aa518: 0x0  nop
    ctx->pc = 0x3aa518u;
    // NOP
    // 0x3aa51c: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aa51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa520: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa524: 0x0  nop
    ctx->pc = 0x3aa524u;
    // NOP
    // 0x3aa528: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x3aa528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa52c: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa52cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x3AA52C raw=0x42700000");
    // 0x3aa530: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa530u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AA530 raw=0x42200000");
    // 0x3aa534: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa534u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AA534 raw=0x41A00000");
    // 0x3aa538: 0x0  nop
    ctx->pc = 0x3aa538u;
    // NOP
    // 0x3aa53c: 0xc2700000  ll          $s0, 0x0($s3)
    ctx->pc = 0x3aa53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa540: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa540u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x3AA540 raw=0x41200000");
    // 0x3aa544: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x3aa544u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x3AA544 raw=0x40400000");
    // 0x3aa548: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x3aa548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa54c: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x3aa54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa550: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa550u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x3AA550 raw=0x42200000");
    // 0x3aa554: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x3aa554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa558: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa558u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x3AA558 raw=0x41A00000");
    // 0x3aa55c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x3aa55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa560: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa560u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3AA560 raw=0x42A00000");
    // 0x3aa564: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa564u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3AA564 raw=0x42480000");
    // 0x3aa568: 0xc2b40000  ll          $s4, 0x0($s5)
    ctx->pc = 0x3aa568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa56c: 0xc2a00000  ll          $zero, 0x0($s5)
    ctx->pc = 0x3aa56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa570: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa570u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x3AA570 raw=0x42B40000");
    // 0x3aa574: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x3aa574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa578: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa578u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x3AA578 raw=0x428C0000");
    // 0x3aa57c: 0xc28c0000  ll          $t4, 0x0($s4)
    ctx->pc = 0x3aa57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa580: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa580u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x3AA580 raw=0x41200000");
    // 0x3aa584: 0x43020000  .word       0x43020000                   # INVALID     $t8, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa584u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x3AA584 raw=0x43020000");
    // 0x3aa588: 0xc28c0000  ll          $t4, 0x0($s4)
    ctx->pc = 0x3aa588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa58c: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aa58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa590: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa590u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AA590 raw=0x41F00000");
    // 0x3aa594: 0xc3020000  ll          $v0, 0x0($t8)
    ctx->pc = 0x3aa594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa598: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa598u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x3AA598 raw=0x428C0000");
    // 0x3aa59c: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x3aa59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa5a0: 0x34fb40  .word       0x0034FB40                   # sll         $ra, $s4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 20), 13));
    // 0x3aa5a4: 0x34ff70  tge         $at, $s4, 1021
    ctx->pc = 0x3aa5a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa5a8: 0x350950  .word       0x00350950                   # mfhi        $at # 00350140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5a8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x3aa5ac: 0x0  nop
    ctx->pc = 0x3aa5acu;
    // NOP
    // 0x3aa5b0: 0x3510a0  .word       0x003510A0                   # add         $v0, $at, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x3aa5b4: 0x351cc0  .word       0x00351CC0                   # sll         $v1, $s5, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 19));
    // 0x3aa5b8: 0x0  nop
    ctx->pc = 0x3aa5b8u;
    // NOP
    // 0x3aa5bc: 0x0  nop
    ctx->pc = 0x3aa5bcu;
    // NOP
    // 0x3aa5c0: 0x351d20  .word       0x00351D20                   # add         $v1, $at, $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x3aa5c4: 0x351d30  tge         $at, $s5, 116
    ctx->pc = 0x3aa5c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa5c8: 0x351d40  .word       0x00351D40                   # sll         $v1, $s5, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 21));
    // 0x3aa5cc: 0x351d50  .word       0x00351D50                   # mfhi        $v1 # 00350540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3aa5d0: 0x351d60  .word       0x00351D60                   # add         $v1, $at, $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x3aa5d4: 0x0  nop
    ctx->pc = 0x3aa5d4u;
    // NOP
    // 0x3aa5d8: 0x262523  .word       0x00262523                   # subu        $a0, $at, $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x3aa5dc: 0x0  nop
    ctx->pc = 0x3aa5dcu;
    // NOP
    // 0x3aa5e0: 0x355f40  .word       0x00355F40                   # sll         $t3, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
    // 0x3aa5e4: 0x0  nop
    ctx->pc = 0x3aa5e4u;
    // NOP
    // 0x3aa5e8: 0x356190  .word       0x00356190                   # mfhi        $t4 # 00350180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa5e8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x3aa5ec: 0x0  nop
    ctx->pc = 0x3aa5ecu;
    // NOP
    // 0x3aa5f0: 0x0  nop
    ctx->pc = 0x3aa5f0u;
    // NOP
    // 0x3aa5f4: 0x0  nop
    ctx->pc = 0x3aa5f4u;
    // NOP
    // 0x3aa5f8: 0x0  nop
    ctx->pc = 0x3aa5f8u;
    // NOP
    // 0x3aa5fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa5fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa600: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
    ctx->pc = 0x3AA600u;
    {
        const bool branch_taken_0x3aa600 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x3aa600) {
            ctx->pc = 0x3AA604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA600u;
            // 0x3aa604: 0x9070605  j           func_41C1814 (Delay Slot)
            // J 0x41C1814 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAE08u;
            return;
        }
    }
    ctx->pc = 0x3AA608u;
    // 0x3aa608: 0xe0c0b0a  jal         func_8302C28
    ctx->pc = 0x3AA608u;
    SET_GPR_U32(ctx, 31, 0x3AA610u);
    ctx->pc = 0x3AA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA608u;
    // 0x3aa60c: 0x1311100f  beq         $t8, $s1, . + 4 + (0x100F << 2) (Delay Slot)
    // Likely branch instruction at 0x3AA60C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8302C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8302C28u, 0x3AA608u, 0x3AA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA610u;
label_3aa610:
    // 0x3aa610: 0x18171514  .word       0x18171514                   # blez        $zero, . + 4 + (0x1514 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AA610u;
    {
        const bool branch_taken_0x3aa610 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x3AA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA610u;
        // 0x3aa614: 0x1d1c1b19  .word       0x1D1C1B19                   # bgtz        $t0, . + 4 + (0x1B19 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3AA614 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa610) {
            ctx->pc = 0x3AFA64u;
            return;
        }
    }
    ctx->pc = 0x3AA618u;
    // 0x3aa618: 0x201f1e  .word       0x00201F1E                   # ddiv        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa618u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AA618 raw=0x00201F1E");
    // 0x3aa61c: 0x0  nop
    ctx->pc = 0x3aa61cu;
    // NOP
    // 0x3aa620: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa620u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa624: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa624u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa628: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa628u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa62c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa62cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa630: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x3aa634: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x3aa638: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa638u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa63c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa63cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x3aa640: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa640u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa644: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa644u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa648: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa648u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa64c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa64cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x3aa650: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa650u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa654: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa654u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa658: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa658u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa65c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa65cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x3aa660: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa660u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa664: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa664u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa668: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa668u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x3aa66c: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa66cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa670: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa670u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa674: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x3aa678: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa678u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x3aa67c: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa67cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x3aa680: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa680u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa684: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa684u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x3aa688: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa688u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa68c: 0x0  nop
    ctx->pc = 0x3aa68cu;
    // NOP
    // 0x3aa690: 0x0  nop
    ctx->pc = 0x3aa690u;
    // NOP
    // 0x3aa694: 0x0  nop
    ctx->pc = 0x3aa694u;
    // NOP
    // 0x3aa698: 0x0  nop
    ctx->pc = 0x3aa698u;
    // NOP
    // 0x3aa69c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa69cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa6a0: 0x4030201  bgezl       $zero, . + 4 + (0x201 << 2)
    ctx->pc = 0x3AA6A0u;
    {
        const bool branch_taken_0x3aa6a0 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x3aa6a0) {
            ctx->pc = 0x3AA6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA6A0u;
            // 0x3aa6a4: 0x9070605  j           func_41C1814 (Delay Slot)
            // J 0x41C1814 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAEA8u;
            return;
        }
    }
    ctx->pc = 0x3AA6A8u;
    // 0x3aa6a8: 0xe0c0b0a  jal         func_8302C28
    ctx->pc = 0x3AA6A8u;
    SET_GPR_U32(ctx, 31, 0x3AA6B0u);
    ctx->pc = 0x3AA6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA6A8u;
    // 0x3aa6ac: 0x1311100f  beq         $t8, $s1, . + 4 + (0x100F << 2) (Delay Slot)
    // Likely branch instruction at 0x3AA6AC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8302C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8302C28u, 0x3AA6A8u, 0x3AA6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA6B0u;
label_3aa6b0:
    // 0x3aa6b0: 0x18171514  .word       0x18171514                   # blez        $zero, . + 4 + (0x1514 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3AA6B0u;
    {
        const bool branch_taken_0x3aa6b0 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x3AA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6B0u;
        // 0x3aa6b4: 0x1d1c1b19  .word       0x1D1C1B19                   # bgtz        $t0, . + 4 + (0x1B19 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3AA6B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6b0) {
            ctx->pc = 0x3AFB04u;
            return;
        }
    }
    ctx->pc = 0x3AA6B8u;
    // 0x3aa6b8: 0x201f1e  .word       0x00201F1E                   # ddiv        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa6b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x3AA6B8 raw=0x00201F1E");
    // 0x3aa6bc: 0x0  nop
    ctx->pc = 0x3aa6bcu;
    // NOP
    // 0x3aa6c0: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa6c0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA6C0 raw=0x43FA0000");
    // 0x3aa6c4: 0x0  nop
    ctx->pc = 0x3aa6c4u;
    // NOP
    // 0x3aa6c8: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aa6c8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3AA6C8 raw=0x447A0000");
    // 0x3aa6cc: 0x0  nop
    ctx->pc = 0x3aa6ccu;
    // NOP
    // 0x3aa6d0: 0x451c4000  .word       0x451C4000                   # INVALID     $t0, $gp, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x3aa6d0u;
    // FPU branch instruction - handled elsewhere
    // 0x3aa6d4: 0x0  nop
    ctx->pc = 0x3aa6d4u;
    // NOP
    // 0x3aa6d8: 0x3578d0  .word       0x003578D0                   # mfhi        $t7 # 003500C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa6d8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x3aa6dc: 0x357a60  .word       0x00357A60                   # add         $t7, $at, $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa6dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x3aa6e0: 0x357ab0  tge         $at, $s5, 490
    ctx->pc = 0x3aa6e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa6e4: 0x0  nop
    ctx->pc = 0x3aa6e4u;
    // NOP
    // 0x3aa6e8: 0x0  nop
    ctx->pc = 0x3aa6e8u;
    // NOP
    // 0x3aa6ec: 0x0  nop
    ctx->pc = 0x3aa6ecu;
    // NOP
    // 0x3aa6f0: 0x0  nop
    ctx->pc = 0x3aa6f0u;
    // NOP
    // 0x3aa6f4: 0x0  nop
    ctx->pc = 0x3aa6f4u;
    // NOP
    // 0x3aa6f8: 0x0  nop
    ctx->pc = 0x3aa6f8u;
    // NOP
    // 0x3aa6fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa6fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa700u;
}
