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

// Function: entry_0020dfb8
// Address: 0x20dfb8 - 0x20dff0
void entry_0020dfb8_0x20dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dfb8_0x20dfb8");
#endif

    ctx->pc = 0x20dfb8u;

    // 0x20dfb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dfbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dfc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dfc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dfccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dfd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dfd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dfe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfe4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20dfe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20DFE8u;
    {
        const bool branch_taken_0x20dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfe8) {
            ctx->pc = 0x20E054u;
            return;
        }
    }
    ctx->pc = 0x20DFF0u;
}
