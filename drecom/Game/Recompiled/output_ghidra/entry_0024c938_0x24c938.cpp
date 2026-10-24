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

// Function: entry_0024c938
// Address: 0x24c938 - 0x24c968
void entry_0024c938_0x24c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c938_0x24c938");
#endif

    switch (ctx->pc) {
        case 0x24c960u: goto label_24c960;
        default: break;
    }

    ctx->pc = 0x24c938u;

label_24c938:
    // 0x24c938: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c93c:
    // 0x24c93c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24c940:
    // 0x24c940: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24c944:
    // 0x24c944: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24c944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24c948:
    // 0x24c948: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24c94c:
    // 0x24c94c: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x24c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_24c950:
    // 0x24c950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24c954:
    // 0x24c954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24c958:
    // 0x24c958: 0x40f809  jalr        $v0
label_24c95c:
    if (ctx->pc == 0x24C95Cu) {
        ctx->pc = 0x24C960u;
        goto label_24c960;
    }
    ctx->pc = 0x24C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C958u, 0x24C960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C960u;
label_24c960:
    // 0x24c960: 0x10000023  b           . + 4 + (0x23 << 2)
label_24c964:
    if (ctx->pc == 0x24C964u) {
        ctx->pc = 0x24C968u;
        goto label_fallthrough_0x24c960;
    }
    ctx->pc = 0x24C960u;
    {
        const bool branch_taken_0x24c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c960) {
            ctx->pc = 0x24C9F0u;
            return;
        }
    }
label_fallthrough_0x24c960:
    ctx->pc = 0x24C968u;
}
