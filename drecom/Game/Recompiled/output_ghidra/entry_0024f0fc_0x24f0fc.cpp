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

// Function: entry_0024f0fc
// Address: 0x24f0fc - 0x24f12c
void entry_0024f0fc_0x24f0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f0fc_0x24f0fc");
#endif

    switch (ctx->pc) {
        case 0x24f124u: goto label_24f124;
        default: break;
    }

    ctx->pc = 0x24f0fcu;

label_24f0fc:
    // 0x24f0fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x24f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f100:
    // 0x24f100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_24f104:
    // 0x24f104: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24f108:
    // 0x24f108: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24f10c:
    // 0x24f10c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_24f110:
    // 0x24f110: 0x2442b6a8  addiu       $v0, $v0, -0x4958
    ctx->pc = 0x24f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
label_24f114:
    // 0x24f114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24f114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24f118:
    // 0x24f118: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f11c:
    // 0x24f11c: 0x40f809  jalr        $v0
label_24f120:
    if (ctx->pc == 0x24F120u) {
        ctx->pc = 0x24F124u;
        goto label_24f124;
    }
    ctx->pc = 0x24F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F11Cu, 0x24F124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F124u;
label_24f124:
    // 0x24f124: 0x10000017  b           . + 4 + (0x17 << 2)
label_24f128:
    if (ctx->pc == 0x24F128u) {
        ctx->pc = 0x24F12Cu;
        goto label_fallthrough_0x24f124;
    }
    ctx->pc = 0x24F124u;
    {
        const bool branch_taken_0x24f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f124) {
            ctx->pc = 0x24F184u;
            return;
        }
    }
label_fallthrough_0x24f124:
    ctx->pc = 0x24F12Cu;
}
