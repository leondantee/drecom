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

// Function: entry_001b8298
// Address: 0x1b8298 - 0x1b82c8
void entry_001b8298_0x1b8298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8298_0x1b8298");
#endif

    ctx->pc = 0x1b8298u;

    // 0x1b8298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b829c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b82a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b82a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82a8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b82a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b82ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82b0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1b82b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b82b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82b8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1b82b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b82bc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b82c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b82c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1b82c8u;
}
