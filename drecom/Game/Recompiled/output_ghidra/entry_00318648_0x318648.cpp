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

// Function: entry_00318648
// Address: 0x318648 - 0x318684
void entry_00318648_0x318648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318648_0x318648");
#endif

    ctx->pc = 0x318648u;

    // 0x318648: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31864c: 0xac601294  sw          $zero, 0x1294($v1)
    ctx->pc = 0x31864cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 0));
    // 0x318650: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318654: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318658: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31865c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318660: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318668: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31866c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318670: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318678: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31867c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31867Cu;
    {
        const bool branch_taken_0x31867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31867c) {
            ctx->pc = 0x3187ACu;
            return;
        }
    }
    ctx->pc = 0x318684u;
}
