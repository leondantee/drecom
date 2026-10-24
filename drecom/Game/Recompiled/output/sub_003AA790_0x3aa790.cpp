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

// Function: sub_003AA790
// Address: 0x3aa790 - 0x3aa7f0
void sub_003AA790_0x3aa790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA790_0x3aa790");
#endif

    ctx->pc = 0x3aa790u;

    // 0x3aa790: 0x0  nop
    ctx->pc = 0x3aa790u;
    // NOP
    // 0x3aa794: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa794u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AA794 raw=0x437A0000");
    // 0x3aa798: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x3aa798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3aa79c: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa79cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AA79C raw=0x43340000");
    // 0x3aa7a0: 0x0  nop
    ctx->pc = 0x3aa7a0u;
    // NOP
    // 0x3aa7a4: 0x0  nop
    ctx->pc = 0x3aa7a4u;
    // NOP
    // 0x3aa7a8: 0x0  nop
    ctx->pc = 0x3aa7a8u;
    // NOP
    // 0x3aa7ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa7acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa7b0: 0x3593f0  tge         $at, $s5, 591
    ctx->pc = 0x3aa7b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa7b4: 0x359590  .word       0x00359590                   # mfhi        $s2 # 00350580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa7b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x3aa7b8: 0x3596d0  .word       0x003596D0                   # mfhi        $s2 # 003506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa7b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x3aa7bc: 0x3596e0  .word       0x003596E0                   # add         $s2, $at, $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa7bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x3aa7c0: 0x0  nop
    ctx->pc = 0x3aa7c0u;
    // NOP
    // 0x3aa7c4: 0x0  nop
    ctx->pc = 0x3aa7c4u;
    // NOP
    // 0x3aa7c8: 0x0  nop
    ctx->pc = 0x3aa7c8u;
    // NOP
    // 0x3aa7cc: 0x0  nop
    ctx->pc = 0x3aa7ccu;
    // NOP
    // 0x3aa7d0: 0x0  nop
    ctx->pc = 0x3aa7d0u;
    // NOP
    // 0x3aa7d4: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3aa7d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x3aa7d8: 0x359610  .word       0x00359610                   # mfhi        $s2 # 00350600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa7d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x3aa7dc: 0x0  nop
    ctx->pc = 0x3aa7dcu;
    // NOP
    // 0x3aa7e0: 0x359620  .word       0x00359620                   # add         $s2, $at, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa7e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x3aa7e4: 0x0  nop
    ctx->pc = 0x3aa7e4u;
    // NOP
    // 0x3aa7e8: 0x0  nop
    ctx->pc = 0x3aa7e8u;
    // NOP
    // 0x3aa7ec: 0x0  nop
    ctx->pc = 0x3aa7ecu;
    // NOP
    ctx->pc = 0x3aa7f0u;
}
