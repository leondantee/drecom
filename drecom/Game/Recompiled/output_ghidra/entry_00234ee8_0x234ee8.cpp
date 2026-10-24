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

// Function: entry_00234ee8
// Address: 0x234ee8 - 0x234f1c
void entry_00234ee8_0x234ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234ee8_0x234ee8");
#endif

    ctx->pc = 0x234ee8u;

    // 0x234ee8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234eec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ef0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234ef4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ef8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234efc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234f14: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x234F14u;
    {
        const bool branch_taken_0x234f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f14) {
            ctx->pc = 0x234FDCu;
            return;
        }
    }
    ctx->pc = 0x234F1Cu;
}
