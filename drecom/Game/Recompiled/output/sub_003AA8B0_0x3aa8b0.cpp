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

// Function: sub_003AA8B0
// Address: 0x3aa8b0 - 0x3aa920
void sub_003AA8B0_0x3aa8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA8B0_0x3aa8b0");
#endif

    ctx->pc = 0x3aa8b0u;

    // 0x3aa8b0: 0x0  nop
    ctx->pc = 0x3aa8b0u;
    // NOP
    // 0x3aa8b4: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x3aa8b4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x3AA8B4 raw=0x447A0000");
    // 0x3aa8b8: 0x0  nop
    ctx->pc = 0x3aa8b8u;
    // NOP
    // 0x3aa8bc: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa8bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x3AA8BC raw=0x43FA0000");
    // 0x3aa8c0: 0x0  nop
    ctx->pc = 0x3aa8c0u;
    // NOP
    // 0x3aa8c4: 0x0  nop
    ctx->pc = 0x3aa8c4u;
    // NOP
    // 0x3aa8c8: 0x0  nop
    ctx->pc = 0x3aa8c8u;
    // NOP
    // 0x3aa8cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa8ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa8d0: 0x35a380  .word       0x0035A380                   # sll         $s4, $s5, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 14));
    // 0x3aa8d4: 0x35a440  .word       0x0035A440                   # sll         $s4, $s5, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 17));
    // 0x3aa8d8: 0x35a4c0  .word       0x0035A4C0                   # sll         $s4, $s5, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 19));
    // 0x3aa8dc: 0x35a7f0  tge         $at, $s5, 671
    ctx->pc = 0x3aa8dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa8e0: 0x35a490  .word       0x0035A490                   # mfhi        $s4 # 00350480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8e0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x3aa8e4: 0x0  nop
    ctx->pc = 0x3aa8e4u;
    // NOP
    // 0x3aa8e8: 0x35a510  .word       0x0035A510                   # mfhi        $s4 # 00350500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8e8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x3aa8ec: 0x35a600  .word       0x0035A600                   # sll         $s4, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa8ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x3aa8f0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aa8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa8f4: 0x0  nop
    ctx->pc = 0x3aa8f4u;
    // NOP
    // 0x3aa8f8: 0x0  nop
    ctx->pc = 0x3aa8f8u;
    // NOP
    // 0x3aa8fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa8fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa900: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa900u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x3AA900 raw=0x41F00000");
    // 0x3aa904: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x3aa904u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x3AA904 raw=0x40A00000");
    // 0x3aa908: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x3aa908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa90c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa90cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa910: 0x35a8f0  tge         $at, $s5, 675
    ctx->pc = 0x3aa910u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa914: 0x35a930  tge         $at, $s5, 676
    ctx->pc = 0x3aa914u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa918: 0x0  nop
    ctx->pc = 0x3aa918u;
    // NOP
    // 0x3aa91c: 0x0  nop
    ctx->pc = 0x3aa91cu;
    // NOP
    ctx->pc = 0x3aa920u;
}
