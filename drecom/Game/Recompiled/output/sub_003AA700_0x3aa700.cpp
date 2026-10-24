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

// Function: sub_003AA700
// Address: 0x3aa700 - 0x3aa790
void sub_003AA700_0x3aa700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA700_0x3aa700");
#endif

    ctx->pc = 0x3aa700u;

    // 0x3aa700: 0x0  nop
    ctx->pc = 0x3aa700u;
    // NOP
    // 0x3aa704: 0x0  nop
    ctx->pc = 0x3aa704u;
    // NOP
    // 0x3aa708: 0x0  nop
    ctx->pc = 0x3aa708u;
    // NOP
    // 0x3aa70c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa70cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa710: 0x0  nop
    ctx->pc = 0x3aa710u;
    // NOP
    // 0x3aa714: 0x0  nop
    ctx->pc = 0x3aa714u;
    // NOP
    // 0x3aa718: 0x0  nop
    ctx->pc = 0x3aa718u;
    // NOP
    // 0x3aa71c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa71cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa720: 0x0  nop
    ctx->pc = 0x3aa720u;
    // NOP
    // 0x3aa724: 0x0  nop
    ctx->pc = 0x3aa724u;
    // NOP
    // 0x3aa728: 0x0  nop
    ctx->pc = 0x3aa728u;
    // NOP
    // 0x3aa72c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa72cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa730: 0x357f60  .word       0x00357F60                   # add         $t7, $at, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa730u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x3aa734: 0x357f70  tge         $at, $s5, 509
    ctx->pc = 0x3aa734u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa738: 0x358110  .word       0x00358110                   # mfhi        $s0 # 00350100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa738u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3aa73c: 0x358110  .word       0x00358110                   # mfhi        $s0 # 00350100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa73cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3aa740: 0x358870  tge         $at, $s5, 545
    ctx->pc = 0x3aa740u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa744: 0x358110  .word       0x00358110                   # mfhi        $s0 # 00350100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa744u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3aa748: 0x358990  .word       0x00358990                   # mfhi        $s1 # 00350180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa748u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x3aa74c: 0x358b40  .word       0x00358B40                   # sll         $s1, $s5, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa74cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 13));
    // 0x3aa750: 0x358110  .word       0x00358110                   # mfhi        $s0 # 00350100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa750u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3aa754: 0x0  nop
    ctx->pc = 0x3aa754u;
    // NOP
    // 0x3aa758: 0x357f30  tge         $at, $s5, 508
    ctx->pc = 0x3aa758u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa75c: 0x358cd0  .word       0x00358CD0                   # mfhi        $s1 # 003504C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa75cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x3aa760: 0x0  nop
    ctx->pc = 0x3aa760u;
    // NOP
    // 0x3aa764: 0x0  nop
    ctx->pc = 0x3aa764u;
    // NOP
    // 0x3aa768: 0x0  nop
    ctx->pc = 0x3aa768u;
    // NOP
    // 0x3aa76c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa76cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa770: 0x358da0  .word       0x00358DA0                   # add         $s1, $at, $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa770u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x3aa774: 0x359040  .word       0x00359040                   # sll         $s2, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa774u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x3aa778: 0x3591c0  .word       0x003591C0                   # sll         $s2, $s5, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa778u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x3aa77c: 0x0  nop
    ctx->pc = 0x3aa77cu;
    // NOP
    // 0x3aa780: 0x358d70  tge         $at, $s5, 565
    ctx->pc = 0x3aa780u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa784: 0x359300  .word       0x00359300                   # sll         $s2, $s5, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa784u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 12));
    // 0x3aa788: 0x0  nop
    ctx->pc = 0x3aa788u;
    // NOP
    // 0x3aa78c: 0x0  nop
    ctx->pc = 0x3aa78cu;
    // NOP
    ctx->pc = 0x3aa790u;
}
