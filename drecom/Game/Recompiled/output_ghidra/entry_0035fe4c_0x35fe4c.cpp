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

// Function: entry_0035fe4c
// Address: 0x35fe4c - 0x35fe80
void entry_0035fe4c_0x35fe4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fe4c_0x35fe4c");
#endif

    ctx->pc = 0x35fe4cu;

    // 0x35fe4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fe50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fe54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe5c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35fe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35fe78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35FE78u;
    {
        const bool branch_taken_0x35fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe78) {
            ctx->pc = 0x35FEB0u;
            return;
        }
    }
    ctx->pc = 0x35FE80u;
}
