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

// Function: entry_00234f1c
// Address: 0x234f1c - 0x234f50
void entry_00234f1c_0x234f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234f1c_0x234f1c");
#endif

    ctx->pc = 0x234f1cu;

    // 0x234f1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234f20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234f28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f40: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234f48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x234F48u;
    {
        const bool branch_taken_0x234f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f48) {
            ctx->pc = 0x234FDCu;
            return;
        }
    }
    ctx->pc = 0x234F50u;
}
