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

// Function: Om19_move
// Address: 0x315c70 - 0x315cc8
void Om19_move_0x315c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om19_move_0x315c70");
#endif

    switch (ctx->pc) {
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        default: break;
    }

    ctx->pc = 0x315c70u;

label_315c70:
    // 0x315c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_315c74:
    // 0x315c74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x315c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_315c78:
    // 0x315c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315c7c:
    // 0x315c7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x315c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_315c80:
    // 0x315c80: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x315c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_315c84:
    // 0x315c84: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_315c88:
    // 0x315c88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_315c8c:
    // 0x315c8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x315c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_315c90:
    // 0x315c90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x315c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_315c94:
    // 0x315c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x315c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_315c98:
    // 0x315c98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315c9c:
    // 0x315c9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x315c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_315ca0:
    // 0x315ca0: 0x24429b78  addiu       $v0, $v0, -0x6488
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941560));
label_315ca4:
    // 0x315ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315ca8:
    // 0x315ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x315ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315cac:
    // 0x315cac: 0x40f809  jalr        $v0
label_315cb0:
    if (ctx->pc == 0x315CB0u) {
        ctx->pc = 0x315CB4u;
        goto label_315cb4;
    }
    ctx->pc = 0x315CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315CB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315CACu, 0x315CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315CB4u;
label_315cb4:
    // 0x315cb4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x315cb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315cb8:
    // 0x315cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315cbc:
    // 0x315cbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x315cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_315cc0:
    // 0x315cc0: 0x3e00008  jr          $ra
label_315cc4:
    if (ctx->pc == 0x315CC4u) {
        ctx->pc = 0x315CC8u;
        goto label_fallthrough_0x315cc0;
    }
    ctx->pc = 0x315CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315cc0:
    ctx->pc = 0x315CC8u;
}
