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

// Function: Om84_move
// Address: 0x359b40 - 0x359b98
void Om84_move_0x359b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_move_0x359b40");
#endif

    switch (ctx->pc) {
        case 0x359b40u: goto label_359b40;
        case 0x359b44u: goto label_359b44;
        case 0x359b48u: goto label_359b48;
        case 0x359b4cu: goto label_359b4c;
        case 0x359b50u: goto label_359b50;
        case 0x359b54u: goto label_359b54;
        case 0x359b58u: goto label_359b58;
        case 0x359b5cu: goto label_359b5c;
        case 0x359b60u: goto label_359b60;
        case 0x359b64u: goto label_359b64;
        case 0x359b68u: goto label_359b68;
        case 0x359b6cu: goto label_359b6c;
        case 0x359b70u: goto label_359b70;
        case 0x359b74u: goto label_359b74;
        case 0x359b78u: goto label_359b78;
        case 0x359b7cu: goto label_359b7c;
        case 0x359b80u: goto label_359b80;
        case 0x359b84u: goto label_359b84;
        case 0x359b88u: goto label_359b88;
        case 0x359b8cu: goto label_359b8c;
        case 0x359b90u: goto label_359b90;
        case 0x359b94u: goto label_359b94;
        default: break;
    }

    ctx->pc = 0x359b40u;

label_359b40:
    // 0x359b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359b44:
    // 0x359b44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x359b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_359b48:
    // 0x359b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359b4c:
    // 0x359b4c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x359b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_359b50:
    // 0x359b50: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x359b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_359b54:
    // 0x359b54: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x359b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_359b58:
    // 0x359b58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_359b5c:
    // 0x359b5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x359b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_359b60:
    // 0x359b60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x359b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_359b64:
    // 0x359b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_359b68:
    // 0x359b68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x359b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_359b6c:
    // 0x359b6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359b70:
    // 0x359b70: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x359b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
label_359b74:
    // 0x359b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359b78:
    // 0x359b78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359b7c:
    // 0x359b7c: 0x40f809  jalr        $v0
label_359b80:
    if (ctx->pc == 0x359B80u) {
        ctx->pc = 0x359B84u;
        goto label_359b84;
    }
    ctx->pc = 0x359B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359B84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B7Cu, 0x359B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359B84u;
label_359b84:
    // 0x359b84: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x359b84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359b88:
    // 0x359b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359b8c:
    // 0x359b8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x359b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_359b90:
    // 0x359b90: 0x3e00008  jr          $ra
label_359b94:
    if (ctx->pc == 0x359B94u) {
        ctx->pc = 0x359B98u;
        goto label_fallthrough_0x359b90;
    }
    ctx->pc = 0x359B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x359b90:
    ctx->pc = 0x359B98u;
}
