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

// Function: sub_003AA7F0
// Address: 0x3aa7f0 - 0x3aa850
void sub_003AA7F0_0x3aa7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA7F0_0x3aa7f0");
#endif

    ctx->pc = 0x3aa7f0u;

    // 0x3aa7f0: 0x0  nop
    ctx->pc = 0x3aa7f0u;
    // NOP
    // 0x3aa7f4: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa7f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AA7F4 raw=0x437A0000");
    // 0x3aa7f8: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x3aa7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3aa7fc: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa7fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x3AA7FC raw=0x43340000");
    // 0x3aa800: 0x0  nop
    ctx->pc = 0x3aa800u;
    // NOP
    // 0x3aa804: 0x0  nop
    ctx->pc = 0x3aa804u;
    // NOP
    // 0x3aa808: 0x0  nop
    ctx->pc = 0x3aa808u;
    // NOP
    // 0x3aa80c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa80cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa810: 0x359740  .word       0x00359740                   # sll         $s2, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa810u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
    // 0x3aa814: 0x359910  .word       0x00359910                   # mfhi        $s3 # 00350100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa814u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x3aa818: 0x359a50  .word       0x00359A50                   # mfhi        $s3 # 00350240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa818u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x3aa81c: 0x359a60  .word       0x00359A60                   # add         $s3, $at, $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa81cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x3aa820: 0x359a70  tge         $at, $s5, 617
    ctx->pc = 0x3aa820u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa824: 0x0  nop
    ctx->pc = 0x3aa824u;
    // NOP
    // 0x3aa828: 0x0  nop
    ctx->pc = 0x3aa828u;
    // NOP
    // 0x3aa82c: 0x0  nop
    ctx->pc = 0x3aa82cu;
    // NOP
    // 0x3aa830: 0x0  nop
    ctx->pc = 0x3aa830u;
    // NOP
    // 0x3aa834: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3aa834u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x3aa838: 0x359990  .word       0x00359990                   # mfhi        $s3 # 00350180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa838u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x3aa83c: 0x0  nop
    ctx->pc = 0x3aa83cu;
    // NOP
    // 0x3aa840: 0x3599a0  .word       0x003599A0                   # add         $s3, $at, $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa840u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    // 0x3aa844: 0x0  nop
    ctx->pc = 0x3aa844u;
    // NOP
    // 0x3aa848: 0x0  nop
    ctx->pc = 0x3aa848u;
    // NOP
    // 0x3aa84c: 0x0  nop
    ctx->pc = 0x3aa84cu;
    // NOP
    ctx->pc = 0x3aa850u;
}
