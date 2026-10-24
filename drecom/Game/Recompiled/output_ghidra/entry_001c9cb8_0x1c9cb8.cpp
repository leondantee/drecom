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

// Function: entry_001c9cb8
// Address: 0x1c9cb8 - 0x1c9cf0
void entry_001c9cb8_0x1c9cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9cb8_0x1c9cb8");
#endif

    switch (ctx->pc) {
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9ce8u: goto label_1c9ce8;
        default: break;
    }

    ctx->pc = 0x1c9cb8u;

    // 0x1c9cb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9cbc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1c9cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1c9cc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c9cc4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c9cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c9cc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9CC8u;
    {
        const bool branch_taken_0x1c9cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cc8) {
            ctx->pc = 0x1C9CF0u;
            return;
        }
    }
    ctx->pc = 0x1C9CD0u;
    // 0x1c9cd0: 0xc0584bc  jal         func_1612F0
    ctx->pc = 0x1C9CD0u;
    SET_GPR_U32(ctx, 31, 0x1C9CD8u);
    ctx->pc = 0x1612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612F0u, 0x1C9CD0u, 0x1C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CD8u;
label_1c9cd8:
    // 0x1c9cd8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1C9CD8u;
    {
        const bool branch_taken_0x1c9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cd8) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9CE0u;
    // 0x1c9ce0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1C9CE0u;
    SET_GPR_U32(ctx, 31, 0x1C9CE8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1C9CE0u, 0x1C9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CE8u;
label_1c9ce8:
    // 0x1c9ce8: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C9CE8u;
    {
        const bool branch_taken_0x1c9ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ce8) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9CF0u;
}
