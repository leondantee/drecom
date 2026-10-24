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

// Function: Om83_R0_move
// Address: 0x35ac90 - 0x35acd8
void Om83_R0_move_0x35ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_R0_move_0x35ac90");
#endif

    switch (ctx->pc) {
        case 0x35ac90u: goto label_35ac90;
        case 0x35ac94u: goto label_35ac94;
        case 0x35ac98u: goto label_35ac98;
        case 0x35ac9cu: goto label_35ac9c;
        case 0x35aca0u: goto label_35aca0;
        case 0x35aca4u: goto label_35aca4;
        case 0x35aca8u: goto label_35aca8;
        case 0x35acacu: goto label_35acac;
        case 0x35acb0u: goto label_35acb0;
        case 0x35acb4u: goto label_35acb4;
        case 0x35acb8u: goto label_35acb8;
        case 0x35acbcu: goto label_35acbc;
        case 0x35acc0u: goto label_35acc0;
        case 0x35acc4u: goto label_35acc4;
        case 0x35acc8u: goto label_35acc8;
        case 0x35acccu: goto label_35accc;
        case 0x35acd0u: goto label_35acd0;
        case 0x35acd4u: goto label_35acd4;
        default: break;
    }

    ctx->pc = 0x35ac90u;

label_35ac90:
    // 0x35ac90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35ac94:
    // 0x35ac94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35ac98:
    // 0x35ac98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35ac9c:
    // 0x35ac9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35aca0:
    // 0x35aca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35aca4:
    // 0x35aca4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35aca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35aca8:
    // 0x35aca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35acac:
    // 0x35acac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35acacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35acb0:
    // 0x35acb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35acb4:
    // 0x35acb4: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x35acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_35acb8:
    // 0x35acb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35acbc:
    // 0x35acbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35acc0:
    // 0x35acc0: 0x40f809  jalr        $v0
label_35acc4:
    if (ctx->pc == 0x35ACC4u) {
        ctx->pc = 0x35ACC8u;
        goto label_35acc8;
    }
    ctx->pc = 0x35ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35ACC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ACC0u, 0x35ACC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35ACC8u;
label_35acc8:
    // 0x35acc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35acc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35accc:
    // 0x35accc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35acccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35acd0:
    // 0x35acd0: 0x3e00008  jr          $ra
label_35acd4:
    if (ctx->pc == 0x35ACD4u) {
        ctx->pc = 0x35ACD8u;
        goto label_fallthrough_0x35acd0;
    }
    ctx->pc = 0x35ACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ACD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35acd0:
    ctx->pc = 0x35ACD8u;
}
