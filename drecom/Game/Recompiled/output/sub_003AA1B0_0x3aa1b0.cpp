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

// Function: sub_003AA1B0
// Address: 0x3aa1b0 - 0x3aa220
void sub_003AA1B0_0x3aa1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA1B0_0x3aa1b0");
#endif

    ctx->pc = 0x3aa1b0u;

    // 0x3aa1b0: 0x0  nop
    ctx->pc = 0x3aa1b0u;
    // NOP
    // 0x3aa1b4: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA1B4 raw=0x43480000");
    // 0x3aa1b8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1bc: 0x43af0000  .word       0x43AF0000                   # INVALID     $sp, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3AA1BC raw=0x43AF0000");
    // 0x3aa1c0: 0x0  nop
    ctx->pc = 0x3aa1c0u;
    // NOP
    // 0x3aa1c4: 0x0  nop
    ctx->pc = 0x3aa1c4u;
    // NOP
    // 0x3aa1c8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aa1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa1ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa1d0: 0x0  nop
    ctx->pc = 0x3aa1d0u;
    // NOP
    // 0x3aa1d4: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA1D4 raw=0x43480000");
    // 0x3aa1d8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1dc: 0x43af0000  .word       0x43AF0000                   # INVALID     $sp, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1dcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3AA1DC raw=0x43AF0000");
    // 0x3aa1e0: 0x0  nop
    ctx->pc = 0x3aa1e0u;
    // NOP
    // 0x3aa1e4: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1e8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aa1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa1ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa1f0: 0x0  nop
    ctx->pc = 0x3aa1f0u;
    // NOP
    // 0x3aa1f4: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA1F4 raw=0x43480000");
    // 0x3aa1f8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aa1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa1fc: 0x43af0000  .word       0x43AF0000                   # INVALID     $sp, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa1fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x3AA1FC raw=0x43AF0000");
    // 0x3aa200: 0x0  nop
    ctx->pc = 0x3aa200u;
    // NOP
    // 0x3aa204: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa204u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA204 raw=0x43480000");
    // 0x3aa208: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x3aa208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa20c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa20cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa210: 0x33fcb0  tge         $at, $s3, 1010
    ctx->pc = 0x3aa210u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa214: 0x3409f0  tge         $at, $s4, 39
    ctx->pc = 0x3aa214u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa218: 0x0  nop
    ctx->pc = 0x3aa218u;
    // NOP
    // 0x3aa21c: 0x0  nop
    ctx->pc = 0x3aa21cu;
    // NOP
    ctx->pc = 0x3aa220u;
}
