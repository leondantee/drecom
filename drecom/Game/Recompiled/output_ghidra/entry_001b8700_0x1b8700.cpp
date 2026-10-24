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

// Function: entry_001b8700
// Address: 0x1b8700 - 0x1b872c
void entry_001b8700_0x1b8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8700_0x1b8700");
#endif

    ctx->pc = 0x1b8700u;

    // 0x1b8700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8708: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b870c: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b870cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b8710: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b8714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8718: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x1b8718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b871c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8720: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b8720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8728: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b8728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b872cu;
}
