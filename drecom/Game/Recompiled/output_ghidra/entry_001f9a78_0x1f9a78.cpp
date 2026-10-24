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

// Function: entry_001f9a78
// Address: 0x1f9a78 - 0x1f9aa0
void entry_001f9a78_0x1f9a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9a78_0x1f9a78");
#endif

    ctx->pc = 0x1f9a78u;

    // 0x1f9a78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a80: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1f9a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9A84u;
    {
        const bool branch_taken_0x1f9a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a84) {
            ctx->pc = 0x1F9AA0u;
            return;
        }
    }
    ctx->pc = 0x1F9A8Cu;
    // 0x1f9a8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a94: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1f9a98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f9a9c: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x1f9a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f9aa0u;
}
