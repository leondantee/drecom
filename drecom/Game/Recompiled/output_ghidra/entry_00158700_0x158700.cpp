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

// Function: entry_00158700
// Address: 0x158700 - 0x158728
void entry_00158700_0x158700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158700_0x158700");
#endif

    ctx->pc = 0x158700u;

    // 0x158700: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x158700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x158704: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x158704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158708: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x15870c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x15870cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158714: 0x0  nop
    ctx->pc = 0x158714u;
    // NOP
    // 0x158718: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15871c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15871cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x158720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158724: 0x0  nop
    ctx->pc = 0x158724u;
    // NOP
    ctx->pc = 0x158728u;
}
