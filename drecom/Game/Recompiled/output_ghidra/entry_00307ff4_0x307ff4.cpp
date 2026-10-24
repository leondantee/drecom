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

// Function: entry_00307ff4
// Address: 0x307ff4 - 0x308028
void entry_00307ff4_0x307ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307ff4_0x307ff4");
#endif

    ctx->pc = 0x307ff4u;

    // 0x307ff4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307ff8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ffc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308000: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308004: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x308004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x308008: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30800c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30800cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308010: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x308014: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308018: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x308018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30801c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30801cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308020: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x308020u;
    {
        const bool branch_taken_0x308020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308020) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x308028u;
}
