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

// Function: entry_001fb628
// Address: 0x1fb628 - 0x1fb640
void entry_001fb628_0x1fb628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb628_0x1fb628");
#endif

    ctx->pc = 0x1fb628u;

    // 0x1fb628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb62c: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fb630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb634: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x1fb634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x1fb638: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1FB638u;
    {
        const bool branch_taken_0x1fb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb638) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB640u;
}
