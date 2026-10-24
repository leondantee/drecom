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

// Function: entry_003108e0
// Address: 0x3108e0 - 0x31092c
void entry_003108e0_0x3108e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003108e0_0x3108e0");
#endif

    ctx->pc = 0x3108e0u;

    // 0x3108e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3108e4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x3108e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x3108e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3108e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3108ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3108ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3108f0: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3108F0u;
    {
        const bool branch_taken_0x3108f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3108f0) {
            ctx->pc = 0x31092Cu;
            return;
        }
    }
    ctx->pc = 0x3108F8u;
    // 0x3108f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3108f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3108fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310900: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x310900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x310904: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310908: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x310908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31090c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310910: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x310914: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31091c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x310920: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x310924: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x310924u;
    {
        const bool branch_taken_0x310924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310924) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x31092Cu;
}
