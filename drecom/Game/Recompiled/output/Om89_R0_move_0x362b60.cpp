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

// Function: Om89_R0_move
// Address: 0x362b60 - 0x362ba8
void Om89_R0_move_0x362b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_R0_move_0x362b60");
#endif

    switch (ctx->pc) {
        case 0x362b60u: goto label_362b60;
        case 0x362b64u: goto label_362b64;
        case 0x362b68u: goto label_362b68;
        case 0x362b6cu: goto label_362b6c;
        case 0x362b70u: goto label_362b70;
        case 0x362b74u: goto label_362b74;
        case 0x362b78u: goto label_362b78;
        case 0x362b7cu: goto label_362b7c;
        case 0x362b80u: goto label_362b80;
        case 0x362b84u: goto label_362b84;
        case 0x362b88u: goto label_362b88;
        case 0x362b8cu: goto label_362b8c;
        case 0x362b90u: goto label_362b90;
        case 0x362b94u: goto label_362b94;
        case 0x362b98u: goto label_362b98;
        case 0x362b9cu: goto label_362b9c;
        case 0x362ba0u: goto label_362ba0;
        case 0x362ba4u: goto label_362ba4;
        default: break;
    }

    ctx->pc = 0x362b60u;

label_362b60:
    // 0x362b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_362b64:
    // 0x362b64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_362b68:
    // 0x362b68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x362b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_362b6c:
    // 0x362b6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x362b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362b70:
    // 0x362b70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x362b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362b74:
    // 0x362b74: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x362b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_362b78:
    // 0x362b78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_362b7c:
    // 0x362b7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x362b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_362b80:
    // 0x362b80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_362b84:
    // 0x362b84: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x362b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
label_362b88:
    // 0x362b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_362b8c:
    // 0x362b8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x362b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362b90:
    // 0x362b90: 0x40f809  jalr        $v0
label_362b94:
    if (ctx->pc == 0x362B94u) {
        ctx->pc = 0x362B98u;
        goto label_362b98;
    }
    ctx->pc = 0x362B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362B98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B90u, 0x362B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362B98u;
label_362b98:
    // 0x362b98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362b98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_362b9c:
    // 0x362b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x362b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_362ba0:
    // 0x362ba0: 0x3e00008  jr          $ra
label_362ba4:
    if (ctx->pc == 0x362BA4u) {
        ctx->pc = 0x362BA8u;
        goto label_fallthrough_0x362ba0;
    }
    ctx->pc = 0x362BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362ba0:
    ctx->pc = 0x362BA8u;
}
