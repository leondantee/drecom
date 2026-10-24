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

// Function: entry_0012a040
// Address: 0x12a040 - 0x12a078
void entry_0012a040_0x12a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a040_0x12a040");
#endif

    switch (ctx->pc) {
        case 0x12a048u: goto label_12a048;
        default: break;
    }

    ctx->pc = 0x12a040u;

label_12a040:
    // 0x12a040: 0xc067694  jal         func_19DA50
label_12a044:
    if (ctx->pc == 0x12A044u) {
        ctx->pc = 0x12A048u;
        goto label_12a048;
    }
    ctx->pc = 0x12A040u;
    SET_GPR_U32(ctx, 31, 0x12A048u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A040u, 0x12A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A048u;
label_12a048:
    // 0x12a048: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12a04c:
    // 0x12a04c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12a04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_12a050:
    // 0x12a050: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x12a050u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_12a054:
    // 0x12a054: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_12a058:
    if (ctx->pc == 0x12A058u) {
        ctx->pc = 0x12A05Cu;
        goto label_12a05c;
    }
    ctx->pc = 0x12A054u;
    {
        const bool branch_taken_0x12a054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a054) {
            ctx->pc = 0x12A154u;
            return;
        }
    }
    ctx->pc = 0x12A05Cu;
label_12a05c:
    // 0x12a05c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_12a060:
    // 0x12a060: 0x2464e440  addiu       $a0, $v1, -0x1BC0
    ctx->pc = 0x12a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
label_12a064:
    // 0x12a064: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12a068:
    // 0x12a068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12a06c:
    // 0x12a06c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12a070:
    // 0x12a070: 0x600008  jr          $v1
label_12a074:
    if (ctx->pc == 0x12A074u) {
        ctx->pc = 0x12A078u;
        goto label_fallthrough_0x12a070;
    }
    ctx->pc = 0x12A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12a070:
    ctx->pc = 0x12A078u;
}
