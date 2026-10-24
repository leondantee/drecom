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

// Function: entry_0030c344
// Address: 0x30c344 - 0x30c364
void entry_0030c344_0x30c344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c344_0x30c344");
#endif

    ctx->pc = 0x30c344u;

    // 0x30c344: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c348: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x30c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x30c34c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C34Cu;
    {
        const bool branch_taken_0x30c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c34c) {
            ctx->pc = 0x30C364u;
            return;
        }
    }
    ctx->pc = 0x30C354u;
    // 0x30c354: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30c354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30c358: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x30c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x30c35c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30c360: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x30c360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
    ctx->pc = 0x30c364u;
}
