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

// Function: sub_003AA970
// Address: 0x3aa970 - 0x3aa9c0
void sub_003AA970_0x3aa970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA970_0x3aa970");
#endif

    ctx->pc = 0x3aa970u;

    // 0x3aa970: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3aa970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x3aa974: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa974u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AA974 raw=0x43960000");
    // 0x3aa978: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa97c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa97cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AA97C raw=0x42F00000");
    // 0x3aa980: 0x0  nop
    ctx->pc = 0x3aa980u;
    // NOP
    // 0x3aa984: 0x0  nop
    ctx->pc = 0x3aa984u;
    // NOP
    // 0x3aa988: 0x0  nop
    ctx->pc = 0x3aa988u;
    // NOP
    // 0x3aa98c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa98cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa990: 0x35b0f0  tge         $at, $s5, 707
    ctx->pc = 0x3aa990u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa994: 0x35b200  .word       0x0035B200                   # sll         $s6, $s5, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa994u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
    // 0x3aa998: 0x35b2a0  .word       0x0035B2A0                   # add         $s6, $at, $s5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa998u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x3aa99c: 0x35b4a0  .word       0x0035B4A0                   # add         $s6, $at, $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa99cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x3aa9a0: 0x35b250  .word       0x0035B250                   # mfhi        $s6 # 00350240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9a0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x3aa9a4: 0x0  nop
    ctx->pc = 0x3aa9a4u;
    // NOP
    // 0x3aa9a8: 0x35b300  .word       0x0035B300                   # sll         $s6, $s5, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 12));
    // 0x3aa9ac: 0x35b490  .word       0x0035B490                   # mfhi        $s6 # 00350480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa9acu;
    SET_GPR_U64(ctx, 22, ctx->hi);
    // 0x3aa9b0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa9b4: 0x0  nop
    ctx->pc = 0x3aa9b4u;
    // NOP
    // 0x3aa9b8: 0x0  nop
    ctx->pc = 0x3aa9b8u;
    // NOP
    // 0x3aa9bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa9bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa9c0u;
}
