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

// Function: sub_003AA280
// Address: 0x3aa280 - 0x3aa2e0
void sub_003AA280_0x3aa280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA280_0x3aa280");
#endif

    ctx->pc = 0x3aa280u;

    // 0x3aa280: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa280u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AA280 raw=0x00000105");
    // 0x3aa284: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa284u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AA284 raw=0x42C80000");
    // 0x3aa288: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x3aa288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa28c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa28cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA28C raw=0x43480000");
    // 0x3aa290: 0x0  nop
    ctx->pc = 0x3aa290u;
    // NOP
    // 0x3aa294: 0x0  nop
    ctx->pc = 0x3aa294u;
    // NOP
    // 0x3aa298: 0x0  nop
    ctx->pc = 0x3aa298u;
    // NOP
    // 0x3aa29c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa29cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa2a0: 0x104  .word       0x00000104                   # sllv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa2a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x3aa2a4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa2a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AA2A4 raw=0x42C80000");
    // 0x3aa2a8: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x3aa2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa2ac: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa2acu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AA2AC raw=0x437A0000");
    // 0x3aa2b0: 0x0  nop
    ctx->pc = 0x3aa2b0u;
    // NOP
    // 0x3aa2b4: 0x0  nop
    ctx->pc = 0x3aa2b4u;
    // NOP
    // 0x3aa2b8: 0x0  nop
    ctx->pc = 0x3aa2b8u;
    // NOP
    // 0x3aa2bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa2bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa2c0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aa2c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3aa2c4: 0x0  nop
    ctx->pc = 0x3aa2c4u;
    // NOP
    // 0x3aa2c8: 0x0  nop
    ctx->pc = 0x3aa2c8u;
    // NOP
    // 0x3aa2cc: 0x0  nop
    ctx->pc = 0x3aa2ccu;
    // NOP
    // 0x3aa2d0: 0x0  nop
    ctx->pc = 0x3aa2d0u;
    // NOP
    // 0x3aa2d4: 0x0  nop
    ctx->pc = 0x3aa2d4u;
    // NOP
    // 0x3aa2d8: 0x0  nop
    ctx->pc = 0x3aa2d8u;
    // NOP
    // 0x3aa2dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x3aa2e0u;
}
