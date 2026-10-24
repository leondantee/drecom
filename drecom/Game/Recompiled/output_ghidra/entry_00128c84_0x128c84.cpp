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

// Function: entry_00128c84
// Address: 0x128c84 - 0x128cbc
void entry_00128c84_0x128c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128c84_0x128c84");
#endif

    switch (ctx->pc) {
        case 0x128c8cu: goto label_128c8c;
        default: break;
    }

    ctx->pc = 0x128c84u;

label_128c84:
    // 0x128c84: 0xc067694  jal         func_19DA50
label_128c88:
    if (ctx->pc == 0x128C88u) {
        ctx->pc = 0x128C8Cu;
        goto label_128c8c;
    }
    ctx->pc = 0x128C84u;
    SET_GPR_U32(ctx, 31, 0x128C8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128C84u, 0x128C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C8Cu;
label_128c8c:
    // 0x128c8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128c90:
    // 0x128c90: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x128c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128c94:
    // 0x128c94: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x128c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_128c98:
    // 0x128c98: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_128c9c:
    if (ctx->pc == 0x128C9Cu) {
        ctx->pc = 0x128CA0u;
        goto label_128ca0;
    }
    ctx->pc = 0x128C98u;
    {
        const bool branch_taken_0x128c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c98) {
            ctx->pc = 0x128D14u;
            return;
        }
    }
    ctx->pc = 0x128CA0u;
label_128ca0:
    // 0x128ca0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128ca4:
    // 0x128ca4: 0x2464e340  addiu       $a0, $v1, -0x1CC0
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959936));
label_128ca8:
    // 0x128ca8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_128cac:
    // 0x128cac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128cb0:
    // 0x128cb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128cb4:
    // 0x128cb4: 0x600008  jr          $v1
label_128cb8:
    if (ctx->pc == 0x128CB8u) {
        ctx->pc = 0x128CBCu;
        goto label_fallthrough_0x128cb4;
    }
    ctx->pc = 0x128CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x128cb4:
    ctx->pc = 0x128CBCu;
}
