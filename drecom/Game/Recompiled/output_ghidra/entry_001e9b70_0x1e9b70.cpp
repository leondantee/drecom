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

// Function: entry_001e9b70
// Address: 0x1e9b70 - 0x1e9ba4
void entry_001e9b70_0x1e9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9b70_0x1e9b70");
#endif

    ctx->pc = 0x1e9b70u;

    // 0x1e9b70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9b74: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b78: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e9b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e9b7c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b80: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1e9b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b84: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b8c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9b94: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9b98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e9b9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1E9B9Cu;
    {
        const bool branch_taken_0x1e9b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b9c) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E9BA4u;
}
