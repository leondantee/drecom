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

// Function: sub_003AAB50
// Address: 0x3aab50 - 0x3aabd0
void sub_003AAB50_0x3aab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAB50_0x3aab50");
#endif

    ctx->pc = 0x3aab50u;

    // 0x3aab50: 0x0  nop
    ctx->pc = 0x3aab50u;
    // NOP
    // 0x3aab54: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AAB54 raw=0x437A0000");
    // 0x3aab58: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x3aab58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aab5c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab5cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AAB5C raw=0x42F00000");
    // 0x3aab60: 0x0  nop
    ctx->pc = 0x3aab60u;
    // NOP
    // 0x3aab64: 0x0  nop
    ctx->pc = 0x3aab64u;
    // NOP
    // 0x3aab68: 0x0  nop
    ctx->pc = 0x3aab68u;
    // NOP
    // 0x3aab6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aab6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aab70: 0x35ff20  .word       0x0035FF20                   # add         $ra, $at, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    // 0x3aab74: 0x3600a0  .word       0x003600A0                   # add         $zero, $at, $s6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x3aab78: 0x3601f0  tge         $at, $s6, 7
    ctx->pc = 0x3aab78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aab7c: 0x360690  .word       0x00360690                   # mfhi        $zero # 00360680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab7cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x3aab80: 0x0  nop
    ctx->pc = 0x3aab80u;
    // NOP
    // 0x3aab84: 0x0  nop
    ctx->pc = 0x3aab84u;
    // NOP
    // 0x3aab88: 0x0  nop
    ctx->pc = 0x3aab88u;
    // NOP
    // 0x3aab8c: 0x0  nop
    ctx->pc = 0x3aab8cu;
    // NOP
    // 0x3aab90: 0x0  nop
    ctx->pc = 0x3aab90u;
    // NOP
    // 0x3aab94: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x3aab94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x3aab98: 0x360120  .word       0x00360120                   # add         $zero, $at, $s6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x3aab9c: 0x0  nop
    ctx->pc = 0x3aab9cu;
    // NOP
    // 0x3aaba0: 0x360140  .word       0x00360140                   # sll         $zero, $s6, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaba0u;
    
    // 0x3aaba4: 0x0  nop
    ctx->pc = 0x3aaba4u;
    // NOP
    // 0x3aaba8: 0x360710  .word       0x00360710                   # mfhi        $zero # 00360700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaba8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x3aabac: 0x0  nop
    ctx->pc = 0x3aabacu;
    // NOP
    // 0x3aabb0: 0x360730  tge         $at, $s6, 28
    ctx->pc = 0x3aabb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aabb4: 0x0  nop
    ctx->pc = 0x3aabb4u;
    // NOP
    // 0x3aabb8: 0x360270  tge         $at, $s6, 9
    ctx->pc = 0x3aabb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aabbc: 0x360480  .word       0x00360480                   # sll         $zero, $s6, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aabbcu;
    
    // 0x3aabc0: 0x360290  .word       0x00360290                   # mfhi        $zero # 00360280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aabc0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x3aabc4: 0x3604a0  .word       0x003604A0                   # add         $zero, $at, $s6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aabc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x3aabc8: 0x0  nop
    ctx->pc = 0x3aabc8u;
    // NOP
    // 0x3aabcc: 0x0  nop
    ctx->pc = 0x3aabccu;
    // NOP
    ctx->pc = 0x3aabd0u;
}
