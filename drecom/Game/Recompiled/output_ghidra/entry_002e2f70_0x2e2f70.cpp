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

// Function: entry_002e2f70
// Address: 0x2e2f70 - 0x2e2fa4
void entry_002e2f70_0x2e2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2f70_0x2e2f70");
#endif

    ctx->pc = 0x2e2f70u;

    // 0x2e2f70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e2f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2f74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e2f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f9c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2E2F9Cu;
    {
        const bool branch_taken_0x2e2f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f9c) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E2FA4u;
}
