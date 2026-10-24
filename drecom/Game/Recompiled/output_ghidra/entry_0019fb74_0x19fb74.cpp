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

// Function: entry_0019fb74
// Address: 0x19fb74 - 0x19fb90
void entry_0019fb74_0x19fb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb74_0x19fb74");
#endif

    ctx->pc = 0x19fb74u;

    // 0x19fb74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB7Cu;
    {
        const bool branch_taken_0x19fb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fb7c) {
            ctx->pc = 0x19FB90u;
            return;
        }
    }
    ctx->pc = 0x19FB84u;
    // 0x19fb84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FB88u;
    {
        const bool branch_taken_0x19fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb88) {
            ctx->pc = 0x19FBB0u;
            return;
        }
    }
    ctx->pc = 0x19FB90u;
}
