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

// Function: entry_0017b888
// Address: 0x17b888 - 0x17b8a4
void entry_0017b888_0x17b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b888_0x17b888");
#endif

    ctx->pc = 0x17b888u;

    // 0x17b888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b890: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b898: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17b89c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x17B89Cu;
    {
        const bool branch_taken_0x17b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b89c) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17B8A4u;
}
