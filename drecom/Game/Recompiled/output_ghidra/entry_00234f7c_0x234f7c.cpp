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

// Function: entry_00234f7c
// Address: 0x234f7c - 0x234fb0
void entry_00234f7c_0x234f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234f7c_0x234f7c");
#endif

    ctx->pc = 0x234f7cu;

    // 0x234f7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234f80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x234f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x234f88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f8c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x234f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x234f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x234f98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x234f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x234fa0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234fa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x234fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x234fa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x234FA8u;
    {
        const bool branch_taken_0x234fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234fa8) {
            ctx->pc = 0x234FDCu;
            return;
        }
    }
    ctx->pc = 0x234FB0u;
}
