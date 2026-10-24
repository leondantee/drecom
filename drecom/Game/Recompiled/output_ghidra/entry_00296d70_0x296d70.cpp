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

// Function: entry_00296d70
// Address: 0x296d70 - 0x296d88
void entry_00296d70_0x296d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296d70_0x296d70");
#endif

    ctx->pc = 0x296d70u;

    // 0x296d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d74: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296d78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d7c: 0xac6469b0  sw          $a0, 0x69B0($v1)
    ctx->pc = 0x296d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27056), GPR_U32(ctx, 4));
    // 0x296d80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296D80u;
    {
        const bool branch_taken_0x296d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d80) {
            ctx->pc = 0x296D98u;
            return;
        }
    }
    ctx->pc = 0x296D88u;
}
