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

// Function: entry_00363338
// Address: 0x363338 - 0x363370
void entry_00363338_0x363338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363338_0x363338");
#endif

    ctx->pc = 0x363338u;

    // 0x363338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x363338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36333c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x36333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363340: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36334c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36334cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363350: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363354: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363358: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36335c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36335cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363360: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363364: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363368: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x363368u;
    {
        const bool branch_taken_0x363368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363368) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x363370u;
}
