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

// Function: entry_00300eb0
// Address: 0x300eb0 - 0x300ee4
void entry_00300eb0_0x300eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300eb0_0x300eb0");
#endif

    ctx->pc = 0x300eb0u;

    // 0x300eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300eb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300eb8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300ebc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ec0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ec8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ed0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ed4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ed8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x300edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x300EDCu;
    {
        const bool branch_taken_0x300edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300edc) {
            ctx->pc = 0x300F10u;
            return;
        }
    }
    ctx->pc = 0x300EE4u;
}
