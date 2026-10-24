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

// Function: entry_001aae88
// Address: 0x1aae88 - 0x1aae9c
void entry_001aae88_0x1aae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae88_0x1aae88");
#endif

    ctx->pc = 0x1aae88u;

    // 0x1aae88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aae8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae90: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x1aae90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x1aae94: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1AAE94u;
    {
        const bool branch_taken_0x1aae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aae94) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AAE9Cu;
}
