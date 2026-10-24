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

// Function: entry_00207870
// Address: 0x207870 - 0x2078a8
void entry_00207870_0x207870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207870_0x207870");
#endif

    ctx->pc = 0x207870u;

    // 0x207870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207874: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207878: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x207878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20787c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x207880: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207884: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x207888: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20788c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20788cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x207890: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207894: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x207894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x207898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20789c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20789cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2078a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2078A0u;
    {
        const bool branch_taken_0x2078a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078a0) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2078A8u;
}
