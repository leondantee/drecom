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

// Function: entry_002f5850
// Address: 0x2f5850 - 0x2f5868
void entry_002f5850_0x2f5850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5850_0x2f5850");
#endif

    ctx->pc = 0x2f5850u;

    // 0x2f5850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5854: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f5858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f585c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2f585cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f5860: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F5860u;
    {
        const bool branch_taken_0x2f5860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5860) {
            ctx->pc = 0x2F57ACu;
            return;
        }
    }
    ctx->pc = 0x2F5868u;
}
