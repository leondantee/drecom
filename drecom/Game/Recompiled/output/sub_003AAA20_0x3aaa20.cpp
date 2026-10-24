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

// Function: sub_003AAA20
// Address: 0x3aaa20 - 0x3aaa80
void sub_003AAA20_0x3aaa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA20_0x3aaa20");
#endif

    ctx->pc = 0x3aaa20u;

    // 0x3aaa20: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3aaa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x3aaa24: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa24u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AAA24 raw=0x43960000");
    // 0x3aaa28: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aaa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa2c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa2cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AAA2C raw=0x42F00000");
    // 0x3aaa30: 0x0  nop
    ctx->pc = 0x3aaa30u;
    // NOP
    // 0x3aaa34: 0x0  nop
    ctx->pc = 0x3aaa34u;
    // NOP
    // 0x3aaa38: 0x0  nop
    ctx->pc = 0x3aaa38u;
    // NOP
    // 0x3aaa3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aaa40: 0x35be30  tge         $at, $s5, 760
    ctx->pc = 0x3aaa40u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaa44: 0x35bef0  tge         $at, $s5, 763
    ctx->pc = 0x3aaa44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaa48: 0x35bf90  .word       0x0035BF90                   # mfhi        $s7 # 00350780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaa48u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x3aaa4c: 0x35c260  .word       0x0035C260                   # add         $t8, $at, $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaa4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x3aaa50: 0x35bf40  .word       0x0035BF40                   # sll         $s7, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaa50u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
    // 0x3aaa54: 0x0  nop
    ctx->pc = 0x3aaa54u;
    // NOP
    // 0x3aaa58: 0x35bfe0  .word       0x0035BFE0                   # add         $s7, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaa58u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x3aaa5c: 0x35c0d0  .word       0x0035C0D0                   # mfhi        $t8 # 003500C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaa5cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x3aaa60: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aaa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa64: 0x0  nop
    ctx->pc = 0x3aaa64u;
    // NOP
    // 0x3aaa68: 0x0  nop
    ctx->pc = 0x3aaa68u;
    // NOP
    // 0x3aaa6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aaa70: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa70u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AAA70 raw=0x41F00000");
    // 0x3aaa74: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aaa74u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AAA74 raw=0x40A00000");
    // 0x3aaa78: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aaa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa7c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aaa80u;
}
