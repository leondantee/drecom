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

// Function: Om27_move
// Address: 0x35ec90 - 0x35ece8
void Om27_move_0x35ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om27_move_0x35ec90");
#endif

    switch (ctx->pc) {
        case 0x35ec90u: goto label_35ec90;
        case 0x35ec94u: goto label_35ec94;
        case 0x35ec98u: goto label_35ec98;
        case 0x35ec9cu: goto label_35ec9c;
        case 0x35eca0u: goto label_35eca0;
        case 0x35eca4u: goto label_35eca4;
        case 0x35eca8u: goto label_35eca8;
        case 0x35ecacu: goto label_35ecac;
        case 0x35ecb0u: goto label_35ecb0;
        case 0x35ecb4u: goto label_35ecb4;
        case 0x35ecb8u: goto label_35ecb8;
        case 0x35ecbcu: goto label_35ecbc;
        case 0x35ecc0u: goto label_35ecc0;
        case 0x35ecc4u: goto label_35ecc4;
        case 0x35ecc8u: goto label_35ecc8;
        case 0x35ecccu: goto label_35eccc;
        case 0x35ecd0u: goto label_35ecd0;
        case 0x35ecd4u: goto label_35ecd4;
        case 0x35ecd8u: goto label_35ecd8;
        case 0x35ecdcu: goto label_35ecdc;
        case 0x35ece0u: goto label_35ece0;
        case 0x35ece4u: goto label_35ece4;
        default: break;
    }

    ctx->pc = 0x35ec90u;

label_35ec90:
    // 0x35ec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35ec94:
    // 0x35ec94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_35ec98:
    // 0x35ec98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ec9c:
    // 0x35ec9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_35eca0:
    // 0x35eca0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x35eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_35eca4:
    // 0x35eca4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x35eca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_35eca8:
    // 0x35eca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35ecac:
    // 0x35ecac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35ecb0:
    // 0x35ecb0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35ecb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35ecb4:
    // 0x35ecb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35ecb8:
    // 0x35ecb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35ecbc:
    // 0x35ecbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35ecc0:
    // 0x35ecc0: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x35ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
label_35ecc4:
    // 0x35ecc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35ecc8:
    // 0x35ecc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35eccc:
    // 0x35eccc: 0x40f809  jalr        $v0
label_35ecd0:
    if (ctx->pc == 0x35ECD0u) {
        ctx->pc = 0x35ECD4u;
        goto label_35ecd4;
    }
    ctx->pc = 0x35ECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35ECD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ECCCu, 0x35ECD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35ECD4u;
label_35ecd4:
    // 0x35ecd4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35ecd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35ecd8:
    // 0x35ecd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ecd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ecdc:
    // 0x35ecdc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35ecdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35ece0:
    // 0x35ece0: 0x3e00008  jr          $ra
label_35ece4:
    if (ctx->pc == 0x35ECE4u) {
        ctx->pc = 0x35ECE8u;
        goto label_fallthrough_0x35ece0;
    }
    ctx->pc = 0x35ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35ece0:
    ctx->pc = 0x35ECE8u;
}
