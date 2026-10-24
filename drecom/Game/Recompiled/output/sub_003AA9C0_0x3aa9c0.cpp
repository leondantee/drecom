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

// Function: sub_003AA9C0
// Address: 0x3aa9c0 - 0x3aaa20
void sub_003AA9C0_0x3aa9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA9C0_0x3aa9c0");
#endif

    ctx->pc = 0x3aa9c0u;

    // 0x3aa9c0: 0x0  nop
    ctx->pc = 0x3aa9c0u;
    // NOP
    // 0x3aa9c4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa9c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA9C4 raw=0x43FA0000");
    // 0x3aa9c8: 0x0  nop
    ctx->pc = 0x3aa9c8u;
    // NOP
    // 0x3aa9cc: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa9ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA9CC raw=0x43FA0000");
    // 0x3aa9d0: 0x0  nop
    ctx->pc = 0x3aa9d0u;
    // NOP
    // 0x3aa9d4: 0x0  nop
    ctx->pc = 0x3aa9d4u;
    // NOP
    // 0x3aa9d8: 0x0  nop
    ctx->pc = 0x3aa9d8u;
    // NOP
    // 0x3aa9dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa9dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa9e0: 0x35b650  .word       0x0035B650                   # mfhi        $s6 # 00350640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9e0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x3aa9e4: 0x35b760  .word       0x0035B760                   # add         $s6, $at, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x3aa9e8: 0x35b7e0  .word       0x0035B7E0                   # add         $s6, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x3aa9ec: 0x35bcd0  .word       0x0035BCD0                   # mfhi        $s7 # 003504C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9ecu;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x3aa9f0: 0x35b7b0  tge         $at, $s5, 734
    ctx->pc = 0x3aa9f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa9f4: 0x0  nop
    ctx->pc = 0x3aa9f4u;
    // NOP
    // 0x3aa9f8: 0x35b830  tge         $at, $s5, 736
    ctx->pc = 0x3aa9f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa9fc: 0x35b920  .word       0x0035B920                   # add         $s7, $at, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x3aaa00: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aaa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa04: 0x0  nop
    ctx->pc = 0x3aaa04u;
    // NOP
    // 0x3aaa08: 0x0  nop
    ctx->pc = 0x3aaa08u;
    // NOP
    // 0x3aaa0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aaa10: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa10u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AAA10 raw=0x41F00000");
    // 0x3aaa14: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aaa14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AAA14 raw=0x40A00000");
    // 0x3aaa18: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aaa18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aaa20u;
}
