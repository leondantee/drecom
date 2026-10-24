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

// Function: entry_0020dea8
// Address: 0x20dea8 - 0x20dedc
void entry_0020dea8_0x20dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dea8_0x20dea8");
#endif

    ctx->pc = 0x20dea8u;

    // 0x20dea8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20deac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20deb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20deb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20deb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20deb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20debc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dec0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dec8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20decc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20ded0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20ded4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x20DED4u;
    {
        const bool branch_taken_0x20ded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ded4) {
            ctx->pc = 0x20E054u;
            return;
        }
    }
    ctx->pc = 0x20DEDCu;
}
