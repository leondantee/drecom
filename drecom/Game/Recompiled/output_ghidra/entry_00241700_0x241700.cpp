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

// Function: entry_00241700
// Address: 0x241700 - 0x241734
void entry_00241700_0x241700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241700_0x241700");
#endif

    ctx->pc = 0x241700u;

    // 0x241700: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241704: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241708: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x241708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24170c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241710: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x241710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x241714: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241718: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x241718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24171c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241720: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x241720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x241724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x241728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x24172c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24172Cu;
    {
        const bool branch_taken_0x24172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24172c) {
            ctx->pc = 0x2417C0u;
            return;
        }
    }
    ctx->pc = 0x241734u;
}
