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

// Function: entry_002e2ed0
// Address: 0x2e2ed0 - 0x2e2f08
void entry_002e2ed0_0x2e2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2ed0_0x2e2ed0");
#endif

    ctx->pc = 0x2e2ed0u;

    // 0x2e2ed0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f00: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2E2F00u;
    {
        const bool branch_taken_0x2e2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f00) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E2F08u;
}
